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
Symbol sym_Call_2;
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
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
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
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_j_15;
ATerm term_g_15;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_i_13;
ATerm term_c_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_t_10;
ATerm term_r_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_k_9;
ATerm term_d_9;
ATerm term_t_8;
ATerm term_q_8;
ATerm term_x_7;
ATerm term_s_7;
ATerm term_n_7;
ATerm term_i_7;
ATerm term_f_7;
ATerm term_a_7;
ATerm term_x_6;
ATerm term_v_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_v_5;
void init_constant_terms (void)
{
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(sym__0);
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
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a match-term-expression: ", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_u_9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_9);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym__2, term_b_10, term_v_5);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym__2, term_o_10, term_p_10);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym__2, term_s_12, term_v_5);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym__2, term_v_12, term_v_5);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym__2, term_i_12, term_v_5);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym__2, term_m_14, term_v_5);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
}
ATerm default_usage_0_0 (ATerm);
ATerm debug_1_0 (ATerm w_102 (ATerm), ATerm);
ATerm e_0 (ATerm);
ATerm term_expression_0_0 (ATerm);
ATerm p_0 (ATerm);
ATerm match_term_exp_0_0 (ATerm);
ATerm CallT_3_0 (ATerm s_73 (ATerm), ATerm t_73 (ATerm), ATerm u_73 (ATerm), ATerm);
ATerm r_0 (ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm w_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm b_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm l_1 (ATerm);
ATerm strategy_expression_0_0 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm strategy_definition_0_0 (ATerm);
ATerm map_1_0 (ATerm h_90 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm t_68 (ATerm), ATerm u_68 (ATerm), ATerm);
ATerm t_3 (ATerm x_49, ATerm y_49, ATerm);
ATerm u_3 (ATerm l_53, ATerm m_53, ATerm);
ATerm w_3 (ATerm y_102 (ATerm), ATerm g_426, ATerm p_53, ATerm);
ATerm v_3 (ATerm h_53, ATerm i_53, ATerm);
ATerm t_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm a_106 (ATerm), ATerm);
ATerm y_42 (ATerm s_42, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm x_3 (ATerm n_53, ATerm);
ATerm y_3 (ATerm z_49, ATerm a_50, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm j_44 (ATerm i_43, ATerm);
ATerm k_44 (ATerm m_43, ATerm n_43, ATerm o_43, ATerm);
ATerm l_44 (ATerm w_43, ATerm x_43, ATerm y_43, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm x_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm r_90 (ATerm), ATerm);
ATerm s_3 (ATerm n_44, ATerm o_44, ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm j_104 (ATerm), ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm v_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm e_4 (ATerm o_54, ATerm p_54, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm w_2 (ATerm);
ATerm z_2 (ATerm);
ATerm c_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm c_4 (ATerm m_59, ATerm n_59, ATerm l_59, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm o_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm z_3 (ATerm x_46, ATerm y_46, ATerm);
ATerm foldr_2_0 (ATerm k_96 (ATerm), ATerm l_96 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm i_104 (ATerm), ATerm);
ATerm r_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm a_4 (ATerm);
ATerm need_help_1_0 (ATerm y_106 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm b_4 (ATerm d_61, ATerm e_61, ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm b_109 (ATerm), ATerm);
ATerm r_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm parse_options_1_0 (ATerm a_109 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm c_107 (ATerm), ATerm d_107 (ATerm), ATerm);
ATerm c_5 (ATerm);
ATerm z_5 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm iowrap_3_0 (ATerm j_106 (ATerm), ATerm k_106 (ATerm), ATerm l_106 (ATerm), ATerm);
ATerm i_6 (ATerm);
ATerm l_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_0 = NULL,l_0 = NULL,m_0 = NULL,n_0 = NULL,o_0 = NULL;
  c_0 = t;
  t = term_v_5;
  t = whoami_0_0(t);
  l_0 = t;
  t = term_r_6;
  n_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_6), l_0), term_s_6);
  o_0 = t;
  t = SSL_printnl(n_0, o_0);
  t = term_v_6;
  m_0 = t;
  t = SSL_exit(m_0);
  t = c_0;
  return(t);
}
ATerm debug_1_0 (ATerm w_102 (ATerm), ATerm t)
{
  ATerm s_0 = NULL,x_0 = NULL,c_1 = NULL,d_1 = NULL;
  s_0 = t;
  t = w_102(t);
  x_0 = t;
  t = term_r_6;
  c_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_0), x_0);
  d_1 = t;
  t = SSL_printnl(c_1, d_1);
  t = s_0;
  return(t);
}
ATerm e_0 (ATerm t)
{
  t = term_x_6;
  return(t);
}
ATerm term_expression_0_0 (ATerm t)
{
  ATerm y_6 = t;
  int z_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL;
      s_5 = t;
      if(match_cons(t, sym_Wld_0))
        {
          t = s_5;
        }
      else
        {
          if(match_cons(t, sym_Var_1))
            {
              t_5 = ATgetArgument(t, 0);
              {
                ATerm q_0 = NULL,t_0 = NULL,k_0 = NULL;
                t = SSLgetAnnotations(s_5);
                q_0 = t;
                t = SSL_is_string(t_5);
                t_0 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, t_0);
                k_0 = t;
                t = SSLsetAnnotations(k_0, q_0);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  t_5 = ATgetArgument(t, 0);
                  {
                    ATerm a_1 = NULL,e_1 = NULL,a_2 = NULL;
                    t = SSLgetAnnotations(s_5);
                    a_1 = t;
                    t = SSL_is_int(t_5);
                    e_1 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, e_1);
                    a_2 = t;
                    t = SSLsetAnnotations(a_2, a_1);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      t_5 = ATgetArgument(t, 0);
                      {
                        ATerm k_1 = NULL,m_1 = NULL,b_2 = NULL;
                        t = SSLgetAnnotations(s_5);
                        k_1 = t;
                        t = SSL_is_real(t_5);
                        m_1 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, m_1);
                        b_2 = t;
                        t = SSLsetAnnotations(b_2, k_1);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Str_1))
                        {
                          t_5 = ATgetArgument(t, 0);
                          {
                            ATerm s_1 = NULL,u_1 = NULL,c_2 = NULL;
                            t = SSLgetAnnotations(s_5);
                            s_1 = t;
                            t = SSL_is_string(t_5);
                            u_1 = t;
                            t = (ATerm) ATmakeAppl(sym_Str_1, u_1);
                            c_2 = t;
                            t = SSLsetAnnotations(c_2, s_1);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_BuildDefault_1))
                            {
                              t_5 = ATgetArgument(t, 0);
                              {
                                ATerm d_2 = NULL,l_2 = NULL,e_2 = NULL;
                                t = SSLgetAnnotations(s_5);
                                d_2 = t;
                                t = t_5;
                                t = term_expression_0_0(t);
                                l_2 = t;
                                t = (ATerm) ATmakeAppl(sym_BuildDefault_1, l_2);
                                e_2 = t;
                                t = SSLsetAnnotations(e_2, d_2);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_As_2))
                                {
                                  t_5 = ATgetArgument(t, 0);
                                  u_5 = ATgetArgument(t, 1);
                                  {
                                    ATerm d_3 = NULL,i_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,g_2 = NULL,f_2 = NULL;
                                    t = SSLgetAnnotations(s_5);
                                    d_3 = t;
                                    t = t_5;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        l_3 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(t_5);
                                    k_3 = t;
                                    t = SSL_is_string(l_3);
                                    m_3 = t;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, m_3);
                                    f_2 = t;
                                    t = SSLsetAnnotations(f_2, k_3);
                                    n_3 = t;
                                    t = u_5;
                                    t = term_expression_0_0(t);
                                    i_3 = t;
                                    t = (ATerm) ATmakeAppl(sym_As_2, n_3, i_3);
                                    g_2 = t;
                                    t = SSLsetAnnotations(g_2, d_3);
                                  }
                                }
                              else
                                {
                                  ATerm l_4 = NULL,q_4 = NULL,t_4 = NULL,h_2 = NULL;
                                  if(match_cons(t, sym_Op_2))
                                    {
                                      t_5 = ATgetArgument(t, 0);
                                      u_5 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(s_5);
                                  l_4 = t;
                                  t = SSL_is_string(t_5);
                                  q_4 = t;
                                  t = u_5;
                                  t = map_1_0(term_expression_0_0, t);
                                  t_4 = t;
                                  t = (ATerm) ATmakeAppl(sym_Op_2, q_4, t_4);
                                  h_2 = t;
                                  t = SSLsetAnnotations(h_2, l_4);
                                }
                            }
                        }
                    }
                }
            }
        }
      ;
      LocalPopChoice(z_6);
    }
  else
    {
      t = y_6;
      t = debug_1_0(e_0, t);
    }
  return(t);
}
ATerm p_0 (ATerm t)
{
  t = term_a_7;
  return(t);
}
ATerm match_term_exp_0_0 (ATerm t)
{
  ATerm b_7 = t;
  int d_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_11 = NULL,p_11 = NULL,q_11 = NULL;
      l_11 = t;
      if(match_cons(t, sym_Wld_0))
        {
          t = l_11;
        }
      else
        {
          if(match_cons(t, sym_Var_1))
            {
              p_11 = ATgetArgument(t, 0);
              {
                ATerm y_5 = NULL,a_6 = NULL,u_2 = NULL;
                t = SSLgetAnnotations(l_11);
                y_5 = t;
                t = SSL_is_string(p_11);
                a_6 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, a_6);
                u_2 = t;
                t = SSLsetAnnotations(u_2, y_5);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  p_11 = ATgetArgument(t, 0);
                  {
                    ATerm k_6 = NULL,n_6 = NULL,x_2 = NULL;
                    t = SSLgetAnnotations(l_11);
                    k_6 = t;
                    t = SSL_is_int(p_11);
                    n_6 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, n_6);
                    x_2 = t;
                    t = SSLsetAnnotations(x_2, k_6);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      p_11 = ATgetArgument(t, 0);
                      {
                        ATerm u_6 = NULL,w_6 = NULL,y_2 = NULL;
                        t = SSLgetAnnotations(l_11);
                        u_6 = t;
                        t = SSL_is_real(p_11);
                        w_6 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, w_6);
                        y_2 = t;
                        t = SSLsetAnnotations(y_2, u_6);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Str_1))
                        {
                          p_11 = ATgetArgument(t, 0);
                          {
                            ATerm c_7 = NULL,e_7 = NULL,a_3 = NULL;
                            t = SSLgetAnnotations(l_11);
                            c_7 = t;
                            t = SSL_is_string(p_11);
                            e_7 = t;
                            t = (ATerm) ATmakeAppl(sym_Str_1, e_7);
                            a_3 = t;
                            t = SSLsetAnnotations(a_3, c_7);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_BuildDefault_1))
                            {
                              p_11 = ATgetArgument(t, 0);
                              {
                                ATerm k_7 = NULL,m_7 = NULL,b_3 = NULL;
                                t = SSLgetAnnotations(l_11);
                                k_7 = t;
                                t = p_11;
                                t = match_term_exp_0_0(t);
                                m_7 = t;
                                t = (ATerm) ATmakeAppl(sym_BuildDefault_1, m_7);
                                b_3 = t;
                                t = SSLsetAnnotations(b_3, k_7);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_As_2))
                                {
                                  p_11 = ATgetArgument(t, 0);
                                  q_11 = ATgetArgument(t, 1);
                                  {
                                    ATerm w_7 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,c_9 = NULL,f_3 = NULL,e_3 = NULL;
                                    t = SSLgetAnnotations(l_11);
                                    w_7 = t;
                                    t = p_11;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        z_8 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(p_11);
                                    y_8 = t;
                                    t = SSL_is_string(z_8);
                                    a_9 = t;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, a_9);
                                    e_3 = t;
                                    t = SSLsetAnnotations(e_3, y_8);
                                    c_9 = t;
                                    t = q_11;
                                    t = match_term_exp_0_0(t);
                                    x_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_As_2, c_9, x_8);
                                    f_3 = t;
                                    t = SSLsetAnnotations(f_3, w_7);
                                  }
                                }
                              else
                                {
                                  ATerm s_9 = NULL,y_9 = NULL,z_9 = NULL,j_3 = NULL;
                                  if(match_cons(t, sym_Op_2))
                                    {
                                      p_11 = ATgetArgument(t, 0);
                                      q_11 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(l_11);
                                  s_9 = t;
                                  t = SSL_is_string(p_11);
                                  y_9 = t;
                                  t = q_11;
                                  t = map_1_0(match_term_exp_0_0, t);
                                  z_9 = t;
                                  t = (ATerm) ATmakeAppl(sym_Op_2, y_9, z_9);
                                  j_3 = t;
                                  t = SSLsetAnnotations(j_3, s_9);
                                }
                            }
                        }
                    }
                }
            }
        }
      ;
      LocalPopChoice(d_7);
    }
  else
    {
      t = b_7;
      t = debug_1_0(p_0, t);
    }
  return(t);
}
ATerm CallT_3_0 (ATerm s_73 (ATerm), ATerm t_73 (ATerm), ATerm u_73 (ATerm), ATerm t)
{
  ATerm w_12 = NULL,x_12 = NULL,a_13 = NULL,b_13 = NULL,d_13 = NULL,j_13 = NULL,r_13 = NULL,u_13 = NULL,s_4 = NULL;
  u_13 = t;
  if(match_cons(t, sym_CallT_3))
    {
      x_12 = ATgetArgument(t, 0);
      a_13 = ATgetArgument(t, 1);
      b_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_13);
  w_12 = t;
  t = x_12;
  t = s_73(t);
  d_13 = t;
  t = a_13;
  t = t_73(t);
  j_13 = t;
  t = b_13;
  t = u_73(t);
  r_13 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, d_13, j_13, r_13);
  s_4 = t;
  t = SSLsetAnnotations(s_4, w_12);
  return(t);
}
ATerm r_0 (ATerm t)
{
  t = CallT_3_0(u_0, v_0, w_0, t);
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,q_20 = NULL,r_20 = NULL,j_5 = NULL;
  r_20 = t;
  if(match_cons(t, sym_SVar_1))
    {
      o_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_20);
  n_20 = t;
  t = SSL_is_string(o_20);
  q_20 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, q_20);
  j_5 = t;
  t = SSLsetAnnotations(j_5, n_20);
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
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm s_20 = NULL,t_20 = NULL,v_20 = NULL,w_20 = NULL,k_5 = NULL;
  w_20 = t;
  if(match_cons(t, sym_Var_1))
    {
      t_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_20);
  s_20 = t;
  t = SSL_is_string(t_20);
  v_20 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_20);
  k_5 = t;
  t = SSLsetAnnotations(k_5, s_20);
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm k_28 = NULL;
  k_28 = t;
  t = SSL_is_string(k_28);
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,o_6 = NULL,m_6 = NULL;
  h_30 = t;
  if(match_cons(t, sym_Call_2))
    {
      y_29 = ATgetArgument(t, 0);
      c_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_30);
  x_29 = t;
  t = y_29;
  if(match_cons(t, sym_SVar_1))
    {
      e_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_29);
  d_30 = t;
  t = SSL_is_string(e_30);
  f_30 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, f_30);
  m_6 = t;
  t = SSLsetAnnotations(m_6, d_30);
  g_30 = t;
  t = c_30;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, g_30, c_30);
  o_6 = t;
  t = SSLsetAnnotations(o_6, x_29);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL,p_7 = NULL;
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
  p_7 = t;
  t = SSLsetAnnotations(p_7, l_30);
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm c_35 = NULL,e_35 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL;
  c_35 = t;
  if(match_cons(t, sym_SDef_3))
    {
      e_35 = ATgetArgument(t, 0);
      g_35 = ATgetArgument(t, 1);
      h_35 = ATgetArgument(t, 2);
      {
        ATerm t_45 = NULL,p_46 = NULL,w_46 = NULL,d_47 = NULL,y_7 = NULL;
        t = SSLgetAnnotations(c_35);
        t_45 = t;
        t = SSL_is_string(e_35);
        p_46 = t;
        t = g_35;
        t = map_1_0(h_1, t);
        w_46 = t;
        t = h_35;
        t = strategy_expression_0_0(t);
        d_47 = t;
        t = (ATerm) ATmakeAppl(sym_SDef_3, p_46, w_46, d_47);
        y_7 = t;
        t = SSLsetAnnotations(y_7, t_45);
      }
    }
  else
    {
      ATerm p_52 = NULL,r_53 = NULL,s_53 = NULL,x_54 = NULL,y_54 = NULL,b_8 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          e_35 = ATgetArgument(t, 0);
          g_35 = ATgetArgument(t, 1);
          h_35 = ATgetArgument(t, 2);
          i_35 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_35);
      p_52 = t;
      t = SSL_is_string(e_35);
      r_53 = t;
      t = g_35;
      t = map_1_0(i_1, t);
      s_53 = t;
      t = h_35;
      t = map_1_0(j_1, t);
      x_54 = t;
      t = i_35;
      t = strategy_expression_0_0(t);
      y_54 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, r_53, s_53, x_54, y_54);
      b_8 = t;
      t = SSLsetAnnotations(b_8, p_52);
    }
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm c_50 = NULL,d_50 = NULL,p_50 = NULL,a_51 = NULL,b_51 = NULL,t_7 = NULL;
  b_51 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      d_50 = ATgetArgument(t, 0);
      p_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_51);
  c_50 = t;
  t = SSL_is_string(d_50);
  a_51 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, a_51, p_50);
  t_7 = t;
  t = SSLsetAnnotations(t_7, c_50);
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL,z_7 = NULL;
  a_57 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      x_56 = ATgetArgument(t, 0);
      y_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_57);
  w_56 = t;
  t = SSL_is_string(x_56);
  z_56 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_56, y_56);
  z_7 = t;
  t = SSLsetAnnotations(z_7, w_56);
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm c_57 = NULL,d_57 = NULL,e_57 = NULL,f_57 = NULL,g_57 = NULL,a_8 = NULL;
  g_57 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      d_57 = ATgetArgument(t, 0);
      e_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_57);
  c_57 = t;
  t = SSL_is_string(d_57);
  f_57 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, f_57, e_57);
  a_8 = t;
  t = SSLsetAnnotations(a_8, c_57);
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_f_7;
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm g_7 = t;
  int h_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL;
      l_36 = t;
      if(match_cons(t, sym_Id_0))
        {
          t = l_36;
        }
      else
        {
          if(match_cons(t, sym_Fail_0))
            {
              t = l_36;
            }
          else
            {
              if(match_cons(t, sym_Not_1))
                {
                  m_36 = ATgetArgument(t, 0);
                  {
                    ATerm u_14 = NULL,w_14 = NULL,x_4 = NULL;
                    t = SSLgetAnnotations(l_36);
                    u_14 = t;
                    t = m_36;
                    t = strategy_expression_0_0(t);
                    w_14 = t;
                    t = (ATerm) ATmakeAppl(sym_Not_1, w_14);
                    x_4 = t;
                    t = SSLsetAnnotations(x_4, u_14);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Test_1))
                    {
                      m_36 = ATgetArgument(t, 0);
                      {
                        ATerm c_15 = NULL,e_15 = NULL,z_4 = NULL;
                        t = SSLgetAnnotations(l_36);
                        c_15 = t;
                        t = m_36;
                        t = strategy_expression_0_0(t);
                        e_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Test_1, e_15);
                        z_4 = t;
                        t = SSLsetAnnotations(z_4, c_15);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Seq_2))
                        {
                          m_36 = ATgetArgument(t, 0);
                          n_36 = ATgetArgument(t, 1);
                          {
                            ATerm l_15 = NULL,o_15 = NULL,p_15 = NULL,b_5 = NULL;
                            t = SSLgetAnnotations(l_36);
                            l_15 = t;
                            t = m_36;
                            t = strategy_expression_0_0(t);
                            o_15 = t;
                            t = n_36;
                            t = strategy_expression_0_0(t);
                            p_15 = t;
                            t = (ATerm) ATmakeAppl(sym_Seq_2, o_15, p_15);
                            b_5 = t;
                            t = SSLsetAnnotations(b_5, l_15);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Choice_2))
                            {
                              m_36 = ATgetArgument(t, 0);
                              n_36 = ATgetArgument(t, 1);
                              {
                                ATerm x_15 = NULL,a_16 = NULL,b_16 = NULL,d_5 = NULL;
                                t = SSLgetAnnotations(l_36);
                                x_15 = t;
                                t = m_36;
                                t = strategy_expression_0_0(t);
                                a_16 = t;
                                t = n_36;
                                t = strategy_expression_0_0(t);
                                b_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Choice_2, a_16, b_16);
                                d_5 = t;
                                t = SSLsetAnnotations(d_5, x_15);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_LChoice_2))
                                {
                                  m_36 = ATgetArgument(t, 0);
                                  n_36 = ATgetArgument(t, 1);
                                  {
                                    ATerm k_16 = NULL,o_16 = NULL,p_16 = NULL,e_5 = NULL;
                                    t = SSLgetAnnotations(l_36);
                                    k_16 = t;
                                    t = m_36;
                                    t = strategy_expression_0_0(t);
                                    o_16 = t;
                                    t = n_36;
                                    t = strategy_expression_0_0(t);
                                    p_16 = t;
                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, o_16, p_16);
                                    e_5 = t;
                                    t = SSLsetAnnotations(e_5, k_16);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      m_36 = ATgetArgument(t, 0);
                                      n_36 = ATgetArgument(t, 1);
                                      k_36 = ATgetArgument(t, 2);
                                      {
                                        ATerm h_17 = NULL,l_17 = NULL,q_17 = NULL,s_17 = NULL,f_5 = NULL;
                                        t = SSLgetAnnotations(l_36);
                                        h_17 = t;
                                        t = m_36;
                                        t = strategy_expression_0_0(t);
                                        l_17 = t;
                                        t = n_36;
                                        t = strategy_expression_0_0(t);
                                        q_17 = t;
                                        t = k_36;
                                        t = strategy_expression_0_0(t);
                                        s_17 = t;
                                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, l_17, q_17, s_17);
                                        f_5 = t;
                                        t = SSLsetAnnotations(f_5, h_17);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_GChoice_2))
                                        {
                                          m_36 = ATgetArgument(t, 0);
                                          n_36 = ATgetArgument(t, 1);
                                          {
                                            ATerm e_18 = NULL,h_18 = NULL,l_18 = NULL,g_5 = NULL;
                                            t = SSLgetAnnotations(l_36);
                                            e_18 = t;
                                            t = m_36;
                                            t = strategy_expression_0_0(t);
                                            h_18 = t;
                                            t = n_36;
                                            t = strategy_expression_0_0(t);
                                            l_18 = t;
                                            t = (ATerm) ATmakeAppl(sym_GChoice_2, h_18, l_18);
                                            g_5 = t;
                                            t = SSLsetAnnotations(g_5, e_18);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LGChoice_2))
                                            {
                                              m_36 = ATgetArgument(t, 0);
                                              n_36 = ATgetArgument(t, 1);
                                              {
                                                ATerm e_19 = NULL,i_19 = NULL,j_19 = NULL,h_5 = NULL;
                                                t = SSLgetAnnotations(l_36);
                                                e_19 = t;
                                                t = m_36;
                                                t = strategy_expression_0_0(t);
                                                i_19 = t;
                                                t = n_36;
                                                t = strategy_expression_0_0(t);
                                                j_19 = t;
                                                t = (ATerm) ATmakeAppl(sym_LGChoice_2, i_19, j_19);
                                                h_5 = t;
                                                t = SSLsetAnnotations(h_5, e_19);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_CallT_3))
                                                {
                                                  m_36 = ATgetArgument(t, 0);
                                                  n_36 = ATgetArgument(t, 1);
                                                  k_36 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm y_19 = NULL,d_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,l_20 = NULL,l_5 = NULL,i_5 = NULL;
                                                    t = SSLgetAnnotations(l_36);
                                                    y_19 = t;
                                                    t = m_36;
                                                    if(match_cons(t, sym_SVar_1))
                                                      {
                                                        i_20 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSLgetAnnotations(m_36);
                                                    h_20 = t;
                                                    t = SSL_is_string(i_20);
                                                    j_20 = t;
                                                    t = (ATerm) ATmakeAppl(sym_SVar_1, j_20);
                                                    i_5 = t;
                                                    t = SSLsetAnnotations(i_5, h_20);
                                                    l_20 = t;
                                                    t = n_36;
                                                    t = map_1_0(r_0, t);
                                                    d_20 = t;
                                                    t = k_36;
                                                    t = map_1_0(y_0, t);
                                                    g_20 = t;
                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, l_20, d_20, g_20);
                                                    l_5 = t;
                                                    t = SSLsetAnnotations(l_5, y_19);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Rec_2))
                                                    {
                                                      m_36 = ATgetArgument(t, 0);
                                                      n_36 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm l_21 = NULL,r_21 = NULL,t_21 = NULL,m_5 = NULL;
                                                        t = SSLgetAnnotations(l_36);
                                                        l_21 = t;
                                                        t = SSL_is_string(m_36);
                                                        r_21 = t;
                                                        t = n_36;
                                                        t = strategy_expression_0_0(t);
                                                        t_21 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Rec_2, r_21, t_21);
                                                        m_5 = t;
                                                        t = SSLsetAnnotations(m_5, l_21);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Path_2))
                                                        {
                                                          m_36 = ATgetArgument(t, 0);
                                                          n_36 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm c_22 = NULL,g_22 = NULL,h_22 = NULL,n_5 = NULL;
                                                            t = SSLgetAnnotations(l_36);
                                                            c_22 = t;
                                                            t = SSL_is_int(m_36);
                                                            g_22 = t;
                                                            t = n_36;
                                                            t = strategy_expression_0_0(t);
                                                            h_22 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Path_2, g_22, h_22);
                                                            n_5 = t;
                                                            t = SSLsetAnnotations(n_5, c_22);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              m_36 = ATgetArgument(t, 0);
                                                              n_36 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm r_22 = NULL,x_22 = NULL,y_22 = NULL,o_5 = NULL;
                                                                t = SSLgetAnnotations(l_36);
                                                                r_22 = t;
                                                                t = SSL_is_string(m_36);
                                                                x_22 = t;
                                                                t = n_36;
                                                                t = map_1_0(strategy_expression_0_0, t);
                                                                y_22 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Cong_2, x_22, y_22);
                                                                o_5 = t;
                                                                t = SSLsetAnnotations(o_5, r_22);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_One_1))
                                                                {
                                                                  m_36 = ATgetArgument(t, 0);
                                                                  {
                                                                    ATerm g_23 = NULL,i_23 = NULL,p_5 = NULL;
                                                                    t = SSLgetAnnotations(l_36);
                                                                    g_23 = t;
                                                                    t = m_36;
                                                                    t = strategy_expression_0_0(t);
                                                                    i_23 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_One_1, i_23);
                                                                    p_5 = t;
                                                                    t = SSLsetAnnotations(p_5, g_23);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Some_1))
                                                                    {
                                                                      m_36 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm r_23 = NULL,t_23 = NULL,q_5 = NULL;
                                                                        t = SSLgetAnnotations(l_36);
                                                                        r_23 = t;
                                                                        t = m_36;
                                                                        t = strategy_expression_0_0(t);
                                                                        t_23 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Some_1, t_23);
                                                                        q_5 = t;
                                                                        t = SSLsetAnnotations(q_5, r_23);
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_All_1))
                                                                        {
                                                                          m_36 = ATgetArgument(t, 0);
                                                                          {
                                                                            ATerm a_24 = NULL,c_24 = NULL,r_5 = NULL;
                                                                            t = SSLgetAnnotations(l_36);
                                                                            a_24 = t;
                                                                            t = m_36;
                                                                            t = strategy_expression_0_0(t);
                                                                            c_24 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_All_1, c_24);
                                                                            r_5 = t;
                                                                            t = SSLsetAnnotations(r_5, a_24);
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Thread_1))
                                                                            {
                                                                              m_36 = ATgetArgument(t, 0);
                                                                              {
                                                                                ATerm k_24 = NULL,o_24 = NULL,w_5 = NULL;
                                                                                t = SSLgetAnnotations(l_36);
                                                                                k_24 = t;
                                                                                t = m_36;
                                                                                t = strategy_expression_0_0(t);
                                                                                o_24 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Thread_1, o_24);
                                                                                w_5 = t;
                                                                                t = SSLsetAnnotations(w_5, k_24);
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Match_1))
                                                                                {
                                                                                  m_36 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm u_24 = NULL,w_24 = NULL,b_6 = NULL;
                                                                                    t = SSLgetAnnotations(l_36);
                                                                                    u_24 = t;
                                                                                    t = m_36;
                                                                                    t = match_term_exp_0_0(t);
                                                                                    w_24 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, w_24);
                                                                                    b_6 = t;
                                                                                    t = SSLsetAnnotations(b_6, u_24);
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Build_1))
                                                                                    {
                                                                                      m_36 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm d_25 = NULL,u_27 = NULL,g_6 = NULL;
                                                                                        t = SSLgetAnnotations(l_36);
                                                                                        d_25 = t;
                                                                                        t = m_36;
                                                                                        t = term_expression_0_0(t);
                                                                                        u_27 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, u_27);
                                                                                        g_6 = t;
                                                                                        t = SSLsetAnnotations(g_6, d_25);
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Scope_2))
                                                                                        {
                                                                                          m_36 = ATgetArgument(t, 0);
                                                                                          n_36 = ATgetArgument(t, 1);
                                                                                          {
                                                                                            ATerm d_28 = NULL,g_28 = NULL,h_28 = NULL,h_6 = NULL;
                                                                                            t = SSLgetAnnotations(l_36);
                                                                                            d_28 = t;
                                                                                            t = m_36;
                                                                                            t = map_1_0(z_0, t);
                                                                                            g_28 = t;
                                                                                            t = n_36;
                                                                                            t = strategy_expression_0_0(t);
                                                                                            h_28 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Scope_2, g_28, h_28);
                                                                                            h_6 = t;
                                                                                            t = SSLsetAnnotations(h_6, d_28);
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_Where_1))
                                                                                            {
                                                                                              m_36 = ATgetArgument(t, 0);
                                                                                              {
                                                                                                ATerm s_28 = NULL,u_28 = NULL,j_6 = NULL;
                                                                                                t = SSLgetAnnotations(l_36);
                                                                                                s_28 = t;
                                                                                                t = m_36;
                                                                                                t = strategy_expression_0_0(t);
                                                                                                u_28 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Where_1, u_28);
                                                                                                j_6 = t;
                                                                                                t = SSLsetAnnotations(j_6, s_28);
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_PrimT_3))
                                                                                                {
                                                                                                  m_36 = ATgetArgument(t, 0);
                                                                                                  n_36 = ATgetArgument(t, 1);
                                                                                                  k_36 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm e_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,q_7 = NULL;
                                                                                                    t = SSLgetAnnotations(l_36);
                                                                                                    e_29 = t;
                                                                                                    t = SSL_is_string(m_36);
                                                                                                    t_29 = t;
                                                                                                    t = n_36;
                                                                                                    t = map_1_0(b_1, t);
                                                                                                    u_29 = t;
                                                                                                    t = k_36;
                                                                                                    t = map_1_0(f_1, t);
                                                                                                    v_29 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_PrimT_3, t_29, u_29, v_29);
                                                                                                    q_7 = t;
                                                                                                    t = SSLsetAnnotations(q_7, e_29);
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  ATerm b_31 = NULL,g_31 = NULL,h_31 = NULL,c_8 = NULL;
                                                                                                  if(match_cons(t, sym_Let_2))
                                                                                                    {
                                                                                                      m_36 = ATgetArgument(t, 0);
                                                                                                      n_36 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = SSLgetAnnotations(l_36);
                                                                                                  b_31 = t;
                                                                                                  t = m_36;
                                                                                                  t = map_1_0(g_1, t);
                                                                                                  g_31 = t;
                                                                                                  t = n_36;
                                                                                                  t = strategy_expression_0_0(t);
                                                                                                  h_31 = t;
                                                                                                  t = (ATerm) ATmakeAppl(sym_Let_2, g_31, h_31);
                                                                                                  c_8 = t;
                                                                                                  t = SSLsetAnnotations(c_8, b_31);
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
      LocalPopChoice(h_7);
    }
  else
    {
      t = g_7;
      t = debug_1_0(l_1, t);
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL,w_57 = NULL,x_57 = NULL,g_10 = NULL;
  x_57 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      u_57 = ATgetArgument(t, 0);
      v_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_57);
  t_57 = t;
  t = SSL_is_string(u_57);
  w_57 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, w_57, v_57);
  g_10 = t;
  t = SSLsetAnnotations(g_10, t_57);
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL,v_58 = NULL,i_10 = NULL;
  v_58 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      s_58 = ATgetArgument(t, 0);
      t_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_58);
  r_58 = t;
  t = SSL_is_string(s_58);
  u_58 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, u_58, t_58);
  i_10 = t;
  t = SSLsetAnnotations(i_10, r_58);
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL,j_10 = NULL;
  a_59 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      x_58 = ATgetArgument(t, 0);
      y_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_59);
  w_58 = t;
  t = SSL_is_string(x_58);
  z_58 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_58, y_58);
  j_10 = t;
  t = SSLsetAnnotations(j_10, w_58);
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_i_7;
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm j_7 = t;
  int l_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL;
      i_39 = t;
      if(match_cons(t, sym_SDef_3))
        {
          j_39 = ATgetArgument(t, 0);
          k_39 = ATgetArgument(t, 1);
          l_39 = ATgetArgument(t, 2);
          {
            ATerm l_57 = NULL,p_57 = NULL,q_57 = NULL,r_57 = NULL,h_10 = NULL;
            t = SSLgetAnnotations(i_39);
            l_57 = t;
            t = SSL_is_string(j_39);
            p_57 = t;
            t = k_39;
            t = map_1_0(n_1, t);
            q_57 = t;
            t = l_39;
            t = strategy_expression_0_0(t);
            r_57 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, p_57, q_57, r_57);
            h_10 = t;
            t = SSLsetAnnotations(h_10, l_57);
          }
        }
      else
        {
          ATerm h_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL,p_58 = NULL,k_10 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              j_39 = ATgetArgument(t, 0);
              k_39 = ATgetArgument(t, 1);
              l_39 = ATgetArgument(t, 2);
              m_39 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_39);
          h_58 = t;
          t = SSL_is_string(j_39);
          m_58 = t;
          t = k_39;
          t = map_1_0(o_1, t);
          n_58 = t;
          t = l_39;
          t = map_1_0(p_1, t);
          o_58 = t;
          t = m_39;
          t = strategy_expression_0_0(t);
          p_58 = t;
          t = (ATerm) ATmakeAppl(sym_SDefT_4, m_58, n_58, o_58, p_58);
          k_10 = t;
          t = SSLsetAnnotations(k_10, h_58);
        }
      ;
      LocalPopChoice(l_7);
    }
  else
    {
      t = j_7;
      t = debug_1_0(q_1, t);
    }
  return(t);
}
ATerm map_1_0 (ATerm h_90 (ATerm), ATerm t)
{
  ATerm d_40 (ATerm t)
  {
    ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL;
    a_40 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_40;
      }
    else
      {
        ATerm j_59 = NULL,p_59 = NULL,q_59 = NULL,q_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_40 = ATgetFirst((ATermList) t);
            c_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_40);
        j_59 = t;
        t = b_40;
        t = h_90(t);
        p_59 = t;
        t = c_40;
        t = d_40(t);
        q_59 = t;
        t = (ATerm) ATinsert(CheckATermList(q_59), p_59);
        q_10 = t;
        t = SSLsetAnnotations(q_10, j_59);
      }
    return(t);
  }
  t = d_40(t);
  return(t);
}
ATerm Cons_2_0 (ATerm t_68 (ATerm), ATerm u_68 (ATerm), ATerm t)
{
  ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL,s_10 = NULL;
  k_40 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_40 = ATgetFirst((ATermList) t);
      h_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_40);
  f_40 = t;
  t = g_40;
  t = t_68(t);
  i_40 = t;
  t = h_40;
  t = u_68(t);
  j_40 = t;
  t = (ATerm) ATinsert(CheckATermList(j_40), i_40);
  s_10 = t;
  t = SSLsetAnnotations(s_10, f_40);
  return(t);
}
ATerm t_3 (ATerm x_49, ATerm y_49, ATerm t)
{
  ATerm l_40 = NULL;
  t = SSL_fputc(x_49, y_49);
  l_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_40);
  return(t);
}
ATerm u_3 (ATerm l_53, ATerm m_53, ATerm t)
{
  ATerm m_40 = NULL;
  t = SSL_write_term_to_stream_text(l_53, m_53);
  m_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_40);
  return(t);
}
ATerm w_3 (ATerm y_102 (ATerm), ATerm g_426, ATerm p_53, ATerm t)
{
  ATerm n_40 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, g_426, term_n_7);
  t = open_stream_0_0(t);
  n_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_40, p_53);
  t = y_102(t);
  t = fclose_0_0(t);
  t = p_53;
  return(t);
}
ATerm v_3 (ATerm h_53, ATerm i_53, ATerm t)
{
  ATerm o_40 = NULL;
  t = SSL_write_term_to_stream_baf(h_53, i_53);
  o_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_40);
  return(t);
}
ATerm t_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm e_60 = NULL,f_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_7 = ATgetArgument(t, 0);
      if(match_cons(o_7, sym_Stream_1))
        {
          e_60 = ATgetArgument(o_7, 0);
        }
      else
        _fail(t);
      f_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_3(e_60, f_60, t);
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_7 = ATgetArgument(t, 0);
      if(match_cons(r_7, sym_Stream_1))
        {
          t_60 = ATgetArgument(r_7, 0);
        }
      else
        _fail(t);
      u_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3(t_60, u_60, t);
  q_60 = t;
  t = term_s_7;
  r_60 = t;
  t = q_60;
  if(match_cons(t, sym_Stream_1))
    {
      s_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_s_7, q_60);
  t = t_3(r_60, s_60, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL,c_42 = NULL,d_42 = NULL,v_10 = NULL,u_10 = NULL;
  if(((t_40 != NULL) && (t_40 != t)))
    _fail(t);
  else
    t_40 = t;
  if(match_cons(t, sym__2))
    {
      if(((a_41 != NULL) && (a_41 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_41 = ATgetArgument(t, 0);
      if(((b_41 != NULL) && (b_41 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(t_40));
  if(((z_40 != NULL) && (z_40 != t)))
    _fail(t);
  else
    z_40 = t;
  t = not_null(a_41);
  {
    ATerm u_7 = t;
    int v_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((s_40 != NULL) && (s_40 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                s_40 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(r_1, t);
        ;
        LocalPopChoice(v_7);
      }
    else
      {
        t = u_7;
        t = term_x_7;
        if(((s_40 != NULL) && (s_40 != t)))
          _fail(t);
        else
          s_40 = t;
      }
    if(((c_41 != NULL) && (c_41 != t)))
      _fail(t);
    else
      c_41 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_41), not_null(b_41));
    if(((u_10 != NULL) && (u_10 != t)))
      _fail(t);
    else
      u_10 = t;
    t = SSLsetAnnotations(not_null(u_10), not_null(z_40));
    t = not_null(t_40);
    if(match_cons(t, sym__2))
      {
        if(((v_40 != NULL) && (v_40 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          v_40 = ATgetArgument(t, 0);
        if(((w_40 != NULL) && (w_40 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          w_40 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(t_40));
    if(((u_40 != NULL) && (u_40 != t)))
      _fail(t);
    else
      u_40 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_40), (ATerm) ATmakeAppl(sym__2, not_null(s_40), not_null(w_40)));
    if(((v_10 != NULL) && (v_10 != t)))
      _fail(t);
    else
      v_10 = t;
    t = SSLsetAnnotations(not_null(v_10), not_null(u_40));
    if(((y_40 != NULL) && (y_40 != t)))
      _fail(t);
    else
      y_40 = t;
    if(match_cons(t, sym__2))
      {
        if(((c_42 != NULL) && (c_42 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          c_42 = ATgetArgument(t, 0);
        if(((d_42 != NULL) && (d_42 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          d_42 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm d_8 = t;
      int e_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL,d_60 = NULL,w_10 = NULL;
          t = SSLgetAnnotations(not_null(y_40));
          x_59 = t;
          t = not_null(c_42);
          t = fetch_1_0(t_1, t);
          a_60 = t;
          t = not_null(d_42);
          if(match_cons(t, sym__2))
            {
              c_60 = ATgetArgument(t, 0);
              d_60 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_3(v_1, c_60, d_60, t);
          b_60 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_60, b_60);
          w_10 = t;
          t = SSLsetAnnotations(w_10, x_59);
          ;
          LocalPopChoice(e_8);
        }
      else
        {
          t = d_8;
          {
            ATerm k_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL,x_10 = NULL;
            t = SSLgetAnnotations(not_null(y_40));
            k_60 = t;
            t = not_null(d_42);
            if(match_cons(t, sym__2))
              {
                o_60 = ATgetArgument(t, 0);
                p_60 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = w_3(w_1, o_60, p_60, t);
            n_60 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_42), n_60);
            x_10 = t;
            t = SSLsetAnnotations(x_10, k_60);
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
ATerm apply_strategy_1_0 (ATerm a_106 (ATerm), ATerm t)
{
  ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL;
  k_42 = t;
  t = dtime_0_0(t);
  t = k_42;
  t = a_106(t);
  j_42 = t;
  t = dtime_0_0(t);
  g_42 = t;
  t = j_42;
  if(match_cons(t, sym__2))
    {
      h_42 = ATgetArgument(t, 0);
      i_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_42), (ATerm) ATmakeAppl(sym_Runtime_1, g_42)), i_42);
  return(t);
}
ATerm y_42 (ATerm s_42, ATerm t)
{
  t = SSL_fclose(s_42);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_42 = NULL,w_42 = NULL;
  w_42 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_42 = ATgetArgument(t, 0);
      {
        ATerm f_8 = t;
        int g_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_42);
            ;
            LocalPopChoice(g_8);
          }
        else
          {
            t = f_8;
            t = y_42(w_42, t);
          }
      }
    }
  else
    {
      t = y_42(w_42, t);
    }
  return(t);
}
ATerm x_3 (ATerm n_53, ATerm t)
{
  t = SSL_read_term_from_stream(n_53);
  return(t);
}
ATerm y_3 (ATerm z_49, ATerm a_50, ATerm t)
{
  ATerm z_42 = NULL;
  t = SSL_fopen(z_49, a_50);
  z_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_42);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_43 = NULL;
  t = SSL_stdin_stream();
  a_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_43);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_43 = NULL;
  t = SSL_stdout_stream();
  b_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_43);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_43 = NULL;
  t = SSL_stderr_stream();
  c_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_43);
  return(t);
}
ATerm j_44 (ATerm i_43, ATerm t)
{
  ATerm j_43 = NULL;
  t = SSL_explode_term(i_43);
  if(match_cons(t, sym__2))
    {
      ATerm h_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_8 = ATgetArgument(t, 1);
        if(((ATgetType(i_8) == AT_LIST) && !(ATisEmpty(i_8))))
          {
            j_43 = ATgetFirst((ATermList) i_8);
            {
              ATerm j_8 = (ATerm) ATgetNext((ATermList) i_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_43;
  if(match_cons(t, sym_stderr_0))
    {
      t = j_43;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = j_43;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = j_43;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm k_44 (ATerm m_43, ATerm n_43, ATerm o_43, ATerm t)
{
  ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL,u_43 = NULL,c_11 = NULL;
  t = SSLgetAnnotations(o_43);
  r_43 = t;
  t = m_43;
  if(match_cons(t, sym_Path_1))
    {
      u_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_43, n_43);
  c_11 = t;
  t = SSLsetAnnotations(c_11, r_43);
  if(match_cons(t, sym__2))
    {
      p_43 = ATgetArgument(t, 0);
      q_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(p_43, q_43, t);
  return(t);
}
ATerm l_44 (ATerm w_43, ATerm x_43, ATerm y_43, ATerm t)
{
  ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL,e_44 = NULL,d_11 = NULL;
  t = SSLgetAnnotations(y_43);
  b_44 = t;
  t = SSL_is_string(w_43);
  e_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_44, x_43);
  d_11 = t;
  t = SSLsetAnnotations(d_11, b_44);
  if(match_cons(t, sym__2))
    {
      z_43 = ATgetArgument(t, 0);
      a_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(z_43, a_44, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_8 = ATgetArgument(t, 0);
      ATerm l_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  g_44 = t;
  if(match_cons(t, sym__2))
    {
      h_44 = ATgetArgument(t, 0);
      i_44 = ATgetArgument(t, 1);
      {
        ATerm m_8 = t;
        int n_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_44(g_44, t);
            ;
            LocalPopChoice(n_8);
          }
        else
          {
            t = m_8;
            {
              ATerm o_8 = t;
              int p_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_44(h_44, i_44, g_44, t);
                  ;
                  LocalPopChoice(p_8);
                }
              else
                {
                  t = o_8;
                  t = l_44(h_44, i_44, g_44, t);
                }
            }
          }
      }
    }
  else
    {
      t = j_44(g_44, t);
    }
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_q_8;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_44 = NULL,p_44 = NULL,q_44 = NULL;
  ATerm r_8 = t;
  int s_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_44 = NULL;
      r_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_44, term_t_8);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(s_8);
    }
  else
    {
      t = r_8;
      t = debug_1_0(x_1, t);
      _fail(t);
    }
  p_44 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_3(q_44, t);
  m_44 = t;
  t = p_44;
  t = fclose_0_0(t);
  t = m_44;
  return(t);
}
ATerm fetch_1_0 (ATerm r_90 (ATerm), ATerm t)
{
  ATerm q_45 (ATerm t)
  {
    ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL;
    n_45 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_45 = ATgetFirst((ATermList) t);
        p_45 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_8 = t;
      int v_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_61 = NULL,l_61 = NULL,g_11 = NULL;
          t = SSLgetAnnotations(n_45);
          i_61 = t;
          t = o_45;
          t = r_90(t);
          l_61 = t;
          t = (ATerm) ATinsert(CheckATermList(p_45), l_61);
          g_11 = t;
          t = SSLsetAnnotations(g_11, i_61);
          ;
          LocalPopChoice(v_8);
        }
      else
        {
          t = u_8;
          {
            ATerm t_61 = NULL,w_61 = NULL,h_11 = NULL;
            t = SSLgetAnnotations(n_45);
            t_61 = t;
            t = p_45;
            t = q_45(t);
            w_61 = t;
            t = (ATerm) ATinsert(CheckATermList(w_61), o_45);
            h_11 = t;
            t = SSLsetAnnotations(h_11, t_61);
          }
        }
    }
    return(t);
  }
  t = q_45(t);
  return(t);
}
ATerm s_3 (ATerm n_44, ATerm o_44, ATerm t)
{
  t = SSL_strcat(n_44, o_44);
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm w_8 = t;
  int b_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(b_9);
    }
  else
    {
      t = w_8;
    }
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_d_9;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm e_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_45 = NULL;
      z_45 = t;
      t = SSL_is_string(z_45);
      ;
      LocalPopChoice(f_9);
    }
  else
    {
      t = e_9;
      {
        ATerm g_9 = t;
        int h_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(y_1, t);
            ;
            LocalPopChoice(h_9);
          }
        else
          {
            t = g_9;
            {
              ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL;
              f_46 = t;
              if(match_cons(t, sym_Path_1))
                {
                  g_46 = ATgetArgument(t, 0);
                  t = g_46;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      g_46 = ATgetArgument(t, 0);
                      t = g_46;
                      {
                        ATerm i_9 = t;
                        int j_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(j_9);
                          }
                        else
                          {
                            t = i_9;
                            t = debug_1_0(z_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm l_46 = NULL,m_46 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          g_46 = ATgetArgument(t, 0);
                          h_46 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = g_46;
                      t = eval_config_0_0(t);
                      l_46 = t;
                      t = h_46;
                      t = eval_config_0_0(t);
                      m_46 = t;
                      t = (ATerm) ATmakeAppl(sym__2, l_46, m_46);
                      t = s_3(l_46, m_46, t);
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
  ATerm q_46 = NULL,r_46 = NULL;
  q_46 = t;
  t = term_k_9;
  r_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_9, q_46);
  t = b_4(r_46, q_46, t);
  {
    ATerm l_9 = t;
    int m_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_46 = NULL,t_46 = NULL;
        t = eval_config_0_0(t);
        s_46 = t;
        t = term_k_9;
        t_46 = t;
        t = SSL_table_put(t_46, q_46, s_46);
        t = s_46;
        ;
        LocalPopChoice(m_9);
      }
    else
      {
        t = l_9;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm j_104 (ATerm), ATerm t)
{
  ATerm z_46 = NULL;
  z_46 = t;
  {
    ATerm n_9 = t;
    int o_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_47 = NULL;
        t = term_p_9;
        t = get_config_0_0(t);
        b_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_47, term_q_9);
        t = geq_0_0(t);
        t = z_46;
        t = j_104(t);
        ;
        LocalPopChoice(o_9);
      }
    else
      {
        t = n_9;
        t = z_46;
      }
  }
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm e_47 = NULL;
  e_47 = t;
  if(match_string(t, "-k"))
    {
      t = e_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_47;
    }
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL;
  f_47 = t;
  t = SSL_string_to_int(f_47);
  g_47 = t;
  t = term_r_9;
  h_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_9, g_47);
  t = e_4(h_47, g_47, t);
  t = f_47;
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_t_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_2, j_2, k_2, t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm j_47 = NULL;
  j_47 = t;
  if(match_string(t, "-S"))
    {
      t = j_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_47;
    }
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm k_47 = NULL,l_47 = NULL;
  t = term_p_9;
  k_47 = t;
  t = term_u_9;
  l_47 = t;
  t = term_v_9;
  t = e_4(k_47, l_47, t);
  t = term_w_9;
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_x_9;
  return(t);
}
ATerm p_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm m_47 = NULL,n_47 = NULL,o_47 = NULL;
  m_47 = t;
  t = SSL_string_to_int(m_47);
  n_47 = t;
  t = term_p_9;
  o_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_9, n_47);
  t = e_4(o_47, n_47, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_47);
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_a_10;
  return(t);
}
ATerm s_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm p_47 = NULL,q_47 = NULL;
  t = term_b_10;
  p_47 = t;
  t = term_v_5;
  q_47 = t;
  t = term_c_10;
  t = e_4(p_47, q_47, t);
  t = term_d_10;
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = term_e_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm f_10 = t;
  int l_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_2, n_2, o_2, t);
      ;
      LocalPopChoice(l_10);
    }
  else
    {
      t = f_10;
      {
        ATerm m_10 = t;
        int n_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_2, q_2, r_2, t);
            ;
            LocalPopChoice(n_10);
          }
        else
          {
            t = m_10;
            t = Option_3_0(s_2, t_2, v_2, t);
          }
      }
    }
  return(t);
}
ATerm e_4 (ATerm o_54, ATerm p_54, ATerm t)
{
  ATerm r_47 = NULL;
  t = term_k_9;
  r_47 = t;
  t = SSL_table_put(r_47, o_54, p_54);
  t = (ATerm) ATmakeAppl(sym__3, term_k_9, o_54, p_54);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm u_47 = NULL,v_47 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_47 = NULL,x_47 = NULL,y_47 = NULL;
      t = term_v_5;
      t = d_0(t);
      w_47 = t;
      t = term_o_10;
      x_47 = t;
      t = term_p_10;
      y_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_10, term_p_10, w_47);
      t = c_4(x_47, y_47, w_47, t);
      _fail(t);
    }
  else
    {
      ATerm b_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_47 = ATgetFirst((ATermList) t);
          v_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_47;
      t = a_0(t);
      t = term_v_5;
      t = b_0(t);
      b_48 = t;
      t = (ATerm) ATinsert(CheckATermList(v_47), b_48);
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm e_48 = NULL;
  e_48 = t;
  if(match_string(t, "-o"))
    {
      t = e_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_48;
    }
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm f_48 = NULL,g_48 = NULL;
  f_48 = t;
  t = term_r_10;
  g_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_10, f_48);
  t = e_4(g_48, f_48, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, f_48);
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_t_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_2, z_2, c_3, t);
  return(t);
}
ATerm c_4 (ATerm m_59, ATerm n_59, ATerm l_59, ATerm t)
{
  ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL;
  i_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_59, n_59);
  {
    ATerm y_10 = t;
    int z_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_11 = ATgetArgument(t, 0);
            ATerm b_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_59, n_59);
        t = b_4(m_59, n_59, t);
        ;
        LocalPopChoice(z_10);
      }
    else
      {
        t = y_10;
        t = (ATerm) ATempty;
      }
    j_48 = t;
    t = (ATerm) ATinsert(CheckATermList(j_48), l_59);
    k_48 = t;
    t = SSL_table_put(m_59, n_59, k_48);
    t = i_48;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL;
      t = term_v_5;
      t = j_0(t);
      v_48 = t;
      t = term_o_10;
      w_48 = t;
      t = term_p_10;
      x_48 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_10, term_p_10, v_48);
      t = c_4(w_48, x_48, v_48, t);
      _fail(t);
    }
  else
    {
      ATerm b_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_48 = ATgetFirst((ATermList) t);
          s_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_48;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_48 = ATgetFirst((ATermList) t);
          u_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_48;
      t = h_0(t);
      t = t_48;
      t = i_0(t);
      b_49 = t;
      t = (ATerm) ATinsert(CheckATermList(u_48), b_49);
    }
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm d_49 = NULL;
  d_49 = t;
  if(match_string(t, "-i"))
    {
      t = d_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = d_49;
    }
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm e_49 = NULL,f_49 = NULL;
  e_49 = t;
  t = term_e_11;
  f_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_11, e_49);
  t = e_4(f_49, e_49, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_49);
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_f_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_3, h_3, o_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_5;
  t = whoami_0_0(t);
  g_49 = t;
  t = term_r_6;
  i_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_11), g_49);
  j_49 = t;
  t = SSL_printnl(i_49, j_49);
  t = term_v_6;
  h_49 = t;
  t = SSL_exit(h_49);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_j_11;
  t = get_config_0_0(t);
  return(t);
}
ATerm z_3 (ATerm x_46, ATerm y_46, ATerm t)
{
  ATerm m_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_46, y_46);
      ;
      LocalPopChoice(o_11);
    }
  else
    {
      t = m_11;
      t = SSL_addr(x_46, y_46);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm k_96 (ATerm), ATerm l_96 (ATerm), ATerm t)
{
  ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL;
  l_49 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_49;
      t = k_96(t);
    }
  else
    {
      ATerm q_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_49 = ATgetFirst((ATermList) t);
          n_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_49;
      t = foldr_2_0(k_96, l_96, t);
      q_49 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_49, q_49);
      t = l_96(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_u_9;
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm n_62 = NULL,o_62 = NULL;
  if(match_cons(t, sym__2))
    {
      n_62 = ATgetArgument(t, 0);
      o_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3(n_62, o_62, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm t_49 = NULL,j_62 = NULL,k_62 = NULL;
  t = times_0_0(t);
  k_62 = t;
  t = SSL_explode_term(k_62);
  if(match_cons(t, sym__2))
    {
      ATerm r_11 = ATgetArgument(t, 0);
      j_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_62;
  t = foldr_2_0(p_3, q_3, t);
  t_49 = t;
  t = SSL_TicksToSeconds(t_49);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL;
  k_50 = t;
  if(match_cons(t, sym__2))
    {
      l_50 = ATgetArgument(t, 0);
      m_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_11 = t;
    int v_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_50;
        if((l_50 != t))
          {
            _fail(t);
          }
        t = k_50;
        ;
        LocalPopChoice(v_11);
      }
    else
      {
        t = t_11;
        t = (ATerm) ATmakeAppl(sym__2, l_50, m_50);
        {
          ATerm a_12 = t;
          int b_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_50, m_50);
              ;
              LocalPopChoice(b_12);
            }
          else
            {
              t = a_12;
              t = SSL_gtr(l_50, m_50);
            }
          t = (ATerm) ATmakeAppl(sym__2, l_50, m_50);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_104 (ATerm), ATerm t)
{
  ATerm q_50 = NULL;
  q_50 = t;
  {
    ATerm c_12 = t;
    int d_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_50 = NULL;
        t = term_p_9;
        t = get_config_0_0(t);
        s_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_50, term_v_6);
        t = geq_0_0(t);
        t = q_50;
        t = i_104(t);
        ;
        LocalPopChoice(d_12);
      }
    else
      {
        t = c_12;
        t = q_50;
      }
  }
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm u_50 = NULL,v_50 = NULL,x_50 = NULL,y_50 = NULL;
  t = run_time_0_0(t);
  u_50 = t;
  t = term_v_5;
  t = whoami_0_0(t);
  v_50 = t;
  t = term_r_6;
  x_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_12), u_50), term_e_12), v_50);
  y_50 = t;
  t = SSL_printnl(x_50, y_50);
  t = (ATerm) ATmakeAppl(sym__2, term_r_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_12), u_50), term_e_12), v_50));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_50 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_9;
  z_50 = t;
  t = SSL_exit(z_50);
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm h_51 = NULL,i_51 = NULL;
  i_51 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = i_51;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          h_51 = ATgetArgument(t, 0);
          {
            ATerm a_63 = NULL,k_11 = NULL;
            t = SSLgetAnnotations(i_51);
            a_63 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, h_51);
            k_11 = t;
            t = SSLsetAnnotations(k_11, a_63);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = i_51;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm y_106 (ATerm), ATerm t)
{
  ATerm g_12 = t;
  int h_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_12;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_12);
    }
  else
    {
      t = g_12;
      t = fetch_1_0(a_4, t);
    }
  t = y_106(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm l_51 = NULL,m_51 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_51 = ATgetFirst((ATermList) t);
      m_51 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_51 = NULL,r_51 = NULL;
        ATerm d_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(q_51)), not_null(r_51));
          return(t);
        }
        t = not_null(m_51);
        t = g_0(t);
        if(((q_51 != NULL) && (q_51 != t)))
          _fail(t);
        else
          q_51 = t;
        t = not_null(l_51);
        t = f_0(t);
        if(((r_51 != NULL) && (r_51 != t)))
          _fail(t);
        else
          r_51 = t;
        t = not_null(m_51);
        t = reverse_acc_2_0(f_0, d_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_v_5;
      t = g_0(t);
    }
  return(t);
}
ATerm b_4 (ATerm d_61, ATerm e_61, ATerm t)
{
  t = SSL_table_get(d_61, e_61);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm v_51 = NULL,w_51 = NULL,x_51 = NULL,n_11 = NULL;
  x_51 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_51);
  v_51 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, w_51);
  n_11 = t;
  t = SSLsetAnnotations(n_11, v_51);
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm z_51 = NULL;
  z_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_51), term_j_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_51 = NULL,u_51 = NULL;
  ATerm k_12 = t;
  int l_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_12);
    }
  else
    {
      t = k_12;
      t = fetch_1_0(f_4, t);
    }
  t = term_m_12;
  t = echo_0_0(t);
  t = term_o_10;
  t_51 = t;
  t = term_p_10;
  u_51 = t;
  t = term_n_12;
  t = b_4(t_51, u_51, t);
  t = reverse_acc_2_0(_id, g_4, t);
  t = map_1_0(h_4, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL;
  b_52 = t;
  {
    ATerm o_12 = t;
    int p_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_52;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_12 = ATgetFirst((ATermList) t);
                ATerm r_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_52;
          }
        ;
        LocalPopChoice(p_12);
      }
    else
      {
        t = o_12;
        t = (ATerm) ATinsert(ATempty, b_52);
      }
    c_52 = t;
    t = term_x_7;
    d_52 = t;
    t = SSL_printnl(d_52, c_52);
    t = b_52;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_j_11;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm i_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm h_52 = NULL,i_52 = NULL;
  t = term_s_12;
  h_52 = t;
  t = term_v_5;
  i_52 = t;
  t = term_t_12;
  t = e_4(h_52, i_52, t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_u_12;
  return(t);
}
ATerm m_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm j_52 = NULL,k_52 = NULL,l_52 = NULL,m_52 = NULL;
  t = term_s_12;
  l_52 = t;
  t = term_v_5;
  m_52 = t;
  t = term_t_12;
  t = e_4(l_52, m_52, t);
  t = term_v_12;
  j_52 = t;
  t = term_v_5;
  k_52 = t;
  t = term_y_12;
  t = e_4(j_52, k_52, t);
  t = term_z_12;
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_c_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_13 = t;
  int f_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_4, j_4, k_4, t);
      ;
      LocalPopChoice(f_13);
    }
  else
    {
      t = e_13;
      t = Option_3_0(m_4, n_4, o_4, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_109 (ATerm), ATerm t)
{
  ATerm r_52 = NULL,s_52 = NULL,t_52 = NULL,u_52 = NULL,w_52 = NULL,x_52 = NULL,s_11 = NULL;
  if(((r_52 != NULL) && (r_52 != t)))
    _fail(t);
  else
    r_52 = t;
  {
    ATerm g_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_13;
        t = b_109(t);
        ;
        LocalPopChoice(h_13);
      }
    else
      {
        t = g_13;
      }
    t = not_null(r_52);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((t_52 != NULL) && (t_52 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          t_52 = ATgetFirst((ATermList) t);
        if(((u_52 != NULL) && (u_52 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          u_52 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(r_52));
    if(((s_52 != NULL) && (s_52 != t)))
      _fail(t);
    else
      s_52 = t;
    t = term_j_11;
    if(((x_52 != NULL) && (x_52 != t)))
      _fail(t);
    else
      x_52 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_j_11, not_null(t_52));
    t = e_4(not_null(x_52), not_null(t_52), t);
    t = not_null(u_52);
    {
      ATerm j_53 (ATerm t)
      {
        ATerm k_13 = t;
        int l_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_13 = t;
            int n_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_53 = NULL;
                a_53 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = a_53;
                ;
                LocalPopChoice(n_13);
              }
            else
              {
                t = m_13;
                t = b_109(t);
                t = Cons_2_0(_id, j_53, t);
              }
            ;
            LocalPopChoice(l_13);
          }
        else
          {
            t = k_13;
            {
              ATerm d_53 = NULL,e_53 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_53 = ATgetFirst((ATermList) t);
                  e_53 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(e_53), (ATerm) ATmakeAppl(sym_Undefined_1, d_53));
            }
          }
        return(t);
      }
      t = j_53(t);
      if(((w_52 != NULL) && (w_52 != t)))
        _fail(t);
      else
        w_52 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(w_52)), (ATerm) ATmakeAppl(sym_Program_1, not_null(t_52)));
      if(((s_11 != NULL) && (s_11 != t)))
        _fail(t);
      else
        s_11 = t;
      t = SSLsetAnnotations(not_null(s_11), not_null(s_52));
    }
  }
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm a_54 = NULL;
  a_54 = t;
  if(match_string(t, "--help"))
    {
      t = a_54;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = a_54;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = a_54;
        }
    }
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm b_54 = NULL,c_54 = NULL;
  t = term_i_12;
  b_54 = t;
  t = term_v_5;
  c_54 = t;
  t = term_o_13;
  t = e_4(b_54, c_54, t);
  t = term_p_13;
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_q_13;
  return(t);
}
ATerm w_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm a_109 (ATerm), ATerm t)
{
  ATerm t_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL;
  if(((v_53 != NULL) && (v_53 != t)))
    _fail(t);
  else
    v_53 = t;
  t = term_o_10;
  if(((x_53 != NULL) && (x_53 != t)))
    _fail(t);
  else
    x_53 = t;
  t = term_p_10;
  if(((y_53 != NULL) && (y_53 != t)))
    _fail(t);
  else
    y_53 = t;
  t = (ATerm) ATempty;
  if(((z_53 != NULL) && (z_53 != t)))
    _fail(t);
  else
    z_53 = t;
  t = SSL_table_put(not_null(x_53), not_null(y_53), not_null(z_53));
  t = not_null(v_53);
  {
    ATerm p_4 (ATerm t)
    {
      ATerm s_13 = t;
      int t_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_109(t);
          ;
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
                t = Option_3_0(r_4, u_4, v_4, t);
                ;
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
    t = parse_options_p__1_0(p_4, t);
    {
      ATerm x_13 = t;
      int y_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_54 = NULL;
          j_54 = t;
          {
            ATerm z_13 = t;
            int a_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_63 = NULL;
                t = j_54;
                {
                  ATerm b_14 = t;
                  int c_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_i_12;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(c_14);
                    }
                  else
                    {
                      t = b_14;
                      t = fetch_1_0(w_4, t);
                    }
                  t = j_54;
                  t = default_system_usage_0_0(t);
                  t = term_u_9;
                  h_63 = t;
                  t = SSL_exit(h_63);
                }
                ;
                LocalPopChoice(a_14);
              }
            else
              {
                t = z_13;
                {
                  ATerm l_63 = NULL;
                  t = term_s_12;
                  t = get_config_0_0(t);
                  t = j_54;
                  t = default_system_about_0_0(t);
                  t = term_u_9;
                  l_63 = t;
                  t = SSL_exit(l_63);
                }
              }
          }
          ;
          LocalPopChoice(y_13);
        }
      else
        {
          t = x_13;
          {
            ATerm d_14 = t;
            int e_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_54 = NULL,l_54 = NULL,m_54 = NULL;
                ATerm y_4 (ATerm t)
                {
                  ATerm n_54 = NULL,q_54 = NULL,r_54 = NULL,u_11 = NULL;
                  r_54 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      q_54 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(r_54);
                  n_54 = t;
                  t = q_54;
                  if(((t_53 != NULL) && (t_53 != t)))
                    _fail(t);
                  else
                    t_53 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, q_54);
                  u_11 = t;
                  t = SSLsetAnnotations(u_11, n_54);
                  return(t);
                }
                t = fetch_1_0(y_4, t);
                t = term_r_6;
                if(((l_54 != NULL) && (l_54 != t)))
                  _fail(t);
                else
                  l_54 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_53)), term_f_14);
                if(((m_54 != NULL) && (m_54 != t)))
                  _fail(t);
                else
                  m_54 = t;
                t = SSL_printnl(not_null(l_54), not_null(m_54));
                t = (ATerm) ATmakeAppl(sym__2, term_r_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_53)), term_f_14));
                t = default_system_usage_0_0(t);
                t = term_v_6;
                if(((k_54 != NULL) && (k_54 != t)))
                  _fail(t);
                else
                  k_54 = t;
                t = SSL_exit(not_null(k_54));
                ;
                LocalPopChoice(e_14);
              }
            else
              {
                t = d_14;
              }
          }
        }
      if(((u_53 != NULL) && (u_53 != t)))
        _fail(t);
      else
        u_53 = t;
      t = term_o_10;
      if(((w_53 != NULL) && (w_53 != t)))
        _fail(t);
      else
        w_53 = t;
      t = SSL_table_destroy(not_null(w_53));
      t = not_null(u_53);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm c_107 (ATerm), ATerm d_107 (ATerm), ATerm t)
{
  ATerm w_54 = NULL,c_55 = NULL,d_55 = NULL,e_55 = NULL;
  t = parse_options_1_0(a_107, t);
  w_54 = t;
  t = term_g_14;
  e_55 = t;
  t = SSL_table_create(e_55);
  t = term_g_14;
  c_55 = t;
  t = term_h_14;
  d_55 = t;
  t = SSL_table_put(c_55, d_55, w_54);
  t = w_54;
  t = c_107(t);
  {
    ATerm i_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_107, t);
        ;
        LocalPopChoice(j_14);
      }
    else
      {
        t = i_14;
        {
          ATerm k_14 = t;
          int l_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_107(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(l_14);
            }
          else
            {
              t = k_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = if_verbose2_1_0(e_6, t);
  return(t);
}
ATerm z_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm f_55 = NULL,g_55 = NULL;
  t = term_m_14;
  f_55 = t;
  t = term_v_5;
  g_55 = t;
  t = term_n_14;
  t = e_4(f_55, g_55, t);
  t = term_o_14;
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = term_p_14;
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm h_55 = NULL,i_55 = NULL,j_55 = NULL,k_55 = NULL;
  h_55 = t;
  t = term_j_11;
  t = get_config_0_0(t);
  i_55 = t;
  t = term_r_6;
  j_55 = t;
  t = (ATerm) ATinsert(ATempty, i_55);
  k_55 = t;
  t = SSL_printnl(j_55, k_55);
  t = h_55;
  return(t);
}
ATerm iowrap_3_0 (ATerm j_106 (ATerm), ATerm k_106 (ATerm), ATerm l_106 (ATerm), ATerm t)
{
  ATerm a_5 (ATerm t)
  {
    ATerm q_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_106(t);
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
              t = input_option_0_0(t);
              ;
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
                    t = output_option_0_0(t);
                    ;
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
                          t = Option_3_0(z_5, c_6, d_6, t);
                          ;
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
                                ;
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
  ATerm x_5 (ATerm t)
  {
    ATerm l_55 = NULL,m_55 = NULL,n_55 = NULL;
    if(((m_55 != NULL) && (m_55 != t)))
      _fail(t);
    else
      m_55 = t;
    {
      ATerm d_15 = t;
      int f_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((l_55 != NULL) && (l_55 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  l_55 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(f_6, t);
          ;
          LocalPopChoice(f_15);
        }
      else
        {
          t = d_15;
          t = term_g_15;
          if(((l_55 != NULL) && (l_55 != t)))
            _fail(t);
          else
            l_55 = t;
        }
      t = not_null(l_55);
      t = ReadFromFile_0_0(t);
      if(((n_55 != NULL) && (n_55 != t)))
        _fail(t);
      else
        n_55 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(m_55), not_null(n_55));
      t = apply_strategy_1_0(j_106, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(a_5, l_106, c_5, x_5, t);
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL,z_11 = NULL;
  u_55 = t;
  if(match_cons(t, sym__2))
    {
      r_55 = ATgetArgument(t, 0);
      s_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_55);
  q_55 = t;
  t = s_55;
  {
    ATerm h_15 = t;
    int i_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_56 = NULL,o_63 = NULL,q_63 = NULL,r_63 = NULL,s_63 = NULL,t_63 = NULL,u_63 = NULL,y_11 = NULL,x_11 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            m_56 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_55);
        o_63 = t;
        t = m_56;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_63 = ATgetFirst((ATermList) t);
            s_63 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_56);
        q_63 = t;
        t = s_63;
        t = Cons_2_0(l_6, p_6, t);
        t_63 = t;
        t = (ATerm) ATinsert(CheckATermList(t_63), r_63);
        x_11 = t;
        t = SSLsetAnnotations(x_11, q_63);
        u_63 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, u_63);
        y_11 = t;
        t = SSLsetAnnotations(y_11, o_63);
        ;
        LocalPopChoice(i_15);
      }
    else
      {
        t = h_15;
        t = debug_1_0(q_6, t);
      }
    t_55 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_55, t_55);
    z_11 = t;
    t = SSLsetAnnotations(z_11, q_55);
  }
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm v_63 = NULL,w_63 = NULL,x_63 = NULL,y_63 = NULL,w_11 = NULL;
  y_63 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      w_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_63);
  v_63 = t;
  t = w_63;
  t = map_1_0(strategy_definition_0_0, t);
  x_63 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, x_63);
  w_11 = t;
  t = SSLsetAnnotations(w_11, v_63);
  return(t);
}
ATerm p_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = term_j_15;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(i_6, _fail, default_usage_0_0, t);
  return(t);
}

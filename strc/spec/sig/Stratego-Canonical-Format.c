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
ATerm term_i_15;
ATerm term_f_15;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_h_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_j_9;
ATerm term_c_9;
ATerm term_s_8;
ATerm term_p_8;
ATerm term_x_7;
ATerm term_r_7;
ATerm term_n_7;
ATerm term_i_7;
ATerm term_f_7;
ATerm term_a_7;
ATerm term_x_6;
ATerm term_v_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_w_5;
void init_constant_terms (void)
{
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym__0);
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
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_t_9);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym__2, term_a_10, term_w_5);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym__2, term_n_10, term_o_10);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym__2, term_r_12, term_w_5);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym__2, term_u_12, term_w_5);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym__2, term_h_12, term_w_5);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym__2, term_l_14, term_w_5);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
}
ATerm default_usage_0_0 (ATerm);
ATerm debug_1_0 (ATerm w_91 (ATerm), ATerm);
ATerm b_0 (ATerm);
ATerm term_expression_0_0 (ATerm);
ATerm c_0 (ATerm);
ATerm match_term_exp_0_0 (ATerm);
ATerm CallT_3_0 (ATerm l_62 (ATerm), ATerm m_62 (ATerm), ATerm n_62 (ATerm), ATerm);
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
ATerm strategy_definition_0_0 (ATerm);
ATerm map_1_0 (ATerm b_79 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm m_57 (ATerm), ATerm n_57 (ATerm), ATerm);
ATerm t_3 (ATerm q_38, ATerm r_38, ATerm);
ATerm u_3 (ATerm e_42, ATerm f_42, ATerm);
ATerm w_3 (ATerm y_91 (ATerm), ATerm d_401, ATerm i_42, ATerm);
ATerm v_3 (ATerm a_42, ATerm b_42, ATerm);
ATerm s_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm a_95 (ATerm), ATerm);
ATerm b_44 (ATerm v_43, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm x_3 (ATerm g_42, ATerm);
ATerm y_3 (ATerm s_38, ATerm t_38, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm q_45 (ATerm l_44, ATerm);
ATerm r_45 (ATerm p_44, ATerm q_44, ATerm r_44, ATerm);
ATerm s_45 (ATerm d_45, ATerm e_45, ATerm f_45, ATerm);
ATerm z_3 (ATerm);
ATerm w_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm l_79 (ATerm), ATerm);
ATerm s_3 (ATerm f_33, ATerm g_33, ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm j_93 (ATerm), ATerm);
ATerm d_2 (ATerm);
ATerm j_2 (ATerm);
ATerm l_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm f_4 (ATerm h_43, ATerm i_43, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm z_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm d_4 (ATerm f_48, ATerm g_48, ATerm e_48, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm d_3 (ATerm);
ATerm g_3 (ATerm);
ATerm n_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm a_4 (ATerm q_35, ATerm r_35, ATerm);
ATerm foldr_2_0 (ATerm e_85 (ATerm), ATerm f_85 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm i_93 (ATerm), ATerm);
ATerm r_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm b_4 (ATerm);
ATerm need_help_1_0 (ATerm y_95 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm c_4 (ATerm w_49, ATerm x_49, ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm j_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm b_98 (ATerm), ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm parse_options_1_0 (ATerm a_98 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm a_96 (ATerm), ATerm b_96 (ATerm), ATerm c_96 (ATerm), ATerm d_96 (ATerm), ATerm);
ATerm b_5 (ATerm);
ATerm z_5 (ATerm);
ATerm b_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm iowrap_3_0 (ATerm j_95 (ATerm), ATerm k_95 (ATerm), ATerm l_95 (ATerm), ATerm);
ATerm g_6 (ATerm);
ATerm l_6 (ATerm);
ATerm o_6 (ATerm);
ATerm q_6 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,e_0 = NULL,f_0 = NULL,n_0 = NULL,o_0 = NULL;
  a_0 = t;
  t = term_w_5;
  t = whoami_0_0(t);
  e_0 = t;
  t = term_r_6;
  n_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_6), e_0), term_s_6);
  o_0 = t;
  t = SSL_printnl(n_0, o_0);
  t = term_v_6;
  f_0 = t;
  t = SSL_exit(f_0);
  t = a_0;
  return(t);
}
ATerm debug_1_0 (ATerm w_91 (ATerm), ATerm t)
{
  ATerm s_0 = NULL,x_0 = NULL,c_1 = NULL,d_1 = NULL;
  s_0 = t;
  t = w_91(t);
  x_0 = t;
  t = term_r_6;
  c_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_0), x_0);
  d_1 = t;
  t = SSL_printnl(c_1, d_1);
  t = s_0;
  return(t);
}
ATerm b_0 (ATerm t)
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
      LocalPopChoice(z_6);
    }
  else
    {
      t = y_6;
      t = debug_1_0(b_0, t);
    }
  return(t);
}
ATerm c_0 (ATerm t)
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
      ATerm m_11 = NULL,r_11 = NULL,s_11 = NULL;
      m_11 = t;
      if(match_cons(t, sym_Wld_0))
        {
          t = m_11;
        }
      else
        {
          if(match_cons(t, sym_Var_1))
            {
              r_11 = ATgetArgument(t, 0);
              {
                ATerm y_5 = NULL,a_6 = NULL,x_2 = NULL;
                t = SSLgetAnnotations(m_11);
                y_5 = t;
                t = SSL_is_string(r_11);
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
                  r_11 = ATgetArgument(t, 0);
                  {
                    ATerm j_6 = NULL,m_6 = NULL,y_2 = NULL;
                    t = SSLgetAnnotations(m_11);
                    j_6 = t;
                    t = SSL_is_int(r_11);
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
                      r_11 = ATgetArgument(t, 0);
                      {
                        ATerm u_6 = NULL,w_6 = NULL,a_3 = NULL;
                        t = SSLgetAnnotations(m_11);
                        u_6 = t;
                        t = SSL_is_real(r_11);
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
                          r_11 = ATgetArgument(t, 0);
                          {
                            ATerm c_7 = NULL,e_7 = NULL,b_3 = NULL;
                            t = SSLgetAnnotations(m_11);
                            c_7 = t;
                            t = SSL_is_string(r_11);
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
                              r_11 = ATgetArgument(t, 0);
                              {
                                ATerm k_7 = NULL,m_7 = NULL,e_3 = NULL;
                                t = SSLgetAnnotations(m_11);
                                k_7 = t;
                                t = r_11;
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
                                  r_11 = ATgetArgument(t, 0);
                                  s_11 = ATgetArgument(t, 1);
                                  {
                                    ATerm w_7 = NULL,w_8 = NULL,x_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,j_3 = NULL,f_3 = NULL;
                                    t = SSLgetAnnotations(m_11);
                                    w_7 = t;
                                    t = r_11;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        z_8 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(r_11);
                                    x_8 = t;
                                    t = SSL_is_string(z_8);
                                    a_9 = t;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, a_9);
                                    f_3 = t;
                                    t = SSLsetAnnotations(f_3, x_8);
                                    b_9 = t;
                                    t = s_11;
                                    t = match_term_exp_0_0(t);
                                    w_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_As_2, b_9, w_8);
                                    j_3 = t;
                                    t = SSLsetAnnotations(j_3, w_7);
                                  }
                                }
                              else
                                {
                                  ATerm q_9 = NULL,y_9 = NULL,z_9 = NULL,q_3 = NULL;
                                  if(match_cons(t, sym_Op_2))
                                    {
                                      r_11 = ATgetArgument(t, 0);
                                      s_11 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(m_11);
                                  q_9 = t;
                                  t = SSL_is_string(r_11);
                                  y_9 = t;
                                  t = s_11;
                                  t = map_1_0(match_term_exp_0_0, t);
                                  z_9 = t;
                                  t = (ATerm) ATmakeAppl(sym_Op_2, y_9, z_9);
                                  q_3 = t;
                                  t = SSLsetAnnotations(q_3, q_9);
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
      t = debug_1_0(c_0, t);
    }
  return(t);
}
ATerm CallT_3_0 (ATerm l_62 (ATerm), ATerm m_62 (ATerm), ATerm n_62 (ATerm), ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,l_13 = NULL,s_13 = NULL,w_13 = NULL,v_4 = NULL;
  w_13 = t;
  if(match_cons(t, sym_CallT_3))
    {
      z_12 = ATgetArgument(t, 0);
      c_13 = ATgetArgument(t, 1);
      d_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_13);
  y_12 = t;
  t = z_12;
  t = l_62(t);
  e_13 = t;
  t = c_13;
  t = m_62(t);
  l_13 = t;
  t = d_13;
  t = n_62(t);
  s_13 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, e_13, l_13, s_13);
  v_4 = t;
  t = SSLsetAnnotations(v_4, y_12);
  return(t);
}
ATerm q_0 (ATerm t)
{
  t = CallT_3_0(t_0, u_0, v_0, t);
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL,r_20 = NULL,l_5 = NULL;
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
  ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL,w_20 = NULL,m_5 = NULL;
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
  u_20 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, u_20);
  m_5 = t;
  t = SSLsetAnnotations(m_5, s_20);
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm l_28 = NULL;
  l_28 = t;
  t = SSL_is_string(l_28);
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm o_29 = NULL,p_29 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL,k_30 = NULL,q_7 = NULL,p_6 = NULL;
  k_30 = t;
  if(match_cons(t, sym_CallT_3))
    {
      p_29 = ATgetArgument(t, 0);
      b_30 = ATgetArgument(t, 1);
      c_30 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_30);
  o_29 = t;
  t = p_29;
  if(match_cons(t, sym_SVar_1))
    {
      e_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_29);
  d_30 = t;
  t = SSL_is_string(e_30);
  f_30 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, f_30);
  p_6 = t;
  t = SSLsetAnnotations(p_6, d_30);
  g_30 = t;
  t = b_30;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = c_30;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, g_30, b_30, c_30);
  q_7 = t;
  t = SSLsetAnnotations(q_7, o_29);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL,s_7 = NULL;
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
  s_7 = t;
  t = SSLsetAnnotations(s_7, l_30);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm f_35 = NULL,g_35 = NULL,i_35 = NULL,j_35 = NULL,k_35 = NULL;
  f_35 = t;
  if(match_cons(t, sym_SDef_3))
    {
      g_35 = ATgetArgument(t, 0);
      i_35 = ATgetArgument(t, 1);
      j_35 = ATgetArgument(t, 2);
      {
        ATerm t_43 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,a_8 = NULL;
        t = SSLgetAnnotations(f_35);
        t_43 = t;
        t = SSL_is_string(g_35);
        i_44 = t;
        t = i_35;
        t = map_1_0(g_1, t);
        j_44 = t;
        t = j_35;
        t = strategy_expression_0_0(t);
        k_44 = t;
        t = (ATerm) ATmakeAppl(sym_SDef_3, i_44, j_44, k_44);
        a_8 = t;
        t = SSLsetAnnotations(a_8, t_43);
      }
    }
  else
    {
      ATerm d_49 = NULL,o_50 = NULL,w_50 = NULL,i_51 = NULL,j_51 = NULL,d_8 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          g_35 = ATgetArgument(t, 0);
          i_35 = ATgetArgument(t, 1);
          j_35 = ATgetArgument(t, 2);
          k_35 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_35);
      d_49 = t;
      t = SSL_is_string(g_35);
      o_50 = t;
      t = i_35;
      t = map_1_0(h_1, t);
      w_50 = t;
      t = j_35;
      t = map_1_0(i_1, t);
      i_51 = t;
      t = k_35;
      t = strategy_expression_0_0(t);
      j_51 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, o_50, w_50, i_51, j_51);
      d_8 = t;
      t = SSLsetAnnotations(d_8, d_49);
    }
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL,z_7 = NULL;
  r_47 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      o_47 = ATgetArgument(t, 0);
      p_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_47);
  n_47 = t;
  t = SSL_is_string(o_47);
  q_47 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, q_47, p_47);
  z_7 = t;
  t = SSLsetAnnotations(z_7, n_47);
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm d_57 = NULL,e_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL,b_8 = NULL;
  h_57 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      e_57 = ATgetArgument(t, 0);
      f_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_57);
  d_57 = t;
  t = SSL_is_string(e_57);
  g_57 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, g_57, f_57);
  b_8 = t;
  t = SSLsetAnnotations(b_8, d_57);
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm j_57 = NULL,k_57 = NULL,l_57 = NULL,o_57 = NULL,p_57 = NULL,c_8 = NULL;
  p_57 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      k_57 = ATgetArgument(t, 0);
      l_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_57);
  j_57 = t;
  t = SSL_is_string(k_57);
  o_57 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, o_57, l_57);
  c_8 = t;
  t = SSLsetAnnotations(c_8, j_57);
  return(t);
}
ATerm k_1 (ATerm t)
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
      ATerm u_36 = NULL,v_36 = NULL,x_36 = NULL,y_36 = NULL;
      v_36 = t;
      if(match_cons(t, sym_Id_0))
        {
          t = v_36;
        }
      else
        {
          if(match_cons(t, sym_Fail_0))
            {
              t = v_36;
            }
          else
            {
              if(match_cons(t, sym_Not_1))
                {
                  x_36 = ATgetArgument(t, 0);
                  {
                    ATerm u_14 = NULL,w_14 = NULL,a_5 = NULL;
                    t = SSLgetAnnotations(v_36);
                    u_14 = t;
                    t = x_36;
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
                      x_36 = ATgetArgument(t, 0);
                      {
                        ATerm c_15 = NULL,e_15 = NULL,c_5 = NULL;
                        t = SSLgetAnnotations(v_36);
                        c_15 = t;
                        t = x_36;
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
                          x_36 = ATgetArgument(t, 0);
                          y_36 = ATgetArgument(t, 1);
                          {
                            ATerm l_15 = NULL,o_15 = NULL,p_15 = NULL,e_5 = NULL;
                            t = SSLgetAnnotations(v_36);
                            l_15 = t;
                            t = x_36;
                            t = strategy_expression_0_0(t);
                            o_15 = t;
                            t = y_36;
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
                              x_36 = ATgetArgument(t, 0);
                              y_36 = ATgetArgument(t, 1);
                              {
                                ATerm x_15 = NULL,a_16 = NULL,b_16 = NULL,f_5 = NULL;
                                t = SSLgetAnnotations(v_36);
                                x_15 = t;
                                t = x_36;
                                t = strategy_expression_0_0(t);
                                a_16 = t;
                                t = y_36;
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
                                  x_36 = ATgetArgument(t, 0);
                                  y_36 = ATgetArgument(t, 1);
                                  {
                                    ATerm k_16 = NULL,o_16 = NULL,p_16 = NULL,g_5 = NULL;
                                    t = SSLgetAnnotations(v_36);
                                    k_16 = t;
                                    t = x_36;
                                    t = strategy_expression_0_0(t);
                                    o_16 = t;
                                    t = y_36;
                                    t = strategy_expression_0_0(t);
                                    p_16 = t;
                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, o_16, p_16);
                                    g_5 = t;
                                    t = SSLsetAnnotations(g_5, k_16);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      x_36 = ATgetArgument(t, 0);
                                      y_36 = ATgetArgument(t, 1);
                                      u_36 = ATgetArgument(t, 2);
                                      {
                                        ATerm d_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,h_5 = NULL;
                                        t = SSLgetAnnotations(v_36);
                                        d_17 = t;
                                        t = x_36;
                                        t = strategy_expression_0_0(t);
                                        l_17 = t;
                                        t = y_36;
                                        t = strategy_expression_0_0(t);
                                        m_17 = t;
                                        t = u_36;
                                        t = strategy_expression_0_0(t);
                                        n_17 = t;
                                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, l_17, m_17, n_17);
                                        h_5 = t;
                                        t = SSLsetAnnotations(h_5, d_17);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_GChoice_2))
                                        {
                                          x_36 = ATgetArgument(t, 0);
                                          y_36 = ATgetArgument(t, 1);
                                          {
                                            ATerm e_18 = NULL,h_18 = NULL,i_18 = NULL,i_5 = NULL;
                                            t = SSLgetAnnotations(v_36);
                                            e_18 = t;
                                            t = x_36;
                                            t = strategy_expression_0_0(t);
                                            h_18 = t;
                                            t = y_36;
                                            t = strategy_expression_0_0(t);
                                            i_18 = t;
                                            t = (ATerm) ATmakeAppl(sym_GChoice_2, h_18, i_18);
                                            i_5 = t;
                                            t = SSLsetAnnotations(i_5, e_18);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LGChoice_2))
                                            {
                                              x_36 = ATgetArgument(t, 0);
                                              y_36 = ATgetArgument(t, 1);
                                              {
                                                ATerm e_19 = NULL,i_19 = NULL,j_19 = NULL,j_5 = NULL;
                                                t = SSLgetAnnotations(v_36);
                                                e_19 = t;
                                                t = x_36;
                                                t = strategy_expression_0_0(t);
                                                i_19 = t;
                                                t = y_36;
                                                t = strategy_expression_0_0(t);
                                                j_19 = t;
                                                t = (ATerm) ATmakeAppl(sym_LGChoice_2, i_19, j_19);
                                                j_5 = t;
                                                t = SSLsetAnnotations(j_5, e_19);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_CallT_3))
                                                {
                                                  x_36 = ATgetArgument(t, 0);
                                                  y_36 = ATgetArgument(t, 1);
                                                  u_36 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm v_19 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,n_5 = NULL,k_5 = NULL;
                                                    t = SSLgetAnnotations(v_36);
                                                    v_19 = t;
                                                    t = x_36;
                                                    if(match_cons(t, sym_SVar_1))
                                                      {
                                                        i_20 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSLgetAnnotations(x_36);
                                                    f_20 = t;
                                                    t = SSL_is_string(i_20);
                                                    j_20 = t;
                                                    t = (ATerm) ATmakeAppl(sym_SVar_1, j_20);
                                                    k_5 = t;
                                                    t = SSLsetAnnotations(k_5, f_20);
                                                    k_20 = t;
                                                    t = y_36;
                                                    t = map_1_0(q_0, t);
                                                    d_20 = t;
                                                    t = u_36;
                                                    t = map_1_0(w_0, t);
                                                    e_20 = t;
                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, k_20, d_20, e_20);
                                                    n_5 = t;
                                                    t = SSLsetAnnotations(n_5, v_19);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Rec_2))
                                                    {
                                                      x_36 = ATgetArgument(t, 0);
                                                      y_36 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm j_21 = NULL,p_21 = NULL,q_21 = NULL,o_5 = NULL;
                                                        t = SSLgetAnnotations(v_36);
                                                        j_21 = t;
                                                        t = SSL_is_string(x_36);
                                                        p_21 = t;
                                                        t = y_36;
                                                        t = strategy_expression_0_0(t);
                                                        q_21 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Rec_2, p_21, q_21);
                                                        o_5 = t;
                                                        t = SSLsetAnnotations(o_5, j_21);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Path_2))
                                                        {
                                                          x_36 = ATgetArgument(t, 0);
                                                          y_36 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm d_22 = NULL,g_22 = NULL,h_22 = NULL,p_5 = NULL;
                                                            t = SSLgetAnnotations(v_36);
                                                            d_22 = t;
                                                            t = SSL_is_int(x_36);
                                                            g_22 = t;
                                                            t = y_36;
                                                            t = strategy_expression_0_0(t);
                                                            h_22 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Path_2, g_22, h_22);
                                                            p_5 = t;
                                                            t = SSLsetAnnotations(p_5, d_22);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              x_36 = ATgetArgument(t, 0);
                                                              y_36 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm s_22 = NULL,v_22 = NULL,w_22 = NULL,q_5 = NULL;
                                                                t = SSLgetAnnotations(v_36);
                                                                s_22 = t;
                                                                t = SSL_is_string(x_36);
                                                                v_22 = t;
                                                                t = y_36;
                                                                t = map_1_0(strategy_expression_0_0, t);
                                                                w_22 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Cong_2, v_22, w_22);
                                                                q_5 = t;
                                                                t = SSLsetAnnotations(q_5, s_22);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_One_1))
                                                                {
                                                                  x_36 = ATgetArgument(t, 0);
                                                                  {
                                                                    ATerm i_23 = NULL,k_23 = NULL,r_5 = NULL;
                                                                    t = SSLgetAnnotations(v_36);
                                                                    i_23 = t;
                                                                    t = x_36;
                                                                    t = strategy_expression_0_0(t);
                                                                    k_23 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_One_1, k_23);
                                                                    r_5 = t;
                                                                    t = SSLsetAnnotations(r_5, i_23);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Some_1))
                                                                    {
                                                                      x_36 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm r_23 = NULL,t_23 = NULL,s_5 = NULL;
                                                                        t = SSLgetAnnotations(v_36);
                                                                        r_23 = t;
                                                                        t = x_36;
                                                                        t = strategy_expression_0_0(t);
                                                                        t_23 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Some_1, t_23);
                                                                        s_5 = t;
                                                                        t = SSLsetAnnotations(s_5, r_23);
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_All_1))
                                                                        {
                                                                          x_36 = ATgetArgument(t, 0);
                                                                          {
                                                                            ATerm b_24 = NULL,d_24 = NULL,x_5 = NULL;
                                                                            t = SSLgetAnnotations(v_36);
                                                                            b_24 = t;
                                                                            t = x_36;
                                                                            t = strategy_expression_0_0(t);
                                                                            d_24 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_All_1, d_24);
                                                                            x_5 = t;
                                                                            t = SSLsetAnnotations(x_5, b_24);
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Thread_1))
                                                                            {
                                                                              x_36 = ATgetArgument(t, 0);
                                                                              {
                                                                                ATerm l_24 = NULL,o_24 = NULL,c_6 = NULL;
                                                                                t = SSLgetAnnotations(v_36);
                                                                                l_24 = t;
                                                                                t = x_36;
                                                                                t = strategy_expression_0_0(t);
                                                                                o_24 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Thread_1, o_24);
                                                                                c_6 = t;
                                                                                t = SSLsetAnnotations(c_6, l_24);
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Match_1))
                                                                                {
                                                                                  x_36 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm w_24 = NULL,y_24 = NULL,h_6 = NULL;
                                                                                    t = SSLgetAnnotations(v_36);
                                                                                    w_24 = t;
                                                                                    t = x_36;
                                                                                    t = match_term_exp_0_0(t);
                                                                                    y_24 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, y_24);
                                                                                    h_6 = t;
                                                                                    t = SSLsetAnnotations(h_6, w_24);
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Build_1))
                                                                                    {
                                                                                      x_36 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm f_25 = NULL,h_25 = NULL,i_6 = NULL;
                                                                                        t = SSLgetAnnotations(v_36);
                                                                                        f_25 = t;
                                                                                        t = x_36;
                                                                                        t = term_expression_0_0(t);
                                                                                        h_25 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, h_25);
                                                                                        i_6 = t;
                                                                                        t = SSLsetAnnotations(i_6, f_25);
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Scope_2))
                                                                                        {
                                                                                          x_36 = ATgetArgument(t, 0);
                                                                                          y_36 = ATgetArgument(t, 1);
                                                                                          {
                                                                                            ATerm d_28 = NULL,h_28 = NULL,j_28 = NULL,k_6 = NULL;
                                                                                            t = SSLgetAnnotations(v_36);
                                                                                            d_28 = t;
                                                                                            t = x_36;
                                                                                            t = map_1_0(y_0, t);
                                                                                            h_28 = t;
                                                                                            t = y_36;
                                                                                            t = strategy_expression_0_0(t);
                                                                                            j_28 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Scope_2, h_28, j_28);
                                                                                            k_6 = t;
                                                                                            t = SSLsetAnnotations(k_6, d_28);
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_Where_1))
                                                                                            {
                                                                                              x_36 = ATgetArgument(t, 0);
                                                                                              {
                                                                                                ATerm s_28 = NULL,u_28 = NULL,n_6 = NULL;
                                                                                                t = SSLgetAnnotations(v_36);
                                                                                                s_28 = t;
                                                                                                t = x_36;
                                                                                                t = strategy_expression_0_0(t);
                                                                                                u_28 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Where_1, u_28);
                                                                                                n_6 = t;
                                                                                                t = SSLsetAnnotations(n_6, s_28);
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_PrimT_3))
                                                                                                {
                                                                                                  x_36 = ATgetArgument(t, 0);
                                                                                                  y_36 = ATgetArgument(t, 1);
                                                                                                  u_36 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm g_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,v_7 = NULL;
                                                                                                    t = SSLgetAnnotations(v_36);
                                                                                                    g_29 = t;
                                                                                                    t = SSL_is_string(x_36);
                                                                                                    k_29 = t;
                                                                                                    t = y_36;
                                                                                                    t = map_1_0(a_1, t);
                                                                                                    l_29 = t;
                                                                                                    t = u_36;
                                                                                                    t = map_1_0(e_1, t);
                                                                                                    m_29 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_PrimT_3, k_29, l_29, m_29);
                                                                                                    v_7 = t;
                                                                                                    t = SSLsetAnnotations(v_7, g_29);
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  ATerm c_31 = NULL,h_31 = NULL,i_31 = NULL,e_8 = NULL;
                                                                                                  if(match_cons(t, sym_Let_2))
                                                                                                    {
                                                                                                      x_36 = ATgetArgument(t, 0);
                                                                                                      y_36 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = SSLgetAnnotations(v_36);
                                                                                                  c_31 = t;
                                                                                                  t = x_36;
                                                                                                  t = map_1_0(f_1, t);
                                                                                                  h_31 = t;
                                                                                                  t = y_36;
                                                                                                  t = strategy_expression_0_0(t);
                                                                                                  i_31 = t;
                                                                                                  t = (ATerm) ATmakeAppl(sym_Let_2, h_31, i_31);
                                                                                                  e_8 = t;
                                                                                                  t = SSLsetAnnotations(e_8, c_31);
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
      t = debug_1_0(k_1, t);
    }
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm c_58 = NULL,d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL,h_10 = NULL;
  g_58 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      d_58 = ATgetArgument(t, 0);
      e_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_58);
  c_58 = t;
  t = SSL_is_string(d_58);
  f_58 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, f_58, e_58);
  h_10 = t;
  t = SSLsetAnnotations(h_10, c_58);
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm a_59 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL,j_10 = NULL;
  e_59 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      b_59 = ATgetArgument(t, 0);
      c_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_59);
  a_59 = t;
  t = SSL_is_string(b_59);
  d_59 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, d_59, c_59);
  j_10 = t;
  t = SSLsetAnnotations(j_10, a_59);
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,k_10 = NULL;
  j_59 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      g_59 = ATgetArgument(t, 0);
      h_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_59);
  f_59 = t;
  t = SSL_is_string(g_59);
  i_59 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, i_59, h_59);
  k_10 = t;
  t = SSLsetAnnotations(k_10, f_59);
  return(t);
}
ATerm p_1 (ATerm t)
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
      ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL;
      x_39 = t;
      if(match_cons(t, sym_SDef_3))
        {
          y_39 = ATgetArgument(t, 0);
          z_39 = ATgetArgument(t, 1);
          a_40 = ATgetArgument(t, 2);
          {
            ATerm u_57 = NULL,y_57 = NULL,z_57 = NULL,a_58 = NULL,i_10 = NULL;
            t = SSLgetAnnotations(x_39);
            u_57 = t;
            t = SSL_is_string(y_39);
            y_57 = t;
            t = z_39;
            t = map_1_0(m_1, t);
            z_57 = t;
            t = a_40;
            t = strategy_expression_0_0(t);
            a_58 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, y_57, z_57, a_58);
            i_10 = t;
            t = SSLsetAnnotations(i_10, u_57);
          }
        }
      else
        {
          ATerm q_58 = NULL,v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL,l_10 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              y_39 = ATgetArgument(t, 0);
              z_39 = ATgetArgument(t, 1);
              a_40 = ATgetArgument(t, 2);
              b_40 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(x_39);
          q_58 = t;
          t = SSL_is_string(y_39);
          v_58 = t;
          t = z_39;
          t = map_1_0(n_1, t);
          w_58 = t;
          t = a_40;
          t = map_1_0(o_1, t);
          x_58 = t;
          t = b_40;
          t = strategy_expression_0_0(t);
          y_58 = t;
          t = (ATerm) ATmakeAppl(sym_SDefT_4, v_58, w_58, x_58, y_58);
          l_10 = t;
          t = SSLsetAnnotations(l_10, q_58);
        }
      ;
      LocalPopChoice(l_7);
    }
  else
    {
      t = j_7;
      t = debug_1_0(p_1, t);
    }
  return(t);
}
ATerm map_1_0 (ATerm b_79 (ATerm), ATerm t)
{
  ATerm s_40 (ATerm t)
  {
    ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL;
    p_40 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_40;
      }
    else
      {
        ATerm s_59 = NULL,v_59 = NULL,w_59 = NULL,r_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_40 = ATgetFirst((ATermList) t);
            r_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_40);
        s_59 = t;
        t = q_40;
        t = b_79(t);
        v_59 = t;
        t = r_40;
        t = s_40(t);
        w_59 = t;
        t = (ATerm) ATinsert(CheckATermList(w_59), v_59);
        r_10 = t;
        t = SSLsetAnnotations(r_10, s_59);
      }
    return(t);
  }
  t = s_40(t);
  return(t);
}
ATerm Cons_2_0 (ATerm m_57 (ATerm), ATerm n_57 (ATerm), ATerm t)
{
  ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,t_10 = NULL;
  z_40 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_40 = ATgetFirst((ATermList) t);
      w_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_40);
  u_40 = t;
  t = v_40;
  t = m_57(t);
  x_40 = t;
  t = w_40;
  t = n_57(t);
  y_40 = t;
  t = (ATerm) ATinsert(CheckATermList(y_40), x_40);
  t_10 = t;
  t = SSLsetAnnotations(t_10, u_40);
  return(t);
}
ATerm t_3 (ATerm q_38, ATerm r_38, ATerm t)
{
  ATerm a_41 = NULL;
  t = SSL_fputc(q_38, r_38);
  a_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_41);
  return(t);
}
ATerm u_3 (ATerm e_42, ATerm f_42, ATerm t)
{
  ATerm b_41 = NULL;
  t = SSL_write_term_to_stream_text(e_42, f_42);
  b_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_41);
  return(t);
}
ATerm w_3 (ATerm y_91 (ATerm), ATerm d_401, ATerm i_42, ATerm t)
{
  ATerm c_41 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_401, term_n_7);
  t = z_3(t);
  c_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_41, i_42);
  t = y_91(t);
  t = fclose_0_0(t);
  t = i_42;
  return(t);
}
ATerm v_3 (ATerm a_42, ATerm b_42, ATerm t)
{
  ATerm d_41 = NULL;
  t = SSL_write_term_to_stream_baf(a_42, b_42);
  d_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_41);
  return(t);
}
ATerm s_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm k_60 = NULL,l_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_7 = ATgetArgument(t, 0);
      if(match_cons(o_7, sym_Stream_1))
        {
          k_60 = ATgetArgument(o_7, 0);
        }
      else
        _fail(t);
      l_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_3(k_60, l_60, t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm w_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_7 = ATgetArgument(t, 0);
      if(match_cons(p_7, sym_Stream_1))
        {
          z_60 = ATgetArgument(p_7, 0);
        }
      else
        _fail(t);
      a_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3(z_60, a_61, t);
  w_60 = t;
  t = term_r_7;
  x_60 = t;
  t = w_60;
  if(match_cons(t, sym_Stream_1))
    {
      y_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_r_7, w_60);
  t = t_3(x_60, y_60, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,y_42 = NULL,z_42 = NULL,w_10 = NULL,v_10 = NULL;
  i_41 = t;
  if(match_cons(t, sym__2))
    {
      p_41 = ATgetArgument(t, 0);
      q_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_41);
  o_41 = t;
  t = p_41;
  {
    ATerm t_7 = t;
    int u_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((h_41 != NULL) && (h_41 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                h_41 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(q_1, t);
        ;
        LocalPopChoice(u_7);
      }
    else
      {
        t = t_7;
        t = term_x_7;
        h_41 = t;
      }
    r_41 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_41, q_41);
    v_10 = t;
    t = SSLsetAnnotations(v_10, o_41);
    t = i_41;
    if(match_cons(t, sym__2))
      {
        k_41 = ATgetArgument(t, 0);
        l_41 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(i_41);
    j_41 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_41, (ATerm) ATmakeAppl(sym__2, not_null(h_41), l_41));
    w_10 = t;
    t = SSLsetAnnotations(w_10, j_41);
    n_41 = t;
    if(match_cons(t, sym__2))
      {
        y_42 = ATgetArgument(t, 0);
        z_42 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm y_7 = t;
      int f_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL,x_10 = NULL;
          t = SSLgetAnnotations(n_41);
          d_60 = t;
          t = y_42;
          t = fetch_1_0(s_1, t);
          g_60 = t;
          t = z_42;
          if(match_cons(t, sym__2))
            {
              i_60 = ATgetArgument(t, 0);
              j_60 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_3(u_1, i_60, j_60, t);
          h_60 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_60, h_60);
          x_10 = t;
          t = SSLsetAnnotations(x_10, d_60);
          ;
          LocalPopChoice(f_8);
        }
      else
        {
          t = y_7;
          {
            ATerm q_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL,y_10 = NULL;
            t = SSLgetAnnotations(n_41);
            q_60 = t;
            t = z_42;
            if(match_cons(t, sym__2))
              {
                u_60 = ATgetArgument(t, 0);
                v_60 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = w_3(v_1, u_60, v_60, t);
            t_60 = t;
            t = (ATerm) ATmakeAppl(sym__2, y_42, t_60);
            y_10 = t;
            t = SSLsetAnnotations(y_10, q_60);
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
ATerm apply_strategy_1_0 (ATerm a_95 (ATerm), ATerm t)
{
  ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL;
  g_43 = t;
  t = dtime_0_0(t);
  t = g_43;
  t = a_95(t);
  f_43 = t;
  t = dtime_0_0(t);
  c_43 = t;
  t = f_43;
  if(match_cons(t, sym__2))
    {
      d_43 = ATgetArgument(t, 0);
      e_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_43), (ATerm) ATmakeAppl(sym_Runtime_1, c_43)), e_43);
  return(t);
}
ATerm b_44 (ATerm v_43, ATerm t)
{
  t = SSL_fclose(v_43);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL;
  z_43 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_43 = ATgetArgument(t, 0);
      {
        ATerm g_8 = t;
        int h_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(y_43);
            ;
            LocalPopChoice(h_8);
          }
        else
          {
            t = g_8;
            t = b_44(z_43, t);
          }
      }
    }
  else
    {
      t = b_44(z_43, t);
    }
  return(t);
}
ATerm x_3 (ATerm g_42, ATerm t)
{
  t = SSL_read_term_from_stream(g_42);
  return(t);
}
ATerm y_3 (ATerm s_38, ATerm t_38, ATerm t)
{
  ATerm c_44 = NULL;
  t = SSL_fopen(s_38, t_38);
  c_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_44);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm d_44 = NULL;
  t = SSL_stdin_stream();
  d_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_44);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_44 = NULL;
  t = SSL_stdout_stream();
  e_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_44);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_44 = NULL;
  t = SSL_stderr_stream();
  f_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_44);
  return(t);
}
ATerm q_45 (ATerm l_44, ATerm t)
{
  ATerm m_44 = NULL;
  t = SSL_explode_term(l_44);
  if(match_cons(t, sym__2))
    {
      ATerm i_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_8 = ATgetArgument(t, 1);
        if(((ATgetType(j_8) == AT_LIST) && !(ATisEmpty(j_8))))
          {
            m_44 = ATgetFirst((ATermList) j_8);
            {
              ATerm k_8 = (ATerm) ATgetNext((ATermList) j_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_44;
  if(match_cons(t, sym_stderr_0))
    {
      t = m_44;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = m_44;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = m_44;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm r_45 (ATerm p_44, ATerm q_44, ATerm r_44, ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL,x_44 = NULL,d_11 = NULL;
  t = SSLgetAnnotations(r_44);
  u_44 = t;
  t = p_44;
  if(match_cons(t, sym_Path_1))
    {
      x_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_44, q_44);
  d_11 = t;
  t = SSLsetAnnotations(d_11, u_44);
  if(match_cons(t, sym__2))
    {
      s_44 = ATgetArgument(t, 0);
      t_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(s_44, t_44, t);
  return(t);
}
ATerm s_45 (ATerm d_45, ATerm e_45, ATerm f_45, ATerm t)
{
  ATerm g_45 = NULL,h_45 = NULL,i_45 = NULL,l_45 = NULL,e_11 = NULL;
  t = SSLgetAnnotations(f_45);
  i_45 = t;
  t = SSL_is_string(d_45);
  l_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_45, e_45);
  e_11 = t;
  t = SSLsetAnnotations(e_11, i_45);
  if(match_cons(t, sym__2))
    {
      g_45 = ATgetArgument(t, 0);
      h_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(g_45, h_45, t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL;
  n_45 = t;
  if(match_cons(t, sym__2))
    {
      o_45 = ATgetArgument(t, 0);
      p_45 = ATgetArgument(t, 1);
      {
        ATerm l_8 = t;
        int m_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_45(n_45, t);
            ;
            LocalPopChoice(m_8);
          }
        else
          {
            t = l_8;
            {
              ATerm n_8 = t;
              int o_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_45(o_45, p_45, n_45, t);
                  ;
                  LocalPopChoice(o_8);
                }
              else
                {
                  t = n_8;
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
ATerm w_1 (ATerm t)
{
  t = term_p_8;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL;
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_45 = NULL;
      w_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_45, term_s_8);
      t = z_3(t);
      ;
      LocalPopChoice(r_8);
    }
  else
    {
      t = q_8;
      t = debug_1_0(w_1, t);
      _fail(t);
    }
  u_45 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_3(v_45, t);
  t_45 = t;
  t = u_45;
  t = fclose_0_0(t);
  t = t_45;
  return(t);
}
ATerm fetch_1_0 (ATerm l_79 (ATerm), ATerm t)
{
  ATerm u_46 (ATerm t)
  {
    ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL;
    r_46 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_46 = ATgetFirst((ATermList) t);
        t_46 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm t_8 = t;
      int u_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_61 = NULL,p_61 = NULL,h_11 = NULL;
          t = SSLgetAnnotations(r_46);
          m_61 = t;
          t = s_46;
          t = l_79(t);
          p_61 = t;
          t = (ATerm) ATinsert(CheckATermList(t_46), p_61);
          h_11 = t;
          t = SSLsetAnnotations(h_11, m_61);
          ;
          LocalPopChoice(u_8);
        }
      else
        {
          t = t_8;
          {
            ATerm x_61 = NULL,a_62 = NULL,i_11 = NULL;
            t = SSLgetAnnotations(r_46);
            x_61 = t;
            t = t_46;
            t = u_46(t);
            a_62 = t;
            t = (ATerm) ATinsert(CheckATermList(a_62), s_46);
            i_11 = t;
            t = SSLsetAnnotations(i_11, x_61);
          }
        }
    }
    return(t);
  }
  t = u_46(t);
  return(t);
}
ATerm s_3 (ATerm f_33, ATerm g_33, ATerm t)
{
  t = SSL_strcat(f_33, g_33);
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm v_8 = t;
  int y_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(y_8);
    }
  else
    {
      t = v_8;
    }
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_c_9;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm d_9 = t;
  int e_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_47 = NULL;
      d_47 = t;
      t = SSL_is_string(d_47);
      ;
      LocalPopChoice(e_9);
    }
  else
    {
      t = d_9;
      {
        ATerm f_9 = t;
        int g_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(x_1, t);
            ;
            LocalPopChoice(g_9);
          }
        else
          {
            t = f_9;
            {
              ATerm j_47 = NULL,k_47 = NULL,l_47 = NULL;
              j_47 = t;
              if(match_cons(t, sym_Path_1))
                {
                  k_47 = ATgetArgument(t, 0);
                  t = k_47;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      k_47 = ATgetArgument(t, 0);
                      t = k_47;
                      {
                        ATerm h_9 = t;
                        int i_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(i_9);
                          }
                        else
                          {
                            t = h_9;
                            t = debug_1_0(y_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm u_47 = NULL,v_47 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          k_47 = ATgetArgument(t, 0);
                          l_47 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = k_47;
                      t = eval_config_0_0(t);
                      u_47 = t;
                      t = l_47;
                      t = eval_config_0_0(t);
                      v_47 = t;
                      t = (ATerm) ATmakeAppl(sym__2, u_47, v_47);
                      t = s_3(u_47, v_47, t);
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
  ATerm z_47 = NULL,a_48 = NULL;
  z_47 = t;
  t = term_j_9;
  a_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_9, z_47);
  t = c_4(a_48, z_47, t);
  {
    ATerm k_9 = t;
    int l_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_48 = NULL,d_48 = NULL;
        t = eval_config_0_0(t);
        b_48 = t;
        t = term_j_9;
        d_48 = t;
        t = SSL_table_put(d_48, z_47, b_48);
        t = b_48;
        ;
        LocalPopChoice(l_9);
      }
    else
      {
        t = k_9;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm j_93 (ATerm), ATerm t)
{
  ATerm k_48 = NULL;
  k_48 = t;
  {
    ATerm m_9 = t;
    int n_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_48 = NULL;
        t = term_o_9;
        t = get_config_0_0(t);
        m_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_48, term_p_9);
        t = geq_0_0(t);
        t = k_48;
        t = j_93(t);
        ;
        LocalPopChoice(n_9);
      }
    else
      {
        t = m_9;
        t = k_48;
      }
  }
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm p_48 = NULL;
  p_48 = t;
  if(match_string(t, "-k"))
    {
      t = p_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_48;
    }
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm q_48 = NULL,r_48 = NULL,s_48 = NULL;
  q_48 = t;
  t = SSL_string_to_int(q_48);
  r_48 = t;
  t = term_r_9;
  s_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_9, r_48);
  t = f_4(s_48, r_48, t);
  t = q_48;
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_s_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_2, j_2, l_2, t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm u_48 = NULL;
  u_48 = t;
  if(match_string(t, "-S"))
    {
      t = u_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = u_48;
    }
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL;
  t = term_o_9;
  v_48 = t;
  t = term_t_9;
  w_48 = t;
  t = term_u_9;
  t = f_4(v_48, w_48, t);
  t = term_v_9;
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_w_9;
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
  ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL;
  x_48 = t;
  t = SSL_string_to_int(x_48);
  y_48 = t;
  t = term_o_9;
  z_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_9, y_48);
  t = f_4(z_48, y_48, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_48);
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_x_9;
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
  ATerm a_49 = NULL,b_49 = NULL;
  t = term_a_10;
  a_49 = t;
  t = term_w_5;
  b_49 = t;
  t = term_b_10;
  t = f_4(a_49, b_49, t);
  t = term_c_10;
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_d_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_10 = t;
  int f_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_2, n_2, o_2, t);
      ;
      LocalPopChoice(f_10);
    }
  else
    {
      t = e_10;
      {
        ATerm g_10 = t;
        int m_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_2, q_2, r_2, t);
            ;
            LocalPopChoice(m_10);
          }
        else
          {
            t = g_10;
            t = Option_3_0(s_2, t_2, u_2, t);
          }
      }
    }
  return(t);
}
ATerm f_4 (ATerm h_43, ATerm i_43, ATerm t)
{
  ATerm c_49 = NULL;
  t = term_j_9;
  c_49 = t;
  t = SSL_table_put(c_49, h_43, i_43);
  t = (ATerm) ATmakeAppl(sym__3, term_j_9, h_43, i_43);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm f_49 = NULL,g_49 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_49 = NULL,i_49 = NULL,j_49 = NULL;
      t = term_w_5;
      t = h_0(t);
      h_49 = t;
      t = term_n_10;
      i_49 = t;
      t = term_o_10;
      j_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_10, term_o_10, h_49);
      t = d_4(i_49, j_49, h_49, t);
      _fail(t);
    }
  else
    {
      ATerm m_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_49 = ATgetFirst((ATermList) t);
          g_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_49;
      t = d_0(t);
      t = term_w_5;
      t = g_0(t);
      m_49 = t;
      t = (ATerm) ATinsert(CheckATermList(g_49), m_49);
    }
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm o_49 = NULL;
  o_49 = t;
  if(match_string(t, "-o"))
    {
      t = o_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_49;
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm p_49 = NULL,q_49 = NULL;
  p_49 = t;
  t = term_p_10;
  q_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_10, p_49);
  t = f_4(q_49, p_49, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_49);
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_q_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_2, w_2, z_2, t);
  return(t);
}
ATerm d_4 (ATerm f_48, ATerm g_48, ATerm e_48, ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL;
  s_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_48, g_48);
  {
    ATerm s_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_10 = ATgetArgument(t, 0);
            ATerm a_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_48, g_48);
        t = c_4(f_48, g_48, t);
        ;
        LocalPopChoice(u_10);
      }
    else
      {
        t = s_10;
        t = (ATerm) ATempty;
      }
    t_49 = t;
    t = (ATerm) ATinsert(CheckATermList(t_49), e_48);
    u_49 = t;
    t = SSL_table_put(f_48, g_48, u_49);
    t = s_49;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_50 = NULL,i_50 = NULL,j_50 = NULL;
      t = term_w_5;
      t = m_0(t);
      h_50 = t;
      t = term_n_10;
      i_50 = t;
      t = term_o_10;
      j_50 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_10, term_o_10, h_50);
      t = d_4(i_50, j_50, h_50, t);
      _fail(t);
    }
  else
    {
      ATerm n_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_50 = ATgetFirst((ATermList) t);
          e_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_50;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_50 = ATgetFirst((ATermList) t);
          g_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_50;
      t = k_0(t);
      t = f_50;
      t = l_0(t);
      n_50 = t;
      t = (ATerm) ATinsert(CheckATermList(g_50), n_50);
    }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm p_50 = NULL;
  p_50 = t;
  if(match_string(t, "-i"))
    {
      t = p_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_50;
    }
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm q_50 = NULL,r_50 = NULL;
  q_50 = t;
  t = term_b_11;
  r_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_11, q_50);
  t = f_4(r_50, q_50, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_50);
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = term_c_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_3, g_3, n_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_5;
  t = whoami_0_0(t);
  s_50 = t;
  t = term_r_6;
  u_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_f_11), s_50);
  v_50 = t;
  t = SSL_printnl(u_50, v_50);
  t = term_v_6;
  t_50 = t;
  t = SSL_exit(t_50);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_g_11;
  t = get_config_0_0(t);
  return(t);
}
ATerm a_4 (ATerm q_35, ATerm r_35, ATerm t)
{
  ATerm j_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_35, r_35);
      ;
      LocalPopChoice(k_11);
    }
  else
    {
      t = j_11;
      t = SSL_addr(q_35, r_35);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_85 (ATerm), ATerm f_85 (ATerm), ATerm t)
{
  ATerm x_50 = NULL,y_50 = NULL,z_50 = NULL;
  x_50 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_50;
      t = e_85(t);
    }
  else
    {
      ATerm c_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_50 = ATgetFirst((ATermList) t);
          z_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_50;
      t = foldr_2_0(e_85, f_85, t);
      c_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_50, c_51);
      t = f_85(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_t_9;
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm u_62 = NULL,v_62 = NULL;
  if(match_cons(t, sym__2))
    {
      u_62 = ATgetArgument(t, 0);
      v_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_4(u_62, v_62, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_51 = NULL,q_62 = NULL,r_62 = NULL;
  t = times_0_0(t);
  r_62 = t;
  t = SSL_explode_term(r_62);
  if(match_cons(t, sym__2))
    {
      ATerm n_11 = ATgetArgument(t, 0);
      q_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_62;
  t = foldr_2_0(o_3, p_3, t);
  f_51 = t;
  t = SSL_TicksToSeconds(f_51);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_51 = NULL,r_51 = NULL,s_51 = NULL;
  q_51 = t;
  if(match_cons(t, sym__2))
    {
      r_51 = ATgetArgument(t, 0);
      s_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_51;
        if((r_51 != t))
          {
            _fail(t);
          }
        t = q_51;
        ;
        LocalPopChoice(t_11);
      }
    else
      {
        t = p_11;
        t = (ATerm) ATmakeAppl(sym__2, r_51, s_51);
        {
          ATerm u_11 = t;
          int w_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_51, s_51);
              ;
              LocalPopChoice(w_11);
            }
          else
            {
              t = u_11;
              t = SSL_gtr(r_51, s_51);
            }
          t = (ATerm) ATmakeAppl(sym__2, r_51, s_51);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_93 (ATerm), ATerm t)
{
  ATerm w_51 = NULL;
  w_51 = t;
  {
    ATerm b_12 = t;
    int c_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_51 = NULL;
        t = term_o_9;
        t = get_config_0_0(t);
        y_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_51, term_v_6);
        t = geq_0_0(t);
        t = w_51;
        t = i_93(t);
        ;
        LocalPopChoice(c_12);
      }
    else
      {
        t = b_12;
        t = w_51;
      }
  }
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm a_52 = NULL,b_52 = NULL,d_52 = NULL,e_52 = NULL;
  t = run_time_0_0(t);
  a_52 = t;
  t = term_w_5;
  t = whoami_0_0(t);
  b_52 = t;
  t = term_r_6;
  d_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_12), a_52), term_d_12), b_52);
  e_52 = t;
  t = SSL_printnl(d_52, e_52);
  t = (ATerm) ATmakeAppl(sym__2, term_r_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_12), a_52), term_d_12), b_52));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_52 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_9;
  f_52 = t;
  t = SSL_exit(f_52);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm n_52 = NULL,o_52 = NULL;
  o_52 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = o_52;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          n_52 = ATgetArgument(t, 0);
          {
            ATerm h_63 = NULL,l_11 = NULL;
            t = SSLgetAnnotations(o_52);
            h_63 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, n_52);
            l_11 = t;
            t = SSLsetAnnotations(l_11, h_63);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = o_52;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm y_95 (ATerm), ATerm t)
{
  ATerm f_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_12;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_12);
    }
  else
    {
      t = f_12;
      t = fetch_1_0(b_4, t);
    }
  t = y_95(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm r_52 = NULL,s_52 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_52 = ATgetFirst((ATermList) t);
      s_52 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_52 = NULL,x_52 = NULL;
        ATerm e_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(w_52)), not_null(x_52));
          return(t);
        }
        t = s_52;
        t = j_0(t);
        if(((w_52 != NULL) && (w_52 != t)))
          _fail(t);
        else
          w_52 = t;
        t = r_52;
        t = i_0(t);
        if(((x_52 != NULL) && (x_52 != t)))
          _fail(t);
        else
          x_52 = t;
        t = s_52;
        t = reverse_acc_2_0(i_0, e_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_5;
      t = j_0(t);
    }
  return(t);
}
ATerm c_4 (ATerm w_49, ATerm x_49, ATerm t)
{
  t = SSL_table_get(w_49, x_49);
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm b_53 = NULL,c_53 = NULL,d_53 = NULL,o_11 = NULL;
  d_53 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_53);
  b_53 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, c_53);
  o_11 = t;
  t = SSLsetAnnotations(o_11, b_53);
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm f_53 = NULL;
  f_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_53), term_i_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_52 = NULL,a_53 = NULL;
  ATerm j_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(k_12);
    }
  else
    {
      t = j_12;
      t = fetch_1_0(g_4, t);
    }
  t = term_l_12;
  t = echo_0_0(t);
  t = term_n_10;
  z_52 = t;
  t = term_o_10;
  a_53 = t;
  t = term_m_12;
  t = c_4(z_52, a_53, t);
  t = reverse_acc_2_0(_id, h_4, t);
  t = map_1_0(i_4, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_53 = NULL,i_53 = NULL,j_53 = NULL;
  h_53 = t;
  {
    ATerm n_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_53;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_12 = ATgetFirst((ATermList) t);
                ATerm q_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_53;
          }
        ;
        LocalPopChoice(o_12);
      }
    else
      {
        t = n_12;
        t = (ATerm) ATinsert(ATempty, h_53);
      }
    i_53 = t;
    t = term_x_7;
    j_53 = t;
    t = SSL_printnl(j_53, i_53);
    t = h_53;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_g_11;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm n_53 = NULL,o_53 = NULL;
  t = term_r_12;
  n_53 = t;
  t = term_w_5;
  o_53 = t;
  t = term_s_12;
  t = f_4(n_53, o_53, t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_t_12;
  return(t);
}
ATerm n_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm p_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL;
  t = term_r_12;
  r_53 = t;
  t = term_w_5;
  s_53 = t;
  t = term_s_12;
  t = f_4(r_53, s_53, t);
  t = term_u_12;
  p_53 = t;
  t = term_w_5;
  q_53 = t;
  t = term_v_12;
  t = f_4(p_53, q_53, t);
  t = term_w_12;
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_x_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm a_13 = t;
  int b_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_4, l_4, m_4, t);
      ;
      LocalPopChoice(b_13);
    }
  else
    {
      t = a_13;
      t = Option_3_0(n_4, o_4, p_4, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_98 (ATerm), ATerm t)
{
  ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL,c_54 = NULL,d_54 = NULL,q_11 = NULL;
  x_53 = t;
  {
    ATerm f_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_13;
        t = b_98(t);
        ;
        LocalPopChoice(g_13);
      }
    else
      {
        t = f_13;
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
    t = term_g_11;
    d_54 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_g_11, z_53);
    t = f_4(d_54, z_53, t);
    t = a_54;
    {
      ATerm n_54 (ATerm t)
      {
        ATerm i_13 = t;
        int j_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_13 = t;
            int m_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_54 = NULL;
                g_54 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = g_54;
                ;
                LocalPopChoice(m_13);
              }
            else
              {
                t = k_13;
                t = b_98(t);
                t = Cons_2_0(_id, n_54, t);
              }
            ;
            LocalPopChoice(j_13);
          }
        else
          {
            t = i_13;
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
      c_54 = t;
      t = (ATerm) ATinsert(CheckATermList(c_54), (ATerm) ATmakeAppl(sym_Program_1, z_53));
      q_11 = t;
      t = SSLsetAnnotations(q_11, y_53);
    }
  }
  return(t);
}
ATerm t_4 (ATerm t)
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
ATerm u_4 (ATerm t)
{
  ATerm a_55 = NULL,b_55 = NULL;
  t = term_h_12;
  a_55 = t;
  t = term_w_5;
  b_55 = t;
  t = term_n_13;
  t = f_4(a_55, b_55, t);
  t = term_o_13;
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_p_13;
  return(t);
}
ATerm x_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm a_98 (ATerm), ATerm t)
{
  ATerm s_54 = NULL,t_54 = NULL,u_54 = NULL,v_54 = NULL,w_54 = NULL,x_54 = NULL,y_54 = NULL;
  u_54 = t;
  t = term_n_10;
  w_54 = t;
  t = term_o_10;
  x_54 = t;
  t = (ATerm) ATempty;
  y_54 = t;
  t = SSL_table_put(w_54, x_54, y_54);
  t = u_54;
  {
    ATerm s_4 (ATerm t)
    {
      ATerm q_13 = t;
      int r_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_98(t);
          ;
          LocalPopChoice(r_13);
        }
      else
        {
          t = q_13;
          {
            ATerm t_13 = t;
            int u_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_4, u_4, w_4, t);
                ;
                LocalPopChoice(u_13);
              }
            else
              {
                t = t_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_4, t);
    {
      ATerm v_13 = t;
      int x_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_55 = NULL;
          i_55 = t;
          {
            ATerm y_13 = t;
            int z_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_63 = NULL;
                t = i_55;
                {
                  ATerm a_14 = t;
                  int b_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_h_12;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(b_14);
                    }
                  else
                    {
                      t = a_14;
                      t = fetch_1_0(x_4, t);
                    }
                  t = i_55;
                  t = default_system_usage_0_0(t);
                  t = term_t_9;
                  o_63 = t;
                  t = SSL_exit(o_63);
                }
                ;
                LocalPopChoice(z_13);
              }
            else
              {
                t = y_13;
                {
                  ATerm s_63 = NULL;
                  t = term_r_12;
                  t = get_config_0_0(t);
                  t = i_55;
                  t = default_system_about_0_0(t);
                  t = term_t_9;
                  s_63 = t;
                  t = SSL_exit(s_63);
                }
              }
          }
          ;
          LocalPopChoice(x_13);
        }
      else
        {
          t = v_13;
          {
            ATerm c_14 = t;
            int d_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_55 = NULL,k_55 = NULL,l_55 = NULL;
                ATerm y_4 (ATerm t)
                {
                  ATerm m_55 = NULL,n_55 = NULL,o_55 = NULL,v_11 = NULL;
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
                  v_11 = t;
                  t = SSLsetAnnotations(v_11, m_55);
                  return(t);
                }
                t = fetch_1_0(y_4, t);
                t = term_r_6;
                k_55 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_54)), term_e_14);
                l_55 = t;
                t = SSL_printnl(k_55, l_55);
                t = (ATerm) ATmakeAppl(sym__2, term_r_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_54)), term_e_14));
                t = default_system_usage_0_0(t);
                t = term_v_6;
                j_55 = t;
                t = SSL_exit(j_55);
                ;
                LocalPopChoice(d_14);
              }
            else
              {
                t = c_14;
              }
          }
        }
      t_54 = t;
      t = term_n_10;
      v_54 = t;
      t = SSL_table_destroy(v_54);
      t = t_54;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_96 (ATerm), ATerm b_96 (ATerm), ATerm c_96 (ATerm), ATerm d_96 (ATerm), ATerm t)
{
  ATerm t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL;
  t = parse_options_1_0(a_96, t);
  t_55 = t;
  t = term_f_14;
  w_55 = t;
  t = SSL_table_create(w_55);
  t = term_f_14;
  u_55 = t;
  t = term_g_14;
  v_55 = t;
  t = SSL_table_put(u_55, v_55, t_55);
  t = t_55;
  t = c_96(t);
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_96, t);
        ;
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
              t = d_96(t);
              t = report_success_0_0(t);
              ;
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
ATerm b_5 (ATerm t)
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
ATerm b_6 (ATerm t)
{
  ATerm x_55 = NULL,y_55 = NULL;
  t = term_l_14;
  x_55 = t;
  t = term_w_5;
  y_55 = t;
  t = term_m_14;
  t = f_4(x_55, y_55, t);
  t = term_n_14;
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = term_o_14;
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm z_55 = NULL,a_56 = NULL,b_56 = NULL,c_56 = NULL;
  z_55 = t;
  t = term_g_11;
  t = get_config_0_0(t);
  a_56 = t;
  t = term_r_6;
  b_56 = t;
  t = (ATerm) ATinsert(ATempty, a_56);
  c_56 = t;
  t = SSL_printnl(b_56, c_56);
  t = z_55;
  return(t);
}
ATerm iowrap_3_0 (ATerm j_95 (ATerm), ATerm k_95 (ATerm), ATerm l_95 (ATerm), ATerm t)
{
  ATerm z_4 (ATerm t)
  {
    ATerm p_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_95(t);
        ;
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
              t = input_option_0_0(t);
              ;
              LocalPopChoice(s_14);
            }
          else
            {
              t = r_14;
              {
                ATerm t_14 = t;
                int v_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(v_14);
                  }
                else
                  {
                    t = t_14;
                    {
                      ATerm x_14 = t;
                      int y_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(z_5, b_6, d_6, t);
                          ;
                          LocalPopChoice(y_14);
                        }
                      else
                        {
                          t = x_14;
                          {
                            ATerm z_14 = t;
                            int a_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(a_15);
                              }
                            else
                              {
                                t = z_14;
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
  ATerm d_5 (ATerm t)
  {
    ATerm d_56 = NULL,e_56 = NULL,f_56 = NULL;
    e_56 = t;
    {
      ATerm b_15 = t;
      int d_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_6 (ATerm t)
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
          t = fetch_1_0(f_6, t);
          ;
          LocalPopChoice(d_15);
        }
      else
        {
          t = b_15;
          t = term_f_15;
          d_56 = t;
        }
      t = not_null(d_56);
      t = ReadFromFile_0_0(t);
      f_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_56, f_56);
      t = apply_strategy_1_0(j_95, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(z_4, l_95, b_5, d_5, t);
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm i_56 = NULL,j_56 = NULL,k_56 = NULL,l_56 = NULL,m_56 = NULL,a_12 = NULL;
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
    ATerm g_15 = t;
    int h_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_57 = NULL,v_63 = NULL,x_63 = NULL,y_63 = NULL,z_63 = NULL,a_64 = NULL,b_64 = NULL,z_11 = NULL,y_11 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            a_57 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_56);
        v_63 = t;
        t = a_57;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_63 = ATgetFirst((ATermList) t);
            z_63 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_57);
        x_63 = t;
        t = z_63;
        t = Cons_2_0(l_6, o_6, t);
        a_64 = t;
        t = (ATerm) ATinsert(CheckATermList(a_64), y_63);
        y_11 = t;
        t = SSLsetAnnotations(y_11, x_63);
        b_64 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, b_64);
        z_11 = t;
        t = SSLsetAnnotations(z_11, v_63);
        ;
        LocalPopChoice(h_15);
      }
    else
      {
        t = g_15;
        t = debug_1_0(q_6, t);
      }
    l_56 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_56, l_56);
    a_12 = t;
    t = SSLsetAnnotations(a_12, i_56);
  }
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm c_64 = NULL,d_64 = NULL,e_64 = NULL,f_64 = NULL,x_11 = NULL;
  f_64 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      d_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_64);
  c_64 = t;
  t = d_64;
  t = map_1_0(strategy_definition_0_0, t);
  e_64 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, e_64);
  x_11 = t;
  t = SSLsetAnnotations(x_11, c_64);
  return(t);
}
ATerm o_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = term_i_15;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(g_6, _fail, default_usage_0_0, t);
  return(t);
}

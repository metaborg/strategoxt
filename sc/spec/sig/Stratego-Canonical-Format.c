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
ATerm term_z_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_k_9;
ATerm term_d_9;
ATerm term_t_8;
ATerm term_q_8;
ATerm term_w_7;
ATerm term_r_7;
ATerm term_m_7;
ATerm term_h_7;
ATerm term_e_7;
ATerm term_z_6;
ATerm term_w_6;
ATerm term_u_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_v_5;
void init_constant_terms (void)
{
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a match-term-expression: ", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym_stdout_0);
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
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_u_9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
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
ATerm debug_1_0 (ATerm r_91 (ATerm), ATerm);
ATerm b_0 (ATerm);
ATerm term_expression_0_0 (ATerm);
ATerm c_0 (ATerm);
ATerm match_term_exp_0_0 (ATerm);
ATerm CallT_3_0 (ATerm h_62 (ATerm), ATerm i_62 (ATerm), ATerm j_62 (ATerm), ATerm);
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
ATerm map_1_0 (ATerm w_78 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm i_57 (ATerm), ATerm j_57 (ATerm), ATerm);
ATerm t_3 (ATerm m_38, ATerm n_38, ATerm);
ATerm u_3 (ATerm a_42, ATerm b_42, ATerm);
ATerm w_3 (ATerm t_91 (ATerm), ATerm x_396, ATerm e_42, ATerm);
ATerm v_3 (ATerm w_41, ATerm x_41, ATerm);
ATerm s_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm v_94 (ATerm), ATerm);
ATerm y_43 (ATerm s_43, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm x_3 (ATerm c_42, ATerm);
ATerm y_3 (ATerm o_38, ATerm p_38, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm n_45 (ATerm i_44, ATerm);
ATerm o_45 (ATerm m_44, ATerm n_44, ATerm o_44, ATerm);
ATerm p_45 (ATerm a_45, ATerm b_45, ATerm c_45, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm w_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm g_79 (ATerm), ATerm);
ATerm s_3 (ATerm c_33, ATerm d_33, ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm e_93 (ATerm), ATerm);
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
ATerm e_4 (ATerm d_43, ATerm e_43, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm z_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm c_4 (ATerm b_48, ATerm c_48, ATerm a_48, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm d_3 (ATerm);
ATerm g_3 (ATerm);
ATerm n_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm z_3 (ATerm m_35, ATerm n_35, ATerm);
ATerm foldr_2_0 (ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm d_93 (ATerm), ATerm);
ATerm r_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm a_4 (ATerm);
ATerm need_help_1_0 (ATerm t_95 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm b_4 (ATerm s_49, ATerm t_49, ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm i_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm w_97 (ATerm), ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm parse_options_1_0 (ATerm v_97 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm v_95 (ATerm), ATerm w_95 (ATerm), ATerm x_95 (ATerm), ATerm y_95 (ATerm), ATerm);
ATerm a_5 (ATerm);
ATerm y_5 (ATerm);
ATerm a_6 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm iowrap_3_0 (ATerm e_95 (ATerm), ATerm f_95 (ATerm), ATerm g_95 (ATerm), ATerm);
ATerm f_6 (ATerm);
ATerm k_6 (ATerm);
ATerm n_6 (ATerm);
ATerm p_6 (ATerm);
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
  t = term_v_5;
  t = whoami_0_0(t);
  e_0 = t;
  t = term_q_6;
  n_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_6), e_0), term_r_6);
  o_0 = t;
  t = SSL_printnl(n_0, o_0);
  t = term_u_6;
  f_0 = t;
  t = SSL_exit(f_0);
  t = a_0;
  return(t);
}
ATerm debug_1_0 (ATerm r_91 (ATerm), ATerm t)
{
  ATerm s_0 = NULL,x_0 = NULL,c_1 = NULL,d_1 = NULL;
  s_0 = t;
  t = r_91(t);
  x_0 = t;
  t = term_q_6;
  c_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_0), x_0);
  d_1 = t;
  t = SSL_printnl(c_1, d_1);
  t = s_0;
  return(t);
}
ATerm b_0 (ATerm t)
{
  t = term_w_6;
  return(t);
}
ATerm term_expression_0_0 (ATerm t)
{
  ATerm x_6 = t;
  int y_6 = stack_ptr;
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
                ATerm p_0 = NULL,r_0 = NULL,a_2 = NULL;
                t = SSLgetAnnotations(s_5);
                p_0 = t;
                t = SSL_is_string(t_5);
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
                  t_5 = ATgetArgument(t, 0);
                  {
                    ATerm z_0 = NULL,b_1 = NULL,b_2 = NULL;
                    t = SSLgetAnnotations(s_5);
                    z_0 = t;
                    t = SSL_is_int(t_5);
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
                      t_5 = ATgetArgument(t, 0);
                      {
                        ATerm j_1 = NULL,l_1 = NULL,c_2 = NULL;
                        t = SSLgetAnnotations(s_5);
                        j_1 = t;
                        t = SSL_is_real(t_5);
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
                          t_5 = ATgetArgument(t, 0);
                          {
                            ATerm r_1 = NULL,t_1 = NULL,e_2 = NULL;
                            t = SSLgetAnnotations(s_5);
                            r_1 = t;
                            t = SSL_is_string(t_5);
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
                              t_5 = ATgetArgument(t, 0);
                              {
                                ATerm z_1 = NULL,k_2 = NULL,f_2 = NULL;
                                t = SSLgetAnnotations(s_5);
                                z_1 = t;
                                t = t_5;
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
                                  t_5 = ATgetArgument(t, 0);
                                  u_5 = ATgetArgument(t, 1);
                                  {
                                    ATerm c_3 = NULL,h_3 = NULL,i_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,h_2 = NULL,g_2 = NULL;
                                    t = SSLgetAnnotations(s_5);
                                    c_3 = t;
                                    t = t_5;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        k_3 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(t_5);
                                    i_3 = t;
                                    t = SSL_is_string(k_3);
                                    l_3 = t;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, l_3);
                                    g_2 = t;
                                    t = SSLsetAnnotations(g_2, i_3);
                                    m_3 = t;
                                    t = u_5;
                                    t = term_expression_0_0(t);
                                    h_3 = t;
                                    t = (ATerm) ATmakeAppl(sym_As_2, m_3, h_3);
                                    h_2 = t;
                                    t = SSLsetAnnotations(h_2, c_3);
                                  }
                                }
                              else
                                {
                                  ATerm j_4 = NULL,p_4 = NULL,q_4 = NULL,i_2 = NULL;
                                  if(match_cons(t, sym_Op_2))
                                    {
                                      t_5 = ATgetArgument(t, 0);
                                      u_5 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(s_5);
                                  j_4 = t;
                                  t = SSL_is_string(t_5);
                                  p_4 = t;
                                  t = u_5;
                                  t = map_1_0(term_expression_0_0, t);
                                  q_4 = t;
                                  t = (ATerm) ATmakeAppl(sym_Op_2, p_4, q_4);
                                  i_2 = t;
                                  t = SSLsetAnnotations(i_2, j_4);
                                }
                            }
                        }
                    }
                }
            }
        }
      ;
      LocalPopChoice(y_6);
    }
  else
    {
      t = x_6;
      t = debug_1_0(b_0, t);
    }
  return(t);
}
ATerm c_0 (ATerm t)
{
  t = term_z_6;
  return(t);
}
ATerm match_term_exp_0_0 (ATerm t)
{
  ATerm a_7 = t;
  int c_7 = stack_ptr;
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
                ATerm x_5 = NULL,z_5 = NULL,x_2 = NULL;
                t = SSLgetAnnotations(l_11);
                x_5 = t;
                t = SSL_is_string(p_11);
                z_5 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, z_5);
                x_2 = t;
                t = SSLsetAnnotations(x_2, x_5);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  p_11 = ATgetArgument(t, 0);
                  {
                    ATerm i_6 = NULL,l_6 = NULL,y_2 = NULL;
                    t = SSLgetAnnotations(l_11);
                    i_6 = t;
                    t = SSL_is_int(p_11);
                    l_6 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, l_6);
                    y_2 = t;
                    t = SSLsetAnnotations(y_2, i_6);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      p_11 = ATgetArgument(t, 0);
                      {
                        ATerm t_6 = NULL,v_6 = NULL,a_3 = NULL;
                        t = SSLgetAnnotations(l_11);
                        t_6 = t;
                        t = SSL_is_real(p_11);
                        v_6 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, v_6);
                        a_3 = t;
                        t = SSLsetAnnotations(a_3, t_6);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Str_1))
                        {
                          p_11 = ATgetArgument(t, 0);
                          {
                            ATerm b_7 = NULL,d_7 = NULL,b_3 = NULL;
                            t = SSLgetAnnotations(l_11);
                            b_7 = t;
                            t = SSL_is_string(p_11);
                            d_7 = t;
                            t = (ATerm) ATmakeAppl(sym_Str_1, d_7);
                            b_3 = t;
                            t = SSLsetAnnotations(b_3, b_7);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_BuildDefault_1))
                            {
                              p_11 = ATgetArgument(t, 0);
                              {
                                ATerm j_7 = NULL,l_7 = NULL,e_3 = NULL;
                                t = SSLgetAnnotations(l_11);
                                j_7 = t;
                                t = p_11;
                                t = match_term_exp_0_0(t);
                                l_7 = t;
                                t = (ATerm) ATmakeAppl(sym_BuildDefault_1, l_7);
                                e_3 = t;
                                t = SSLsetAnnotations(e_3, j_7);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_As_2))
                                {
                                  p_11 = ATgetArgument(t, 0);
                                  q_11 = ATgetArgument(t, 1);
                                  {
                                    ATerm v_7 = NULL,v_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,j_3 = NULL,f_3 = NULL;
                                    t = SSLgetAnnotations(l_11);
                                    v_7 = t;
                                    t = p_11;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        y_8 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(p_11);
                                    x_8 = t;
                                    t = SSL_is_string(y_8);
                                    z_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, z_8);
                                    f_3 = t;
                                    t = SSLsetAnnotations(f_3, x_8);
                                    a_9 = t;
                                    t = q_11;
                                    t = match_term_exp_0_0(t);
                                    v_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_As_2, a_9, v_8);
                                    j_3 = t;
                                    t = SSLsetAnnotations(j_3, v_7);
                                  }
                                }
                              else
                                {
                                  ATerm r_9 = NULL,x_9 = NULL,y_9 = NULL,q_3 = NULL;
                                  if(match_cons(t, sym_Op_2))
                                    {
                                      p_11 = ATgetArgument(t, 0);
                                      q_11 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(l_11);
                                  r_9 = t;
                                  t = SSL_is_string(p_11);
                                  x_9 = t;
                                  t = q_11;
                                  t = map_1_0(match_term_exp_0_0, t);
                                  y_9 = t;
                                  t = (ATerm) ATmakeAppl(sym_Op_2, x_9, y_9);
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
      LocalPopChoice(c_7);
    }
  else
    {
      t = a_7;
      t = debug_1_0(c_0, t);
    }
  return(t);
}
ATerm CallT_3_0 (ATerm h_62 (ATerm), ATerm i_62 (ATerm), ATerm j_62 (ATerm), ATerm t)
{
  ATerm w_12 = NULL,x_12 = NULL,a_13 = NULL,b_13 = NULL,d_13 = NULL,j_13 = NULL,r_13 = NULL,u_13 = NULL,u_4 = NULL;
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
  t = h_62(t);
  d_13 = t;
  t = a_13;
  t = i_62(t);
  j_13 = t;
  t = b_13;
  t = j_62(t);
  r_13 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, d_13, j_13, r_13);
  u_4 = t;
  t = SSLsetAnnotations(u_4, w_12);
  return(t);
}
ATerm q_0 (ATerm t)
{
  t = CallT_3_0(t_0, u_0, v_0, t);
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL,q_20 = NULL,k_5 = NULL;
  q_20 = t;
  if(match_cons(t, sym_SVar_1))
    {
      n_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_20);
  m_20 = t;
  t = SSL_is_string(n_20);
  o_20 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, o_20);
  k_5 = t;
  t = SSLsetAnnotations(k_5, m_20);
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
  ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL,v_20 = NULL,l_5 = NULL;
  v_20 = t;
  if(match_cons(t, sym_Var_1))
    {
      s_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_20);
  r_20 = t;
  t = SSL_is_string(s_20);
  t_20 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, t_20);
  l_5 = t;
  t = SSLsetAnnotations(l_5, r_20);
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm j_28 = NULL;
  j_28 = t;
  t = SSL_is_string(j_28);
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm m_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL,h_30 = NULL,p_7 = NULL,o_6 = NULL;
  h_30 = t;
  if(match_cons(t, sym_Call_2))
    {
      y_29 = ATgetArgument(t, 0);
      z_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_30);
  m_29 = t;
  t = y_29;
  if(match_cons(t, sym_SVar_1))
    {
      b_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_29);
  a_30 = t;
  t = SSL_is_string(b_30);
  c_30 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, c_30);
  o_6 = t;
  t = SSLsetAnnotations(o_6, a_30);
  d_30 = t;
  t = z_29;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, d_30, z_29);
  p_7 = t;
  t = SSLsetAnnotations(p_7, m_29);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL,q_7 = NULL;
  l_30 = t;
  if(match_cons(t, sym_Var_1))
    {
      j_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_30);
  i_30 = t;
  t = SSL_is_string(j_30);
  k_30 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, k_30);
  q_7 = t;
  t = SSLsetAnnotations(q_7, i_30);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL;
  c_35 = t;
  if(match_cons(t, sym_SDef_3))
    {
      d_35 = ATgetArgument(t, 0);
      f_35 = ATgetArgument(t, 1);
      g_35 = ATgetArgument(t, 2);
      {
        ATerm p_43 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL,z_7 = NULL;
        t = SSLgetAnnotations(c_35);
        p_43 = t;
        t = SSL_is_string(d_35);
        f_44 = t;
        t = f_35;
        t = map_1_0(g_1, t);
        g_44 = t;
        t = g_35;
        t = strategy_expression_0_0(t);
        h_44 = t;
        t = (ATerm) ATmakeAppl(sym_SDef_3, f_44, g_44, h_44);
        z_7 = t;
        t = SSLsetAnnotations(z_7, p_43);
      }
    }
  else
    {
      ATerm a_49 = NULL,l_50 = NULL,t_50 = NULL,f_51 = NULL,g_51 = NULL,c_8 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          d_35 = ATgetArgument(t, 0);
          f_35 = ATgetArgument(t, 1);
          g_35 = ATgetArgument(t, 2);
          h_35 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_35);
      a_49 = t;
      t = SSL_is_string(d_35);
      l_50 = t;
      t = f_35;
      t = map_1_0(h_1, t);
      t_50 = t;
      t = g_35;
      t = map_1_0(i_1, t);
      f_51 = t;
      t = h_35;
      t = strategy_expression_0_0(t);
      g_51 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, l_50, t_50, f_51, g_51);
      c_8 = t;
      t = SSLsetAnnotations(c_8, a_49);
    }
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL,y_7 = NULL;
  n_47 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      k_47 = ATgetArgument(t, 0);
      l_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_47);
  j_47 = t;
  t = SSL_is_string(k_47);
  m_47 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, m_47, l_47);
  y_7 = t;
  t = SSLsetAnnotations(y_7, j_47);
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm a_57 = NULL,b_57 = NULL,c_57 = NULL,d_57 = NULL,e_57 = NULL,a_8 = NULL;
  e_57 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      b_57 = ATgetArgument(t, 0);
      c_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_57);
  a_57 = t;
  t = SSL_is_string(b_57);
  d_57 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, d_57, c_57);
  a_8 = t;
  t = SSLsetAnnotations(a_8, a_57);
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm g_57 = NULL,h_57 = NULL,k_57 = NULL,l_57 = NULL,m_57 = NULL,b_8 = NULL;
  m_57 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      h_57 = ATgetArgument(t, 0);
      k_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_57);
  g_57 = t;
  t = SSL_is_string(h_57);
  l_57 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, l_57, k_57);
  b_8 = t;
  t = SSLsetAnnotations(b_8, g_57);
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = term_e_7;
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm f_7 = t;
  int g_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL;
      t_36 = t;
      if(match_cons(t, sym_Id_0))
        {
          t = t_36;
        }
      else
        {
          if(match_cons(t, sym_Fail_0))
            {
              t = t_36;
            }
          else
            {
              if(match_cons(t, sym_Not_1))
                {
                  u_36 = ATgetArgument(t, 0);
                  {
                    ATerm t_14 = NULL,v_14 = NULL,z_4 = NULL;
                    t = SSLgetAnnotations(t_36);
                    t_14 = t;
                    t = u_36;
                    t = strategy_expression_0_0(t);
                    v_14 = t;
                    t = (ATerm) ATmakeAppl(sym_Not_1, v_14);
                    z_4 = t;
                    t = SSLsetAnnotations(z_4, t_14);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Test_1))
                    {
                      u_36 = ATgetArgument(t, 0);
                      {
                        ATerm b_15 = NULL,d_15 = NULL,b_5 = NULL;
                        t = SSLgetAnnotations(t_36);
                        b_15 = t;
                        t = u_36;
                        t = strategy_expression_0_0(t);
                        d_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Test_1, d_15);
                        b_5 = t;
                        t = SSLsetAnnotations(b_5, b_15);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Seq_2))
                        {
                          u_36 = ATgetArgument(t, 0);
                          v_36 = ATgetArgument(t, 1);
                          {
                            ATerm k_15 = NULL,n_15 = NULL,o_15 = NULL,d_5 = NULL;
                            t = SSLgetAnnotations(t_36);
                            k_15 = t;
                            t = u_36;
                            t = strategy_expression_0_0(t);
                            n_15 = t;
                            t = v_36;
                            t = strategy_expression_0_0(t);
                            o_15 = t;
                            t = (ATerm) ATmakeAppl(sym_Seq_2, n_15, o_15);
                            d_5 = t;
                            t = SSLsetAnnotations(d_5, k_15);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Choice_2))
                            {
                              u_36 = ATgetArgument(t, 0);
                              v_36 = ATgetArgument(t, 1);
                              {
                                ATerm w_15 = NULL,z_15 = NULL,a_16 = NULL,e_5 = NULL;
                                t = SSLgetAnnotations(t_36);
                                w_15 = t;
                                t = u_36;
                                t = strategy_expression_0_0(t);
                                z_15 = t;
                                t = v_36;
                                t = strategy_expression_0_0(t);
                                a_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Choice_2, z_15, a_16);
                                e_5 = t;
                                t = SSLsetAnnotations(e_5, w_15);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_LChoice_2))
                                {
                                  u_36 = ATgetArgument(t, 0);
                                  v_36 = ATgetArgument(t, 1);
                                  {
                                    ATerm j_16 = NULL,n_16 = NULL,o_16 = NULL,f_5 = NULL;
                                    t = SSLgetAnnotations(t_36);
                                    j_16 = t;
                                    t = u_36;
                                    t = strategy_expression_0_0(t);
                                    n_16 = t;
                                    t = v_36;
                                    t = strategy_expression_0_0(t);
                                    o_16 = t;
                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, n_16, o_16);
                                    f_5 = t;
                                    t = SSLsetAnnotations(f_5, j_16);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      u_36 = ATgetArgument(t, 0);
                                      v_36 = ATgetArgument(t, 1);
                                      r_36 = ATgetArgument(t, 2);
                                      {
                                        ATerm g_17 = NULL,k_17 = NULL,l_17 = NULL,q_17 = NULL,g_5 = NULL;
                                        t = SSLgetAnnotations(t_36);
                                        g_17 = t;
                                        t = u_36;
                                        t = strategy_expression_0_0(t);
                                        k_17 = t;
                                        t = v_36;
                                        t = strategy_expression_0_0(t);
                                        l_17 = t;
                                        t = r_36;
                                        t = strategy_expression_0_0(t);
                                        q_17 = t;
                                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, k_17, l_17, q_17);
                                        g_5 = t;
                                        t = SSLsetAnnotations(g_5, g_17);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_GChoice_2))
                                        {
                                          u_36 = ATgetArgument(t, 0);
                                          v_36 = ATgetArgument(t, 1);
                                          {
                                            ATerm d_18 = NULL,g_18 = NULL,h_18 = NULL,h_5 = NULL;
                                            t = SSLgetAnnotations(t_36);
                                            d_18 = t;
                                            t = u_36;
                                            t = strategy_expression_0_0(t);
                                            g_18 = t;
                                            t = v_36;
                                            t = strategy_expression_0_0(t);
                                            h_18 = t;
                                            t = (ATerm) ATmakeAppl(sym_GChoice_2, g_18, h_18);
                                            h_5 = t;
                                            t = SSLsetAnnotations(h_5, d_18);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LGChoice_2))
                                            {
                                              u_36 = ATgetArgument(t, 0);
                                              v_36 = ATgetArgument(t, 1);
                                              {
                                                ATerm d_19 = NULL,h_19 = NULL,i_19 = NULL,i_5 = NULL;
                                                t = SSLgetAnnotations(t_36);
                                                d_19 = t;
                                                t = u_36;
                                                t = strategy_expression_0_0(t);
                                                h_19 = t;
                                                t = v_36;
                                                t = strategy_expression_0_0(t);
                                                i_19 = t;
                                                t = (ATerm) ATmakeAppl(sym_LGChoice_2, h_19, i_19);
                                                i_5 = t;
                                                t = SSLsetAnnotations(i_5, d_19);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_CallT_3))
                                                {
                                                  u_36 = ATgetArgument(t, 0);
                                                  v_36 = ATgetArgument(t, 1);
                                                  r_36 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm x_19 = NULL,c_20 = NULL,d_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,m_5 = NULL,j_5 = NULL;
                                                    t = SSLgetAnnotations(t_36);
                                                    x_19 = t;
                                                    t = u_36;
                                                    if(match_cons(t, sym_SVar_1))
                                                      {
                                                        h_20 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSLgetAnnotations(u_36);
                                                    g_20 = t;
                                                    t = SSL_is_string(h_20);
                                                    i_20 = t;
                                                    t = (ATerm) ATmakeAppl(sym_SVar_1, i_20);
                                                    j_5 = t;
                                                    t = SSLsetAnnotations(j_5, g_20);
                                                    j_20 = t;
                                                    t = v_36;
                                                    t = map_1_0(q_0, t);
                                                    c_20 = t;
                                                    t = r_36;
                                                    t = map_1_0(w_0, t);
                                                    d_20 = t;
                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, j_20, c_20, d_20);
                                                    m_5 = t;
                                                    t = SSLsetAnnotations(m_5, x_19);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Rec_2))
                                                    {
                                                      u_36 = ATgetArgument(t, 0);
                                                      v_36 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm i_21 = NULL,o_21 = NULL,q_21 = NULL,n_5 = NULL;
                                                        t = SSLgetAnnotations(t_36);
                                                        i_21 = t;
                                                        t = SSL_is_string(u_36);
                                                        o_21 = t;
                                                        t = v_36;
                                                        t = strategy_expression_0_0(t);
                                                        q_21 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Rec_2, o_21, q_21);
                                                        n_5 = t;
                                                        t = SSLsetAnnotations(n_5, i_21);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Path_2))
                                                        {
                                                          u_36 = ATgetArgument(t, 0);
                                                          v_36 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm c_22 = NULL,f_22 = NULL,g_22 = NULL,o_5 = NULL;
                                                            t = SSLgetAnnotations(t_36);
                                                            c_22 = t;
                                                            t = SSL_is_int(u_36);
                                                            f_22 = t;
                                                            t = v_36;
                                                            t = strategy_expression_0_0(t);
                                                            g_22 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Path_2, f_22, g_22);
                                                            o_5 = t;
                                                            t = SSLsetAnnotations(o_5, c_22);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              u_36 = ATgetArgument(t, 0);
                                                              v_36 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm r_22 = NULL,u_22 = NULL,x_22 = NULL,p_5 = NULL;
                                                                t = SSLgetAnnotations(t_36);
                                                                r_22 = t;
                                                                t = SSL_is_string(u_36);
                                                                u_22 = t;
                                                                t = v_36;
                                                                t = map_1_0(strategy_expression_0_0, t);
                                                                x_22 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Cong_2, u_22, x_22);
                                                                p_5 = t;
                                                                t = SSLsetAnnotations(p_5, r_22);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_One_1))
                                                                {
                                                                  u_36 = ATgetArgument(t, 0);
                                                                  {
                                                                    ATerm g_23 = NULL,i_23 = NULL,q_5 = NULL;
                                                                    t = SSLgetAnnotations(t_36);
                                                                    g_23 = t;
                                                                    t = u_36;
                                                                    t = strategy_expression_0_0(t);
                                                                    i_23 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_One_1, i_23);
                                                                    q_5 = t;
                                                                    t = SSLsetAnnotations(q_5, g_23);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Some_1))
                                                                    {
                                                                      u_36 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm p_23 = NULL,s_23 = NULL,r_5 = NULL;
                                                                        t = SSLgetAnnotations(t_36);
                                                                        p_23 = t;
                                                                        t = u_36;
                                                                        t = strategy_expression_0_0(t);
                                                                        s_23 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Some_1, s_23);
                                                                        r_5 = t;
                                                                        t = SSLsetAnnotations(r_5, p_23);
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_All_1))
                                                                        {
                                                                          u_36 = ATgetArgument(t, 0);
                                                                          {
                                                                            ATerm z_23 = NULL,b_24 = NULL,w_5 = NULL;
                                                                            t = SSLgetAnnotations(t_36);
                                                                            z_23 = t;
                                                                            t = u_36;
                                                                            t = strategy_expression_0_0(t);
                                                                            b_24 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_All_1, b_24);
                                                                            w_5 = t;
                                                                            t = SSLsetAnnotations(w_5, z_23);
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Thread_1))
                                                                            {
                                                                              u_36 = ATgetArgument(t, 0);
                                                                              {
                                                                                ATerm k_24 = NULL,m_24 = NULL,b_6 = NULL;
                                                                                t = SSLgetAnnotations(t_36);
                                                                                k_24 = t;
                                                                                t = u_36;
                                                                                t = strategy_expression_0_0(t);
                                                                                m_24 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Thread_1, m_24);
                                                                                b_6 = t;
                                                                                t = SSLsetAnnotations(b_6, k_24);
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Match_1))
                                                                                {
                                                                                  u_36 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm u_24 = NULL,w_24 = NULL,g_6 = NULL;
                                                                                    t = SSLgetAnnotations(t_36);
                                                                                    u_24 = t;
                                                                                    t = u_36;
                                                                                    t = match_term_exp_0_0(t);
                                                                                    w_24 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, w_24);
                                                                                    g_6 = t;
                                                                                    t = SSLsetAnnotations(g_6, u_24);
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Build_1))
                                                                                    {
                                                                                      u_36 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm d_25 = NULL,f_25 = NULL,h_6 = NULL;
                                                                                        t = SSLgetAnnotations(t_36);
                                                                                        d_25 = t;
                                                                                        t = u_36;
                                                                                        t = term_expression_0_0(t);
                                                                                        f_25 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, f_25);
                                                                                        h_6 = t;
                                                                                        t = SSLsetAnnotations(h_6, d_25);
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Scope_2))
                                                                                        {
                                                                                          u_36 = ATgetArgument(t, 0);
                                                                                          v_36 = ATgetArgument(t, 1);
                                                                                          {
                                                                                            ATerm b_28 = NULL,g_28 = NULL,h_28 = NULL,j_6 = NULL;
                                                                                            t = SSLgetAnnotations(t_36);
                                                                                            b_28 = t;
                                                                                            t = u_36;
                                                                                            t = map_1_0(y_0, t);
                                                                                            g_28 = t;
                                                                                            t = v_36;
                                                                                            t = strategy_expression_0_0(t);
                                                                                            h_28 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Scope_2, g_28, h_28);
                                                                                            j_6 = t;
                                                                                            t = SSLsetAnnotations(j_6, b_28);
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_Where_1))
                                                                                            {
                                                                                              u_36 = ATgetArgument(t, 0);
                                                                                              {
                                                                                                ATerm q_28 = NULL,s_28 = NULL,m_6 = NULL;
                                                                                                t = SSLgetAnnotations(t_36);
                                                                                                q_28 = t;
                                                                                                t = u_36;
                                                                                                t = strategy_expression_0_0(t);
                                                                                                s_28 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Where_1, s_28);
                                                                                                m_6 = t;
                                                                                                t = SSLsetAnnotations(m_6, q_28);
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_PrimT_3))
                                                                                                {
                                                                                                  u_36 = ATgetArgument(t, 0);
                                                                                                  v_36 = ATgetArgument(t, 1);
                                                                                                  r_36 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm e_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL,t_7 = NULL;
                                                                                                    t = SSLgetAnnotations(t_36);
                                                                                                    e_29 = t;
                                                                                                    t = SSL_is_string(u_36);
                                                                                                    i_29 = t;
                                                                                                    t = v_36;
                                                                                                    t = map_1_0(a_1, t);
                                                                                                    j_29 = t;
                                                                                                    t = r_36;
                                                                                                    t = map_1_0(e_1, t);
                                                                                                    k_29 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_PrimT_3, i_29, j_29, k_29);
                                                                                                    t_7 = t;
                                                                                                    t = SSLsetAnnotations(t_7, e_29);
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  ATerm z_30 = NULL,e_31 = NULL,f_31 = NULL,d_8 = NULL;
                                                                                                  if(match_cons(t, sym_Let_2))
                                                                                                    {
                                                                                                      u_36 = ATgetArgument(t, 0);
                                                                                                      v_36 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = SSLgetAnnotations(t_36);
                                                                                                  z_30 = t;
                                                                                                  t = u_36;
                                                                                                  t = map_1_0(f_1, t);
                                                                                                  e_31 = t;
                                                                                                  t = v_36;
                                                                                                  t = strategy_expression_0_0(t);
                                                                                                  f_31 = t;
                                                                                                  t = (ATerm) ATmakeAppl(sym_Let_2, e_31, f_31);
                                                                                                  d_8 = t;
                                                                                                  t = SSLsetAnnotations(d_8, z_30);
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
      LocalPopChoice(g_7);
    }
  else
    {
      t = f_7;
      t = debug_1_0(k_1, t);
    }
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm z_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL,g_10 = NULL;
  d_58 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      a_58 = ATgetArgument(t, 0);
      b_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_58);
  z_57 = t;
  t = SSL_is_string(a_58);
  c_58 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, c_58, b_58);
  g_10 = t;
  t = SSLsetAnnotations(g_10, z_57);
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL,i_10 = NULL;
  b_59 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      y_58 = ATgetArgument(t, 0);
      z_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_59);
  x_58 = t;
  t = SSL_is_string(y_58);
  a_59 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, a_59, z_58);
  i_10 = t;
  t = SSLsetAnnotations(i_10, x_58);
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,j_10 = NULL;
  g_59 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      d_59 = ATgetArgument(t, 0);
      e_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_59);
  c_59 = t;
  t = SSL_is_string(d_59);
  f_59 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, f_59, e_59);
  j_10 = t;
  t = SSLsetAnnotations(j_10, c_59);
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_h_7;
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm i_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL;
      u_39 = t;
      if(match_cons(t, sym_SDef_3))
        {
          v_39 = ATgetArgument(t, 0);
          w_39 = ATgetArgument(t, 1);
          x_39 = ATgetArgument(t, 2);
          {
            ATerm r_57 = NULL,v_57 = NULL,w_57 = NULL,x_57 = NULL,h_10 = NULL;
            t = SSLgetAnnotations(u_39);
            r_57 = t;
            t = SSL_is_string(v_39);
            v_57 = t;
            t = w_39;
            t = map_1_0(m_1, t);
            w_57 = t;
            t = x_39;
            t = strategy_expression_0_0(t);
            x_57 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, v_57, w_57, x_57);
            h_10 = t;
            t = SSLsetAnnotations(h_10, r_57);
          }
        }
      else
        {
          ATerm n_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL,v_58 = NULL,k_10 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              v_39 = ATgetArgument(t, 0);
              w_39 = ATgetArgument(t, 1);
              x_39 = ATgetArgument(t, 2);
              y_39 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(u_39);
          n_58 = t;
          t = SSL_is_string(v_39);
          s_58 = t;
          t = w_39;
          t = map_1_0(n_1, t);
          t_58 = t;
          t = x_39;
          t = map_1_0(o_1, t);
          u_58 = t;
          t = y_39;
          t = strategy_expression_0_0(t);
          v_58 = t;
          t = (ATerm) ATmakeAppl(sym_SDefT_4, s_58, t_58, u_58, v_58);
          k_10 = t;
          t = SSLsetAnnotations(k_10, n_58);
        }
      ;
      LocalPopChoice(k_7);
    }
  else
    {
      t = i_7;
      t = debug_1_0(p_1, t);
    }
  return(t);
}
ATerm map_1_0 (ATerm w_78 (ATerm), ATerm t)
{
  ATerm p_40 (ATerm t)
  {
    ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL;
    m_40 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_40;
      }
    else
      {
        ATerm p_59 = NULL,s_59 = NULL,t_59 = NULL,q_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_40 = ATgetFirst((ATermList) t);
            o_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_40);
        p_59 = t;
        t = n_40;
        t = w_78(t);
        s_59 = t;
        t = o_40;
        t = p_40(t);
        t_59 = t;
        t = (ATerm) ATinsert(CheckATermList(t_59), s_59);
        q_10 = t;
        t = SSLsetAnnotations(q_10, p_59);
      }
    return(t);
  }
  t = p_40(t);
  return(t);
}
ATerm Cons_2_0 (ATerm i_57 (ATerm), ATerm j_57 (ATerm), ATerm t)
{
  ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,s_10 = NULL;
  w_40 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_40 = ATgetFirst((ATermList) t);
      t_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_40);
  r_40 = t;
  t = s_40;
  t = i_57(t);
  u_40 = t;
  t = t_40;
  t = j_57(t);
  v_40 = t;
  t = (ATerm) ATinsert(CheckATermList(v_40), u_40);
  s_10 = t;
  t = SSLsetAnnotations(s_10, r_40);
  return(t);
}
ATerm t_3 (ATerm m_38, ATerm n_38, ATerm t)
{
  ATerm x_40 = NULL;
  t = SSL_fputc(m_38, n_38);
  x_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_40);
  return(t);
}
ATerm u_3 (ATerm a_42, ATerm b_42, ATerm t)
{
  ATerm y_40 = NULL;
  t = SSL_write_term_to_stream_text(a_42, b_42);
  y_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_40);
  return(t);
}
ATerm w_3 (ATerm t_91 (ATerm), ATerm x_396, ATerm e_42, ATerm t)
{
  ATerm z_40 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_396, term_m_7);
  t = open_stream_0_0(t);
  z_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_40, e_42);
  t = t_91(t);
  t = fclose_0_0(t);
  t = e_42;
  return(t);
}
ATerm v_3 (ATerm w_41, ATerm x_41, ATerm t)
{
  ATerm a_41 = NULL;
  t = SSL_write_term_to_stream_baf(w_41, x_41);
  a_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_41);
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
  ATerm h_60 = NULL,i_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_7 = ATgetArgument(t, 0);
      if(match_cons(n_7, sym_Stream_1))
        {
          h_60 = ATgetArgument(n_7, 0);
        }
      else
        _fail(t);
      i_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_3(h_60, i_60, t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm t_60 = NULL,u_60 = NULL,v_60 = NULL,w_60 = NULL,x_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_7 = ATgetArgument(t, 0);
      if(match_cons(o_7, sym_Stream_1))
        {
          w_60 = ATgetArgument(o_7, 0);
        }
      else
        _fail(t);
      x_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3(w_60, x_60, t);
  t_60 = t;
  t = term_r_7;
  u_60 = t;
  t = t_60;
  if(match_cons(t, sym_Stream_1))
    {
      v_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_r_7, t_60);
  t = t_3(u_60, v_60, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,v_42 = NULL,w_42 = NULL,v_10 = NULL,u_10 = NULL;
  f_41 = t;
  if(match_cons(t, sym__2))
    {
      m_41 = ATgetArgument(t, 0);
      n_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_41);
  l_41 = t;
  t = m_41;
  {
    ATerm s_7 = t;
    int u_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((e_41 != NULL) && (e_41 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                e_41 = ATgetArgument(t, 0);
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
        t = s_7;
        t = term_w_7;
        e_41 = t;
      }
    if(((o_41 != NULL) && (o_41 != t)))
      _fail(t);
    else
      o_41 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_41, n_41);
    if(((u_10 != NULL) && (u_10 != t)))
      _fail(t);
    else
      u_10 = t;
    t = SSLsetAnnotations(u_10, l_41);
    t = f_41;
    if(match_cons(t, sym__2))
      {
        if(((h_41 != NULL) && (h_41 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          h_41 = ATgetArgument(t, 0);
        if(((i_41 != NULL) && (i_41 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          i_41 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(f_41);
    if(((g_41 != NULL) && (g_41 != t)))
      _fail(t);
    else
      g_41 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_41, (ATerm) ATmakeAppl(sym__2, not_null(e_41), i_41));
    if(((v_10 != NULL) && (v_10 != t)))
      _fail(t);
    else
      v_10 = t;
    t = SSLsetAnnotations(v_10, g_41);
    if(((k_41 != NULL) && (k_41 != t)))
      _fail(t);
    else
      k_41 = t;
    if(match_cons(t, sym__2))
      {
        if(((v_42 != NULL) && (v_42 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          v_42 = ATgetArgument(t, 0);
        if(((w_42 != NULL) && (w_42 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          w_42 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm x_7 = t;
      int e_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_60 = NULL,d_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL,w_10 = NULL;
          t = SSLgetAnnotations(k_41);
          a_60 = t;
          t = v_42;
          t = fetch_1_0(s_1, t);
          d_60 = t;
          t = w_42;
          if(match_cons(t, sym__2))
            {
              f_60 = ATgetArgument(t, 0);
              g_60 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_3(u_1, f_60, g_60, t);
          e_60 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_60, e_60);
          w_10 = t;
          t = SSLsetAnnotations(w_10, a_60);
          ;
          LocalPopChoice(e_8);
        }
      else
        {
          t = x_7;
          {
            ATerm n_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL,x_10 = NULL;
            t = SSLgetAnnotations(k_41);
            n_60 = t;
            t = w_42;
            if(match_cons(t, sym__2))
              {
                r_60 = ATgetArgument(t, 0);
                s_60 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = w_3(v_1, r_60, s_60, t);
            q_60 = t;
            t = (ATerm) ATmakeAppl(sym__2, v_42, q_60);
            x_10 = t;
            t = SSLsetAnnotations(x_10, n_60);
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
ATerm apply_strategy_1_0 (ATerm v_94 (ATerm), ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,f_43 = NULL;
  f_43 = t;
  t = dtime_0_0(t);
  t = f_43;
  t = v_94(t);
  c_43 = t;
  t = dtime_0_0(t);
  z_42 = t;
  t = c_43;
  if(match_cons(t, sym__2))
    {
      a_43 = ATgetArgument(t, 0);
      b_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_43), (ATerm) ATmakeAppl(sym_Runtime_1, z_42)), b_43);
  return(t);
}
ATerm y_43 (ATerm s_43, ATerm t)
{
  t = SSL_fclose(s_43);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_43 = NULL,w_43 = NULL;
  w_43 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_43 = ATgetArgument(t, 0);
      {
        ATerm f_8 = t;
        int g_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_43);
            ;
            LocalPopChoice(g_8);
          }
        else
          {
            t = f_8;
            t = y_43(w_43, t);
          }
      }
    }
  else
    {
      t = y_43(w_43, t);
    }
  return(t);
}
ATerm x_3 (ATerm c_42, ATerm t)
{
  t = SSL_read_term_from_stream(c_42);
  return(t);
}
ATerm y_3 (ATerm o_38, ATerm p_38, ATerm t)
{
  ATerm z_43 = NULL;
  t = SSL_fopen(o_38, p_38);
  z_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_43);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_44 = NULL;
  t = SSL_stdin_stream();
  a_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_44);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_44 = NULL;
  t = SSL_stdout_stream();
  b_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_44);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_44 = NULL;
  t = SSL_stderr_stream();
  c_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_44);
  return(t);
}
ATerm n_45 (ATerm i_44, ATerm t)
{
  ATerm j_44 = NULL;
  t = SSL_explode_term(i_44);
  if(match_cons(t, sym__2))
    {
      ATerm h_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_8 = ATgetArgument(t, 1);
        if(((ATgetType(i_8) == AT_LIST) && !(ATisEmpty(i_8))))
          {
            j_44 = ATgetFirst((ATermList) i_8);
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
  t = j_44;
  if(match_cons(t, sym_stderr_0))
    {
      t = j_44;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = j_44;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = j_44;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm o_45 (ATerm m_44, ATerm n_44, ATerm o_44, ATerm t)
{
  ATerm p_44 = NULL,q_44 = NULL,r_44 = NULL,y_44 = NULL,c_11 = NULL;
  t = SSLgetAnnotations(o_44);
  r_44 = t;
  t = m_44;
  if(match_cons(t, sym_Path_1))
    {
      y_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_44, n_44);
  c_11 = t;
  t = SSLsetAnnotations(c_11, r_44);
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
ATerm p_45 (ATerm a_45, ATerm b_45, ATerm c_45, ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL,i_45 = NULL,d_11 = NULL;
  t = SSLgetAnnotations(c_45);
  f_45 = t;
  t = SSL_is_string(a_45);
  i_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_45, b_45);
  d_11 = t;
  t = SSLsetAnnotations(d_11, f_45);
  if(match_cons(t, sym__2))
    {
      d_45 = ATgetArgument(t, 0);
      e_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(d_45, e_45, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_8 = ATgetArgument(t, 0);
      ATerm l_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  k_45 = t;
  if(match_cons(t, sym__2))
    {
      l_45 = ATgetArgument(t, 0);
      m_45 = ATgetArgument(t, 1);
      {
        ATerm m_8 = t;
        int n_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_45(k_45, t);
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
                  t = o_45(l_45, m_45, k_45, t);
                  ;
                  LocalPopChoice(p_8);
                }
              else
                {
                  t = o_8;
                  t = p_45(l_45, m_45, k_45, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_45(k_45, t);
    }
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_q_8;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_45 = NULL,r_45 = NULL,s_45 = NULL;
  ATerm r_8 = t;
  int s_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_45 = NULL;
      t_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_45, term_t_8);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(s_8);
    }
  else
    {
      t = r_8;
      t = debug_1_0(w_1, t);
      _fail(t);
    }
  r_45 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_3(s_45, t);
  q_45 = t;
  t = r_45;
  t = fclose_0_0(t);
  t = q_45;
  return(t);
}
ATerm fetch_1_0 (ATerm g_79 (ATerm), ATerm t)
{
  ATerm r_46 (ATerm t)
  {
    ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL;
    o_46 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_46 = ATgetFirst((ATermList) t);
        q_46 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_8 = t;
      int w_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_61 = NULL,m_61 = NULL,g_11 = NULL;
          t = SSLgetAnnotations(o_46);
          j_61 = t;
          t = p_46;
          t = g_79(t);
          m_61 = t;
          t = (ATerm) ATinsert(CheckATermList(q_46), m_61);
          g_11 = t;
          t = SSLsetAnnotations(g_11, j_61);
          ;
          LocalPopChoice(w_8);
        }
      else
        {
          t = u_8;
          {
            ATerm u_61 = NULL,x_61 = NULL,h_11 = NULL;
            t = SSLgetAnnotations(o_46);
            u_61 = t;
            t = q_46;
            t = r_46(t);
            x_61 = t;
            t = (ATerm) ATinsert(CheckATermList(x_61), p_46);
            h_11 = t;
            t = SSLsetAnnotations(h_11, u_61);
          }
        }
    }
    return(t);
  }
  t = r_46(t);
  return(t);
}
ATerm s_3 (ATerm c_33, ATerm d_33, ATerm t)
{
  t = SSL_strcat(c_33, d_33);
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm b_9 = t;
  int c_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(c_9);
    }
  else
    {
      t = b_9;
    }
  return(t);
}
ATerm y_1 (ATerm t)
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
      ATerm a_47 = NULL;
      a_47 = t;
      t = SSL_is_string(a_47);
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
            t = map_1_0(x_1, t);
            ;
            LocalPopChoice(h_9);
          }
        else
          {
            t = g_9;
            {
              ATerm g_47 = NULL,h_47 = NULL,i_47 = NULL;
              g_47 = t;
              if(match_cons(t, sym_Path_1))
                {
                  h_47 = ATgetArgument(t, 0);
                  t = h_47;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      h_47 = ATgetArgument(t, 0);
                      t = h_47;
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
                            t = debug_1_0(y_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm r_47 = NULL,s_47 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          h_47 = ATgetArgument(t, 0);
                          i_47 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = h_47;
                      t = eval_config_0_0(t);
                      r_47 = t;
                      t = i_47;
                      t = eval_config_0_0(t);
                      s_47 = t;
                      t = (ATerm) ATmakeAppl(sym__2, r_47, s_47);
                      t = s_3(r_47, s_47, t);
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
  ATerm w_47 = NULL,x_47 = NULL;
  w_47 = t;
  t = term_k_9;
  x_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_9, w_47);
  t = b_4(x_47, w_47, t);
  {
    ATerm l_9 = t;
    int m_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_47 = NULL,d_48 = NULL;
        t = eval_config_0_0(t);
        z_47 = t;
        t = term_k_9;
        d_48 = t;
        t = SSL_table_put(d_48, w_47, z_47);
        t = z_47;
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
ATerm if_verbose2_1_0 (ATerm e_93 (ATerm), ATerm t)
{
  ATerm h_48 = NULL;
  h_48 = t;
  {
    ATerm n_9 = t;
    int o_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_48 = NULL;
        t = term_p_9;
        t = get_config_0_0(t);
        j_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_48, term_q_9);
        t = geq_0_0(t);
        t = h_48;
        t = e_93(t);
        ;
        LocalPopChoice(o_9);
      }
    else
      {
        t = n_9;
        t = h_48;
      }
  }
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm m_48 = NULL;
  m_48 = t;
  if(match_string(t, "-k"))
    {
      t = m_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = m_48;
    }
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL;
  n_48 = t;
  t = SSL_string_to_int(n_48);
  o_48 = t;
  t = term_s_9;
  p_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_9, o_48);
  t = e_4(p_48, o_48, t);
  t = n_48;
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_t_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_2, j_2, l_2, t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm r_48 = NULL;
  r_48 = t;
  if(match_string(t, "-S"))
    {
      t = r_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = r_48;
    }
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL;
  t = term_p_9;
  s_48 = t;
  t = term_u_9;
  t_48 = t;
  t = term_v_9;
  t = e_4(s_48, t_48, t);
  t = term_w_9;
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_z_9;
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
  ATerm u_48 = NULL,v_48 = NULL,w_48 = NULL;
  u_48 = t;
  t = SSL_string_to_int(u_48);
  v_48 = t;
  t = term_p_9;
  w_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_9, v_48);
  t = e_4(w_48, v_48, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_48);
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
  ATerm x_48 = NULL,y_48 = NULL;
  t = term_b_10;
  x_48 = t;
  t = term_v_5;
  y_48 = t;
  t = term_c_10;
  t = e_4(x_48, y_48, t);
  t = term_d_10;
  return(t);
}
ATerm u_2 (ATerm t)
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
            t = Option_3_0(s_2, t_2, u_2, t);
          }
      }
    }
  return(t);
}
ATerm e_4 (ATerm d_43, ATerm e_43, ATerm t)
{
  ATerm z_48 = NULL;
  t = term_k_9;
  z_48 = t;
  t = SSL_table_put(z_48, d_43, e_43);
  t = (ATerm) ATmakeAppl(sym__3, term_k_9, d_43, e_43);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm c_49 = NULL,d_49 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL;
      t = term_v_5;
      t = h_0(t);
      e_49 = t;
      t = term_o_10;
      f_49 = t;
      t = term_p_10;
      g_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_10, term_p_10, e_49);
      t = c_4(f_49, g_49, e_49, t);
      _fail(t);
    }
  else
    {
      ATerm j_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_49 = ATgetFirst((ATermList) t);
          d_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_49;
      t = d_0(t);
      t = term_v_5;
      t = g_0(t);
      j_49 = t;
      t = (ATerm) ATinsert(CheckATermList(d_49), j_49);
    }
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm l_49 = NULL;
  l_49 = t;
  if(match_string(t, "-o"))
    {
      t = l_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = l_49;
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm m_49 = NULL,n_49 = NULL;
  m_49 = t;
  t = term_r_10;
  n_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_10, m_49);
  t = e_4(n_49, m_49, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, m_49);
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_t_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_2, w_2, z_2, t);
  return(t);
}
ATerm c_4 (ATerm b_48, ATerm c_48, ATerm a_48, ATerm t)
{
  ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL;
  p_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_48, c_48);
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
        t = (ATerm) ATmakeAppl(sym__2, b_48, c_48);
        t = b_4(b_48, c_48, t);
        ;
        LocalPopChoice(z_10);
      }
    else
      {
        t = y_10;
        t = (ATerm) ATempty;
      }
    q_49 = t;
    t = (ATerm) ATinsert(CheckATermList(q_49), a_48);
    r_49 = t;
    t = SSL_table_put(b_48, c_48, r_49);
    t = p_49;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm a_50 = NULL,b_50 = NULL,c_50 = NULL,d_50 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL;
      t = term_v_5;
      t = m_0(t);
      e_50 = t;
      t = term_o_10;
      f_50 = t;
      t = term_p_10;
      g_50 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_10, term_p_10, e_50);
      t = c_4(f_50, g_50, e_50, t);
      _fail(t);
    }
  else
    {
      ATerm k_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_50 = ATgetFirst((ATermList) t);
          b_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_50;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_50 = ATgetFirst((ATermList) t);
          d_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_50;
      t = k_0(t);
      t = c_50;
      t = l_0(t);
      k_50 = t;
      t = (ATerm) ATinsert(CheckATermList(d_50), k_50);
    }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm m_50 = NULL;
  m_50 = t;
  if(match_string(t, "-i"))
    {
      t = m_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = m_50;
    }
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm n_50 = NULL,o_50 = NULL;
  n_50 = t;
  t = term_e_11;
  o_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_11, n_50);
  t = e_4(o_50, n_50, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, n_50);
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = term_f_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_3, g_3, n_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_50 = NULL,q_50 = NULL,r_50 = NULL,s_50 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_5;
  t = whoami_0_0(t);
  p_50 = t;
  t = term_q_6;
  r_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_11), p_50);
  s_50 = t;
  t = SSL_printnl(r_50, s_50);
  t = term_u_6;
  q_50 = t;
  t = SSL_exit(q_50);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_j_11;
  t = get_config_0_0(t);
  return(t);
}
ATerm z_3 (ATerm m_35, ATerm n_35, ATerm t)
{
  ATerm m_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(m_35, n_35);
      ;
      LocalPopChoice(o_11);
    }
  else
    {
      t = m_11;
      t = SSL_addr(m_35, n_35);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm t)
{
  ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL;
  u_50 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_50;
      t = z_84(t);
    }
  else
    {
      ATerm z_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_50 = ATgetFirst((ATermList) t);
          w_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_50;
      t = foldr_2_0(z_84, a_85, t);
      z_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_50, z_50);
      t = a_85(t);
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
  t = term_u_9;
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm r_62 = NULL,s_62 = NULL;
  if(match_cons(t, sym__2))
    {
      r_62 = ATgetArgument(t, 0);
      s_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3(r_62, s_62, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm c_51 = NULL,n_62 = NULL,o_62 = NULL;
  t = times_0_0(t);
  o_62 = t;
  t = SSL_explode_term(o_62);
  if(match_cons(t, sym__2))
    {
      ATerm r_11 = ATgetArgument(t, 0);
      n_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_62;
  t = foldr_2_0(o_3, p_3, t);
  c_51 = t;
  t = SSL_TicksToSeconds(c_51);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_51 = NULL,o_51 = NULL,p_51 = NULL;
  n_51 = t;
  if(match_cons(t, sym__2))
    {
      o_51 = ATgetArgument(t, 0);
      p_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_11 = t;
    int v_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_51;
        if((o_51 != t))
          {
            _fail(t);
          }
        t = n_51;
        ;
        LocalPopChoice(v_11);
      }
    else
      {
        t = t_11;
        t = (ATerm) ATmakeAppl(sym__2, o_51, p_51);
        {
          ATerm a_12 = t;
          int b_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_51, p_51);
              ;
              LocalPopChoice(b_12);
            }
          else
            {
              t = a_12;
              t = SSL_gtr(o_51, p_51);
            }
          t = (ATerm) ATmakeAppl(sym__2, o_51, p_51);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_93 (ATerm), ATerm t)
{
  ATerm t_51 = NULL;
  t_51 = t;
  {
    ATerm c_12 = t;
    int d_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_51 = NULL;
        t = term_p_9;
        t = get_config_0_0(t);
        v_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_51, term_u_6);
        t = geq_0_0(t);
        t = t_51;
        t = d_93(t);
        ;
        LocalPopChoice(d_12);
      }
    else
      {
        t = c_12;
        t = t_51;
      }
  }
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm x_51 = NULL,y_51 = NULL,a_52 = NULL,b_52 = NULL;
  t = run_time_0_0(t);
  x_51 = t;
  t = term_v_5;
  t = whoami_0_0(t);
  y_51 = t;
  t = term_q_6;
  a_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_12), x_51), term_e_12), y_51);
  b_52 = t;
  t = SSL_printnl(a_52, b_52);
  t = (ATerm) ATmakeAppl(sym__2, term_q_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_12), x_51), term_e_12), y_51));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm c_52 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_9;
  c_52 = t;
  t = SSL_exit(c_52);
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm k_52 = NULL,l_52 = NULL;
  l_52 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = l_52;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          k_52 = ATgetArgument(t, 0);
          {
            ATerm e_63 = NULL,k_11 = NULL;
            t = SSLgetAnnotations(l_52);
            e_63 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, k_52);
            k_11 = t;
            t = SSLsetAnnotations(k_11, e_63);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = l_52;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm t_95 (ATerm), ATerm t)
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
  t = t_95(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm o_52 = NULL,p_52 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_52 = ATgetFirst((ATermList) t);
      p_52 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_52 = NULL,u_52 = NULL;
        ATerm d_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(t_52)), not_null(u_52));
          return(t);
        }
        t = p_52;
        t = j_0(t);
        if(((t_52 != NULL) && (t_52 != t)))
          _fail(t);
        else
          t_52 = t;
        t = o_52;
        t = i_0(t);
        if(((u_52 != NULL) && (u_52 != t)))
          _fail(t);
        else
          u_52 = t;
        t = p_52;
        t = reverse_acc_2_0(i_0, d_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_v_5;
      t = j_0(t);
    }
  return(t);
}
ATerm b_4 (ATerm s_49, ATerm t_49, ATerm t)
{
  t = SSL_table_get(s_49, t_49);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm y_52 = NULL,z_52 = NULL,a_53 = NULL,n_11 = NULL;
  a_53 = t;
  if(match_cons(t, sym_Program_1))
    {
      z_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_53);
  y_52 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, z_52);
  n_11 = t;
  t = SSLsetAnnotations(n_11, y_52);
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm c_53 = NULL;
  c_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_53), term_j_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_52 = NULL,x_52 = NULL;
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
  w_52 = t;
  t = term_p_10;
  x_52 = t;
  t = term_n_12;
  t = b_4(w_52, x_52, t);
  t = reverse_acc_2_0(_id, g_4, t);
  t = map_1_0(h_4, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_53 = NULL,f_53 = NULL,g_53 = NULL;
  e_53 = t;
  {
    ATerm o_12 = t;
    int p_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_53;
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
            t = e_53;
          }
        ;
        LocalPopChoice(p_12);
      }
    else
      {
        t = o_12;
        t = (ATerm) ATinsert(ATempty, e_53);
      }
    f_53 = t;
    t = term_w_7;
    g_53 = t;
    t = SSL_printnl(g_53, f_53);
    t = e_53;
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
ATerm k_4 (ATerm t)
{
  ATerm k_53 = NULL,l_53 = NULL;
  t = term_s_12;
  k_53 = t;
  t = term_v_5;
  l_53 = t;
  t = term_t_12;
  t = e_4(k_53, l_53, t);
  return(t);
}
ATerm l_4 (ATerm t)
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
  ATerm m_53 = NULL,n_53 = NULL,o_53 = NULL,p_53 = NULL;
  t = term_s_12;
  o_53 = t;
  t = term_v_5;
  p_53 = t;
  t = term_t_12;
  t = e_4(o_53, p_53, t);
  t = term_v_12;
  m_53 = t;
  t = term_v_5;
  n_53 = t;
  t = term_y_12;
  t = e_4(m_53, n_53, t);
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
      t = Option_3_0(i_4, k_4, l_4, t);
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
ATerm parse_options_p__1_0 (ATerm w_97 (ATerm), ATerm t)
{
  ATerm u_53 = NULL,v_53 = NULL,w_53 = NULL,x_53 = NULL,z_53 = NULL,a_54 = NULL,s_11 = NULL;
  u_53 = t;
  {
    ATerm g_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_13;
        t = w_97(t);
        ;
        LocalPopChoice(h_13);
      }
    else
      {
        t = g_13;
      }
    t = u_53;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_53 = ATgetFirst((ATermList) t);
        x_53 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_53);
    v_53 = t;
    t = term_j_11;
    a_54 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_j_11, w_53);
    t = e_4(a_54, w_53, t);
    t = x_53;
    {
      ATerm k_54 (ATerm t)
      {
        ATerm k_13 = t;
        int l_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_13 = t;
            int n_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_54 = NULL;
                d_54 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = d_54;
                ;
                LocalPopChoice(n_13);
              }
            else
              {
                t = m_13;
                t = w_97(t);
                t = Cons_2_0(_id, k_54, t);
              }
            ;
            LocalPopChoice(l_13);
          }
        else
          {
            t = k_13;
            {
              ATerm g_54 = NULL,h_54 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_54 = ATgetFirst((ATermList) t);
                  h_54 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(h_54), (ATerm) ATmakeAppl(sym_Undefined_1, g_54));
            }
          }
        return(t);
      }
      t = k_54(t);
      if(((z_53 != NULL) && (z_53 != t)))
        _fail(t);
      else
        z_53 = t;
      t = (ATerm) ATinsert(CheckATermList(z_53), (ATerm) ATmakeAppl(sym_Program_1, w_53));
      if(((s_11 != NULL) && (s_11 != t)))
        _fail(t);
      else
        s_11 = t;
      t = SSLsetAnnotations(s_11, v_53);
    }
  }
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm w_54 = NULL;
  w_54 = t;
  if(match_string(t, "--help"))
    {
      t = w_54;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = w_54;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = w_54;
        }
    }
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm x_54 = NULL,y_54 = NULL;
  t = term_i_12;
  x_54 = t;
  t = term_v_5;
  y_54 = t;
  t = term_o_13;
  t = e_4(x_54, y_54, t);
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
ATerm parse_options_1_0 (ATerm v_97 (ATerm), ATerm t)
{
  ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL,v_54 = NULL;
  r_54 = t;
  t = term_o_10;
  t_54 = t;
  t = term_p_10;
  u_54 = t;
  t = (ATerm) ATempty;
  v_54 = t;
  t = SSL_table_put(t_54, u_54, v_54);
  t = r_54;
  {
    ATerm r_4 (ATerm t)
    {
      ATerm s_13 = t;
      int t_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_97(t);
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
                t = Option_3_0(s_4, t_4, v_4, t);
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
    t = parse_options_p__1_0(r_4, t);
    {
      ATerm x_13 = t;
      int y_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_55 = NULL;
          f_55 = t;
          {
            ATerm z_13 = t;
            int a_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_63 = NULL;
                t = f_55;
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
                  t = f_55;
                  t = default_system_usage_0_0(t);
                  t = term_u_9;
                  l_63 = t;
                  t = SSL_exit(l_63);
                }
                ;
                LocalPopChoice(a_14);
              }
            else
              {
                t = z_13;
                {
                  ATerm p_63 = NULL;
                  t = term_s_12;
                  t = get_config_0_0(t);
                  t = f_55;
                  t = default_system_about_0_0(t);
                  t = term_u_9;
                  p_63 = t;
                  t = SSL_exit(p_63);
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
                ATerm g_55 = NULL,h_55 = NULL,i_55 = NULL;
                ATerm x_4 (ATerm t)
                {
                  ATerm j_55 = NULL,k_55 = NULL,l_55 = NULL,u_11 = NULL;
                  l_55 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      k_55 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(l_55);
                  j_55 = t;
                  t = k_55;
                  if(((p_54 != NULL) && (p_54 != t)))
                    _fail(t);
                  else
                    p_54 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, k_55);
                  u_11 = t;
                  t = SSLsetAnnotations(u_11, j_55);
                  return(t);
                }
                t = fetch_1_0(x_4, t);
                t = term_q_6;
                if(((h_55 != NULL) && (h_55 != t)))
                  _fail(t);
                else
                  h_55 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_54)), term_f_14);
                if(((i_55 != NULL) && (i_55 != t)))
                  _fail(t);
                else
                  i_55 = t;
                t = SSL_printnl(h_55, i_55);
                t = (ATerm) ATmakeAppl(sym__2, term_q_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_54)), term_f_14));
                t = default_system_usage_0_0(t);
                t = term_u_6;
                if(((g_55 != NULL) && (g_55 != t)))
                  _fail(t);
                else
                  g_55 = t;
                t = SSL_exit(g_55);
                ;
                LocalPopChoice(e_14);
              }
            else
              {
                t = d_14;
              }
          }
        }
      if(((q_54 != NULL) && (q_54 != t)))
        _fail(t);
      else
        q_54 = t;
      t = term_o_10;
      if(((s_54 != NULL) && (s_54 != t)))
        _fail(t);
      else
        s_54 = t;
      t = SSL_table_destroy(s_54);
      t = q_54;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm v_95 (ATerm), ATerm w_95 (ATerm), ATerm x_95 (ATerm), ATerm y_95 (ATerm), ATerm t)
{
  ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL,t_55 = NULL;
  t = parse_options_1_0(v_95, t);
  q_55 = t;
  t = term_g_14;
  t_55 = t;
  t = SSL_table_create(t_55);
  t = term_g_14;
  r_55 = t;
  t = term_h_14;
  s_55 = t;
  t = SSL_table_put(r_55, s_55, q_55);
  t = q_55;
  t = x_95(t);
  {
    ATerm i_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(w_95, t);
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
              t = y_95(t);
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
ATerm a_5 (ATerm t)
{
  t = if_verbose2_1_0(d_6, t);
  return(t);
}
ATerm y_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm u_55 = NULL,v_55 = NULL;
  t = term_m_14;
  u_55 = t;
  t = term_v_5;
  v_55 = t;
  t = term_n_14;
  t = e_4(u_55, v_55, t);
  t = term_o_14;
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = term_p_14;
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm w_55 = NULL,x_55 = NULL,y_55 = NULL,z_55 = NULL;
  w_55 = t;
  t = term_j_11;
  t = get_config_0_0(t);
  x_55 = t;
  t = term_q_6;
  y_55 = t;
  t = (ATerm) ATinsert(ATempty, x_55);
  z_55 = t;
  t = SSL_printnl(y_55, z_55);
  t = w_55;
  return(t);
}
ATerm iowrap_3_0 (ATerm e_95 (ATerm), ATerm f_95 (ATerm), ATerm g_95 (ATerm), ATerm t)
{
  ATerm y_4 (ATerm t)
  {
    ATerm q_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_95(t);
        ;
        LocalPopChoice(r_14);
      }
    else
      {
        t = q_14;
        {
          ATerm s_14 = t;
          int u_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(u_14);
            }
          else
            {
              t = s_14;
              {
                ATerm w_14 = t;
                int x_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
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
                          t = Option_3_0(y_5, a_6, c_6, t);
                          ;
                          LocalPopChoice(z_14);
                        }
                      else
                        {
                          t = y_14;
                          {
                            ATerm a_15 = t;
                            int c_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(c_15);
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
  ATerm c_5 (ATerm t)
  {
    ATerm a_56 = NULL,b_56 = NULL,c_56 = NULL;
    b_56 = t;
    {
      ATerm e_15 = t;
      int f_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_6 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((a_56 != NULL) && (a_56 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_56 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(e_6, t);
          ;
          LocalPopChoice(f_15);
        }
      else
        {
          t = e_15;
          t = term_g_15;
          a_56 = t;
        }
      t = not_null(a_56);
      t = ReadFromFile_0_0(t);
      if(((c_56 != NULL) && (c_56 != t)))
        _fail(t);
      else
        c_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_56, c_56);
      t = apply_strategy_1_0(e_95, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(y_4, g_95, a_5, c_5, t);
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL,j_56 = NULL,z_11 = NULL;
  j_56 = t;
  if(match_cons(t, sym__2))
    {
      g_56 = ATgetArgument(t, 0);
      h_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_56);
  f_56 = t;
  t = h_56;
  {
    ATerm h_15 = t;
    int i_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_56 = NULL,s_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL,y_63 = NULL,y_11 = NULL,x_11 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            x_56 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_56);
        s_63 = t;
        t = x_56;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_63 = ATgetFirst((ATermList) t);
            w_63 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_56);
        u_63 = t;
        t = w_63;
        t = Cons_2_0(k_6, n_6, t);
        x_63 = t;
        t = (ATerm) ATinsert(CheckATermList(x_63), v_63);
        x_11 = t;
        t = SSLsetAnnotations(x_11, u_63);
        y_63 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, y_63);
        y_11 = t;
        t = SSLsetAnnotations(y_11, s_63);
        ;
        LocalPopChoice(i_15);
      }
    else
      {
        t = h_15;
        t = debug_1_0(p_6, t);
      }
    i_56 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_56, i_56);
    z_11 = t;
    t = SSLsetAnnotations(z_11, f_56);
  }
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm z_63 = NULL,a_64 = NULL,b_64 = NULL,c_64 = NULL,w_11 = NULL;
  c_64 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      a_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_64);
  z_63 = t;
  t = a_64;
  t = map_1_0(strategy_definition_0_0, t);
  b_64 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, b_64);
  w_11 = t;
  t = SSLsetAnnotations(w_11, z_63);
  return(t);
}
ATerm n_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_j_15;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(f_6, _fail, default_usage_0_0, t);
  return(t);
}

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
Symbol sym_Str_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
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
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_c_15;
ATerm term_z_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_a_14;
ATerm term_y_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_s_12;
ATerm term_n_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_s_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_e_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_x_8;
ATerm term_q_8;
ATerm term_a_8;
ATerm term_v_7;
ATerm term_s_7;
ATerm term_b_7;
ATerm term_y_6;
ATerm term_v_6;
ATerm term_s_6;
ATerm term_o_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_a_6;
ATerm term_y_5;
ATerm term_x_5;
ATerm term_z_4;
void init_constant_terms (void)
{
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym__2, term_x_8, term_g_9);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_9);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym__2, term_m_9, term_z_4);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym__2, term_z_9, term_a_10);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym__2, term_z_11, term_z_4);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym__2, term_c_12, term_z_4);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym__2, term_l_11, term_z_4);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym__2, term_y_13, term_z_4);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-specification: ", 0, ATtrue));
}
ATerm default_usage_0_0 (ATerm);
ATerm debug_1_0 (ATerm o_91 (ATerm), ATerm);
ATerm c_0 (ATerm);
ATerm build_term_expression_0_0 (ATerm);
ATerm e_0 (ATerm);
ATerm match_term_expression_0_0 (ATerm);
ATerm q_0 (ATerm);
ATerm t_0 (ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm w_0 (ATerm);
ATerm y_0 (ATerm);
ATerm strategy_expression_0_0 (ATerm);
ATerm type_expression_0_0 (ATerm);
ATerm a_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm strategy_definition_0_0 (ATerm);
ATerm map_1_0 (ATerm t_78 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm g_57 (ATerm), ATerm h_57 (ATerm), ATerm);
ATerm t_3 (ATerm k_38, ATerm l_38, ATerm);
ATerm u_3 (ATerm y_41, ATerm z_41, ATerm);
ATerm w_3 (ATerm q_91 (ATerm), ATerm w_396, ATerm c_42, ATerm);
ATerm v_3 (ATerm u_41, ATerm v_41, ATerm);
ATerm i_1 (ATerm);
ATerm k_1 (ATerm);
ATerm m_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm s_94 (ATerm), ATerm);
ATerm p_39 (ATerm j_39, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm x_3 (ATerm a_42, ATerm);
ATerm y_3 (ATerm m_38, ATerm n_38, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm a_41 (ATerm z_39, ATerm);
ATerm b_41 (ATerm d_40, ATerm e_40, ATerm f_40, ATerm);
ATerm c_41 (ATerm n_40, ATerm o_40, ATerm p_40, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm n_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm d_79 (ATerm), ATerm);
ATerm s_3 (ATerm a_33, ATerm b_33, ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm b_93 (ATerm), ATerm);
ATerm q_1 (ATerm);
ATerm s_1 (ATerm);
ATerm u_1 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm z_1 (ATerm);
ATerm d_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm e_4 (ATerm b_43, ATerm c_43, ATerm);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm o_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm c_4 (ATerm z_47, ATerm a_48, ATerm y_47, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm p_2 (ATerm);
ATerm w_2 (ATerm);
ATerm y_2 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm z_3 (ATerm k_35, ATerm l_35, ATerm);
ATerm foldr_2_0 (ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm a_93 (ATerm), ATerm);
ATerm b_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm c_3 (ATerm);
ATerm need_help_1_0 (ATerm q_95 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm b_4 (ATerm q_49, ATerm r_49, ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm h_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm t_97 (ATerm), ATerm);
ATerm q_3 (ATerm);
ATerm d_4 (ATerm);
ATerm h_4 (ATerm);
ATerm j_4 (ATerm);
ATerm parse_options_1_0 (ATerm s_97 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm s_95 (ATerm), ATerm t_95 (ATerm), ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm);
ATerm h_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm iowrap_3_0 (ATerm b_95 (ATerm), ATerm c_95 (ATerm), ATerm d_95 (ATerm), ATerm);
ATerm s_5 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
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
  t = term_z_4;
  t = whoami_0_0(t);
  l_0 = t;
  t = term_x_5;
  n_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_6), l_0), term_y_5);
  o_0 = t;
  t = SSL_printnl(n_0, o_0);
  t = term_c_6;
  m_0 = t;
  t = SSL_exit(m_0);
  t = a_0;
  return(t);
}
ATerm debug_1_0 (ATerm o_91 (ATerm), ATerm t)
{
  ATerm s_0 = NULL,x_0 = NULL,c_1 = NULL,d_1 = NULL;
  s_0 = t;
  t = o_91(t);
  x_0 = t;
  t = term_x_5;
  c_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_0), x_0);
  d_1 = t;
  t = SSL_printnl(c_1, d_1);
  t = s_0;
  return(t);
}
ATerm c_0 (ATerm t)
{
  t = term_d_6;
  return(t);
}
ATerm build_term_expression_0_0 (ATerm t)
{
  ATerm e_6 = t;
  int f_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL;
      x_4 = t;
      if(match_cons(t, sym_Var_1))
        {
          y_4 = ATgetArgument(t, 0);
          {
            ATerm p_0 = NULL,r_0 = NULL,y_1 = NULL;
            t = SSLgetAnnotations(x_4);
            p_0 = t;
            t = SSL_is_string(y_4);
            r_0 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, r_0);
            y_1 = t;
            t = SSLsetAnnotations(y_1, p_0);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              y_4 = ATgetArgument(t, 0);
              {
                ATerm z_0 = NULL,b_1 = NULL,a_2 = NULL;
                t = SSLgetAnnotations(x_4);
                z_0 = t;
                t = SSL_is_int(y_4);
                b_1 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, b_1);
                a_2 = t;
                t = SSLsetAnnotations(a_2, z_0);
              }
            }
          else
            {
              if(match_cons(t, sym_Real_1))
                {
                  y_4 = ATgetArgument(t, 0);
                  {
                    ATerm j_1 = NULL,l_1 = NULL,b_2 = NULL;
                    t = SSLgetAnnotations(x_4);
                    j_1 = t;
                    t = SSL_is_real(y_4);
                    l_1 = t;
                    t = (ATerm) ATmakeAppl(sym_Real_1, l_1);
                    b_2 = t;
                    t = SSLsetAnnotations(b_2, j_1);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Str_1))
                    {
                      y_4 = ATgetArgument(t, 0);
                      {
                        ATerm r_1 = NULL,t_1 = NULL,c_2 = NULL;
                        t = SSLgetAnnotations(x_4);
                        r_1 = t;
                        t = SSL_is_string(y_4);
                        t_1 = t;
                        t = (ATerm) ATmakeAppl(sym_Str_1, t_1);
                        c_2 = t;
                        t = SSLsetAnnotations(c_2, r_1);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Op_2))
                        {
                          y_4 = ATgetArgument(t, 0);
                          w_4 = ATgetArgument(t, 1);
                          {
                            ATerm k_2 = NULL,n_2 = NULL,v_2 = NULL,e_2 = NULL;
                            t = SSLgetAnnotations(x_4);
                            k_2 = t;
                            t = SSL_is_string(y_4);
                            n_2 = t;
                            t = w_4;
                            t = map_1_0(build_term_expression_0_0, t);
                            v_2 = t;
                            t = (ATerm) ATmakeAppl(sym_Op_2, n_2, v_2);
                            e_2 = t;
                            t = SSLsetAnnotations(e_2, k_2);
                          }
                        }
                      else
                        {
                          ATerm i_3 = NULL,l_3 = NULL,f_2 = NULL;
                          if(match_cons(t, sym_BuildDefault_1))
                            {
                              y_4 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(x_4);
                          i_3 = t;
                          t = y_4;
                          t = build_term_expression_0_0(t);
                          l_3 = t;
                          t = (ATerm) ATmakeAppl(sym_BuildDefault_1, l_3);
                          f_2 = t;
                          t = SSLsetAnnotations(f_2, i_3);
                        }
                    }
                }
            }
        }
      ;
      LocalPopChoice(f_6);
    }
  else
    {
      t = e_6;
      t = debug_1_0(c_0, t);
    }
  return(t);
}
ATerm e_0 (ATerm t)
{
  t = term_d_6;
  return(t);
}
ATerm match_term_expression_0_0 (ATerm t)
{
  ATerm g_6 = t;
  int h_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_10 = NULL,h_10 = NULL,j_10 = NULL;
      d_10 = t;
      if(match_cons(t, sym_Wld_0))
        {
          t = d_10;
        }
      else
        {
          if(match_cons(t, sym_Var_1))
            {
              h_10 = ATgetArgument(t, 0);
              {
                ATerm r_3 = NULL,f_4 = NULL,q_2 = NULL;
                t = SSLgetAnnotations(d_10);
                r_3 = t;
                t = SSL_is_string(h_10);
                f_4 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, f_4);
                q_2 = t;
                t = SSLsetAnnotations(q_2, r_3);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  h_10 = ATgetArgument(t, 0);
                  {
                    ATerm i_5 = NULL,l_5 = NULL,r_2 = NULL;
                    t = SSLgetAnnotations(d_10);
                    i_5 = t;
                    t = SSL_is_int(h_10);
                    l_5 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, l_5);
                    r_2 = t;
                    t = SSLsetAnnotations(r_2, i_5);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      h_10 = ATgetArgument(t, 0);
                      {
                        ATerm r_5 = NULL,t_5 = NULL,s_2 = NULL;
                        t = SSLgetAnnotations(d_10);
                        r_5 = t;
                        t = SSL_is_real(h_10);
                        t_5 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, t_5);
                        s_2 = t;
                        t = SSLsetAnnotations(s_2, r_5);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Str_1))
                        {
                          h_10 = ATgetArgument(t, 0);
                          {
                            ATerm z_5 = NULL,b_6 = NULL,t_2 = NULL;
                            t = SSLgetAnnotations(d_10);
                            z_5 = t;
                            t = SSL_is_string(h_10);
                            b_6 = t;
                            t = (ATerm) ATmakeAppl(sym_Str_1, b_6);
                            t_2 = t;
                            t = SSLsetAnnotations(t_2, z_5);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Op_2))
                            {
                              h_10 = ATgetArgument(t, 0);
                              j_10 = ATgetArgument(t, 1);
                              {
                                ATerm i_6 = NULL,l_6 = NULL,n_6 = NULL,u_2 = NULL;
                                t = SSLgetAnnotations(d_10);
                                i_6 = t;
                                t = SSL_is_string(h_10);
                                l_6 = t;
                                t = j_10;
                                t = map_1_0(match_term_expression_0_0, t);
                                n_6 = t;
                                t = (ATerm) ATmakeAppl(sym_Op_2, l_6, n_6);
                                u_2 = t;
                                t = SSLsetAnnotations(u_2, i_6);
                              }
                            }
                          else
                            {
                              ATerm k_7 = NULL,p_7 = NULL,q_7 = NULL,x_2 = NULL;
                              if(match_cons(t, sym_As_2))
                                {
                                  h_10 = ATgetArgument(t, 0);
                                  j_10 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(d_10);
                              k_7 = t;
                              t = h_10;
                              t = match_term_expression_0_0(t);
                              p_7 = t;
                              t = j_10;
                              t = match_term_expression_0_0(t);
                              q_7 = t;
                              t = (ATerm) ATmakeAppl(sym_As_2, p_7, q_7);
                              x_2 = t;
                              t = SSLsetAnnotations(x_2, k_7);
                            }
                        }
                    }
                }
            }
        }
      ;
      LocalPopChoice(h_6);
    }
  else
    {
      t = g_6;
      t = debug_1_0(e_0, t);
    }
  return(t);
}
ATerm q_0 (ATerm t)
{
  ATerm j_6 = t;
  int k_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_20 = NULL;
      a_20 = t;
      t = SSL_is_string(a_20);
      ;
      LocalPopChoice(k_6);
    }
  else
    {
      t = j_6;
      t = map_1_0(t_0, t);
    }
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm n_20 = NULL;
  n_20 = t;
  t = SSL_is_int(n_20);
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,m_6 = NULL;
  l_23 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      c_23 = ATgetArgument(t, 0);
      d_23 = ATgetArgument(t, 1);
      e_23 = ATgetArgument(t, 2);
      f_23 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_23);
  b_23 = t;
  t = SSL_is_string(c_23);
  g_23 = t;
  t = d_23;
  t = map_1_0(v_0, t);
  i_23 = t;
  t = e_23;
  t = map_1_0(w_0, t);
  j_23 = t;
  t = f_23;
  t = strategy_expression_0_0(t);
  k_23 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, g_23, i_23, j_23, k_23);
  m_6 = t;
  t = SSLsetAnnotations(m_6, b_23);
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,e_5 = NULL;
  t_24 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      p_24 = ATgetArgument(t, 0);
      q_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_24);
  o_24 = t;
  t = SSL_is_string(p_24);
  r_24 = t;
  t = q_24;
  t = type_expression_0_0(t);
  s_24 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, r_24, s_24);
  e_5 = t;
  t = SSLsetAnnotations(e_5, o_24);
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm v_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,j_5 = NULL;
  b_25 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      x_24 = ATgetArgument(t, 0);
      y_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_25);
  v_24 = t;
  t = SSL_is_string(x_24);
  z_24 = t;
  t = y_24;
  t = type_expression_0_0(t);
  a_25 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_24, a_25);
  j_5 = t;
  t = SSLsetAnnotations(j_5, v_24);
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = term_o_6;
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm p_6 = t;
  int r_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL;
      u_29 = t;
      if(match_cons(t, sym_Id_0))
        {
          t = u_29;
        }
      else
        {
          if(match_cons(t, sym_Fail_0))
            {
              t = u_29;
            }
          else
            {
              if(match_cons(t, sym_Not_1))
                {
                  v_29 = ATgetArgument(t, 0);
                  {
                    ATerm d_9 = NULL,i_9 = NULL,a_4 = NULL;
                    t = SSLgetAnnotations(u_29);
                    d_9 = t;
                    t = v_29;
                    t = strategy_expression_0_0(t);
                    i_9 = t;
                    t = (ATerm) ATmakeAppl(sym_Not_1, i_9);
                    a_4 = t;
                    t = SSLsetAnnotations(a_4, d_9);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Seq_2))
                    {
                      v_29 = ATgetArgument(t, 0);
                      w_29 = ATgetArgument(t, 1);
                      {
                        ATerm q_9 = NULL,w_9 = NULL,x_9 = NULL,g_4 = NULL;
                        t = SSLgetAnnotations(u_29);
                        q_9 = t;
                        t = v_29;
                        t = strategy_expression_0_0(t);
                        w_9 = t;
                        t = w_29;
                        t = strategy_expression_0_0(t);
                        x_9 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, w_9, x_9);
                        g_4 = t;
                        t = SSLsetAnnotations(g_4, q_9);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Choice_2))
                        {
                          v_29 = ATgetArgument(t, 0);
                          w_29 = ATgetArgument(t, 1);
                          {
                            ATerm m_10 = NULL,q_10 = NULL,r_10 = NULL,i_4 = NULL;
                            t = SSLgetAnnotations(u_29);
                            m_10 = t;
                            t = v_29;
                            t = strategy_expression_0_0(t);
                            q_10 = t;
                            t = w_29;
                            t = strategy_expression_0_0(t);
                            r_10 = t;
                            t = (ATerm) ATmakeAppl(sym_Choice_2, q_10, r_10);
                            i_4 = t;
                            t = SSLsetAnnotations(i_4, m_10);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_LChoice_2))
                            {
                              v_29 = ATgetArgument(t, 0);
                              w_29 = ATgetArgument(t, 1);
                              {
                                ATerm f_11 = NULL,i_11 = NULL,j_11 = NULL,k_4 = NULL;
                                t = SSLgetAnnotations(u_29);
                                f_11 = t;
                                t = v_29;
                                t = strategy_expression_0_0(t);
                                i_11 = t;
                                t = w_29;
                                t = strategy_expression_0_0(t);
                                j_11 = t;
                                t = (ATerm) ATmakeAppl(sym_LChoice_2, i_11, j_11);
                                k_4 = t;
                                t = SSLsetAnnotations(k_4, f_11);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_GuardedLChoice_3))
                                {
                                  v_29 = ATgetArgument(t, 0);
                                  w_29 = ATgetArgument(t, 1);
                                  t_29 = ATgetArgument(t, 2);
                                  {
                                    ATerm s_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,l_4 = NULL;
                                    t = SSLgetAnnotations(u_29);
                                    s_11 = t;
                                    t = v_29;
                                    t = strategy_expression_0_0(t);
                                    w_11 = t;
                                    t = w_29;
                                    t = strategy_expression_0_0(t);
                                    x_11 = t;
                                    t = t_29;
                                    t = strategy_expression_0_0(t);
                                    y_11 = t;
                                    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, w_11, x_11, y_11);
                                    l_4 = t;
                                    t = SSLsetAnnotations(l_4, s_11);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GChoice_2))
                                    {
                                      v_29 = ATgetArgument(t, 0);
                                      w_29 = ATgetArgument(t, 1);
                                      {
                                        ATerm h_12 = NULL,k_12 = NULL,l_12 = NULL,m_4 = NULL;
                                        t = SSLgetAnnotations(u_29);
                                        h_12 = t;
                                        t = v_29;
                                        t = strategy_expression_0_0(t);
                                        k_12 = t;
                                        t = w_29;
                                        t = strategy_expression_0_0(t);
                                        l_12 = t;
                                        t = (ATerm) ATmakeAppl(sym_GChoice_2, k_12, l_12);
                                        m_4 = t;
                                        t = SSLsetAnnotations(m_4, h_12);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LGChoice_2))
                                        {
                                          v_29 = ATgetArgument(t, 0);
                                          w_29 = ATgetArgument(t, 1);
                                          {
                                            ATerm t_12 = NULL,w_12 = NULL,x_12 = NULL,n_4 = NULL;
                                            t = SSLgetAnnotations(u_29);
                                            t_12 = t;
                                            t = v_29;
                                            t = strategy_expression_0_0(t);
                                            w_12 = t;
                                            t = w_29;
                                            t = strategy_expression_0_0(t);
                                            x_12 = t;
                                            t = (ATerm) ATmakeAppl(sym_LGChoice_2, w_12, x_12);
                                            n_4 = t;
                                            t = SSLsetAnnotations(n_4, t_12);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_CallT_3))
                                            {
                                              v_29 = ATgetArgument(t, 0);
                                              w_29 = ATgetArgument(t, 1);
                                              t_29 = ATgetArgument(t, 2);
                                              {
                                                ATerm g_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,p_4 = NULL,o_4 = NULL;
                                                t = SSLgetAnnotations(u_29);
                                                g_13 = t;
                                                t = v_29;
                                                if(match_cons(t, sym_SVar_1))
                                                  {
                                                    n_13 = ATgetArgument(t, 0);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSLgetAnnotations(v_29);
                                                m_13 = t;
                                                t = SSL_is_string(n_13);
                                                o_13 = t;
                                                t = (ATerm) ATmakeAppl(sym_SVar_1, o_13);
                                                o_4 = t;
                                                t = SSLsetAnnotations(o_4, m_13);
                                                p_13 = t;
                                                t = w_29;
                                                t = map_1_0(strategy_expression_0_0, t);
                                                k_13 = t;
                                                t = t_29;
                                                t = map_1_0(build_term_expression_0_0, t);
                                                l_13 = t;
                                                t = (ATerm) ATmakeAppl(sym_CallT_3, p_13, k_13, l_13);
                                                p_4 = t;
                                                t = SSLsetAnnotations(p_4, g_13);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_PrimT_3))
                                                {
                                                  v_29 = ATgetArgument(t, 0);
                                                  w_29 = ATgetArgument(t, 1);
                                                  t_29 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm z_13 = NULL,e_14 = NULL,h_14 = NULL,i_14 = NULL,q_4 = NULL;
                                                    t = SSLgetAnnotations(u_29);
                                                    z_13 = t;
                                                    t = SSL_is_string(v_29);
                                                    e_14 = t;
                                                    t = w_29;
                                                    t = map_1_0(strategy_expression_0_0, t);
                                                    h_14 = t;
                                                    t = t_29;
                                                    t = map_1_0(build_term_expression_0_0, t);
                                                    i_14 = t;
                                                    t = (ATerm) ATmakeAppl(sym_PrimT_3, e_14, h_14, i_14);
                                                    q_4 = t;
                                                    t = SSLsetAnnotations(q_4, z_13);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Rec_2))
                                                    {
                                                      v_29 = ATgetArgument(t, 0);
                                                      w_29 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm v_14 = NULL,d_15 = NULL,e_15 = NULL,r_4 = NULL;
                                                        t = SSLgetAnnotations(u_29);
                                                        v_14 = t;
                                                        t = SSL_is_string(v_29);
                                                        d_15 = t;
                                                        t = w_29;
                                                        t = strategy_expression_0_0(t);
                                                        e_15 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Rec_2, d_15, e_15);
                                                        r_4 = t;
                                                        t = SSLsetAnnotations(r_4, v_14);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Path_2))
                                                        {
                                                          v_29 = ATgetArgument(t, 0);
                                                          w_29 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm u_15 = NULL,x_15 = NULL,z_15 = NULL,s_4 = NULL;
                                                            t = SSLgetAnnotations(u_29);
                                                            u_15 = t;
                                                            t = SSL_is_int(v_29);
                                                            x_15 = t;
                                                            t = w_29;
                                                            t = strategy_expression_0_0(t);
                                                            z_15 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Path_2, x_15, z_15);
                                                            s_4 = t;
                                                            t = SSLsetAnnotations(s_4, u_15);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_One_1))
                                                            {
                                                              v_29 = ATgetArgument(t, 0);
                                                              {
                                                                ATerm j_16 = NULL,n_16 = NULL,t_4 = NULL;
                                                                t = SSLgetAnnotations(u_29);
                                                                j_16 = t;
                                                                t = v_29;
                                                                t = strategy_expression_0_0(t);
                                                                n_16 = t;
                                                                t = (ATerm) ATmakeAppl(sym_One_1, n_16);
                                                                t_4 = t;
                                                                t = SSLsetAnnotations(t_4, j_16);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_Some_1))
                                                                {
                                                                  v_29 = ATgetArgument(t, 0);
                                                                  {
                                                                    ATerm x_16 = NULL,e_17 = NULL,u_4 = NULL;
                                                                    t = SSLgetAnnotations(u_29);
                                                                    x_16 = t;
                                                                    t = v_29;
                                                                    t = strategy_expression_0_0(t);
                                                                    e_17 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Some_1, e_17);
                                                                    u_4 = t;
                                                                    t = SSLsetAnnotations(u_4, x_16);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_All_1))
                                                                    {
                                                                      v_29 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm n_17 = NULL,p_17 = NULL,v_4 = NULL;
                                                                        t = SSLgetAnnotations(u_29);
                                                                        n_17 = t;
                                                                        t = v_29;
                                                                        t = strategy_expression_0_0(t);
                                                                        p_17 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_All_1, p_17);
                                                                        v_4 = t;
                                                                        t = SSLsetAnnotations(v_4, n_17);
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Thread_1))
                                                                        {
                                                                          v_29 = ATgetArgument(t, 0);
                                                                          {
                                                                            ATerm z_17 = NULL,g_18 = NULL,a_5 = NULL;
                                                                            t = SSLgetAnnotations(u_29);
                                                                            z_17 = t;
                                                                            t = v_29;
                                                                            t = strategy_expression_0_0(t);
                                                                            g_18 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_Thread_1, g_18);
                                                                            a_5 = t;
                                                                            t = SSLsetAnnotations(a_5, z_17);
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Match_1))
                                                                            {
                                                                              v_29 = ATgetArgument(t, 0);
                                                                              {
                                                                                ATerm s_18 = NULL,u_18 = NULL,b_5 = NULL;
                                                                                t = SSLgetAnnotations(u_29);
                                                                                s_18 = t;
                                                                                t = v_29;
                                                                                t = match_term_expression_0_0(t);
                                                                                u_18 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, u_18);
                                                                                b_5 = t;
                                                                                t = SSLsetAnnotations(b_5, s_18);
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Build_1))
                                                                                {
                                                                                  v_29 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm a_19 = NULL,e_19 = NULL,c_5 = NULL;
                                                                                    t = SSLgetAnnotations(u_29);
                                                                                    a_19 = t;
                                                                                    t = v_29;
                                                                                    t = build_term_expression_0_0(t);
                                                                                    e_19 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_Build_1, e_19);
                                                                                    c_5 = t;
                                                                                    t = SSLsetAnnotations(c_5, a_19);
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Scope_2))
                                                                                    {
                                                                                      v_29 = ATgetArgument(t, 0);
                                                                                      w_29 = ATgetArgument(t, 1);
                                                                                      {
                                                                                        ATerm p_19 = NULL,v_19 = NULL,w_19 = NULL,d_5 = NULL;
                                                                                        t = SSLgetAnnotations(u_29);
                                                                                        p_19 = t;
                                                                                        t = v_29;
                                                                                        t = map_1_0(q_0, t);
                                                                                        v_19 = t;
                                                                                        t = w_29;
                                                                                        t = strategy_expression_0_0(t);
                                                                                        w_19 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, v_19, w_19);
                                                                                        d_5 = t;
                                                                                        t = SSLsetAnnotations(d_5, p_19);
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      ATerm w_20 = NULL,a_21 = NULL,c_21 = NULL,q_6 = NULL;
                                                                                      if(match_cons(t, sym_Let_2))
                                                                                        {
                                                                                          v_29 = ATgetArgument(t, 0);
                                                                                          w_29 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = SSLgetAnnotations(u_29);
                                                                                      w_20 = t;
                                                                                      t = v_29;
                                                                                      t = map_1_0(u_0, t);
                                                                                      a_21 = t;
                                                                                      t = w_29;
                                                                                      t = strategy_expression_0_0(t);
                                                                                      c_21 = t;
                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, a_21, c_21);
                                                                                      q_6 = t;
                                                                                      t = SSLsetAnnotations(q_6, w_20);
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
      LocalPopChoice(r_6);
    }
  else
    {
      t = p_6;
      t = debug_1_0(y_0, t);
    }
  return(t);
}
ATerm type_expression_0_0 (ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL;
  m_33 = t;
  if(match_cons(t, sym_ConstType_1))
    {
      n_33 = ATgetArgument(t, 0);
      {
        ATerm l_26 = NULL,n_26 = NULL,e_8 = NULL;
        t = SSLgetAnnotations(m_33);
        l_26 = t;
        t = n_33;
        {
          ATerm s_27 (ATerm t)
          {
            ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL;
            q_27 = t;
            if(match_cons(t, sym_Sort_2))
              {
                r_27 = ATgetArgument(t, 0);
                p_27 = ATgetArgument(t, 1);
                {
                  ATerm p_28 = NULL,t_28 = NULL,u_28 = NULL,c_8 = NULL;
                  t = SSLgetAnnotations(q_27);
                  p_28 = t;
                  t = SSL_is_string(r_27);
                  t_28 = t;
                  t = p_27;
                  t = map_1_0(s_27, t);
                  u_28 = t;
                  t = (ATerm) ATmakeAppl(sym_Sort_2, t_28, u_28);
                  c_8 = t;
                  t = SSLsetAnnotations(c_8, p_28);
                }
              }
            else
              {
                ATerm j_29 = NULL,l_29 = NULL,d_8 = NULL;
                if(match_cons(t, sym_SortVar_1))
                  {
                    r_27 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(q_27);
                j_29 = t;
                t = SSL_is_string(r_27);
                l_29 = t;
                t = (ATerm) ATmakeAppl(sym_SortVar_1, l_29);
                d_8 = t;
                t = SSLsetAnnotations(d_8, j_29);
              }
            return(t);
          }
          t = s_27(t);
          n_26 = t;
          t = (ATerm) ATmakeAppl(sym_ConstType_1, n_26);
          e_8 = t;
          t = SSLsetAnnotations(e_8, l_26);
        }
      }
    }
  else
    {
      ATerm i_30 = NULL,p_30 = NULL,q_30 = NULL,f_8 = NULL;
      if(match_cons(t, sym_FunType_2))
        {
          n_33 = ATgetArgument(t, 0);
          o_33 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_33);
      i_30 = t;
      t = n_33;
      t = map_1_0(type_expression_0_0, t);
      p_30 = t;
      t = o_33;
      t = type_expression_0_0(t);
      q_30 = t;
      t = (ATerm) ATmakeAppl(sym_FunType_2, p_30, q_30);
      f_8 = t;
      t = SSLsetAnnotations(f_8, i_30);
    }
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL,k_8 = NULL;
  w_31 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      s_31 = ATgetArgument(t, 0);
      t_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_31);
  r_31 = t;
  t = SSL_is_string(s_31);
  u_31 = t;
  t = t_31;
  t = type_expression_0_0(t);
  v_31 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, u_31, v_31);
  k_8 = t;
  t = SSLsetAnnotations(k_8, r_31);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm e_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,m_8 = NULL;
  y_39 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      u_39 = ATgetArgument(t, 0);
      v_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_39);
  e_39 = t;
  t = SSL_is_string(u_39);
  w_39 = t;
  t = v_39;
  t = type_expression_0_0(t);
  x_39 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, w_39, x_39);
  m_8 = t;
  t = SSLsetAnnotations(m_8, e_39);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm i_41 = NULL,j_41 = NULL,k_41 = NULL,b_42 = NULL,o_42 = NULL,p_42 = NULL,n_8 = NULL;
  p_42 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      j_41 = ATgetArgument(t, 0);
      k_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_42);
  i_41 = t;
  t = SSL_is_string(j_41);
  b_42 = t;
  t = k_41;
  t = type_expression_0_0(t);
  o_42 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, b_42, o_42);
  n_8 = t;
  t = SSLsetAnnotations(n_8, i_41);
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = term_s_6;
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm t_6 = t;
  int u_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL;
      s_35 = t;
      if(match_cons(t, sym_SDef_3))
        {
          t_35 = ATgetArgument(t, 0);
          u_35 = ATgetArgument(t, 1);
          v_35 = ATgetArgument(t, 2);
          {
            ATerm j_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL,l_8 = NULL;
            t = SSLgetAnnotations(s_35);
            j_31 = t;
            t = SSL_is_string(t_35);
            n_31 = t;
            t = u_35;
            t = map_1_0(a_1, t);
            o_31 = t;
            t = v_35;
            t = strategy_expression_0_0(t);
            p_31 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, n_31, o_31, p_31);
            l_8 = t;
            t = SSLsetAnnotations(l_8, j_31);
          }
        }
      else
        {
          ATerm z_35 = NULL,c_37 = NULL,o_38 = NULL,p_38 = NULL,c_39 = NULL,o_8 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              t_35 = ATgetArgument(t, 0);
              u_35 = ATgetArgument(t, 1);
              v_35 = ATgetArgument(t, 2);
              w_35 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_35);
          z_35 = t;
          t = SSL_is_string(t_35);
          c_37 = t;
          t = u_35;
          t = map_1_0(e_1, t);
          o_38 = t;
          t = v_35;
          t = map_1_0(f_1, t);
          p_38 = t;
          t = w_35;
          t = strategy_expression_0_0(t);
          c_39 = t;
          t = (ATerm) ATmakeAppl(sym_SDefT_4, c_37, o_38, p_38, c_39);
          o_8 = t;
          t = SSLsetAnnotations(o_8, z_35);
        }
      ;
      LocalPopChoice(u_6);
    }
  else
    {
      t = t_6;
      t = debug_1_0(g_1, t);
    }
  return(t);
}
ATerm map_1_0 (ATerm t_78 (ATerm), ATerm t)
{
  ATerm n_36 (ATerm t)
  {
    ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL;
    k_36 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_36;
      }
    else
      {
        ATerm y_43 = NULL,s_44 = NULL,t_44 = NULL,u_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_36 = ATgetFirst((ATermList) t);
            m_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_36);
        y_43 = t;
        t = l_36;
        t = t_78(t);
        s_44 = t;
        t = m_36;
        t = n_36(t);
        t_44 = t;
        t = (ATerm) ATinsert(CheckATermList(t_44), s_44);
        u_8 = t;
        t = SSLsetAnnotations(u_8, y_43);
      }
    return(t);
  }
  t = n_36(t);
  return(t);
}
ATerm Cons_2_0 (ATerm g_57 (ATerm), ATerm h_57 (ATerm), ATerm t)
{
  ATerm p_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL,w_8 = NULL;
  v_36 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_36 = ATgetFirst((ATermList) t);
      s_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_36);
  p_36 = t;
  t = r_36;
  t = g_57(t);
  t_36 = t;
  t = s_36;
  t = h_57(t);
  u_36 = t;
  t = (ATerm) ATinsert(CheckATermList(u_36), t_36);
  w_8 = t;
  t = SSLsetAnnotations(w_8, p_36);
  return(t);
}
ATerm t_3 (ATerm k_38, ATerm l_38, ATerm t)
{
  ATerm w_36 = NULL;
  t = SSL_fputc(k_38, l_38);
  w_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_36);
  return(t);
}
ATerm u_3 (ATerm y_41, ATerm z_41, ATerm t)
{
  ATerm x_36 = NULL;
  t = SSL_write_term_to_stream_text(y_41, z_41);
  x_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_36);
  return(t);
}
ATerm w_3 (ATerm q_91 (ATerm), ATerm w_396, ATerm c_42, ATerm t)
{
  ATerm y_36 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_396, term_v_6);
  t = open_stream_0_0(t);
  y_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_36, c_42);
  t = q_91(t);
  t = fclose_0_0(t);
  t = c_42;
  return(t);
}
ATerm v_3 (ATerm u_41, ATerm v_41, ATerm t)
{
  ATerm z_36 = NULL;
  t = SSL_write_term_to_stream_baf(u_41, v_41);
  z_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_36);
  return(t);
}
ATerm i_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_6 = ATgetArgument(t, 0);
      if(match_cons(w_6, sym_Stream_1))
        {
          j_47 = ATgetArgument(w_6, 0);
        }
      else
        _fail(t);
      k_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_3(j_47, k_47, t);
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm x_49 = NULL,y_49 = NULL,q_50 = NULL,r_50 = NULL,s_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_6 = ATgetArgument(t, 0);
      if(match_cons(x_6, sym_Stream_1))
        {
          r_50 = ATgetArgument(x_6, 0);
        }
      else
        _fail(t);
      s_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3(r_50, s_50, t);
  x_49 = t;
  t = term_y_6;
  y_49 = t;
  t = x_49;
  if(match_cons(t, sym_Stream_1))
    {
      q_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_y_6, x_49);
  t = t_3(y_49, q_50, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL,t_38 = NULL,u_38 = NULL,b_9 = NULL,y_8 = NULL;
  e_37 = t;
  if(match_cons(t, sym__2))
    {
      l_37 = ATgetArgument(t, 0);
      m_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_37);
  k_37 = t;
  t = l_37;
  {
    ATerm z_6 = t;
    int a_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((d_37 != NULL) && (d_37 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                d_37 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(h_1, t);
        ;
        LocalPopChoice(a_7);
      }
    else
      {
        t = z_6;
        t = term_b_7;
        d_37 = t;
      }
    n_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_37, m_37);
    y_8 = t;
    t = SSLsetAnnotations(y_8, k_37);
    t = e_37;
    if(match_cons(t, sym__2))
      {
        g_37 = ATgetArgument(t, 0);
        h_37 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(e_37);
    f_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_37, (ATerm) ATmakeAppl(sym__2, not_null(d_37), h_37));
    b_9 = t;
    t = SSLsetAnnotations(b_9, f_37);
    j_37 = t;
    if(match_cons(t, sym__2))
      {
        t_38 = ATgetArgument(t, 0);
        u_38 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm c_7 = t;
      int d_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_45 = NULL,z_46 = NULL,a_47 = NULL,h_47 = NULL,i_47 = NULL,c_9 = NULL;
          t = SSLgetAnnotations(j_37);
          s_45 = t;
          t = t_38;
          t = fetch_1_0(i_1, t);
          z_46 = t;
          t = u_38;
          if(match_cons(t, sym__2))
            {
              h_47 = ATgetArgument(t, 0);
              i_47 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_3(k_1, h_47, i_47, t);
          a_47 = t;
          t = (ATerm) ATmakeAppl(sym__2, z_46, a_47);
          c_9 = t;
          t = SSLsetAnnotations(c_9, s_45);
          ;
          LocalPopChoice(d_7);
        }
      else
        {
          t = c_7;
          {
            ATerm h_48 = NULL,g_49 = NULL,v_49 = NULL,w_49 = NULL,f_9 = NULL;
            t = SSLgetAnnotations(j_37);
            h_48 = t;
            t = u_38;
            if(match_cons(t, sym__2))
              {
                v_49 = ATgetArgument(t, 0);
                w_49 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = w_3(m_1, v_49, w_49, t);
            g_49 = t;
            t = (ATerm) ATmakeAppl(sym__2, t_38, g_49);
            f_9 = t;
            t = SSLsetAnnotations(f_9, h_48);
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
ATerm apply_strategy_1_0 (ATerm s_94 (ATerm), ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL;
  b_39 = t;
  t = dtime_0_0(t);
  t = b_39;
  t = s_94(t);
  a_39 = t;
  t = dtime_0_0(t);
  x_38 = t;
  t = a_39;
  if(match_cons(t, sym__2))
    {
      y_38 = ATgetArgument(t, 0);
      z_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_38), (ATerm) ATmakeAppl(sym_Runtime_1, x_38)), z_38);
  return(t);
}
ATerm p_39 (ATerm j_39, ATerm t)
{
  t = SSL_fclose(j_39);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_39 = NULL,n_39 = NULL;
  n_39 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_39 = ATgetArgument(t, 0);
      {
        ATerm e_7 = t;
        int f_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_39);
            ;
            LocalPopChoice(f_7);
          }
        else
          {
            t = e_7;
            t = p_39(n_39, t);
          }
      }
    }
  else
    {
      t = p_39(n_39, t);
    }
  return(t);
}
ATerm x_3 (ATerm a_42, ATerm t)
{
  t = SSL_read_term_from_stream(a_42);
  return(t);
}
ATerm y_3 (ATerm m_38, ATerm n_38, ATerm t)
{
  ATerm q_39 = NULL;
  t = SSL_fopen(m_38, n_38);
  q_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_39);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_39 = NULL;
  t = SSL_stdin_stream();
  r_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_39);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_39 = NULL;
  t = SSL_stdout_stream();
  s_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_39);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_39 = NULL;
  t = SSL_stderr_stream();
  t_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_39);
  return(t);
}
ATerm a_41 (ATerm z_39, ATerm t)
{
  ATerm a_40 = NULL;
  t = SSL_explode_term(z_39);
  if(match_cons(t, sym__2))
    {
      ATerm g_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_7 = ATgetArgument(t, 1);
        if(((ATgetType(h_7) == AT_LIST) && !(ATisEmpty(h_7))))
          {
            a_40 = ATgetFirst((ATermList) h_7);
            {
              ATerm i_7 = (ATerm) ATgetNext((ATermList) h_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_40;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_40;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_40;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_40;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm b_41 (ATerm d_40, ATerm e_40, ATerm f_40, ATerm t)
{
  ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL,l_40 = NULL,t_9 = NULL;
  t = SSLgetAnnotations(f_40);
  i_40 = t;
  t = d_40;
  if(match_cons(t, sym_Path_1))
    {
      l_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_40, e_40);
  t_9 = t;
  t = SSLsetAnnotations(t_9, i_40);
  if(match_cons(t, sym__2))
    {
      g_40 = ATgetArgument(t, 0);
      h_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(g_40, h_40, t);
  return(t);
}
ATerm c_41 (ATerm n_40, ATerm o_40, ATerm p_40, ATerm t)
{
  ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL,v_40 = NULL,v_9 = NULL;
  t = SSLgetAnnotations(p_40);
  s_40 = t;
  t = SSL_is_string(n_40);
  v_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_40, o_40);
  v_9 = t;
  t = SSLsetAnnotations(v_9, s_40);
  if(match_cons(t, sym__2))
    {
      q_40 = ATgetArgument(t, 0);
      r_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(q_40, r_40, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm x_40 = NULL,y_40 = NULL,z_40 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_7 = ATgetArgument(t, 0);
      ATerm l_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  x_40 = t;
  if(match_cons(t, sym__2))
    {
      y_40 = ATgetArgument(t, 0);
      z_40 = ATgetArgument(t, 1);
      {
        ATerm m_7 = t;
        int n_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_41(x_40, t);
            ;
            LocalPopChoice(n_7);
          }
        else
          {
            t = m_7;
            {
              ATerm o_7 = t;
              int r_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_41(y_40, z_40, x_40, t);
                  ;
                  LocalPopChoice(r_7);
                }
              else
                {
                  t = o_7;
                  t = c_41(y_40, z_40, x_40, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_41(x_40, t);
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_s_7;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL;
  ATerm t_7 = t;
  int u_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_41 = NULL;
      g_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_41, term_v_7);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(u_7);
    }
  else
    {
      t = t_7;
      t = debug_1_0(n_1, t);
      _fail(t);
    }
  e_41 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_3(f_41, t);
  d_41 = t;
  t = e_41;
  t = fclose_0_0(t);
  t = d_41;
  return(t);
}
ATerm fetch_1_0 (ATerm d_79 (ATerm), ATerm t)
{
  ATerm l_42 (ATerm t)
  {
    ATerm i_42 = NULL,j_42 = NULL,k_42 = NULL;
    i_42 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_42 = ATgetFirst((ATermList) t);
        k_42 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_7 = t;
      int x_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_53 = NULL,p_53 = NULL,b_10 = NULL;
          t = SSLgetAnnotations(i_42);
          m_53 = t;
          t = j_42;
          t = d_79(t);
          p_53 = t;
          t = (ATerm) ATinsert(CheckATermList(k_42), p_53);
          b_10 = t;
          t = SSLsetAnnotations(b_10, m_53);
          ;
          LocalPopChoice(x_7);
        }
      else
        {
          t = w_7;
          {
            ATerm x_53 = NULL,a_54 = NULL,c_10 = NULL;
            t = SSLgetAnnotations(i_42);
            x_53 = t;
            t = k_42;
            t = l_42(t);
            a_54 = t;
            t = (ATerm) ATinsert(CheckATermList(a_54), j_42);
            c_10 = t;
            t = SSLsetAnnotations(c_10, x_53);
          }
        }
    }
    return(t);
  }
  t = l_42(t);
  return(t);
}
ATerm s_3 (ATerm a_33, ATerm b_33, ATerm t)
{
  t = SSL_strcat(a_33, b_33);
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm y_7 = t;
  int z_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(z_7);
    }
  else
    {
      t = y_7;
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_a_8;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm b_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_42 = NULL;
      u_42 = t;
      t = SSL_is_string(u_42);
      ;
      LocalPopChoice(g_8);
    }
  else
    {
      t = b_8;
      {
        ATerm h_8 = t;
        int i_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(o_1, t);
            ;
            LocalPopChoice(i_8);
          }
        else
          {
            t = h_8;
            {
              ATerm a_43 = NULL,d_43 = NULL,e_43 = NULL;
              a_43 = t;
              if(match_cons(t, sym_Path_1))
                {
                  d_43 = ATgetArgument(t, 0);
                  t = d_43;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      d_43 = ATgetArgument(t, 0);
                      t = d_43;
                      {
                        ATerm j_8 = t;
                        int p_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(p_8);
                          }
                        else
                          {
                            t = j_8;
                            t = debug_1_0(p_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm i_43 = NULL,j_43 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          d_43 = ATgetArgument(t, 0);
                          e_43 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = d_43;
                      t = eval_config_0_0(t);
                      i_43 = t;
                      t = e_43;
                      t = eval_config_0_0(t);
                      j_43 = t;
                      t = (ATerm) ATmakeAppl(sym__2, i_43, j_43);
                      t = s_3(i_43, j_43, t);
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
  ATerm s_43 = NULL,t_43 = NULL;
  s_43 = t;
  t = term_q_8;
  t_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_8, s_43);
  t = b_4(t_43, s_43, t);
  {
    ATerm r_8 = t;
    int s_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_43 = NULL,v_43 = NULL;
        t = eval_config_0_0(t);
        u_43 = t;
        t = term_q_8;
        v_43 = t;
        t = SSL_table_put(v_43, s_43, u_43);
        t = u_43;
        ;
        LocalPopChoice(s_8);
      }
    else
      {
        t = r_8;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm b_93 (ATerm), ATerm t)
{
  ATerm z_43 = NULL;
  z_43 = t;
  {
    ATerm t_8 = t;
    int v_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_44 = NULL;
        t = term_x_8;
        t = get_config_0_0(t);
        b_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_44, term_z_8);
        t = geq_0_0(t);
        t = z_43;
        t = b_93(t);
        ;
        LocalPopChoice(v_8);
      }
    else
      {
        t = t_8;
        t = z_43;
      }
  }
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm e_44 = NULL;
  e_44 = t;
  if(match_string(t, "-k"))
    {
      t = e_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_44;
    }
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL;
  f_44 = t;
  t = SSL_string_to_int(f_44);
  g_44 = t;
  t = term_a_9;
  h_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_9, g_44);
  t = e_4(h_44, g_44, t);
  t = f_44;
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_e_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_1, s_1, u_1, t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm j_44 = NULL;
  j_44 = t;
  if(match_string(t, "-S"))
    {
      t = j_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_44;
    }
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm k_44 = NULL,l_44 = NULL;
  t = term_x_8;
  k_44 = t;
  t = term_g_9;
  l_44 = t;
  t = term_h_9;
  t = e_4(k_44, l_44, t);
  t = term_j_9;
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_k_9;
  return(t);
}
ATerm z_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL;
  m_44 = t;
  t = SSL_string_to_int(m_44);
  n_44 = t;
  t = term_x_8;
  o_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_8, n_44);
  t = e_4(o_44, n_44, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_44);
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_l_9;
  return(t);
}
ATerm h_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm p_44 = NULL,q_44 = NULL;
  t = term_m_9;
  p_44 = t;
  t = term_z_4;
  q_44 = t;
  t = term_n_9;
  t = e_4(p_44, q_44, t);
  t = term_o_9;
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_p_9;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_9 = t;
  int s_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_1, w_1, x_1, t);
      ;
      LocalPopChoice(s_9);
    }
  else
    {
      t = r_9;
      {
        ATerm u_9 = t;
        int y_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_1, d_2, g_2, t);
            ;
            LocalPopChoice(y_9);
          }
        else
          {
            t = u_9;
            t = Option_3_0(h_2, i_2, j_2, t);
          }
      }
    }
  return(t);
}
ATerm e_4 (ATerm b_43, ATerm c_43, ATerm t)
{
  ATerm r_44 = NULL;
  t = term_q_8;
  r_44 = t;
  t = SSL_table_put(r_44, b_43, c_43);
  t = (ATerm) ATmakeAppl(sym__3, term_q_8, b_43, c_43);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm y_44 = NULL,z_44 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_45 = NULL,b_45 = NULL,c_45 = NULL;
      t = term_z_4;
      t = f_0(t);
      a_45 = t;
      t = term_z_9;
      b_45 = t;
      t = term_a_10;
      c_45 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_9, term_a_10, a_45);
      t = c_4(b_45, c_45, a_45, t);
      _fail(t);
    }
  else
    {
      ATerm f_45 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_44 = ATgetFirst((ATermList) t);
          z_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_44;
      t = b_0(t);
      t = term_z_4;
      t = d_0(t);
      f_45 = t;
      t = (ATerm) ATinsert(CheckATermList(z_44), f_45);
    }
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm h_45 = NULL;
  h_45 = t;
  if(match_string(t, "-o"))
    {
      t = h_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = h_45;
    }
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm i_45 = NULL,j_45 = NULL;
  i_45 = t;
  t = term_e_10;
  j_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_10, i_45);
  t = e_4(j_45, i_45, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_45);
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_f_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_2, m_2, o_2, t);
  return(t);
}
ATerm c_4 (ATerm z_47, ATerm a_48, ATerm y_47, ATerm t)
{
  ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL;
  l_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_47, a_48);
  {
    ATerm g_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_10 = ATgetArgument(t, 0);
            ATerm l_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_47, a_48);
        t = b_4(z_47, a_48, t);
        ;
        LocalPopChoice(i_10);
      }
    else
      {
        t = g_10;
        t = (ATerm) ATempty;
      }
    m_45 = t;
    t = (ATerm) ATinsert(CheckATermList(m_45), y_47);
    n_45 = t;
    t = SSL_table_put(z_47, a_48, n_45);
    t = l_45;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_45 = NULL,z_45 = NULL,a_46 = NULL;
      t = term_z_4;
      t = k_0(t);
      y_45 = t;
      t = term_z_9;
      z_45 = t;
      t = term_a_10;
      a_46 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_9, term_a_10, y_45);
      t = c_4(z_45, a_46, y_45, t);
      _fail(t);
    }
  else
    {
      ATerm e_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_45 = ATgetFirst((ATermList) t);
          v_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_45;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_45 = ATgetFirst((ATermList) t);
          x_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_45;
      t = i_0(t);
      t = w_45;
      t = j_0(t);
      e_46 = t;
      t = (ATerm) ATinsert(CheckATermList(x_45), e_46);
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm g_46 = NULL;
  g_46 = t;
  if(match_string(t, "-i"))
    {
      t = g_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_46;
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm h_46 = NULL,i_46 = NULL;
  h_46 = t;
  t = term_n_10;
  i_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_10, h_46);
  t = e_4(i_46, h_46, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_46);
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_o_10;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_2, w_2, y_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_4;
  t = whoami_0_0(t);
  j_46 = t;
  t = term_x_5;
  l_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_p_10), j_46);
  m_46 = t;
  t = SSL_printnl(l_46, m_46);
  t = term_c_6;
  k_46 = t;
  t = SSL_exit(k_46);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_s_10;
  t = get_config_0_0(t);
  return(t);
}
ATerm z_3 (ATerm k_35, ATerm l_35, ATerm t)
{
  ATerm t_10 = t;
  int u_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(k_35, l_35);
      ;
      LocalPopChoice(u_10);
    }
  else
    {
      t = t_10;
      t = SSL_addr(k_35, l_35);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm t)
{
  ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL;
  o_46 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_46;
      t = w_84(t);
    }
  else
    {
      ATerm t_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_46 = ATgetFirst((ATermList) t);
          q_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_46;
      t = foldr_2_0(w_84, x_84, t);
      t_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_46, t_46);
      t = x_84(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_g_9;
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm r_54 = NULL,s_54 = NULL;
  if(match_cons(t, sym__2))
    {
      r_54 = ATgetArgument(t, 0);
      s_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3(r_54, s_54, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_46 = NULL,n_54 = NULL,o_54 = NULL;
  t = times_0_0(t);
  o_54 = t;
  t = SSL_explode_term(o_54);
  if(match_cons(t, sym__2))
    {
      ATerm v_10 = ATgetArgument(t, 0);
      n_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_54;
  t = foldr_2_0(z_2, a_3, t);
  w_46 = t;
  t = SSL_TicksToSeconds(w_46);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_47 = NULL,n_47 = NULL,o_47 = NULL;
  m_47 = t;
  if(match_cons(t, sym__2))
    {
      n_47 = ATgetArgument(t, 0);
      o_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_10 = t;
    int x_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_47;
        if((n_47 != t))
          {
            _fail(t);
          }
        t = m_47;
        ;
        LocalPopChoice(x_10);
      }
    else
      {
        t = w_10;
        t = (ATerm) ATmakeAppl(sym__2, n_47, o_47);
        {
          ATerm y_10 = t;
          int z_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_47, o_47);
              ;
              LocalPopChoice(z_10);
            }
          else
            {
              t = y_10;
              t = SSL_gtr(n_47, o_47);
            }
          t = (ATerm) ATmakeAppl(sym__2, n_47, o_47);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_93 (ATerm), ATerm t)
{
  ATerm s_47 = NULL;
  s_47 = t;
  {
    ATerm a_11 = t;
    int c_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_47 = NULL;
        t = term_x_8;
        t = get_config_0_0(t);
        u_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_47, term_c_6);
        t = geq_0_0(t);
        t = s_47;
        t = a_93(t);
        ;
        LocalPopChoice(c_11);
      }
    else
      {
        t = a_11;
        t = s_47;
      }
  }
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm x_47 = NULL,b_48 = NULL,d_48 = NULL,e_48 = NULL;
  t = run_time_0_0(t);
  x_47 = t;
  t = term_z_4;
  t = whoami_0_0(t);
  b_48 = t;
  t = term_x_5;
  d_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_11), x_47), term_e_11), b_48);
  e_48 = t;
  t = SSL_printnl(d_48, e_48);
  t = (ATerm) ATmakeAppl(sym__2, term_x_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_11), x_47), term_e_11), b_48));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(b_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_48 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_9;
  f_48 = t;
  t = SSL_exit(f_48);
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm n_48 = NULL,o_48 = NULL;
  o_48 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = o_48;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          n_48 = ATgetArgument(t, 0);
          {
            ATerm e_55 = NULL,b_11 = NULL;
            t = SSLgetAnnotations(o_48);
            e_55 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, n_48);
            b_11 = t;
            t = SSLsetAnnotations(b_11, e_55);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = o_48;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_95 (ATerm), ATerm t)
{
  ATerm h_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(k_11);
    }
  else
    {
      t = h_11;
      t = fetch_1_0(c_3, t);
    }
  t = q_95(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm r_48 = NULL,s_48 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_48 = ATgetFirst((ATermList) t);
      s_48 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_48 = NULL,x_48 = NULL;
        ATerm d_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(w_48)), not_null(x_48));
          return(t);
        }
        t = s_48;
        t = h_0(t);
        if(((w_48 != NULL) && (w_48 != t)))
          _fail(t);
        else
          w_48 = t;
        t = r_48;
        t = g_0(t);
        if(((x_48 != NULL) && (x_48 != t)))
          _fail(t);
        else
          x_48 = t;
        t = s_48;
        t = reverse_acc_2_0(g_0, d_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_4;
      t = h_0(t);
    }
  return(t);
}
ATerm b_4 (ATerm q_49, ATerm r_49, ATerm t)
{
  t = SSL_table_get(q_49, r_49);
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm b_49 = NULL,c_49 = NULL,d_49 = NULL,d_11 = NULL;
  d_49 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_49);
  b_49 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, c_49);
  d_11 = t;
  t = SSLsetAnnotations(d_11, b_49);
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm f_49 = NULL;
  f_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_49), term_m_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_48 = NULL,a_49 = NULL;
  ATerm n_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_10;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_11);
    }
  else
    {
      t = n_11;
      t = fetch_1_0(e_3, t);
    }
  t = term_p_11;
  t = echo_0_0(t);
  t = term_z_9;
  z_48 = t;
  t = term_a_10;
  a_49 = t;
  t = term_q_11;
  t = b_4(z_48, a_49, t);
  t = reverse_acc_2_0(_id, f_3, t);
  t = map_1_0(g_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_49 = NULL,i_49 = NULL,j_49 = NULL;
  h_49 = t;
  {
    ATerm r_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_49;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_11 = ATgetFirst((ATermList) t);
                ATerm v_11 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_49;
          }
        ;
        LocalPopChoice(t_11);
      }
    else
      {
        t = r_11;
        t = (ATerm) ATinsert(ATempty, h_49);
      }
    i_49 = t;
    t = term_b_7;
    j_49 = t;
    t = SSL_printnl(j_49, i_49);
    t = h_49;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_s_10;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm h_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm n_49 = NULL,o_49 = NULL;
  t = term_z_11;
  n_49 = t;
  t = term_z_4;
  o_49 = t;
  t = term_a_12;
  t = e_4(n_49, o_49, t);
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_b_12;
  return(t);
}
ATerm m_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm p_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL;
  t = term_z_11;
  t_49 = t;
  t = term_z_4;
  u_49 = t;
  t = term_a_12;
  t = e_4(t_49, u_49, t);
  t = term_c_12;
  p_49 = t;
  t = term_z_4;
  s_49 = t;
  t = term_d_12;
  t = e_4(p_49, s_49, t);
  t = term_e_12;
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_f_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_3, j_3, k_3, t);
      ;
      LocalPopChoice(i_12);
    }
  else
    {
      t = g_12;
      t = Option_3_0(m_3, n_3, o_3, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_97 (ATerm), ATerm t)
{
  ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL,c_50 = NULL,e_50 = NULL,f_50 = NULL,b_14 = NULL;
  z_49 = t;
  {
    ATerm j_12 = t;
    int m_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_12;
        t = t_97(t);
        ;
        LocalPopChoice(m_12);
      }
    else
      {
        t = j_12;
      }
    t = z_49;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_50 = ATgetFirst((ATermList) t);
        c_50 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(z_49);
    a_50 = t;
    t = term_s_10;
    f_50 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_s_10, b_50);
    t = e_4(f_50, b_50, t);
    t = c_50;
    {
      ATerm p_50 (ATerm t)
      {
        ATerm o_12 = t;
        int p_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_12 = t;
            int r_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_50 = NULL;
                i_50 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = i_50;
                ;
                LocalPopChoice(r_12);
              }
            else
              {
                t = q_12;
                t = t_97(t);
                t = Cons_2_0(_id, p_50, t);
              }
            ;
            LocalPopChoice(p_12);
          }
        else
          {
            t = o_12;
            {
              ATerm l_50 = NULL,m_50 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_50 = ATgetFirst((ATermList) t);
                  m_50 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(m_50), (ATerm) ATmakeAppl(sym_Undefined_1, l_50));
            }
          }
        return(t);
      }
      t = p_50(t);
      e_50 = t;
      t = (ATerm) ATinsert(CheckATermList(e_50), (ATerm) ATmakeAppl(sym_Program_1, b_50));
      b_14 = t;
      t = SSLsetAnnotations(b_14, a_50);
    }
  }
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm b_51 = NULL;
  b_51 = t;
  if(match_string(t, "--help"))
    {
      t = b_51;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_51;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_51;
        }
    }
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm c_51 = NULL,d_51 = NULL;
  t = term_l_11;
  c_51 = t;
  t = term_z_4;
  d_51 = t;
  t = term_s_12;
  t = e_4(c_51, d_51, t);
  t = term_u_12;
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_v_12;
  return(t);
}
ATerm j_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm s_97 (ATerm), ATerm t)
{
  ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL;
  w_50 = t;
  t = term_z_9;
  y_50 = t;
  t = term_a_10;
  z_50 = t;
  t = (ATerm) ATempty;
  a_51 = t;
  t = SSL_table_put(y_50, z_50, a_51);
  t = w_50;
  {
    ATerm p_3 (ATerm t)
    {
      ATerm y_12 = t;
      int z_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_97(t);
          ;
          LocalPopChoice(z_12);
        }
      else
        {
          t = y_12;
          {
            ATerm a_13 = t;
            int b_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(q_3, d_4, h_4, t);
                ;
                LocalPopChoice(b_13);
              }
            else
              {
                t = a_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_3, t);
    {
      ATerm c_13 = t;
      int d_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_51 = NULL;
          k_51 = t;
          {
            ATerm e_13 = t;
            int f_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_55 = NULL;
                t = k_51;
                {
                  ATerm h_13 = t;
                  int i_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_l_11;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(i_13);
                    }
                  else
                    {
                      t = h_13;
                      t = fetch_1_0(j_4, t);
                    }
                  t = k_51;
                  t = default_system_usage_0_0(t);
                  t = term_g_9;
                  l_55 = t;
                  t = SSL_exit(l_55);
                }
                ;
                LocalPopChoice(f_13);
              }
            else
              {
                t = e_13;
                {
                  ATerm p_55 = NULL;
                  t = term_z_11;
                  t = get_config_0_0(t);
                  t = k_51;
                  t = default_system_about_0_0(t);
                  t = term_g_9;
                  p_55 = t;
                  t = SSL_exit(p_55);
                }
              }
          }
          ;
          LocalPopChoice(d_13);
        }
      else
        {
          t = c_13;
          {
            ATerm j_13 = t;
            int q_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL;
                ATerm f_5 (ATerm t)
                {
                  ATerm o_51 = NULL,p_51 = NULL,q_51 = NULL,g_14 = NULL;
                  q_51 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      p_51 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(q_51);
                  o_51 = t;
                  t = p_51;
                  if(((u_50 != NULL) && (u_50 != t)))
                    _fail(t);
                  else
                    u_50 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, p_51);
                  g_14 = t;
                  t = SSLsetAnnotations(g_14, o_51);
                  return(t);
                }
                t = fetch_1_0(f_5, t);
                t = term_x_5;
                m_51 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_50)), term_r_13);
                n_51 = t;
                t = SSL_printnl(m_51, n_51);
                t = (ATerm) ATmakeAppl(sym__2, term_x_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_50)), term_r_13));
                t = default_system_usage_0_0(t);
                t = term_c_6;
                l_51 = t;
                t = SSL_exit(l_51);
                ;
                LocalPopChoice(q_13);
              }
            else
              {
                t = j_13;
              }
          }
        }
      v_50 = t;
      t = term_z_9;
      x_50 = t;
      t = SSL_table_destroy(x_50);
      t = v_50;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_95 (ATerm), ATerm t_95 (ATerm), ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm t)
{
  ATerm v_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL;
  t = parse_options_1_0(s_95, t);
  v_51 = t;
  t = term_s_13;
  y_51 = t;
  t = SSL_table_create(y_51);
  t = term_s_13;
  w_51 = t;
  t = term_t_13;
  x_51 = t;
  t = SSL_table_put(w_51, x_51, v_51);
  t = v_51;
  t = u_95(t);
  {
    ATerm u_13 = t;
    int v_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_95, t);
        ;
        LocalPopChoice(v_13);
      }
    else
      {
        t = u_13;
        {
          ATerm w_13 = t;
          int x_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_95(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(x_13);
            }
          else
            {
              t = w_13;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = if_verbose2_1_0(p_5, t);
  return(t);
}
ATerm m_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm z_51 = NULL,a_52 = NULL;
  t = term_y_13;
  z_51 = t;
  t = term_z_4;
  a_52 = t;
  t = term_a_14;
  t = e_4(z_51, a_52, t);
  t = term_c_14;
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = term_d_14;
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL,e_52 = NULL;
  b_52 = t;
  t = term_s_10;
  t = get_config_0_0(t);
  c_52 = t;
  t = term_x_5;
  d_52 = t;
  t = (ATerm) ATinsert(ATempty, c_52);
  e_52 = t;
  t = SSL_printnl(d_52, e_52);
  t = b_52;
  return(t);
}
ATerm iowrap_3_0 (ATerm b_95 (ATerm), ATerm c_95 (ATerm), ATerm d_95 (ATerm), ATerm t)
{
  ATerm g_5 (ATerm t)
  {
    ATerm f_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_95(t);
        ;
        LocalPopChoice(j_14);
      }
    else
      {
        t = f_14;
        {
          ATerm m_14 = t;
          int n_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
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
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(p_14);
                  }
                else
                  {
                    t = o_14;
                    {
                      ATerm q_14 = t;
                      int s_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(m_5, n_5, o_5, t);
                          ;
                          LocalPopChoice(s_14);
                        }
                      else
                        {
                          t = q_14;
                          {
                            ATerm t_14 = t;
                            int u_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(u_14);
                              }
                            else
                              {
                                t = t_14;
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
  ATerm k_5 (ATerm t)
  {
    ATerm f_52 = NULL,g_52 = NULL,h_52 = NULL;
    g_52 = t;
    {
      ATerm w_14 = t;
      int y_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((f_52 != NULL) && (f_52 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  f_52 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(q_5, t);
          ;
          LocalPopChoice(y_14);
        }
      else
        {
          t = w_14;
          t = term_z_14;
          f_52 = t;
        }
      t = not_null(f_52);
      t = ReadFromFile_0_0(t);
      h_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_52, h_52);
      t = apply_strategy_1_0(b_95, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(g_5, d_95, h_5, k_5, t);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm k_52 = NULL,l_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL,x_14 = NULL;
  o_52 = t;
  if(match_cons(t, sym__2))
    {
      l_52 = ATgetArgument(t, 0);
      m_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_52);
  k_52 = t;
  t = m_52;
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_53 = NULL,s_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL,y_55 = NULL,r_14 = NULL,l_14 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            c_53 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_52);
        s_55 = t;
        t = c_53;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_55 = ATgetFirst((ATermList) t);
            w_55 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_53);
        u_55 = t;
        t = w_55;
        t = Cons_2_0(u_5, v_5, t);
        x_55 = t;
        t = (ATerm) ATinsert(CheckATermList(x_55), v_55);
        l_14 = t;
        t = SSLsetAnnotations(l_14, u_55);
        y_55 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, y_55);
        r_14 = t;
        t = SSLsetAnnotations(r_14, s_55);
        ;
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
        t = debug_1_0(w_5, t);
      }
    n_52 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_52, n_52);
    x_14 = t;
    t = SSLsetAnnotations(x_14, k_52);
  }
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm z_55 = NULL,a_56 = NULL,b_56 = NULL,c_56 = NULL,k_14 = NULL;
  c_56 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      a_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_56);
  z_55 = t;
  t = a_56;
  t = map_1_0(strategy_definition_0_0, t);
  b_56 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, b_56);
  k_14 = t;
  t = SSLsetAnnotations(k_14, z_55);
  return(t);
}
ATerm v_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = term_c_15;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(s_5, _fail, default_usage_0_0, t);
  return(t);
}

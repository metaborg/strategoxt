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
ATerm term_z_14;
ATerm term_w_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_h_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_s_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_h_11;
ATerm term_f_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_l_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_w_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_i_8;
ATerm term_x_7;
ATerm term_s_7;
ATerm term_n_7;
ATerm term_a_7;
ATerm term_x_6;
ATerm term_u_6;
ATerm term_q_6;
ATerm term_k_6;
ATerm term_b_6;
ATerm term_z_5;
ATerm term_y_5;
ATerm term_x_5;
ATerm term_w_5;
ATerm term_a_5;
void init_constant_terms (void)
{
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym__2, term_s_8, term_b_9);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_9);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym__2, term_h_9, term_a_5);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym__2, term_s_9, term_t_9);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym__2, term_s_11, term_a_5);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_a_5);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym__2, term_f_11, term_a_5);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym__2, term_v_13, term_a_5);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-specification: ", 0, ATtrue));
}
ATerm default_usage_0_0 (ATerm);
ATerm debug_1_0 (ATerm h_92 (ATerm), ATerm);
ATerm b_0 (ATerm);
ATerm build_term_expression_0_0 (ATerm);
ATerm f_0 (ATerm);
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
ATerm map_1_0 (ATerm m_79 (ATerm), ATerm);
ATerm t_3 (ATerm v_38, ATerm w_38, ATerm);
ATerm u_3 (ATerm j_42, ATerm k_42, ATerm);
ATerm w_3 (ATerm j_92 (ATerm), ATerm j_401, ATerm n_42, ATerm);
ATerm v_3 (ATerm f_42, ATerm g_42, ATerm);
ATerm i_1 (ATerm);
ATerm k_1 (ATerm);
ATerm m_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm l_95 (ATerm), ATerm);
ATerm n_39 (ATerm h_39, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm x_3 (ATerm l_42, ATerm);
ATerm y_3 (ATerm x_38, ATerm y_38, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm y_40 (ATerm x_39, ATerm);
ATerm z_40 (ATerm b_40, ATerm c_40, ATerm d_40, ATerm);
ATerm a_41 (ATerm l_40, ATerm m_40, ATerm n_40, ATerm);
ATerm z_3 (ATerm);
ATerm n_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm w_79 (ATerm), ATerm);
ATerm s_3 (ATerm k_33, ATerm l_33, ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm u_93 (ATerm), ATerm);
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
ATerm f_4 (ATerm m_43, ATerm n_43, ATerm);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm o_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm d_4 (ATerm k_48, ATerm l_48, ATerm j_48, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm p_2 (ATerm);
ATerm w_2 (ATerm);
ATerm y_2 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm a_4 (ATerm v_35, ATerm w_35, ATerm);
ATerm foldr_2_0 (ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm t_93 (ATerm), ATerm);
ATerm b_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm c_3 (ATerm);
ATerm need_help_1_0 (ATerm j_96 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm c_4 (ATerm b_50, ATerm c_50, ATerm);
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
ATerm Cons_2_0 (ATerm r_57 (ATerm), ATerm s_57 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm m_98 (ATerm), ATerm);
ATerm q_3 (ATerm);
ATerm e_4 (ATerm);
ATerm i_4 (ATerm);
ATerm k_4 (ATerm);
ATerm parse_options_1_0 (ATerm l_98 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm l_96 (ATerm), ATerm m_96 (ATerm), ATerm n_96 (ATerm), ATerm o_96 (ATerm), ATerm);
ATerm i_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm iowrap_3_0 (ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm w_95 (ATerm), ATerm);
ATerm t_5 (ATerm);
ATerm v_5 (ATerm);
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
  t = term_a_5;
  t = whoami_0_0(t);
  l_0 = t;
  t = term_w_5;
  n_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_5), l_0), term_x_5);
  o_0 = t;
  t = SSL_printnl(n_0, o_0);
  t = term_z_5;
  m_0 = t;
  t = SSL_exit(m_0);
  t = a_0;
  return(t);
}
ATerm debug_1_0 (ATerm h_92 (ATerm), ATerm t)
{
  ATerm s_0 = NULL,x_0 = NULL,c_1 = NULL,d_1 = NULL;
  s_0 = t;
  t = h_92(t);
  x_0 = t;
  t = term_w_5;
  c_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_0), x_0);
  d_1 = t;
  t = SSL_printnl(c_1, d_1);
  t = s_0;
  return(t);
}
ATerm b_0 (ATerm t)
{
  t = term_b_6;
  return(t);
}
ATerm build_term_expression_0_0 (ATerm t)
{
  ATerm d_6 = t;
  int e_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL;
      y_4 = t;
      if(match_cons(t, sym_Var_1))
        {
          z_4 = ATgetArgument(t, 0);
          {
            ATerm p_0 = NULL,r_0 = NULL,y_1 = NULL;
            t = SSLgetAnnotations(y_4);
            p_0 = t;
            t = SSL_is_string(z_4);
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
              z_4 = ATgetArgument(t, 0);
              {
                ATerm z_0 = NULL,b_1 = NULL,a_2 = NULL;
                t = SSLgetAnnotations(y_4);
                z_0 = t;
                t = SSL_is_int(z_4);
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
                  z_4 = ATgetArgument(t, 0);
                  {
                    ATerm j_1 = NULL,l_1 = NULL,b_2 = NULL;
                    t = SSLgetAnnotations(y_4);
                    j_1 = t;
                    t = SSL_is_real(z_4);
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
                      z_4 = ATgetArgument(t, 0);
                      {
                        ATerm r_1 = NULL,t_1 = NULL,c_2 = NULL;
                        t = SSLgetAnnotations(y_4);
                        r_1 = t;
                        t = SSL_is_string(z_4);
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
                          z_4 = ATgetArgument(t, 0);
                          x_4 = ATgetArgument(t, 1);
                          {
                            ATerm k_2 = NULL,n_2 = NULL,v_2 = NULL,e_2 = NULL;
                            t = SSLgetAnnotations(y_4);
                            k_2 = t;
                            t = SSL_is_string(z_4);
                            n_2 = t;
                            t = x_4;
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
                              z_4 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(y_4);
                          i_3 = t;
                          t = z_4;
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
      LocalPopChoice(e_6);
    }
  else
    {
      t = d_6;
      t = debug_1_0(b_0, t);
    }
  return(t);
}
ATerm f_0 (ATerm t)
{
  t = term_b_6;
  return(t);
}
ATerm match_term_expression_0_0 (ATerm t)
{
  ATerm f_6 = t;
  int g_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_10 = NULL,d_10 = NULL,k_10 = NULL;
      c_10 = t;
      if(match_cons(t, sym_Wld_0))
        {
          t = c_10;
        }
      else
        {
          if(match_cons(t, sym_Var_1))
            {
              d_10 = ATgetArgument(t, 0);
              {
                ATerm r_3 = NULL,g_4 = NULL,q_2 = NULL;
                t = SSLgetAnnotations(c_10);
                r_3 = t;
                t = SSL_is_string(d_10);
                g_4 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, g_4);
                q_2 = t;
                t = SSLsetAnnotations(q_2, r_3);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  d_10 = ATgetArgument(t, 0);
                  {
                    ATerm j_5 = NULL,m_5 = NULL,r_2 = NULL;
                    t = SSLgetAnnotations(c_10);
                    j_5 = t;
                    t = SSL_is_int(d_10);
                    m_5 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, m_5);
                    r_2 = t;
                    t = SSLsetAnnotations(r_2, j_5);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      d_10 = ATgetArgument(t, 0);
                      {
                        ATerm s_5 = NULL,u_5 = NULL,s_2 = NULL;
                        t = SSLgetAnnotations(c_10);
                        s_5 = t;
                        t = SSL_is_real(d_10);
                        u_5 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, u_5);
                        s_2 = t;
                        t = SSLsetAnnotations(s_2, s_5);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Str_1))
                        {
                          d_10 = ATgetArgument(t, 0);
                          {
                            ATerm a_6 = NULL,c_6 = NULL,t_2 = NULL;
                            t = SSLgetAnnotations(c_10);
                            a_6 = t;
                            t = SSL_is_string(d_10);
                            c_6 = t;
                            t = (ATerm) ATmakeAppl(sym_Str_1, c_6);
                            t_2 = t;
                            t = SSLsetAnnotations(t_2, a_6);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Op_2))
                            {
                              d_10 = ATgetArgument(t, 0);
                              k_10 = ATgetArgument(t, 1);
                              {
                                ATerm j_6 = NULL,m_6 = NULL,o_6 = NULL,u_2 = NULL;
                                t = SSLgetAnnotations(c_10);
                                j_6 = t;
                                t = SSL_is_string(d_10);
                                m_6 = t;
                                t = k_10;
                                t = map_1_0(match_term_expression_0_0, t);
                                o_6 = t;
                                t = (ATerm) ATmakeAppl(sym_Op_2, m_6, o_6);
                                u_2 = t;
                                t = SSLsetAnnotations(u_2, j_6);
                              }
                            }
                          else
                            {
                              ATerm l_7 = NULL,q_7 = NULL,r_7 = NULL,x_2 = NULL;
                              if(match_cons(t, sym_As_2))
                                {
                                  d_10 = ATgetArgument(t, 0);
                                  k_10 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(c_10);
                              l_7 = t;
                              t = d_10;
                              t = match_term_expression_0_0(t);
                              q_7 = t;
                              t = k_10;
                              t = match_term_expression_0_0(t);
                              r_7 = t;
                              t = (ATerm) ATmakeAppl(sym_As_2, q_7, r_7);
                              x_2 = t;
                              t = SSLsetAnnotations(x_2, l_7);
                            }
                        }
                    }
                }
            }
        }
      ;
      LocalPopChoice(g_6);
    }
  else
    {
      t = f_6;
      t = debug_1_0(f_0, t);
    }
  return(t);
}
ATerm q_0 (ATerm t)
{
  ATerm h_6 = t;
  int i_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_20 = NULL;
      b_20 = t;
      t = SSL_is_string(b_20);
      ;
      LocalPopChoice(i_6);
    }
  else
    {
      t = h_6;
      t = map_1_0(t_0, t);
    }
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm t_20 = NULL;
  t_20 = t;
  t = SSL_is_int(t_20);
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL,n_6 = NULL;
  m_23 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      d_23 = ATgetArgument(t, 0);
      e_23 = ATgetArgument(t, 1);
      f_23 = ATgetArgument(t, 2);
      g_23 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_23);
  c_23 = t;
  t = SSL_is_string(d_23);
  h_23 = t;
  t = e_23;
  t = map_1_0(v_0, t);
  j_23 = t;
  t = f_23;
  t = map_1_0(w_0, t);
  k_23 = t;
  t = g_23;
  t = strategy_expression_0_0(t);
  l_23 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, h_23, j_23, k_23, l_23);
  n_6 = t;
  t = SSLsetAnnotations(n_6, c_23);
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,f_5 = NULL;
  u_24 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      q_24 = ATgetArgument(t, 0);
      r_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_24);
  p_24 = t;
  t = SSL_is_string(q_24);
  s_24 = t;
  t = r_24;
  t = type_expression_0_0(t);
  t_24 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, s_24, t_24);
  f_5 = t;
  t = SSLsetAnnotations(f_5, p_24);
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm w_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,k_5 = NULL;
  c_25 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      y_24 = ATgetArgument(t, 0);
      z_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_25);
  w_24 = t;
  t = SSL_is_string(y_24);
  a_25 = t;
  t = z_24;
  t = type_expression_0_0(t);
  b_25 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, a_25, b_25);
  k_5 = t;
  t = SSLsetAnnotations(k_5, w_24);
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = term_k_6;
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm l_6 = t;
  int p_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_29 = NULL,r_29 = NULL,t_29 = NULL,u_29 = NULL;
      r_29 = t;
      if(match_cons(t, sym_Id_0))
        {
          t = r_29;
        }
      else
        {
          if(match_cons(t, sym_Fail_0))
            {
              t = r_29;
            }
          else
            {
              if(match_cons(t, sym_Not_1))
                {
                  t_29 = ATgetArgument(t, 0);
                  {
                    ATerm g_9 = NULL,j_9 = NULL,b_4 = NULL;
                    t = SSLgetAnnotations(r_29);
                    g_9 = t;
                    t = t_29;
                    t = strategy_expression_0_0(t);
                    j_9 = t;
                    t = (ATerm) ATmakeAppl(sym_Not_1, j_9);
                    b_4 = t;
                    t = SSLsetAnnotations(b_4, g_9);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Seq_2))
                    {
                      t_29 = ATgetArgument(t, 0);
                      u_29 = ATgetArgument(t, 1);
                      {
                        ATerm v_9 = NULL,b_10 = NULL,e_10 = NULL,h_4 = NULL;
                        t = SSLgetAnnotations(r_29);
                        v_9 = t;
                        t = t_29;
                        t = strategy_expression_0_0(t);
                        b_10 = t;
                        t = u_29;
                        t = strategy_expression_0_0(t);
                        e_10 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, b_10, e_10);
                        h_4 = t;
                        t = SSLsetAnnotations(h_4, v_9);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Choice_2))
                        {
                          t_29 = ATgetArgument(t, 0);
                          u_29 = ATgetArgument(t, 1);
                          {
                            ATerm n_10 = NULL,r_10 = NULL,s_10 = NULL,j_4 = NULL;
                            t = SSLgetAnnotations(r_29);
                            n_10 = t;
                            t = t_29;
                            t = strategy_expression_0_0(t);
                            r_10 = t;
                            t = u_29;
                            t = strategy_expression_0_0(t);
                            s_10 = t;
                            t = (ATerm) ATmakeAppl(sym_Choice_2, r_10, s_10);
                            j_4 = t;
                            t = SSLsetAnnotations(j_4, n_10);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_LChoice_2))
                            {
                              t_29 = ATgetArgument(t, 0);
                              u_29 = ATgetArgument(t, 1);
                              {
                                ATerm g_11 = NULL,j_11 = NULL,k_11 = NULL,l_4 = NULL;
                                t = SSLgetAnnotations(r_29);
                                g_11 = t;
                                t = t_29;
                                t = strategy_expression_0_0(t);
                                j_11 = t;
                                t = u_29;
                                t = strategy_expression_0_0(t);
                                k_11 = t;
                                t = (ATerm) ATmakeAppl(sym_LChoice_2, j_11, k_11);
                                l_4 = t;
                                t = SSLsetAnnotations(l_4, g_11);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_GuardedLChoice_3))
                                {
                                  t_29 = ATgetArgument(t, 0);
                                  u_29 = ATgetArgument(t, 1);
                                  o_29 = ATgetArgument(t, 2);
                                  {
                                    ATerm t_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,m_4 = NULL;
                                    t = SSLgetAnnotations(r_29);
                                    t_11 = t;
                                    t = t_29;
                                    t = strategy_expression_0_0(t);
                                    x_11 = t;
                                    t = u_29;
                                    t = strategy_expression_0_0(t);
                                    y_11 = t;
                                    t = o_29;
                                    t = strategy_expression_0_0(t);
                                    z_11 = t;
                                    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, x_11, y_11, z_11);
                                    m_4 = t;
                                    t = SSLsetAnnotations(m_4, t_11);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GChoice_2))
                                    {
                                      t_29 = ATgetArgument(t, 0);
                                      u_29 = ATgetArgument(t, 1);
                                      {
                                        ATerm i_12 = NULL,l_12 = NULL,m_12 = NULL,n_4 = NULL;
                                        t = SSLgetAnnotations(r_29);
                                        i_12 = t;
                                        t = t_29;
                                        t = strategy_expression_0_0(t);
                                        l_12 = t;
                                        t = u_29;
                                        t = strategy_expression_0_0(t);
                                        m_12 = t;
                                        t = (ATerm) ATmakeAppl(sym_GChoice_2, l_12, m_12);
                                        n_4 = t;
                                        t = SSLsetAnnotations(n_4, i_12);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LGChoice_2))
                                        {
                                          t_29 = ATgetArgument(t, 0);
                                          u_29 = ATgetArgument(t, 1);
                                          {
                                            ATerm u_12 = NULL,x_12 = NULL,y_12 = NULL,o_4 = NULL;
                                            t = SSLgetAnnotations(r_29);
                                            u_12 = t;
                                            t = t_29;
                                            t = strategy_expression_0_0(t);
                                            x_12 = t;
                                            t = u_29;
                                            t = strategy_expression_0_0(t);
                                            y_12 = t;
                                            t = (ATerm) ATmakeAppl(sym_LGChoice_2, x_12, y_12);
                                            o_4 = t;
                                            t = SSLsetAnnotations(o_4, u_12);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_CallT_3))
                                            {
                                              t_29 = ATgetArgument(t, 0);
                                              u_29 = ATgetArgument(t, 1);
                                              o_29 = ATgetArgument(t, 2);
                                              {
                                                ATerm h_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,q_4 = NULL,p_4 = NULL;
                                                t = SSLgetAnnotations(r_29);
                                                h_13 = t;
                                                t = t_29;
                                                if(match_cons(t, sym_SVar_1))
                                                  {
                                                    o_13 = ATgetArgument(t, 0);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSLgetAnnotations(t_29);
                                                n_13 = t;
                                                t = SSL_is_string(o_13);
                                                p_13 = t;
                                                t = (ATerm) ATmakeAppl(sym_SVar_1, p_13);
                                                p_4 = t;
                                                t = SSLsetAnnotations(p_4, n_13);
                                                q_13 = t;
                                                t = u_29;
                                                t = map_1_0(strategy_expression_0_0, t);
                                                l_13 = t;
                                                t = o_29;
                                                t = map_1_0(build_term_expression_0_0, t);
                                                m_13 = t;
                                                t = (ATerm) ATmakeAppl(sym_CallT_3, q_13, l_13, m_13);
                                                q_4 = t;
                                                t = SSLsetAnnotations(q_4, h_13);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_PrimT_3))
                                                {
                                                  t_29 = ATgetArgument(t, 0);
                                                  u_29 = ATgetArgument(t, 1);
                                                  o_29 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm c_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,r_4 = NULL;
                                                    t = SSLgetAnnotations(r_29);
                                                    c_14 = t;
                                                    t = SSL_is_string(t_29);
                                                    j_14 = t;
                                                    t = u_29;
                                                    t = map_1_0(strategy_expression_0_0, t);
                                                    k_14 = t;
                                                    t = o_29;
                                                    t = map_1_0(build_term_expression_0_0, t);
                                                    l_14 = t;
                                                    t = (ATerm) ATmakeAppl(sym_PrimT_3, j_14, k_14, l_14);
                                                    r_4 = t;
                                                    t = SSLsetAnnotations(r_4, c_14);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Rec_2))
                                                    {
                                                      t_29 = ATgetArgument(t, 0);
                                                      u_29 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm d_15 = NULL,j_15 = NULL,l_15 = NULL,s_4 = NULL;
                                                        t = SSLgetAnnotations(r_29);
                                                        d_15 = t;
                                                        t = SSL_is_string(t_29);
                                                        j_15 = t;
                                                        t = u_29;
                                                        t = strategy_expression_0_0(t);
                                                        l_15 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Rec_2, j_15, l_15);
                                                        s_4 = t;
                                                        t = SSLsetAnnotations(s_4, d_15);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Path_2))
                                                        {
                                                          t_29 = ATgetArgument(t, 0);
                                                          u_29 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm v_15 = NULL,a_16 = NULL,b_16 = NULL,t_4 = NULL;
                                                            t = SSLgetAnnotations(r_29);
                                                            v_15 = t;
                                                            t = SSL_is_int(t_29);
                                                            a_16 = t;
                                                            t = u_29;
                                                            t = strategy_expression_0_0(t);
                                                            b_16 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Path_2, a_16, b_16);
                                                            t_4 = t;
                                                            t = SSLsetAnnotations(t_4, v_15);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_One_1))
                                                            {
                                                              t_29 = ATgetArgument(t, 0);
                                                              {
                                                                ATerm p_16 = NULL,r_16 = NULL,u_4 = NULL;
                                                                t = SSLgetAnnotations(r_29);
                                                                p_16 = t;
                                                                t = t_29;
                                                                t = strategy_expression_0_0(t);
                                                                r_16 = t;
                                                                t = (ATerm) ATmakeAppl(sym_One_1, r_16);
                                                                u_4 = t;
                                                                t = SSLsetAnnotations(u_4, p_16);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_Some_1))
                                                                {
                                                                  t_29 = ATgetArgument(t, 0);
                                                                  {
                                                                    ATerm e_17 = NULL,h_17 = NULL,v_4 = NULL;
                                                                    t = SSLgetAnnotations(r_29);
                                                                    e_17 = t;
                                                                    t = t_29;
                                                                    t = strategy_expression_0_0(t);
                                                                    h_17 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Some_1, h_17);
                                                                    v_4 = t;
                                                                    t = SSLsetAnnotations(v_4, e_17);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_All_1))
                                                                    {
                                                                      t_29 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm n_17 = NULL,t_17 = NULL,w_4 = NULL;
                                                                        t = SSLgetAnnotations(r_29);
                                                                        n_17 = t;
                                                                        t = t_29;
                                                                        t = strategy_expression_0_0(t);
                                                                        t_17 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_All_1, t_17);
                                                                        w_4 = t;
                                                                        t = SSLsetAnnotations(w_4, n_17);
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Thread_1))
                                                                        {
                                                                          t_29 = ATgetArgument(t, 0);
                                                                          {
                                                                            ATerm j_18 = NULL,m_18 = NULL,b_5 = NULL;
                                                                            t = SSLgetAnnotations(r_29);
                                                                            j_18 = t;
                                                                            t = t_29;
                                                                            t = strategy_expression_0_0(t);
                                                                            m_18 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_Thread_1, m_18);
                                                                            b_5 = t;
                                                                            t = SSLsetAnnotations(b_5, j_18);
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Match_1))
                                                                            {
                                                                              t_29 = ATgetArgument(t, 0);
                                                                              {
                                                                                ATerm s_18 = NULL,u_18 = NULL,c_5 = NULL;
                                                                                t = SSLgetAnnotations(r_29);
                                                                                s_18 = t;
                                                                                t = t_29;
                                                                                t = match_term_expression_0_0(t);
                                                                                u_18 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, u_18);
                                                                                c_5 = t;
                                                                                t = SSLsetAnnotations(c_5, s_18);
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Build_1))
                                                                                {
                                                                                  t_29 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm f_19 = NULL,i_19 = NULL,d_5 = NULL;
                                                                                    t = SSLgetAnnotations(r_29);
                                                                                    f_19 = t;
                                                                                    t = t_29;
                                                                                    t = build_term_expression_0_0(t);
                                                                                    i_19 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_Build_1, i_19);
                                                                                    d_5 = t;
                                                                                    t = SSLsetAnnotations(d_5, f_19);
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Scope_2))
                                                                                    {
                                                                                      t_29 = ATgetArgument(t, 0);
                                                                                      u_29 = ATgetArgument(t, 1);
                                                                                      {
                                                                                        ATerm s_19 = NULL,w_19 = NULL,x_19 = NULL,e_5 = NULL;
                                                                                        t = SSLgetAnnotations(r_29);
                                                                                        s_19 = t;
                                                                                        t = t_29;
                                                                                        t = map_1_0(q_0, t);
                                                                                        w_19 = t;
                                                                                        t = u_29;
                                                                                        t = strategy_expression_0_0(t);
                                                                                        x_19 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, w_19, x_19);
                                                                                        e_5 = t;
                                                                                        t = SSLsetAnnotations(e_5, s_19);
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      ATerm a_21 = NULL,d_21 = NULL,e_21 = NULL,r_6 = NULL;
                                                                                      if(match_cons(t, sym_Let_2))
                                                                                        {
                                                                                          t_29 = ATgetArgument(t, 0);
                                                                                          u_29 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = SSLgetAnnotations(r_29);
                                                                                      a_21 = t;
                                                                                      t = t_29;
                                                                                      t = map_1_0(u_0, t);
                                                                                      d_21 = t;
                                                                                      t = u_29;
                                                                                      t = strategy_expression_0_0(t);
                                                                                      e_21 = t;
                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, d_21, e_21);
                                                                                      r_6 = t;
                                                                                      t = SSLsetAnnotations(r_6, a_21);
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
      LocalPopChoice(p_6);
    }
  else
    {
      t = l_6;
      t = debug_1_0(y_0, t);
    }
  return(t);
}
ATerm type_expression_0_0 (ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL,s_33 = NULL;
  p_33 = t;
  if(match_cons(t, sym_ConstType_1))
    {
      q_33 = ATgetArgument(t, 0);
      {
        ATerm m_26 = NULL,r_26 = NULL,f_8 = NULL;
        t = SSLgetAnnotations(p_33);
        m_26 = t;
        t = q_33;
        {
          ATerm d_28 (ATerm t)
          {
            ATerm p_27 = NULL,r_27 = NULL,c_28 = NULL;
            r_27 = t;
            if(match_cons(t, sym_Sort_2))
              {
                c_28 = ATgetArgument(t, 0);
                p_27 = ATgetArgument(t, 1);
                {
                  ATerm u_28 = NULL,x_28 = NULL,z_28 = NULL,d_8 = NULL;
                  t = SSLgetAnnotations(r_27);
                  u_28 = t;
                  t = SSL_is_string(c_28);
                  x_28 = t;
                  t = p_27;
                  t = map_1_0(d_28, t);
                  z_28 = t;
                  t = (ATerm) ATmakeAppl(sym_Sort_2, x_28, z_28);
                  d_8 = t;
                  t = SSLsetAnnotations(d_8, u_28);
                }
              }
            else
              {
                ATerm q_29 = NULL,z_29 = NULL,e_8 = NULL;
                if(match_cons(t, sym_SortVar_1))
                  {
                    c_28 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(r_27);
                q_29 = t;
                t = SSL_is_string(c_28);
                z_29 = t;
                t = (ATerm) ATmakeAppl(sym_SortVar_1, z_29);
                e_8 = t;
                t = SSLsetAnnotations(e_8, q_29);
              }
            return(t);
          }
          t = d_28(t);
          r_26 = t;
          t = (ATerm) ATmakeAppl(sym_ConstType_1, r_26);
          f_8 = t;
          t = SSLsetAnnotations(f_8, m_26);
        }
      }
    }
  else
    {
      ATerm k_30 = NULL,q_30 = NULL,r_30 = NULL,g_8 = NULL;
      if(match_cons(t, sym_FunType_2))
        {
          q_33 = ATgetArgument(t, 0);
          s_33 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_33);
      k_30 = t;
      t = q_33;
      t = map_1_0(type_expression_0_0, t);
      q_30 = t;
      t = s_33;
      t = type_expression_0_0(t);
      r_30 = t;
      t = (ATerm) ATmakeAppl(sym_FunType_2, q_30, r_30);
      g_8 = t;
      t = SSLsetAnnotations(g_8, k_30);
    }
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL,l_8 = NULL;
  x_31 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      t_31 = ATgetArgument(t, 0);
      u_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_31);
  s_31 = t;
  t = SSL_is_string(t_31);
  v_31 = t;
  t = u_31;
  t = type_expression_0_0(t);
  w_31 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, v_31, w_31);
  l_8 = t;
  t = SSLsetAnnotations(l_8, s_31);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,s_39 = NULL,t_39 = NULL,n_8 = NULL;
  t_39 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      a_39 = ATgetArgument(t, 0);
      b_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_39);
  z_38 = t;
  t = SSL_is_string(a_39);
  c_39 = t;
  t = b_39;
  t = type_expression_0_0(t);
  s_39 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, c_39, s_39);
  n_8 = t;
  t = SSLsetAnnotations(n_8, z_38);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,o_8 = NULL;
  i_41 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      v_39 = ATgetArgument(t, 0);
      w_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_41);
  u_39 = t;
  t = SSL_is_string(v_39);
  g_41 = t;
  t = w_39;
  t = type_expression_0_0(t);
  h_41 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, g_41, h_41);
  o_8 = t;
  t = SSLsetAnnotations(o_8, u_39);
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = term_q_6;
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm s_6 = t;
  int t_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL;
      u_35 = t;
      if(match_cons(t, sym_SDef_3))
        {
          x_35 = ATgetArgument(t, 0);
          y_35 = ATgetArgument(t, 1);
          z_35 = ATgetArgument(t, 2);
          {
            ATerm k_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL,m_8 = NULL;
            t = SSLgetAnnotations(u_35);
            k_31 = t;
            t = SSL_is_string(x_35);
            o_31 = t;
            t = y_35;
            t = map_1_0(a_1, t);
            p_31 = t;
            t = z_35;
            t = strategy_expression_0_0(t);
            q_31 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, o_31, p_31, q_31);
            m_8 = t;
            t = SSLsetAnnotations(m_8, k_31);
          }
        }
      else
        {
          ATerm y_33 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL,b_37 = NULL,p_8 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              x_35 = ATgetArgument(t, 0);
              y_35 = ATgetArgument(t, 1);
              z_35 = ATgetArgument(t, 2);
              a_36 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(u_35);
          y_33 = t;
          t = SSL_is_string(x_35);
          x_36 = t;
          t = y_35;
          t = map_1_0(e_1, t);
          y_36 = t;
          t = z_35;
          t = map_1_0(f_1, t);
          z_36 = t;
          t = a_36;
          t = strategy_expression_0_0(t);
          b_37 = t;
          t = (ATerm) ATmakeAppl(sym_SDefT_4, x_36, y_36, z_36, b_37);
          p_8 = t;
          t = SSLsetAnnotations(p_8, y_33);
        }
      ;
      LocalPopChoice(t_6);
    }
  else
    {
      t = s_6;
      t = debug_1_0(g_1, t);
    }
  return(t);
}
ATerm map_1_0 (ATerm m_79 (ATerm), ATerm t)
{
  ATerm r_36 (ATerm t)
  {
    ATerm o_36 = NULL,p_36 = NULL,q_36 = NULL;
    o_36 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_36;
      }
    else
      {
        ATerm w_43 = NULL,z_43 = NULL,b_44 = NULL,v_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_36 = ATgetFirst((ATermList) t);
            q_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_36);
        w_43 = t;
        t = p_36;
        t = m_79(t);
        z_43 = t;
        t = q_36;
        t = r_36(t);
        b_44 = t;
        t = (ATerm) ATinsert(CheckATermList(b_44), z_43);
        v_8 = t;
        t = SSLsetAnnotations(v_8, w_43);
      }
    return(t);
  }
  t = r_36(t);
  return(t);
}
ATerm t_3 (ATerm v_38, ATerm w_38, ATerm t)
{
  ATerm t_36 = NULL;
  t = SSL_fputc(v_38, w_38);
  t_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_36);
  return(t);
}
ATerm u_3 (ATerm j_42, ATerm k_42, ATerm t)
{
  ATerm u_36 = NULL;
  t = SSL_write_term_to_stream_text(j_42, k_42);
  u_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_36);
  return(t);
}
ATerm w_3 (ATerm j_92 (ATerm), ATerm j_401, ATerm n_42, ATerm t)
{
  ATerm v_36 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_401, term_u_6);
  t = z_3(t);
  v_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_36, n_42);
  t = j_92(t);
  t = fclose_0_0(t);
  t = n_42;
  return(t);
}
ATerm v_3 (ATerm f_42, ATerm g_42, ATerm t)
{
  ATerm w_36 = NULL;
  t = SSL_write_term_to_stream_baf(f_42, g_42);
  w_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_36);
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
  ATerm y_46 = NULL,k_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_6 = ATgetArgument(t, 0);
      if(match_cons(v_6, sym_Stream_1))
        {
          y_46 = ATgetArgument(v_6, 0);
        }
      else
        _fail(t);
      k_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_3(y_46, k_47, t);
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm e_49 = NULL,x_49 = NULL,y_49 = NULL,z_49 = NULL,a_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_6 = ATgetArgument(t, 0);
      if(match_cons(w_6, sym_Stream_1))
        {
          z_49 = ATgetArgument(w_6, 0);
        }
      else
        _fail(t);
      a_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3(z_49, a_50, t);
  e_49 = t;
  t = term_x_6;
  x_49 = t;
  t = e_49;
  if(match_cons(t, sym_Stream_1))
    {
      y_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_x_6, e_49);
  t = t_3(x_49, y_49, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm a_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL,l_38 = NULL,m_38 = NULL,y_8 = NULL,x_8 = NULL;
  c_37 = t;
  if(match_cons(t, sym__2))
    {
      j_37 = ATgetArgument(t, 0);
      k_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_37);
  i_37 = t;
  t = j_37;
  {
    ATerm y_6 = t;
    int z_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((a_37 != NULL) && (a_37 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                a_37 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(h_1, t);
        ;
        LocalPopChoice(z_6);
      }
    else
      {
        t = y_6;
        t = term_a_7;
        a_37 = t;
      }
    l_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_37, k_37);
    x_8 = t;
    t = SSLsetAnnotations(x_8, i_37);
    t = c_37;
    if(match_cons(t, sym__2))
      {
        e_37 = ATgetArgument(t, 0);
        f_37 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_37);
    d_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_37, (ATerm) ATmakeAppl(sym__2, not_null(a_37), f_37));
    y_8 = t;
    t = SSLsetAnnotations(y_8, d_37);
    h_37 = t;
    if(match_cons(t, sym__2))
      {
        l_38 = ATgetArgument(t, 0);
        m_38 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm b_7 = t;
      int c_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_45 = NULL,q_45 = NULL,d_46 = NULL,l_46 = NULL,x_46 = NULL,z_8 = NULL;
          t = SSLgetAnnotations(h_37);
          g_45 = t;
          t = l_38;
          t = fetch_1_0(i_1, t);
          q_45 = t;
          t = m_38;
          if(match_cons(t, sym__2))
            {
              l_46 = ATgetArgument(t, 0);
              x_46 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_3(k_1, l_46, x_46, t);
          d_46 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_45, d_46);
          z_8 = t;
          t = SSLsetAnnotations(z_8, g_45);
          ;
          LocalPopChoice(c_7);
        }
      else
        {
          t = b_7;
          {
            ATerm w_47 = NULL,h_48 = NULL,o_48 = NULL,w_48 = NULL,a_9 = NULL;
            t = SSLgetAnnotations(h_37);
            w_47 = t;
            t = m_38;
            if(match_cons(t, sym__2))
              {
                o_48 = ATgetArgument(t, 0);
                w_48 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = w_3(m_1, o_48, w_48, t);
            h_48 = t;
            t = (ATerm) ATmakeAppl(sym__2, l_38, h_48);
            a_9 = t;
            t = SSLsetAnnotations(a_9, w_47);
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
ATerm apply_strategy_1_0 (ATerm l_95 (ATerm), ATerm t)
{
  ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL;
  t_38 = t;
  t = dtime_0_0(t);
  t = t_38;
  t = l_95(t);
  s_38 = t;
  t = dtime_0_0(t);
  p_38 = t;
  t = s_38;
  if(match_cons(t, sym__2))
    {
      q_38 = ATgetArgument(t, 0);
      r_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_38), (ATerm) ATmakeAppl(sym_Runtime_1, p_38)), r_38);
  return(t);
}
ATerm n_39 (ATerm h_39, ATerm t)
{
  t = SSL_fclose(h_39);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_39 = NULL,l_39 = NULL;
  l_39 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_39 = ATgetArgument(t, 0);
      {
        ATerm d_7 = t;
        int e_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_39);
            ;
            LocalPopChoice(e_7);
          }
        else
          {
            t = d_7;
            t = n_39(l_39, t);
          }
      }
    }
  else
    {
      t = n_39(l_39, t);
    }
  return(t);
}
ATerm x_3 (ATerm l_42, ATerm t)
{
  t = SSL_read_term_from_stream(l_42);
  return(t);
}
ATerm y_3 (ATerm x_38, ATerm y_38, ATerm t)
{
  ATerm o_39 = NULL;
  t = SSL_fopen(x_38, y_38);
  o_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_39);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_39 = NULL;
  t = SSL_stdin_stream();
  p_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_39);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_39 = NULL;
  t = SSL_stdout_stream();
  q_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_39);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_39 = NULL;
  t = SSL_stderr_stream();
  r_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_39);
  return(t);
}
ATerm y_40 (ATerm x_39, ATerm t)
{
  ATerm y_39 = NULL;
  t = SSL_explode_term(x_39);
  if(match_cons(t, sym__2))
    {
      ATerm f_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_7 = ATgetArgument(t, 1);
        if(((ATgetType(g_7) == AT_LIST) && !(ATisEmpty(g_7))))
          {
            y_39 = ATgetFirst((ATermList) g_7);
            {
              ATerm h_7 = (ATerm) ATgetNext((ATermList) g_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_39;
  if(match_cons(t, sym_stderr_0))
    {
      t = y_39;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_39;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_39;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm z_40 (ATerm b_40, ATerm c_40, ATerm d_40, ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL,j_40 = NULL,n_9 = NULL;
  t = SSLgetAnnotations(d_40);
  g_40 = t;
  t = b_40;
  if(match_cons(t, sym_Path_1))
    {
      j_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_40, c_40);
  n_9 = t;
  t = SSLsetAnnotations(n_9, g_40);
  if(match_cons(t, sym__2))
    {
      e_40 = ATgetArgument(t, 0);
      f_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(e_40, f_40, t);
  return(t);
}
ATerm a_41 (ATerm l_40, ATerm m_40, ATerm n_40, ATerm t)
{
  ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL,t_40 = NULL,o_9 = NULL;
  t = SSLgetAnnotations(n_40);
  q_40 = t;
  t = SSL_is_string(l_40);
  t_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_40, m_40);
  o_9 = t;
  t = SSLsetAnnotations(o_9, q_40);
  if(match_cons(t, sym__2))
    {
      o_40 = ATgetArgument(t, 0);
      p_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(o_40, p_40, t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL;
  v_40 = t;
  if(match_cons(t, sym__2))
    {
      w_40 = ATgetArgument(t, 0);
      x_40 = ATgetArgument(t, 1);
      {
        ATerm i_7 = t;
        int j_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_40(v_40, t);
            ;
            LocalPopChoice(j_7);
          }
        else
          {
            t = i_7;
            {
              ATerm k_7 = t;
              int m_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_40(w_40, x_40, v_40, t);
                  ;
                  LocalPopChoice(m_7);
                }
              else
                {
                  t = k_7;
                  t = a_41(w_40, x_40, v_40, t);
                }
            }
          }
      }
    }
  else
    {
      t = y_40(v_40, t);
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_n_7;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL;
  ATerm o_7 = t;
  int p_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_41 = NULL;
      e_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_41, term_s_7);
      t = z_3(t);
      ;
      LocalPopChoice(p_7);
    }
  else
    {
      t = o_7;
      t = debug_1_0(n_1, t);
      _fail(t);
    }
  c_41 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_3(d_41, t);
  b_41 = t;
  t = c_41;
  t = fclose_0_0(t);
  t = b_41;
  return(t);
}
ATerm fetch_1_0 (ATerm w_79 (ATerm), ATerm t)
{
  ATerm c_42 (ATerm t)
  {
    ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL;
    z_41 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_42 = ATgetFirst((ATermList) t);
        b_42 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm t_7 = t;
      int u_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_53 = NULL,t_53 = NULL,u_9 = NULL;
          t = SSLgetAnnotations(z_41);
          q_53 = t;
          t = a_42;
          t = w_79(t);
          t_53 = t;
          t = (ATerm) ATinsert(CheckATermList(b_42), t_53);
          u_9 = t;
          t = SSLsetAnnotations(u_9, q_53);
          ;
          LocalPopChoice(u_7);
        }
      else
        {
          t = t_7;
          {
            ATerm b_54 = NULL,e_54 = NULL,w_9 = NULL;
            t = SSLgetAnnotations(z_41);
            b_54 = t;
            t = b_42;
            t = c_42(t);
            e_54 = t;
            t = (ATerm) ATinsert(CheckATermList(e_54), a_42);
            w_9 = t;
            t = SSLsetAnnotations(w_9, b_54);
          }
        }
    }
    return(t);
  }
  t = c_42(t);
  return(t);
}
ATerm s_3 (ATerm k_33, ATerm l_33, ATerm t)
{
  t = SSL_strcat(k_33, l_33);
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm v_7 = t;
  int w_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(w_7);
    }
  else
    {
      t = v_7;
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_x_7;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm y_7 = t;
  int z_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_42 = NULL;
      s_42 = t;
      t = SSL_is_string(s_42);
      ;
      LocalPopChoice(z_7);
    }
  else
    {
      t = y_7;
      {
        ATerm a_8 = t;
        int b_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(o_1, t);
            ;
            LocalPopChoice(b_8);
          }
        else
          {
            t = a_8;
            {
              ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL;
              y_42 = t;
              if(match_cons(t, sym_Path_1))
                {
                  z_42 = ATgetArgument(t, 0);
                  t = z_42;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      z_42 = ATgetArgument(t, 0);
                      t = z_42;
                      {
                        ATerm c_8 = t;
                        int h_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(h_8);
                          }
                        else
                          {
                            t = c_8;
                            t = debug_1_0(p_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm e_43 = NULL,f_43 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          z_42 = ATgetArgument(t, 0);
                          a_43 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = z_42;
                      t = eval_config_0_0(t);
                      e_43 = t;
                      t = a_43;
                      t = eval_config_0_0(t);
                      f_43 = t;
                      t = (ATerm) ATmakeAppl(sym__2, e_43, f_43);
                      t = s_3(e_43, f_43, t);
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
  ATerm j_43 = NULL,k_43 = NULL;
  j_43 = t;
  t = term_i_8;
  k_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_8, j_43);
  t = c_4(k_43, j_43, t);
  {
    ATerm j_8 = t;
    int k_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_43 = NULL,o_43 = NULL;
        t = eval_config_0_0(t);
        l_43 = t;
        t = term_i_8;
        o_43 = t;
        t = SSL_table_put(o_43, j_43, l_43);
        t = l_43;
        ;
        LocalPopChoice(k_8);
      }
    else
      {
        t = j_8;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm u_93 (ATerm), ATerm t)
{
  ATerm s_43 = NULL;
  s_43 = t;
  {
    ATerm q_8 = t;
    int r_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_43 = NULL;
        t = term_s_8;
        t = get_config_0_0(t);
        u_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_43, term_t_8);
        t = geq_0_0(t);
        t = s_43;
        t = u_93(t);
        ;
        LocalPopChoice(r_8);
      }
    else
      {
        t = q_8;
        t = s_43;
      }
  }
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm c_44 = NULL;
  c_44 = t;
  if(match_string(t, "-k"))
    {
      t = c_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = c_44;
    }
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL;
  d_44 = t;
  t = SSL_string_to_int(d_44);
  e_44 = t;
  t = term_u_8;
  f_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_8, e_44);
  t = f_4(f_44, e_44, t);
  t = d_44;
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_w_8;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_1, s_1, u_1, t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm h_44 = NULL;
  h_44 = t;
  if(match_string(t, "-S"))
    {
      t = h_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = h_44;
    }
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm i_44 = NULL,j_44 = NULL;
  t = term_s_8;
  i_44 = t;
  t = term_b_9;
  j_44 = t;
  t = term_c_9;
  t = f_4(i_44, j_44, t);
  t = term_d_9;
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_e_9;
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
  ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL;
  k_44 = t;
  t = SSL_string_to_int(k_44);
  l_44 = t;
  t = term_s_8;
  m_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_8, l_44);
  t = f_4(m_44, l_44, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, k_44);
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_f_9;
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
  ATerm n_44 = NULL,o_44 = NULL;
  t = term_h_9;
  n_44 = t;
  t = term_a_5;
  o_44 = t;
  t = term_i_9;
  t = f_4(n_44, o_44, t);
  t = term_k_9;
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_l_9;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_9 = t;
  int p_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_1, w_1, x_1, t);
      ;
      LocalPopChoice(p_9);
    }
  else
    {
      t = m_9;
      {
        ATerm q_9 = t;
        int r_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_1, d_2, g_2, t);
            ;
            LocalPopChoice(r_9);
          }
        else
          {
            t = q_9;
            t = Option_3_0(h_2, i_2, j_2, t);
          }
      }
    }
  return(t);
}
ATerm f_4 (ATerm m_43, ATerm n_43, ATerm t)
{
  ATerm p_44 = NULL;
  t = term_i_8;
  p_44 = t;
  t = SSL_table_put(p_44, m_43, n_43);
  t = (ATerm) ATmakeAppl(sym__3, term_i_8, m_43, n_43);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_44 = NULL,v_44 = NULL,w_44 = NULL;
      t = term_a_5;
      t = e_0(t);
      u_44 = t;
      t = term_s_9;
      v_44 = t;
      t = term_t_9;
      w_44 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_9, term_t_9, u_44);
      t = d_4(v_44, w_44, u_44, t);
      _fail(t);
    }
  else
    {
      ATerm z_44 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_44 = ATgetFirst((ATermList) t);
          t_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_44;
      t = c_0(t);
      t = term_a_5;
      t = d_0(t);
      z_44 = t;
      t = (ATerm) ATinsert(CheckATermList(t_44), z_44);
    }
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm b_45 = NULL;
  b_45 = t;
  if(match_string(t, "-o"))
    {
      t = b_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = b_45;
    }
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm c_45 = NULL,h_45 = NULL;
  c_45 = t;
  t = term_x_9;
  h_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_9, c_45);
  t = f_4(h_45, c_45, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, c_45);
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_y_9;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_2, m_2, o_2, t);
  return(t);
}
ATerm d_4 (ATerm k_48, ATerm l_48, ATerm j_48, ATerm t)
{
  ATerm j_45 = NULL,k_45 = NULL,l_45 = NULL;
  j_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_48, l_48);
  {
    ATerm z_9 = t;
    int a_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_10 = ATgetArgument(t, 0);
            ATerm g_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_48, l_48);
        t = c_4(k_48, l_48, t);
        ;
        LocalPopChoice(a_10);
      }
    else
      {
        t = z_9;
        t = (ATerm) ATempty;
      }
    k_45 = t;
    t = (ATerm) ATinsert(CheckATermList(k_45), j_48);
    l_45 = t;
    t = SSL_table_put(k_48, l_48, l_45);
    t = j_45;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL;
      t = term_a_5;
      t = k_0(t);
      w_45 = t;
      t = term_s_9;
      x_45 = t;
      t = term_t_9;
      y_45 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_9, term_t_9, w_45);
      t = d_4(x_45, y_45, w_45, t);
      _fail(t);
    }
  else
    {
      ATerm c_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_45 = ATgetFirst((ATermList) t);
          t_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_45;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_45 = ATgetFirst((ATermList) t);
          v_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_45;
      t = i_0(t);
      t = u_45;
      t = j_0(t);
      c_46 = t;
      t = (ATerm) ATinsert(CheckATermList(v_45), c_46);
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm e_46 = NULL;
  e_46 = t;
  if(match_string(t, "-i"))
    {
      t = e_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_46;
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL;
  f_46 = t;
  t = term_h_10;
  g_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_10, f_46);
  t = f_4(g_46, f_46, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_46);
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_i_10;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_2, w_2, y_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_5;
  t = whoami_0_0(t);
  h_46 = t;
  t = term_w_5;
  j_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_10), h_46);
  k_46 = t;
  t = SSL_printnl(j_46, k_46);
  t = term_z_5;
  i_46 = t;
  t = SSL_exit(i_46);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_l_10;
  t = get_config_0_0(t);
  return(t);
}
ATerm a_4 (ATerm v_35, ATerm w_35, ATerm t)
{
  ATerm m_10 = t;
  int o_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_35, w_35);
      ;
      LocalPopChoice(o_10);
    }
  else
    {
      t = m_10;
      t = SSL_addr(v_35, w_35);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm t)
{
  ATerm m_46 = NULL,n_46 = NULL,o_46 = NULL;
  m_46 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_46;
      t = p_85(t);
    }
  else
    {
      ATerm r_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_46 = ATgetFirst((ATermList) t);
          o_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_46;
      t = foldr_2_0(p_85, q_85, t);
      r_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_46, r_46);
      t = q_85(t);
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
  t = term_b_9;
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm v_54 = NULL,w_54 = NULL;
  if(match_cons(t, sym__2))
    {
      v_54 = ATgetArgument(t, 0);
      w_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_4(v_54, w_54, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_46 = NULL,r_54 = NULL,s_54 = NULL;
  t = times_0_0(t);
  s_54 = t;
  t = SSL_explode_term(s_54);
  if(match_cons(t, sym__2))
    {
      ATerm p_10 = ATgetArgument(t, 0);
      r_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_54;
  t = foldr_2_0(z_2, a_3, t);
  u_46 = t;
  t = SSL_TicksToSeconds(u_46);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL;
  f_47 = t;
  if(match_cons(t, sym__2))
    {
      g_47 = ATgetArgument(t, 0);
      h_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_10 = t;
    int t_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_47;
        if((g_47 != t))
          {
            _fail(t);
          }
        t = f_47;
        ;
        LocalPopChoice(t_10);
      }
    else
      {
        t = q_10;
        t = (ATerm) ATmakeAppl(sym__2, g_47, h_47);
        {
          ATerm v_10 = t;
          int w_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_47, h_47);
              ;
              LocalPopChoice(w_10);
            }
          else
            {
              t = v_10;
              t = SSL_gtr(g_47, h_47);
            }
          t = (ATerm) ATmakeAppl(sym__2, g_47, h_47);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_93 (ATerm), ATerm t)
{
  ATerm l_47 = NULL;
  l_47 = t;
  {
    ATerm y_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_47 = NULL;
        t = term_s_8;
        t = get_config_0_0(t);
        n_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_47, term_z_5);
        t = geq_0_0(t);
        t = l_47;
        t = t_93(t);
        ;
        LocalPopChoice(a_11);
      }
    else
      {
        t = y_10;
        t = l_47;
      }
  }
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm p_47 = NULL,q_47 = NULL,x_47 = NULL,y_47 = NULL;
  t = run_time_0_0(t);
  p_47 = t;
  t = term_a_5;
  t = whoami_0_0(t);
  q_47 = t;
  t = term_w_5;
  x_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_11), p_47), term_b_11), q_47);
  y_47 = t;
  t = SSL_printnl(x_47, y_47);
  t = (ATerm) ATmakeAppl(sym__2, term_w_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_11), p_47), term_b_11), q_47));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(b_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_47 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_9;
  z_47 = t;
  t = SSL_exit(z_47);
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm i_48 = NULL,m_48 = NULL;
  m_48 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = m_48;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          i_48 = ATgetArgument(t, 0);
          {
            ATerm i_55 = NULL,u_10 = NULL;
            t = SSLgetAnnotations(m_48);
            i_55 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, i_48);
            u_10 = t;
            t = SSLsetAnnotations(u_10, i_55);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = m_48;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_96 (ATerm), ATerm t)
{
  ATerm d_11 = t;
  int e_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_11);
    }
  else
    {
      t = d_11;
      t = fetch_1_0(c_3, t);
    }
  t = j_96(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm p_48 = NULL,q_48 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_48 = ATgetFirst((ATermList) t);
      q_48 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_48 = NULL,v_48 = NULL;
        ATerm d_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(u_48)), not_null(v_48));
          return(t);
        }
        t = q_48;
        t = h_0(t);
        if(((u_48 != NULL) && (u_48 != t)))
          _fail(t);
        else
          u_48 = t;
        t = p_48;
        t = g_0(t);
        if(((v_48 != NULL) && (v_48 != t)))
          _fail(t);
        else
          v_48 = t;
        t = q_48;
        t = reverse_acc_2_0(g_0, d_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_5;
      t = h_0(t);
    }
  return(t);
}
ATerm c_4 (ATerm b_50, ATerm c_50, ATerm t)
{
  t = SSL_table_get(b_50, c_50);
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm z_48 = NULL,a_49 = NULL,b_49 = NULL,x_10 = NULL;
  b_49 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_49);
  z_48 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_49);
  x_10 = t;
  t = SSLsetAnnotations(x_10, z_48);
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm d_49 = NULL;
  d_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_49), term_h_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm x_48 = NULL,y_48 = NULL;
  ATerm i_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_10;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_11);
    }
  else
    {
      t = i_11;
      t = fetch_1_0(e_3, t);
    }
  t = term_m_11;
  t = echo_0_0(t);
  t = term_s_9;
  x_48 = t;
  t = term_t_9;
  y_48 = t;
  t = term_n_11;
  t = c_4(x_48, y_48, t);
  t = reverse_acc_2_0(_id, f_3, t);
  t = map_1_0(g_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm f_49 = NULL,g_49 = NULL,h_49 = NULL;
  f_49 = t;
  {
    ATerm o_11 = t;
    int p_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = f_49;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_11 = ATgetFirst((ATermList) t);
                ATerm r_11 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = f_49;
          }
        ;
        LocalPopChoice(p_11);
      }
    else
      {
        t = o_11;
        t = (ATerm) ATinsert(ATempty, f_49);
      }
    g_49 = t;
    t = term_a_7;
    h_49 = t;
    t = SSL_printnl(h_49, g_49);
    t = f_49;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_l_10;
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
  ATerm l_49 = NULL,m_49 = NULL;
  t = term_s_11;
  l_49 = t;
  t = term_a_5;
  m_49 = t;
  t = term_u_11;
  t = f_4(l_49, m_49, t);
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_v_11;
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
  ATerm n_49 = NULL,o_49 = NULL,p_49 = NULL,q_49 = NULL;
  t = term_s_11;
  p_49 = t;
  t = term_a_5;
  q_49 = t;
  t = term_u_11;
  t = f_4(p_49, q_49, t);
  t = term_w_11;
  n_49 = t;
  t = term_a_5;
  o_49 = t;
  t = term_a_12;
  t = f_4(n_49, o_49, t);
  t = term_b_12;
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_c_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm d_12 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_3, j_3, k_3, t);
      ;
      LocalPopChoice(e_12);
    }
  else
    {
      t = d_12;
      t = Option_3_0(m_3, n_3, o_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_57 (ATerm), ATerm s_57 (ATerm), ATerm t)
{
  ATerm r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL,w_49 = NULL,z_10 = NULL;
  w_49 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_49 = ATgetFirst((ATermList) t);
      t_49 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_49);
  r_49 = t;
  t = s_49;
  t = r_57(t);
  u_49 = t;
  t = t_49;
  t = s_57(t);
  v_49 = t;
  t = (ATerm) ATinsert(CheckATermList(v_49), u_49);
  z_10 = t;
  t = SSLsetAnnotations(z_10, r_49);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_98 (ATerm), ATerm t)
{
  ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL,i_50 = NULL,j_50 = NULL,z_13 = NULL;
  d_50 = t;
  {
    ATerm f_12 = t;
    int g_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_12;
        t = m_98(t);
        ;
        LocalPopChoice(g_12);
      }
    else
      {
        t = f_12;
      }
    t = d_50;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_50 = ATgetFirst((ATermList) t);
        g_50 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_50);
    e_50 = t;
    t = term_l_10;
    j_50 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_l_10, f_50);
    t = f_4(j_50, f_50, t);
    t = g_50;
    {
      ATerm t_50 (ATerm t)
      {
        ATerm j_12 = t;
        int k_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_12 = t;
            int o_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_50 = NULL;
                m_50 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = m_50;
                ;
                LocalPopChoice(o_12);
              }
            else
              {
                t = n_12;
                t = m_98(t);
                t = Cons_2_0(_id, t_50, t);
              }
            ;
            LocalPopChoice(k_12);
          }
        else
          {
            t = j_12;
            {
              ATerm p_50 = NULL,q_50 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_50 = ATgetFirst((ATermList) t);
                  q_50 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(q_50), (ATerm) ATmakeAppl(sym_Undefined_1, p_50));
            }
          }
        return(t);
      }
      t = t_50(t);
      i_50 = t;
      t = (ATerm) ATinsert(CheckATermList(i_50), (ATerm) ATmakeAppl(sym_Program_1, f_50));
      z_13 = t;
      t = SSLsetAnnotations(z_13, e_50);
    }
  }
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm f_51 = NULL;
  f_51 = t;
  if(match_string(t, "--help"))
    {
      t = f_51;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_51;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_51;
        }
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm g_51 = NULL,h_51 = NULL;
  t = term_f_11;
  g_51 = t;
  t = term_a_5;
  h_51 = t;
  t = term_p_12;
  t = f_4(g_51, h_51, t);
  t = term_q_12;
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_r_12;
  return(t);
}
ATerm k_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm l_98 (ATerm), ATerm t)
{
  ATerm y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL,c_51 = NULL,d_51 = NULL,e_51 = NULL;
  a_51 = t;
  t = term_s_9;
  c_51 = t;
  t = term_t_9;
  d_51 = t;
  t = (ATerm) ATempty;
  e_51 = t;
  t = SSL_table_put(c_51, d_51, e_51);
  t = a_51;
  {
    ATerm p_3 (ATerm t)
    {
      ATerm s_12 = t;
      int t_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_98(t);
          ;
          LocalPopChoice(t_12);
        }
      else
        {
          t = s_12;
          {
            ATerm v_12 = t;
            int w_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(q_3, e_4, i_4, t);
                ;
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
    t = parse_options_p__1_0(p_3, t);
    {
      ATerm z_12 = t;
      int a_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_51 = NULL;
          o_51 = t;
          {
            ATerm b_13 = t;
            int c_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_55 = NULL;
                t = o_51;
                {
                  ATerm d_13 = t;
                  int e_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_f_11;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(e_13);
                    }
                  else
                    {
                      t = d_13;
                      t = fetch_1_0(k_4, t);
                    }
                  t = o_51;
                  t = default_system_usage_0_0(t);
                  t = term_b_9;
                  p_55 = t;
                  t = SSL_exit(p_55);
                }
                ;
                LocalPopChoice(c_13);
              }
            else
              {
                t = b_13;
                {
                  ATerm t_55 = NULL;
                  t = term_s_11;
                  t = get_config_0_0(t);
                  t = o_51;
                  t = default_system_about_0_0(t);
                  t = term_b_9;
                  t_55 = t;
                  t = SSL_exit(t_55);
                }
              }
          }
          ;
          LocalPopChoice(a_13);
        }
      else
        {
          t = z_12;
          {
            ATerm f_13 = t;
            int g_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL;
                ATerm g_5 (ATerm t)
                {
                  ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL,d_14 = NULL;
                  u_51 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      t_51 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(u_51);
                  s_51 = t;
                  t = t_51;
                  if(((y_50 != NULL) && (y_50 != t)))
                    _fail(t);
                  else
                    y_50 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, t_51);
                  d_14 = t;
                  t = SSLsetAnnotations(d_14, s_51);
                  return(t);
                }
                t = fetch_1_0(g_5, t);
                t = term_w_5;
                q_51 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_50)), term_i_13);
                r_51 = t;
                t = SSL_printnl(q_51, r_51);
                t = (ATerm) ATmakeAppl(sym__2, term_w_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_50)), term_i_13));
                t = default_system_usage_0_0(t);
                t = term_z_5;
                p_51 = t;
                t = SSL_exit(p_51);
                ;
                LocalPopChoice(g_13);
              }
            else
              {
                t = f_13;
              }
          }
        }
      z_50 = t;
      t = term_s_9;
      b_51 = t;
      t = SSL_table_destroy(b_51);
      t = z_50;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_96 (ATerm), ATerm m_96 (ATerm), ATerm n_96 (ATerm), ATerm o_96 (ATerm), ATerm t)
{
  ATerm z_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL;
  t = parse_options_1_0(l_96, t);
  z_51 = t;
  t = term_j_13;
  c_52 = t;
  t = SSL_table_create(c_52);
  t = term_j_13;
  a_52 = t;
  t = term_k_13;
  b_52 = t;
  t = SSL_table_put(a_52, b_52, z_51);
  t = z_51;
  t = n_96(t);
  {
    ATerm r_13 = t;
    int s_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_96, t);
        ;
        LocalPopChoice(s_13);
      }
    else
      {
        t = r_13;
        {
          ATerm t_13 = t;
          int u_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_96(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(u_13);
            }
          else
            {
              t = t_13;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = if_verbose2_1_0(q_5, t);
  return(t);
}
ATerm n_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm d_52 = NULL,e_52 = NULL;
  t = term_v_13;
  d_52 = t;
  t = term_a_5;
  e_52 = t;
  t = term_w_13;
  t = f_4(d_52, e_52, t);
  t = term_x_13;
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_y_13;
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm f_52 = NULL,g_52 = NULL,h_52 = NULL,i_52 = NULL;
  f_52 = t;
  t = term_l_10;
  t = get_config_0_0(t);
  g_52 = t;
  t = term_w_5;
  h_52 = t;
  t = (ATerm) ATinsert(ATempty, g_52);
  i_52 = t;
  t = SSL_printnl(h_52, i_52);
  t = f_52;
  return(t);
}
ATerm iowrap_3_0 (ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm w_95 (ATerm), ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    ATerm a_14 = t;
    int b_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_95(t);
        ;
        LocalPopChoice(b_14);
      }
    else
      {
        t = a_14;
        {
          ATerm e_14 = t;
          int g_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(g_14);
            }
          else
            {
              t = e_14;
              {
                ATerm h_14 = t;
                int i_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(i_14);
                  }
                else
                  {
                    t = h_14;
                    {
                      ATerm m_14 = t;
                      int o_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(n_5, o_5, p_5, t);
                          ;
                          LocalPopChoice(o_14);
                        }
                      else
                        {
                          t = m_14;
                          {
                            ATerm p_14 = t;
                            int q_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(q_14);
                              }
                            else
                              {
                                t = p_14;
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
  ATerm l_5 (ATerm t)
  {
    ATerm j_52 = NULL,k_52 = NULL,l_52 = NULL;
    k_52 = t;
    {
      ATerm u_14 = t;
      int v_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((j_52 != NULL) && (j_52 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  j_52 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(r_5, t);
          ;
          LocalPopChoice(v_14);
        }
      else
        {
          t = u_14;
          t = term_w_14;
          j_52 = t;
        }
      t = not_null(j_52);
      t = ReadFromFile_0_0(t);
      l_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_52, l_52);
      t = apply_strategy_1_0(u_95, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(h_5, w_95, i_5, l_5, t);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm o_52 = NULL,p_52 = NULL,q_52 = NULL,r_52 = NULL,s_52 = NULL,t_14 = NULL;
  s_52 = t;
  if(match_cons(t, sym__2))
    {
      p_52 = ATgetArgument(t, 0);
      q_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_52);
  o_52 = t;
  t = q_52;
  {
    ATerm x_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_53 = NULL,w_55 = NULL,y_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL,c_56 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL,j_56 = NULL,s_14 = NULL,r_14 = NULL,n_14 = NULL,f_14 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            j_53 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_52);
        w_55 = t;
        t = j_53;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_55 = ATgetFirst((ATermList) t);
            a_56 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_53);
        y_55 = t;
        t = a_56;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_56 = ATgetFirst((ATermList) t);
            e_56 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_56);
        c_56 = t;
        t = d_56;
        if(match_cons(t, sym_Strategies_1))
          {
            h_56 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_56);
        g_56 = t;
        t = h_56;
        t = map_1_0(strategy_definition_0_0, t);
        i_56 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, i_56);
        f_14 = t;
        t = SSLsetAnnotations(f_14, g_56);
        j_56 = t;
        t = e_56;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(e_56), j_56);
        n_14 = t;
        t = SSLsetAnnotations(n_14, c_56);
        f_56 = t;
        t = (ATerm) ATinsert(CheckATermList(f_56), z_55);
        r_14 = t;
        t = SSLsetAnnotations(r_14, y_55);
        b_56 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, b_56);
        s_14 = t;
        t = SSLsetAnnotations(s_14, w_55);
        ;
        LocalPopChoice(y_14);
      }
    else
      {
        t = x_14;
        t = debug_1_0(v_5, t);
      }
    r_52 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_52, r_52);
    t_14 = t;
    t = SSLsetAnnotations(t_14, o_52);
  }
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = term_z_14;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(t_5, _fail, default_usage_0_0, t);
  return(t);
}

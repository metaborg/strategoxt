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
ATerm term_b_14;
ATerm term_z_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_t_12;
ATerm term_o_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_h_11;
ATerm term_f_11;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_c_10;
ATerm term_y_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_d_9;
ATerm term_a_9;
ATerm term_x_8;
ATerm term_q_8;
ATerm term_a_8;
ATerm term_v_7;
ATerm term_s_7;
ATerm term_b_7;
ATerm term_y_6;
ATerm term_v_6;
ATerm term_s_6;
ATerm term_p_6;
ATerm term_e_6;
ATerm term_d_6;
ATerm term_b_6;
ATerm term_z_5;
ATerm term_y_5;
ATerm term_z_4;
void init_constant_terms (void)
{
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-expression: ", 0, ATtrue));
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
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym__2, term_x_8, term_g_9);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_9);
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
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym__2, term_y_9, term_c_10);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym__2, term_a_12, term_z_4);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym__2, term_d_12, term_z_4);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym__2, term_m_11, term_z_4);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym__2, term_z_13, term_z_4);
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
ATerm debug_1_0 (ATerm t_102 (ATerm), ATerm);
ATerm e_0 (ATerm);
ATerm build_term_expression_0_0 (ATerm);
ATerm p_0 (ATerm);
ATerm match_term_expression_0_0 (ATerm);
ATerm r_0 (ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm w_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm strategy_expression_0_0 (ATerm);
ATerm type_expression_0_0 (ATerm);
ATerm b_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm strategy_definition_0_0 (ATerm);
ATerm map_1_0 (ATerm e_90 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm r_68 (ATerm), ATerm s_68 (ATerm), ATerm);
ATerm t_3 (ATerm v_49, ATerm w_49, ATerm);
ATerm u_3 (ATerm j_53, ATerm k_53, ATerm);
ATerm w_3 (ATerm v_102 (ATerm), ATerm d_426, ATerm n_53, ATerm);
ATerm v_3 (ATerm f_53, ATerm g_53, ATerm);
ATerm j_1 (ATerm);
ATerm l_1 (ATerm);
ATerm n_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm x_105 (ATerm), ATerm);
ATerm d_39 (ATerm x_38, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm x_3 (ATerm l_53, ATerm);
ATerm y_3 (ATerm x_49, ATerm y_49, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm o_40 (ATerm n_39, ATerm);
ATerm p_40 (ATerm r_39, ATerm s_39, ATerm t_39, ATerm);
ATerm q_40 (ATerm b_40, ATerm c_40, ATerm d_40, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm o_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm o_90 (ATerm), ATerm);
ATerm s_3 (ATerm l_44, ATerm m_44, ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm g_104 (ATerm), ATerm);
ATerm r_1 (ATerm);
ATerm t_1 (ATerm);
ATerm v_1 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm z_1 (ATerm);
ATerm d_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm e_4 (ATerm m_54, ATerm n_54, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm k_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm c_4 (ATerm k_59, ATerm l_59, ATerm j_59, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm o_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm z_3 (ATerm v_46, ATerm w_46, ATerm);
ATerm foldr_2_0 (ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm f_104 (ATerm), ATerm);
ATerm b_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm c_3 (ATerm);
ATerm need_help_1_0 (ATerm v_106 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm b_4 (ATerm b_61, ATerm c_61, ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm l_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm y_108 (ATerm), ATerm);
ATerm r_3 (ATerm);
ATerm f_4 (ATerm);
ATerm j_4 (ATerm);
ATerm f_5 (ATerm);
ATerm parse_options_1_0 (ATerm x_108 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm x_106 (ATerm), ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm);
ATerm i_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm iowrap_3_0 (ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm i_106 (ATerm), ATerm);
ATerm t_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
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
  t = term_z_4;
  t = whoami_0_0(t);
  l_0 = t;
  t = term_y_5;
  n_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_6), l_0), term_z_5);
  o_0 = t;
  t = SSL_printnl(n_0, o_0);
  t = term_d_6;
  m_0 = t;
  t = SSL_exit(m_0);
  t = c_0;
  return(t);
}
ATerm debug_1_0 (ATerm t_102 (ATerm), ATerm t)
{
  ATerm s_0 = NULL,x_0 = NULL,c_1 = NULL,d_1 = NULL;
  s_0 = t;
  t = t_102(t);
  x_0 = t;
  t = term_y_5;
  c_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_0), x_0);
  d_1 = t;
  t = SSL_printnl(c_1, d_1);
  t = s_0;
  return(t);
}
ATerm e_0 (ATerm t)
{
  t = term_e_6;
  return(t);
}
ATerm build_term_expression_0_0 (ATerm t)
{
  ATerm f_6 = t;
  int g_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL;
      x_4 = t;
      if(match_cons(t, sym_Var_1))
        {
          y_4 = ATgetArgument(t, 0);
          {
            ATerm q_0 = NULL,t_0 = NULL,k_0 = NULL;
            t = SSLgetAnnotations(x_4);
            q_0 = t;
            t = SSL_is_string(y_4);
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
              y_4 = ATgetArgument(t, 0);
              {
                ATerm a_1 = NULL,e_1 = NULL,y_1 = NULL;
                t = SSLgetAnnotations(x_4);
                a_1 = t;
                t = SSL_is_int(y_4);
                e_1 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, e_1);
                y_1 = t;
                t = SSLsetAnnotations(y_1, a_1);
              }
            }
          else
            {
              if(match_cons(t, sym_Real_1))
                {
                  y_4 = ATgetArgument(t, 0);
                  {
                    ATerm k_1 = NULL,m_1 = NULL,a_2 = NULL;
                    t = SSLgetAnnotations(x_4);
                    k_1 = t;
                    t = SSL_is_real(y_4);
                    m_1 = t;
                    t = (ATerm) ATmakeAppl(sym_Real_1, m_1);
                    a_2 = t;
                    t = SSLsetAnnotations(a_2, k_1);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Str_1))
                    {
                      y_4 = ATgetArgument(t, 0);
                      {
                        ATerm s_1 = NULL,u_1 = NULL,b_2 = NULL;
                        t = SSLgetAnnotations(x_4);
                        s_1 = t;
                        t = SSL_is_string(y_4);
                        u_1 = t;
                        t = (ATerm) ATmakeAppl(sym_Str_1, u_1);
                        b_2 = t;
                        t = SSLsetAnnotations(b_2, s_1);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Op_2))
                        {
                          y_4 = ATgetArgument(t, 0);
                          w_4 = ATgetArgument(t, 1);
                          {
                            ATerm l_2 = NULL,v_2 = NULL,w_2 = NULL,c_2 = NULL;
                            t = SSLgetAnnotations(x_4);
                            l_2 = t;
                            t = SSL_is_string(y_4);
                            v_2 = t;
                            t = w_4;
                            t = map_1_0(build_term_expression_0_0, t);
                            w_2 = t;
                            t = (ATerm) ATmakeAppl(sym_Op_2, v_2, w_2);
                            c_2 = t;
                            t = SSLsetAnnotations(c_2, l_2);
                          }
                        }
                      else
                        {
                          ATerm k_3 = NULL,m_3 = NULL,e_2 = NULL;
                          if(match_cons(t, sym_BuildDefault_1))
                            {
                              y_4 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(x_4);
                          k_3 = t;
                          t = y_4;
                          t = build_term_expression_0_0(t);
                          m_3 = t;
                          t = (ATerm) ATmakeAppl(sym_BuildDefault_1, m_3);
                          e_2 = t;
                          t = SSLsetAnnotations(e_2, k_3);
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
      t = debug_1_0(e_0, t);
    }
  return(t);
}
ATerm p_0 (ATerm t)
{
  t = term_e_6;
  return(t);
}
ATerm match_term_expression_0_0 (ATerm t)
{
  ATerm h_6 = t;
  int i_6 = stack_ptr;
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
                ATerm d_4 = NULL,h_4 = NULL,p_2 = NULL;
                t = SSLgetAnnotations(d_10);
                d_4 = t;
                t = SSL_is_string(h_10);
                h_4 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, h_4);
                p_2 = t;
                t = SSLsetAnnotations(p_2, d_4);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  h_10 = ATgetArgument(t, 0);
                  {
                    ATerm k_5 = NULL,m_5 = NULL,q_2 = NULL;
                    t = SSLgetAnnotations(d_10);
                    k_5 = t;
                    t = SSL_is_int(h_10);
                    m_5 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, m_5);
                    q_2 = t;
                    t = SSLsetAnnotations(q_2, k_5);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      h_10 = ATgetArgument(t, 0);
                      {
                        ATerm s_5 = NULL,u_5 = NULL,r_2 = NULL;
                        t = SSLgetAnnotations(d_10);
                        s_5 = t;
                        t = SSL_is_real(h_10);
                        u_5 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, u_5);
                        r_2 = t;
                        t = SSLsetAnnotations(r_2, s_5);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Str_1))
                        {
                          h_10 = ATgetArgument(t, 0);
                          {
                            ATerm a_6 = NULL,c_6 = NULL,s_2 = NULL;
                            t = SSLgetAnnotations(d_10);
                            a_6 = t;
                            t = SSL_is_string(h_10);
                            c_6 = t;
                            t = (ATerm) ATmakeAppl(sym_Str_1, c_6);
                            s_2 = t;
                            t = SSLsetAnnotations(s_2, a_6);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Op_2))
                            {
                              h_10 = ATgetArgument(t, 0);
                              j_10 = ATgetArgument(t, 1);
                              {
                                ATerm j_6 = NULL,n_6 = NULL,o_6 = NULL,t_2 = NULL;
                                t = SSLgetAnnotations(d_10);
                                j_6 = t;
                                t = SSL_is_string(h_10);
                                n_6 = t;
                                t = j_10;
                                t = map_1_0(match_term_expression_0_0, t);
                                o_6 = t;
                                t = (ATerm) ATmakeAppl(sym_Op_2, n_6, o_6);
                                t_2 = t;
                                t = SSLsetAnnotations(t_2, j_6);
                              }
                            }
                          else
                            {
                              ATerm n_7 = NULL,q_7 = NULL,r_7 = NULL,u_2 = NULL;
                              if(match_cons(t, sym_As_2))
                                {
                                  h_10 = ATgetArgument(t, 0);
                                  j_10 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(d_10);
                              n_7 = t;
                              t = h_10;
                              t = match_term_expression_0_0(t);
                              q_7 = t;
                              t = j_10;
                              t = match_term_expression_0_0(t);
                              r_7 = t;
                              t = (ATerm) ATmakeAppl(sym_As_2, q_7, r_7);
                              u_2 = t;
                              t = SSLsetAnnotations(u_2, n_7);
                            }
                        }
                    }
                }
            }
        }
      ;
      LocalPopChoice(i_6);
    }
  else
    {
      t = h_6;
      t = debug_1_0(p_0, t);
    }
  return(t);
}
ATerm r_0 (ATerm t)
{
  ATerm k_6 = t;
  int l_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_20 = NULL;
      b_20 = t;
      t = SSL_is_string(b_20);
      ;
      LocalPopChoice(l_6);
    }
  else
    {
      t = k_6;
      t = map_1_0(u_0, t);
    }
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm q_20 = NULL;
  q_20 = t;
  t = SSL_is_int(q_20);
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL,j_5 = NULL;
  m_23 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      c_23 = ATgetArgument(t, 0);
      d_23 = ATgetArgument(t, 1);
      f_23 = ATgetArgument(t, 2);
      g_23 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_23);
  b_23 = t;
  t = SSL_is_string(c_23);
  h_23 = t;
  t = d_23;
  t = map_1_0(w_0, t);
  i_23 = t;
  t = f_23;
  t = map_1_0(y_0, t);
  k_23 = t;
  t = g_23;
  t = strategy_expression_0_0(t);
  l_23 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, h_23, i_23, k_23, l_23);
  j_5 = t;
  t = SSLsetAnnotations(j_5, b_23);
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,u_24 = NULL,d_5 = NULL;
  u_24 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      p_24 = ATgetArgument(t, 0);
      q_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_24);
  o_24 = t;
  t = SSL_is_string(p_24);
  r_24 = t;
  t = q_24;
  t = type_expression_0_0(t);
  s_24 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, r_24, s_24);
  d_5 = t;
  t = SSLsetAnnotations(d_5, o_24);
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,b_25 = NULL,c_25 = NULL,e_5 = NULL;
  c_25 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      x_24 = ATgetArgument(t, 0);
      y_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_25);
  w_24 = t;
  t = SSL_is_string(x_24);
  z_24 = t;
  t = y_24;
  t = type_expression_0_0(t);
  b_25 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_24, b_25);
  e_5 = t;
  t = SSLsetAnnotations(e_5, w_24);
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = term_p_6;
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm q_6 = t;
  int r_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL,u_29 = NULL;
      q_29 = t;
      if(match_cons(t, sym_Id_0))
        {
          t = q_29;
        }
      else
        {
          if(match_cons(t, sym_Fail_0))
            {
              t = q_29;
            }
          else
            {
              if(match_cons(t, sym_Not_1))
                {
                  r_29 = ATgetArgument(t, 0);
                  {
                    ATerm e_9 = NULL,j_9 = NULL,j_3 = NULL;
                    t = SSLgetAnnotations(q_29);
                    e_9 = t;
                    t = r_29;
                    t = strategy_expression_0_0(t);
                    j_9 = t;
                    t = (ATerm) ATmakeAppl(sym_Not_1, j_9);
                    j_3 = t;
                    t = SSLsetAnnotations(j_3, e_9);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Seq_2))
                    {
                      r_29 = ATgetArgument(t, 0);
                      u_29 = ATgetArgument(t, 1);
                      {
                        ATerm r_9 = NULL,x_9 = NULL,a_10 = NULL,a_4 = NULL;
                        t = SSLgetAnnotations(q_29);
                        r_9 = t;
                        t = r_29;
                        t = strategy_expression_0_0(t);
                        x_9 = t;
                        t = u_29;
                        t = strategy_expression_0_0(t);
                        a_10 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, x_9, a_10);
                        a_4 = t;
                        t = SSLsetAnnotations(a_4, r_9);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Choice_2))
                        {
                          r_29 = ATgetArgument(t, 0);
                          u_29 = ATgetArgument(t, 1);
                          {
                            ATerm o_10 = NULL,r_10 = NULL,s_10 = NULL,g_4 = NULL;
                            t = SSLgetAnnotations(q_29);
                            o_10 = t;
                            t = r_29;
                            t = strategy_expression_0_0(t);
                            r_10 = t;
                            t = u_29;
                            t = strategy_expression_0_0(t);
                            s_10 = t;
                            t = (ATerm) ATmakeAppl(sym_Choice_2, r_10, s_10);
                            g_4 = t;
                            t = SSLsetAnnotations(g_4, o_10);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_LChoice_2))
                            {
                              r_29 = ATgetArgument(t, 0);
                              u_29 = ATgetArgument(t, 1);
                              {
                                ATerm g_11 = NULL,j_11 = NULL,k_11 = NULL,i_4 = NULL;
                                t = SSLgetAnnotations(q_29);
                                g_11 = t;
                                t = r_29;
                                t = strategy_expression_0_0(t);
                                j_11 = t;
                                t = u_29;
                                t = strategy_expression_0_0(t);
                                k_11 = t;
                                t = (ATerm) ATmakeAppl(sym_LChoice_2, j_11, k_11);
                                i_4 = t;
                                t = SSLsetAnnotations(i_4, g_11);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_GuardedLChoice_3))
                                {
                                  r_29 = ATgetArgument(t, 0);
                                  u_29 = ATgetArgument(t, 1);
                                  p_29 = ATgetArgument(t, 2);
                                  {
                                    ATerm t_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,k_4 = NULL;
                                    t = SSLgetAnnotations(q_29);
                                    t_11 = t;
                                    t = r_29;
                                    t = strategy_expression_0_0(t);
                                    x_11 = t;
                                    t = u_29;
                                    t = strategy_expression_0_0(t);
                                    y_11 = t;
                                    t = p_29;
                                    t = strategy_expression_0_0(t);
                                    z_11 = t;
                                    t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, x_11, y_11, z_11);
                                    k_4 = t;
                                    t = SSLsetAnnotations(k_4, t_11);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GChoice_2))
                                    {
                                      r_29 = ATgetArgument(t, 0);
                                      u_29 = ATgetArgument(t, 1);
                                      {
                                        ATerm i_12 = NULL,l_12 = NULL,m_12 = NULL,l_4 = NULL;
                                        t = SSLgetAnnotations(q_29);
                                        i_12 = t;
                                        t = r_29;
                                        t = strategy_expression_0_0(t);
                                        l_12 = t;
                                        t = u_29;
                                        t = strategy_expression_0_0(t);
                                        m_12 = t;
                                        t = (ATerm) ATmakeAppl(sym_GChoice_2, l_12, m_12);
                                        l_4 = t;
                                        t = SSLsetAnnotations(l_4, i_12);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_LGChoice_2))
                                        {
                                          r_29 = ATgetArgument(t, 0);
                                          u_29 = ATgetArgument(t, 1);
                                          {
                                            ATerm u_12 = NULL,x_12 = NULL,y_12 = NULL,m_4 = NULL;
                                            t = SSLgetAnnotations(q_29);
                                            u_12 = t;
                                            t = r_29;
                                            t = strategy_expression_0_0(t);
                                            x_12 = t;
                                            t = u_29;
                                            t = strategy_expression_0_0(t);
                                            y_12 = t;
                                            t = (ATerm) ATmakeAppl(sym_LGChoice_2, x_12, y_12);
                                            m_4 = t;
                                            t = SSLsetAnnotations(m_4, u_12);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_CallT_3))
                                            {
                                              r_29 = ATgetArgument(t, 0);
                                              u_29 = ATgetArgument(t, 1);
                                              p_29 = ATgetArgument(t, 2);
                                              {
                                                ATerm h_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,o_4 = NULL,n_4 = NULL;
                                                t = SSLgetAnnotations(q_29);
                                                h_13 = t;
                                                t = r_29;
                                                if(match_cons(t, sym_SVar_1))
                                                  {
                                                    o_13 = ATgetArgument(t, 0);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSLgetAnnotations(r_29);
                                                n_13 = t;
                                                t = SSL_is_string(o_13);
                                                p_13 = t;
                                                t = (ATerm) ATmakeAppl(sym_SVar_1, p_13);
                                                n_4 = t;
                                                t = SSLsetAnnotations(n_4, n_13);
                                                q_13 = t;
                                                t = u_29;
                                                t = map_1_0(strategy_expression_0_0, t);
                                                l_13 = t;
                                                t = p_29;
                                                t = map_1_0(build_term_expression_0_0, t);
                                                m_13 = t;
                                                t = (ATerm) ATmakeAppl(sym_CallT_3, q_13, l_13, m_13);
                                                o_4 = t;
                                                t = SSLsetAnnotations(o_4, h_13);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_PrimT_3))
                                                {
                                                  r_29 = ATgetArgument(t, 0);
                                                  u_29 = ATgetArgument(t, 1);
                                                  p_29 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm a_14 = NULL,h_14 = NULL,i_14 = NULL,m_14 = NULL,p_4 = NULL;
                                                    t = SSLgetAnnotations(q_29);
                                                    a_14 = t;
                                                    t = SSL_is_string(r_29);
                                                    h_14 = t;
                                                    t = u_29;
                                                    t = map_1_0(strategy_expression_0_0, t);
                                                    i_14 = t;
                                                    t = p_29;
                                                    t = map_1_0(build_term_expression_0_0, t);
                                                    m_14 = t;
                                                    t = (ATerm) ATmakeAppl(sym_PrimT_3, h_14, i_14, m_14);
                                                    p_4 = t;
                                                    t = SSLsetAnnotations(p_4, a_14);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Rec_2))
                                                    {
                                                      r_29 = ATgetArgument(t, 0);
                                                      u_29 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm w_14 = NULL,e_15 = NULL,i_15 = NULL,q_4 = NULL;
                                                        t = SSLgetAnnotations(q_29);
                                                        w_14 = t;
                                                        t = SSL_is_string(r_29);
                                                        e_15 = t;
                                                        t = u_29;
                                                        t = strategy_expression_0_0(t);
                                                        i_15 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Rec_2, e_15, i_15);
                                                        q_4 = t;
                                                        t = SSLsetAnnotations(q_4, w_14);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Path_2))
                                                        {
                                                          r_29 = ATgetArgument(t, 0);
                                                          u_29 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm v_15 = NULL,z_15 = NULL,a_16 = NULL,r_4 = NULL;
                                                            t = SSLgetAnnotations(q_29);
                                                            v_15 = t;
                                                            t = SSL_is_int(r_29);
                                                            z_15 = t;
                                                            t = u_29;
                                                            t = strategy_expression_0_0(t);
                                                            a_16 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Path_2, z_15, a_16);
                                                            r_4 = t;
                                                            t = SSLsetAnnotations(r_4, v_15);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_One_1))
                                                            {
                                                              r_29 = ATgetArgument(t, 0);
                                                              {
                                                                ATerm k_16 = NULL,s_16 = NULL,s_4 = NULL;
                                                                t = SSLgetAnnotations(q_29);
                                                                k_16 = t;
                                                                t = r_29;
                                                                t = strategy_expression_0_0(t);
                                                                s_16 = t;
                                                                t = (ATerm) ATmakeAppl(sym_One_1, s_16);
                                                                s_4 = t;
                                                                t = SSLsetAnnotations(s_4, k_16);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_Some_1))
                                                                {
                                                                  r_29 = ATgetArgument(t, 0);
                                                                  {
                                                                    ATerm c_17 = NULL,f_17 = NULL,t_4 = NULL;
                                                                    t = SSLgetAnnotations(q_29);
                                                                    c_17 = t;
                                                                    t = r_29;
                                                                    t = strategy_expression_0_0(t);
                                                                    f_17 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Some_1, f_17);
                                                                    t_4 = t;
                                                                    t = SSLsetAnnotations(t_4, c_17);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_All_1))
                                                                    {
                                                                      r_29 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm o_17 = NULL,q_17 = NULL,u_4 = NULL;
                                                                        t = SSLgetAnnotations(q_29);
                                                                        o_17 = t;
                                                                        t = r_29;
                                                                        t = strategy_expression_0_0(t);
                                                                        q_17 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_All_1, q_17);
                                                                        u_4 = t;
                                                                        t = SSLsetAnnotations(u_4, o_17);
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Thread_1))
                                                                        {
                                                                          r_29 = ATgetArgument(t, 0);
                                                                          {
                                                                            ATerm f_18 = NULL,i_18 = NULL,v_4 = NULL;
                                                                            t = SSLgetAnnotations(q_29);
                                                                            f_18 = t;
                                                                            t = r_29;
                                                                            t = strategy_expression_0_0(t);
                                                                            i_18 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_Thread_1, i_18);
                                                                            v_4 = t;
                                                                            t = SSLsetAnnotations(v_4, f_18);
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Match_1))
                                                                            {
                                                                              r_29 = ATgetArgument(t, 0);
                                                                              {
                                                                                ATerm t_18 = NULL,v_18 = NULL,a_5 = NULL;
                                                                                t = SSLgetAnnotations(q_29);
                                                                                t_18 = t;
                                                                                t = r_29;
                                                                                t = match_term_expression_0_0(t);
                                                                                v_18 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, v_18);
                                                                                a_5 = t;
                                                                                t = SSLsetAnnotations(a_5, t_18);
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Build_1))
                                                                                {
                                                                                  r_29 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm b_19 = NULL,f_19 = NULL,b_5 = NULL;
                                                                                    t = SSLgetAnnotations(q_29);
                                                                                    b_19 = t;
                                                                                    t = r_29;
                                                                                    t = build_term_expression_0_0(t);
                                                                                    f_19 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_Build_1, f_19);
                                                                                    b_5 = t;
                                                                                    t = SSLsetAnnotations(b_5, b_19);
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Scope_2))
                                                                                    {
                                                                                      r_29 = ATgetArgument(t, 0);
                                                                                      u_29 = ATgetArgument(t, 1);
                                                                                      {
                                                                                        ATerm t_19 = NULL,w_19 = NULL,x_19 = NULL,c_5 = NULL;
                                                                                        t = SSLgetAnnotations(q_29);
                                                                                        t_19 = t;
                                                                                        t = r_29;
                                                                                        t = map_1_0(r_0, t);
                                                                                        w_19 = t;
                                                                                        t = u_29;
                                                                                        t = strategy_expression_0_0(t);
                                                                                        x_19 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, w_19, x_19);
                                                                                        c_5 = t;
                                                                                        t = SSLsetAnnotations(c_5, t_19);
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      ATerm x_20 = NULL,y_22 = NULL,z_22 = NULL,m_6 = NULL;
                                                                                      if(match_cons(t, sym_Let_2))
                                                                                        {
                                                                                          r_29 = ATgetArgument(t, 0);
                                                                                          u_29 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = SSLgetAnnotations(q_29);
                                                                                      x_20 = t;
                                                                                      t = r_29;
                                                                                      t = map_1_0(v_0, t);
                                                                                      y_22 = t;
                                                                                      t = u_29;
                                                                                      t = strategy_expression_0_0(t);
                                                                                      z_22 = t;
                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, y_22, z_22);
                                                                                      m_6 = t;
                                                                                      t = SSLsetAnnotations(m_6, x_20);
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
      t = q_6;
      t = debug_1_0(z_0, t);
    }
  return(t);
}
ATerm type_expression_0_0 (ATerm t)
{
  ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL;
  if(((h_33 != NULL) && (h_33 != t)))
    _fail(t);
  else
    h_33 = t;
  if(match_cons(t, sym_ConstType_1))
    {
      i_33 = ATgetArgument(t, 0);
      {
        ATerm o_26 = NULL,q_26 = NULL,e_8 = NULL;
        t = SSLgetAnnotations(not_null(h_33));
        if(((o_26 != NULL) && (o_26 != t)))
          _fail(t);
        else
          o_26 = t;
        t = not_null(i_33);
        {
          ATerm f_28 (ATerm t)
          {
            ATerm r_27 = NULL,s_27 = NULL,u_27 = NULL;
            s_27 = t;
            if(match_cons(t, sym_Sort_2))
              {
                u_27 = ATgetArgument(t, 0);
                r_27 = ATgetArgument(t, 1);
                {
                  ATerm r_28 = NULL,z_28 = NULL,a_29 = NULL,c_8 = NULL;
                  t = SSLgetAnnotations(s_27);
                  r_28 = t;
                  t = SSL_is_string(u_27);
                  z_28 = t;
                  t = r_27;
                  t = map_1_0(f_28, t);
                  a_29 = t;
                  t = (ATerm) ATmakeAppl(sym_Sort_2, z_28, a_29);
                  c_8 = t;
                  t = SSLsetAnnotations(c_8, r_28);
                }
              }
            else
              {
                ATerm s_29 = NULL,v_29 = NULL,d_8 = NULL;
                if(match_cons(t, sym_SortVar_1))
                  {
                    u_27 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(s_27);
                s_29 = t;
                t = SSL_is_string(u_27);
                v_29 = t;
                t = (ATerm) ATmakeAppl(sym_SortVar_1, v_29);
                d_8 = t;
                t = SSLsetAnnotations(d_8, s_29);
              }
            return(t);
          }
          t = f_28(t);
          if(((q_26 != NULL) && (q_26 != t)))
            _fail(t);
          else
            q_26 = t;
          t = (ATerm) ATmakeAppl(sym_ConstType_1, not_null(q_26));
          if(((e_8 != NULL) && (e_8 != t)))
            _fail(t);
          else
            e_8 = t;
          t = SSLsetAnnotations(not_null(e_8), not_null(o_26));
        }
      }
    }
  else
    {
      ATerm m_30 = NULL,w_30 = NULL,y_30 = NULL,f_8 = NULL;
      if(match_cons(t, sym_FunType_2))
        {
          if(((i_33 != NULL) && (i_33 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            i_33 = ATgetArgument(t, 0);
          if(((j_33 != NULL) && (j_33 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            j_33 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(not_null(h_33));
      m_30 = t;
      t = not_null(i_33);
      t = map_1_0(type_expression_0_0, t);
      w_30 = t;
      t = not_null(j_33);
      t = type_expression_0_0(t);
      y_30 = t;
      t = (ATerm) ATmakeAppl(sym_FunType_2, w_30, y_30);
      f_8 = t;
      t = SSLsetAnnotations(f_8, m_30);
    }
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,x_31 = NULL,y_31 = NULL,k_8 = NULL;
  y_31 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      t_31 = ATgetArgument(t, 0);
      u_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_31);
  s_31 = t;
  t = SSL_is_string(t_31);
  v_31 = t;
  t = u_31;
  t = type_expression_0_0(t);
  x_31 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, v_31, x_31);
  k_8 = t;
  t = SSLsetAnnotations(k_8, s_31);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm m_39 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,v_41 = NULL,w_41 = NULL,m_8 = NULL;
  w_41 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      w_40 = ATgetArgument(t, 0);
      x_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_41);
  m_39 = t;
  t = SSL_is_string(w_40);
  y_40 = t;
  t = x_40;
  t = type_expression_0_0(t);
  v_41 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, y_40, v_41);
  m_8 = t;
  t = SSLsetAnnotations(m_8, m_39);
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL,r_42 = NULL,y_42 = NULL,d_43 = NULL,i_43 = NULL,n_8 = NULL;
  i_43 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      y_41 = ATgetArgument(t, 0);
      r_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_43);
  x_41 = t;
  t = SSL_is_string(y_41);
  y_42 = t;
  t = r_42;
  t = type_expression_0_0(t);
  d_43 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, y_42, d_43);
  n_8 = t;
  t = SSLsetAnnotations(n_8, x_41);
  return(t);
}
ATerm h_1 (ATerm t)
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
      ATerm l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL;
      l_35 = t;
      if(match_cons(t, sym_SDef_3))
        {
          m_35 = ATgetArgument(t, 0);
          n_35 = ATgetArgument(t, 1);
          o_35 = ATgetArgument(t, 2);
          {
            ATerm k_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL,l_8 = NULL;
            t = SSLgetAnnotations(l_35);
            k_31 = t;
            t = SSL_is_string(m_35);
            o_31 = t;
            t = n_35;
            t = map_1_0(b_1, t);
            p_31 = t;
            t = o_35;
            t = strategy_expression_0_0(t);
            q_31 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, o_31, p_31, q_31);
            l_8 = t;
            t = SSLsetAnnotations(l_8, k_31);
          }
        }
      else
        {
          ATerm u_36 = NULL,s_38 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,o_8 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              m_35 = ATgetArgument(t, 0);
              n_35 = ATgetArgument(t, 1);
              o_35 = ATgetArgument(t, 2);
              p_35 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_35);
          u_36 = t;
          t = SSL_is_string(m_35);
          s_38 = t;
          t = n_35;
          t = map_1_0(f_1, t);
          i_39 = t;
          t = o_35;
          t = map_1_0(g_1, t);
          j_39 = t;
          t = p_35;
          t = strategy_expression_0_0(t);
          k_39 = t;
          t = (ATerm) ATmakeAppl(sym_SDefT_4, s_38, i_39, j_39, k_39);
          o_8 = t;
          t = SSLsetAnnotations(o_8, u_36);
        }
      ;
      LocalPopChoice(u_6);
    }
  else
    {
      t = t_6;
      t = debug_1_0(h_1, t);
    }
  return(t);
}
ATerm map_1_0 (ATerm e_90 (ATerm), ATerm t)
{
  ATerm g_36 (ATerm t)
  {
    ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL;
    d_36 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_36;
      }
    else
      {
        ATerm y_45 = NULL,y_46 = NULL,z_46 = NULL,u_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_36 = ATgetFirst((ATermList) t);
            f_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_36);
        y_45 = t;
        t = e_36;
        t = e_90(t);
        y_46 = t;
        t = f_36;
        t = g_36(t);
        z_46 = t;
        t = (ATerm) ATinsert(CheckATermList(z_46), y_46);
        u_8 = t;
        t = SSLsetAnnotations(u_8, y_45);
      }
    return(t);
  }
  t = g_36(t);
  return(t);
}
ATerm Cons_2_0 (ATerm r_68 (ATerm), ATerm s_68 (ATerm), ATerm t)
{
  ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL,w_8 = NULL;
  n_36 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_36 = ATgetFirst((ATermList) t);
      k_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_36);
  i_36 = t;
  t = j_36;
  t = r_68(t);
  l_36 = t;
  t = k_36;
  t = s_68(t);
  m_36 = t;
  t = (ATerm) ATinsert(CheckATermList(m_36), l_36);
  w_8 = t;
  t = SSLsetAnnotations(w_8, i_36);
  return(t);
}
ATerm t_3 (ATerm v_49, ATerm w_49, ATerm t)
{
  ATerm o_36 = NULL;
  t = SSL_fputc(v_49, w_49);
  o_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_36);
  return(t);
}
ATerm u_3 (ATerm j_53, ATerm k_53, ATerm t)
{
  ATerm p_36 = NULL;
  t = SSL_write_term_to_stream_text(j_53, k_53);
  p_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_36);
  return(t);
}
ATerm w_3 (ATerm v_102 (ATerm), ATerm d_426, ATerm n_53, ATerm t)
{
  ATerm q_36 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_426, term_v_6);
  t = open_stream_0_0(t);
  q_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_36, n_53);
  t = v_102(t);
  t = fclose_0_0(t);
  t = n_53;
  return(t);
}
ATerm v_3 (ATerm f_53, ATerm g_53, ATerm t)
{
  ATerm r_36 = NULL;
  t = SSL_write_term_to_stream_baf(f_53, g_53);
  r_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_36);
  return(t);
}
ATerm j_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm a_50 = NULL,f_51 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_6 = ATgetArgument(t, 0);
      if(match_cons(w_6, sym_Stream_1))
        {
          a_50 = ATgetArgument(w_6, 0);
        }
      else
        _fail(t);
      f_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_3(a_50, f_51, t);
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm k_52 = NULL,l_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_6 = ATgetArgument(t, 0);
      if(match_cons(x_6, sym_Stream_1))
        {
          n_52 = ATgetArgument(x_6, 0);
        }
      else
        _fail(t);
      o_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3(n_52, o_52, t);
  k_52 = t;
  t = term_y_6;
  l_52 = t;
  t = k_52;
  if(match_cons(t, sym_Stream_1))
    {
      m_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_y_6, k_52);
  t = t_3(l_52, m_52, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL,h_38 = NULL,i_38 = NULL,z_8 = NULL,y_8 = NULL;
  if(((w_36 != NULL) && (w_36 != t)))
    _fail(t);
  else
    w_36 = t;
  if(match_cons(t, sym__2))
    {
      if(((d_37 != NULL) && (d_37 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_37 = ATgetArgument(t, 0);
      if(((e_37 != NULL) && (e_37 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(w_36));
  if(((c_37 != NULL) && (c_37 != t)))
    _fail(t);
  else
    c_37 = t;
  t = not_null(d_37);
  {
    ATerm z_6 = t;
    int a_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((v_36 != NULL) && (v_36 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                v_36 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(i_1, t);
        ;
        LocalPopChoice(a_7);
      }
    else
      {
        t = z_6;
        t = term_b_7;
        if(((v_36 != NULL) && (v_36 != t)))
          _fail(t);
        else
          v_36 = t;
      }
    if(((f_37 != NULL) && (f_37 != t)))
      _fail(t);
    else
      f_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_37), not_null(e_37));
    if(((y_8 != NULL) && (y_8 != t)))
      _fail(t);
    else
      y_8 = t;
    t = SSLsetAnnotations(not_null(y_8), not_null(c_37));
    t = not_null(w_36);
    if(match_cons(t, sym__2))
      {
        if(((y_36 != NULL) && (y_36 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          y_36 = ATgetArgument(t, 0);
        if(((z_36 != NULL) && (z_36 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          z_36 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(w_36));
    if(((x_36 != NULL) && (x_36 != t)))
      _fail(t);
    else
      x_36 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_36), (ATerm) ATmakeAppl(sym__2, not_null(v_36), not_null(z_36)));
    if(((z_8 != NULL) && (z_8 != t)))
      _fail(t);
    else
      z_8 = t;
    t = SSLsetAnnotations(not_null(z_8), not_null(x_36));
    if(((b_37 != NULL) && (b_37 != t)))
      _fail(t);
    else
      b_37 = t;
    if(match_cons(t, sym__2))
      {
        if(((h_38 != NULL) && (h_38 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          h_38 = ATgetArgument(t, 0);
        if(((i_38 != NULL) && (i_38 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          i_38 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm c_7 = t;
      int d_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_48 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL,z_49 = NULL,b_9 = NULL;
          t = SSLgetAnnotations(not_null(b_37));
          o_48 = t;
          t = not_null(h_38);
          t = fetch_1_0(j_1, t);
          i_49 = t;
          t = not_null(i_38);
          if(match_cons(t, sym__2))
            {
              k_49 = ATgetArgument(t, 0);
              z_49 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_3(l_1, k_49, z_49, t);
          j_49 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_49, j_49);
          b_9 = t;
          t = SSLsetAnnotations(b_9, o_48);
          ;
          LocalPopChoice(d_7);
        }
      else
        {
          t = c_7;
          {
            ATerm e_52 = NULL,h_52 = NULL,i_52 = NULL,j_52 = NULL,c_9 = NULL;
            t = SSLgetAnnotations(not_null(b_37));
            e_52 = t;
            t = not_null(i_38);
            if(match_cons(t, sym__2))
              {
                i_52 = ATgetArgument(t, 0);
                j_52 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = w_3(n_1, i_52, j_52, t);
            h_52 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_38), h_52);
            c_9 = t;
            t = SSLsetAnnotations(c_9, e_52);
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
ATerm apply_strategy_1_0 (ATerm x_105 (ATerm), ATerm t)
{
  ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL;
  p_38 = t;
  t = dtime_0_0(t);
  t = p_38;
  t = x_105(t);
  o_38 = t;
  t = dtime_0_0(t);
  l_38 = t;
  t = o_38;
  if(match_cons(t, sym__2))
    {
      m_38 = ATgetArgument(t, 0);
      n_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_38), (ATerm) ATmakeAppl(sym_Runtime_1, l_38)), n_38);
  return(t);
}
ATerm d_39 (ATerm x_38, ATerm t)
{
  t = SSL_fclose(x_38);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL;
  b_39 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_39 = ATgetArgument(t, 0);
      {
        ATerm e_7 = t;
        int f_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_39);
            ;
            LocalPopChoice(f_7);
          }
        else
          {
            t = e_7;
            t = d_39(b_39, t);
          }
      }
    }
  else
    {
      t = d_39(b_39, t);
    }
  return(t);
}
ATerm x_3 (ATerm l_53, ATerm t)
{
  t = SSL_read_term_from_stream(l_53);
  return(t);
}
ATerm y_3 (ATerm x_49, ATerm y_49, ATerm t)
{
  ATerm e_39 = NULL;
  t = SSL_fopen(x_49, y_49);
  e_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_39);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_39 = NULL;
  t = SSL_stdin_stream();
  f_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_39);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_39 = NULL;
  t = SSL_stdout_stream();
  g_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_39);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_39 = NULL;
  t = SSL_stderr_stream();
  h_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_39);
  return(t);
}
ATerm o_40 (ATerm n_39, ATerm t)
{
  ATerm o_39 = NULL;
  t = SSL_explode_term(n_39);
  if(match_cons(t, sym__2))
    {
      ATerm g_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_7 = ATgetArgument(t, 1);
        if(((ATgetType(h_7) == AT_LIST) && !(ATisEmpty(h_7))))
          {
            o_39 = ATgetFirst((ATermList) h_7);
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
  t = o_39;
  if(match_cons(t, sym_stderr_0))
    {
      t = o_39;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = o_39;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = o_39;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm p_40 (ATerm r_39, ATerm s_39, ATerm t_39, ATerm t)
{
  ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL,z_39 = NULL,s_9 = NULL;
  t = SSLgetAnnotations(t_39);
  w_39 = t;
  t = r_39;
  if(match_cons(t, sym_Path_1))
    {
      z_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_39, s_39);
  s_9 = t;
  t = SSLsetAnnotations(s_9, w_39);
  if(match_cons(t, sym__2))
    {
      u_39 = ATgetArgument(t, 0);
      v_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(u_39, v_39, t);
  return(t);
}
ATerm q_40 (ATerm b_40, ATerm c_40, ATerm d_40, ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL,j_40 = NULL,t_9 = NULL;
  t = SSLgetAnnotations(d_40);
  g_40 = t;
  t = SSL_is_string(b_40);
  j_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_40, c_40);
  t_9 = t;
  t = SSLsetAnnotations(t_9, g_40);
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
ATerm open_stream_0_0 (ATerm t)
{
  ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_7 = ATgetArgument(t, 0);
      ATerm k_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  l_40 = t;
  if(match_cons(t, sym__2))
    {
      m_40 = ATgetArgument(t, 0);
      n_40 = ATgetArgument(t, 1);
      {
        ATerm l_7 = t;
        int m_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_40(l_40, t);
            ;
            LocalPopChoice(m_7);
          }
        else
          {
            t = l_7;
            {
              ATerm o_7 = t;
              int p_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_40(m_40, n_40, l_40, t);
                  ;
                  LocalPopChoice(p_7);
                }
              else
                {
                  t = o_7;
                  t = q_40(m_40, n_40, l_40, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_40(l_40, t);
    }
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_s_7;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL;
  ATerm t_7 = t;
  int u_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_40 = NULL;
      u_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_40, term_v_7);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(u_7);
    }
  else
    {
      t = t_7;
      t = debug_1_0(o_1, t);
      _fail(t);
    }
  s_40 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_3(t_40, t);
  r_40 = t;
  t = s_40;
  t = fclose_0_0(t);
  t = r_40;
  return(t);
}
ATerm fetch_1_0 (ATerm o_90 (ATerm), ATerm t)
{
  ATerm s_41 (ATerm t)
  {
    ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL;
    p_41 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_41 = ATgetFirst((ATermList) t);
        r_41 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_7 = t;
      int x_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_53 = NULL,d_53 = NULL,z_9 = NULL;
          t = SSLgetAnnotations(p_41);
          a_53 = t;
          t = q_41;
          t = o_90(t);
          d_53 = t;
          t = (ATerm) ATinsert(CheckATermList(r_41), d_53);
          z_9 = t;
          t = SSLsetAnnotations(z_9, a_53);
          ;
          LocalPopChoice(x_7);
        }
      else
        {
          t = w_7;
          {
            ATerm r_53 = NULL,u_53 = NULL,b_10 = NULL;
            t = SSLgetAnnotations(p_41);
            r_53 = t;
            t = r_41;
            t = s_41(t);
            u_53 = t;
            t = (ATerm) ATinsert(CheckATermList(u_53), q_41);
            b_10 = t;
            t = SSLsetAnnotations(b_10, r_53);
          }
        }
    }
    return(t);
  }
  t = s_41(t);
  return(t);
}
ATerm s_3 (ATerm l_44, ATerm m_44, ATerm t)
{
  t = SSL_strcat(l_44, m_44);
  return(t);
}
ATerm p_1 (ATerm t)
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
ATerm q_1 (ATerm t)
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
      ATerm b_42 = NULL;
      b_42 = t;
      t = SSL_is_string(b_42);
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
            t = map_1_0(p_1, t);
            ;
            LocalPopChoice(i_8);
          }
        else
          {
            t = h_8;
            {
              ATerm h_42 = NULL,i_42 = NULL,j_42 = NULL;
              h_42 = t;
              if(match_cons(t, sym_Path_1))
                {
                  i_42 = ATgetArgument(t, 0);
                  t = i_42;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      i_42 = ATgetArgument(t, 0);
                      t = i_42;
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
                            t = debug_1_0(q_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm n_42 = NULL,o_42 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          i_42 = ATgetArgument(t, 0);
                          j_42 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = i_42;
                      t = eval_config_0_0(t);
                      n_42 = t;
                      t = j_42;
                      t = eval_config_0_0(t);
                      o_42 = t;
                      t = (ATerm) ATmakeAppl(sym__2, n_42, o_42);
                      t = s_3(n_42, o_42, t);
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
  ATerm s_42 = NULL,t_42 = NULL;
  s_42 = t;
  t = term_q_8;
  t_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_8, s_42);
  t = b_4(t_42, s_42, t);
  {
    ATerm r_8 = t;
    int s_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_42 = NULL,v_42 = NULL;
        t = eval_config_0_0(t);
        u_42 = t;
        t = term_q_8;
        v_42 = t;
        t = SSL_table_put(v_42, s_42, u_42);
        t = u_42;
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
ATerm if_verbose2_1_0 (ATerm g_104 (ATerm), ATerm t)
{
  ATerm z_42 = NULL;
  z_42 = t;
  {
    ATerm t_8 = t;
    int v_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_43 = NULL;
        t = term_x_8;
        t = get_config_0_0(t);
        b_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_43, term_a_9);
        t = geq_0_0(t);
        t = z_42;
        t = g_104(t);
        ;
        LocalPopChoice(v_8);
      }
    else
      {
        t = t_8;
        t = z_42;
      }
  }
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm e_43 = NULL;
  e_43 = t;
  if(match_string(t, "-k"))
    {
      t = e_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_43;
    }
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL;
  f_43 = t;
  t = SSL_string_to_int(f_43);
  g_43 = t;
  t = term_d_9;
  h_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_9, g_43);
  t = e_4(h_43, g_43, t);
  t = f_43;
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_f_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_1, t_1, v_1, t);
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm j_43 = NULL;
  j_43 = t;
  if(match_string(t, "-S"))
    {
      t = j_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_43;
    }
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm k_43 = NULL,l_43 = NULL;
  t = term_x_8;
  k_43 = t;
  t = term_g_9;
  l_43 = t;
  t = term_h_9;
  t = e_4(k_43, l_43, t);
  t = term_i_9;
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_k_9;
  return(t);
}
ATerm d_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL;
  m_43 = t;
  t = SSL_string_to_int(m_43);
  n_43 = t;
  t = term_x_8;
  o_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_8, n_43);
  t = e_4(o_43, n_43, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_43);
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
  ATerm p_43 = NULL,q_43 = NULL;
  t = term_m_9;
  p_43 = t;
  t = term_z_4;
  q_43 = t;
  t = term_n_9;
  t = e_4(p_43, q_43, t);
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
  ATerm q_9 = t;
  int u_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_1, x_1, z_1, t);
      ;
      LocalPopChoice(u_9);
    }
  else
    {
      t = q_9;
      {
        ATerm v_9 = t;
        int w_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_2, f_2, g_2, t);
            ;
            LocalPopChoice(w_9);
          }
        else
          {
            t = v_9;
            t = Option_3_0(h_2, i_2, j_2, t);
          }
      }
    }
  return(t);
}
ATerm e_4 (ATerm m_54, ATerm n_54, ATerm t)
{
  ATerm r_43 = NULL;
  t = term_q_8;
  r_43 = t;
  t = SSL_table_put(r_43, m_54, n_54);
  t = (ATerm) ATmakeAppl(sym__3, term_q_8, m_54, n_54);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm u_43 = NULL,v_43 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_43 = NULL,x_43 = NULL,y_43 = NULL;
      t = term_z_4;
      t = d_0(t);
      w_43 = t;
      t = term_y_9;
      x_43 = t;
      t = term_c_10;
      y_43 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_9, term_c_10, w_43);
      t = c_4(x_43, y_43, w_43, t);
      _fail(t);
    }
  else
    {
      ATerm b_44 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_43 = ATgetFirst((ATermList) t);
          v_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_43;
      t = a_0(t);
      t = term_z_4;
      t = b_0(t);
      b_44 = t;
      t = (ATerm) ATinsert(CheckATermList(v_43), b_44);
    }
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm d_44 = NULL;
  d_44 = t;
  if(match_string(t, "-o"))
    {
      t = d_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = d_44;
    }
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL;
  e_44 = t;
  t = term_e_10;
  f_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_10, e_44);
  t = e_4(f_44, e_44, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, e_44);
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_f_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_2, m_2, n_2, t);
  return(t);
}
ATerm c_4 (ATerm k_59, ATerm l_59, ATerm j_59, ATerm t)
{
  ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL;
  h_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_59, l_59);
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
        t = (ATerm) ATmakeAppl(sym__2, k_59, l_59);
        t = b_4(k_59, l_59, t);
        ;
        LocalPopChoice(i_10);
      }
    else
      {
        t = g_10;
        t = (ATerm) ATempty;
      }
    i_44 = t;
    t = (ATerm) ATinsert(CheckATermList(i_44), j_59);
    j_44 = t;
    t = SSL_table_put(k_59, l_59, j_44);
    t = h_44;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL;
      t = term_z_4;
      t = j_0(t);
      x_44 = t;
      t = term_y_9;
      y_44 = t;
      t = term_c_10;
      z_44 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_9, term_c_10, x_44);
      t = c_4(y_44, z_44, x_44, t);
      _fail(t);
    }
  else
    {
      ATerm d_45 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_44 = ATgetFirst((ATermList) t);
          u_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_44;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_44 = ATgetFirst((ATermList) t);
          w_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_44;
      t = h_0(t);
      t = v_44;
      t = i_0(t);
      d_45 = t;
      t = (ATerm) ATinsert(CheckATermList(w_44), d_45);
    }
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm f_45 = NULL;
  f_45 = t;
  if(match_string(t, "-i"))
    {
      t = f_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = f_45;
    }
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm g_45 = NULL,h_45 = NULL;
  g_45 = t;
  t = term_m_10;
  h_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_10, g_45);
  t = e_4(h_45, g_45, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, g_45);
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_n_10;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_2, x_2, y_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_4;
  t = whoami_0_0(t);
  i_45 = t;
  t = term_y_5;
  k_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_p_10), i_45);
  l_45 = t;
  t = SSL_printnl(k_45, l_45);
  t = term_d_6;
  j_45 = t;
  t = SSL_exit(j_45);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_q_10;
  t = get_config_0_0(t);
  return(t);
}
ATerm z_3 (ATerm v_46, ATerm w_46, ATerm t)
{
  ATerm t_10 = t;
  int u_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_46, w_46);
      ;
      LocalPopChoice(u_10);
    }
  else
    {
      t = t_10;
      t = SSL_addr(v_46, w_46);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL;
  n_45 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_45;
      t = h_96(t);
    }
  else
    {
      ATerm s_45 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_45 = ATgetFirst((ATermList) t);
          p_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_45;
      t = foldr_2_0(h_96, i_96, t);
      s_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_45, s_45);
      t = i_96(t);
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
  ATerm l_54 = NULL,o_54 = NULL;
  if(match_cons(t, sym__2))
    {
      l_54 = ATgetArgument(t, 0);
      o_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3(l_54, o_54, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_45 = NULL,h_54 = NULL,i_54 = NULL;
  t = times_0_0(t);
  i_54 = t;
  t = SSL_explode_term(i_54);
  if(match_cons(t, sym__2))
    {
      ATerm v_10 = ATgetArgument(t, 0);
      h_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_54;
  t = foldr_2_0(z_2, a_3, t);
  v_45 = t;
  t = SSL_TicksToSeconds(v_45);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL;
  g_46 = t;
  if(match_cons(t, sym__2))
    {
      h_46 = ATgetArgument(t, 0);
      i_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_10 = t;
    int y_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_46;
        if((h_46 != t))
          {
            _fail(t);
          }
        t = g_46;
        ;
        LocalPopChoice(y_10);
      }
    else
      {
        t = w_10;
        t = (ATerm) ATmakeAppl(sym__2, h_46, i_46);
        {
          ATerm z_10 = t;
          int a_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_46, i_46);
              ;
              LocalPopChoice(a_11);
            }
          else
            {
              t = z_10;
              t = SSL_gtr(h_46, i_46);
            }
          t = (ATerm) ATmakeAppl(sym__2, h_46, i_46);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_104 (ATerm), ATerm t)
{
  ATerm m_46 = NULL;
  m_46 = t;
  {
    ATerm b_11 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_46 = NULL;
        t = term_x_8;
        t = get_config_0_0(t);
        o_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_46, term_d_6);
        t = geq_0_0(t);
        t = m_46;
        t = f_104(t);
        ;
        LocalPopChoice(d_11);
      }
    else
      {
        t = b_11;
        t = m_46;
      }
  }
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm q_46 = NULL,r_46 = NULL,t_46 = NULL,u_46 = NULL;
  t = run_time_0_0(t);
  q_46 = t;
  t = term_z_4;
  t = whoami_0_0(t);
  r_46 = t;
  t = term_y_5;
  t_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_11), q_46), term_f_11), r_46);
  u_46 = t;
  t = SSL_printnl(t_46, u_46);
  t = (ATerm) ATmakeAppl(sym__2, term_y_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_11), q_46), term_f_11), r_46));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(b_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_46 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_9;
  x_46 = t;
  t = SSL_exit(x_46);
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm f_47 = NULL,g_47 = NULL;
  g_47 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = g_47;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          f_47 = ATgetArgument(t, 0);
          {
            ATerm a_55 = NULL,x_10 = NULL;
            t = SSLgetAnnotations(g_47);
            a_55 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, f_47);
            x_10 = t;
            t = SSLsetAnnotations(x_10, a_55);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = g_47;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm v_106 (ATerm), ATerm t)
{
  ATerm i_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_11);
    }
  else
    {
      t = i_11;
      t = fetch_1_0(c_3, t);
    }
  t = v_106(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_47 = ATgetFirst((ATermList) t);
      k_47 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_47 = NULL,p_47 = NULL;
        ATerm d_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(o_47)), not_null(p_47));
          return(t);
        }
        t = not_null(k_47);
        t = g_0(t);
        if(((o_47 != NULL) && (o_47 != t)))
          _fail(t);
        else
          o_47 = t;
        t = not_null(j_47);
        t = f_0(t);
        if(((p_47 != NULL) && (p_47 != t)))
          _fail(t);
        else
          p_47 = t;
        t = not_null(k_47);
        t = reverse_acc_2_0(f_0, d_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_4;
      t = g_0(t);
    }
  return(t);
}
ATerm b_4 (ATerm b_61, ATerm c_61, ATerm t)
{
  t = SSL_table_get(b_61, c_61);
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL,v_47 = NULL,c_11 = NULL;
  v_47 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_47);
  t_47 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_47);
  c_11 = t;
  t = SSLsetAnnotations(c_11, t_47);
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm x_47 = NULL;
  x_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_47), term_n_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_47 = NULL,s_47 = NULL;
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_10;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_11);
    }
  else
    {
      t = o_11;
      t = fetch_1_0(e_3, t);
    }
  t = term_q_11;
  t = echo_0_0(t);
  t = term_y_9;
  r_47 = t;
  t = term_c_10;
  s_47 = t;
  t = term_r_11;
  t = b_4(r_47, s_47, t);
  t = reverse_acc_2_0(_id, f_3, t);
  t = map_1_0(g_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_47 = NULL,a_48 = NULL,c_48 = NULL;
  z_47 = t;
  {
    ATerm s_11 = t;
    int u_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_47;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_11 = ATgetFirst((ATermList) t);
                ATerm w_11 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_47;
          }
        ;
        LocalPopChoice(u_11);
      }
    else
      {
        t = s_11;
        t = (ATerm) ATinsert(ATempty, z_47);
      }
    a_48 = t;
    t = term_b_7;
    c_48 = t;
    t = SSL_printnl(c_48, a_48);
    t = z_47;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_q_10;
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
ATerm i_3 (ATerm t)
{
  ATerm g_48 = NULL,h_48 = NULL;
  t = term_a_12;
  g_48 = t;
  t = term_z_4;
  h_48 = t;
  t = term_b_12;
  t = e_4(g_48, h_48, t);
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_c_12;
  return(t);
}
ATerm n_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL;
  t = term_a_12;
  k_48 = t;
  t = term_z_4;
  l_48 = t;
  t = term_b_12;
  t = e_4(k_48, l_48, t);
  t = term_d_12;
  i_48 = t;
  t = term_z_4;
  j_48 = t;
  t = term_e_12;
  t = e_4(i_48, j_48, t);
  t = term_f_12;
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_g_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm h_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_3, i_3, l_3, t);
      ;
      LocalPopChoice(j_12);
    }
  else
    {
      t = h_12;
      t = Option_3_0(n_3, o_3, p_3, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm y_108 (ATerm), ATerm t)
{
  ATerm q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL,v_48 = NULL,w_48 = NULL,e_11 = NULL;
  if(((q_48 != NULL) && (q_48 != t)))
    _fail(t);
  else
    q_48 = t;
  {
    ATerm k_12 = t;
    int n_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_12;
        t = y_108(t);
        ;
        LocalPopChoice(n_12);
      }
    else
      {
        t = k_12;
      }
    t = not_null(q_48);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((s_48 != NULL) && (s_48 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          s_48 = ATgetFirst((ATermList) t);
        if(((t_48 != NULL) && (t_48 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          t_48 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(q_48));
    if(((r_48 != NULL) && (r_48 != t)))
      _fail(t);
    else
      r_48 = t;
    t = term_q_10;
    if(((w_48 != NULL) && (w_48 != t)))
      _fail(t);
    else
      w_48 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_q_10, not_null(s_48));
    t = e_4(not_null(w_48), not_null(s_48), t);
    t = not_null(t_48);
    {
      ATerm g_49 (ATerm t)
      {
        ATerm p_12 = t;
        int q_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_12 = t;
            int s_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_48 = NULL;
                z_48 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = z_48;
                ;
                LocalPopChoice(s_12);
              }
            else
              {
                t = r_12;
                t = y_108(t);
                t = Cons_2_0(_id, g_49, t);
              }
            ;
            LocalPopChoice(q_12);
          }
        else
          {
            t = p_12;
            {
              ATerm c_49 = NULL,d_49 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_49 = ATgetFirst((ATermList) t);
                  d_49 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(d_49), (ATerm) ATmakeAppl(sym_Undefined_1, c_49));
            }
          }
        return(t);
      }
      t = g_49(t);
      if(((v_48 != NULL) && (v_48 != t)))
        _fail(t);
      else
        v_48 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(v_48)), (ATerm) ATmakeAppl(sym_Program_1, not_null(s_48)));
      if(((e_11 != NULL) && (e_11 != t)))
        _fail(t);
      else
        e_11 = t;
      t = SSLsetAnnotations(not_null(e_11), not_null(r_48));
    }
  }
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm s_49 = NULL;
  s_49 = t;
  if(match_string(t, "--help"))
    {
      t = s_49;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = s_49;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = s_49;
        }
    }
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm t_49 = NULL,u_49 = NULL;
  t = term_m_11;
  t_49 = t;
  t = term_z_4;
  u_49 = t;
  t = term_t_12;
  t = e_4(t_49, u_49, t);
  t = term_v_12;
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_w_12;
  return(t);
}
ATerm f_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm x_108 (ATerm), ATerm t)
{
  ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL;
  if(((n_49 != NULL) && (n_49 != t)))
    _fail(t);
  else
    n_49 = t;
  t = term_y_9;
  if(((p_49 != NULL) && (p_49 != t)))
    _fail(t);
  else
    p_49 = t;
  t = term_c_10;
  if(((q_49 != NULL) && (q_49 != t)))
    _fail(t);
  else
    q_49 = t;
  t = (ATerm) ATempty;
  if(((r_49 != NULL) && (r_49 != t)))
    _fail(t);
  else
    r_49 = t;
  t = SSL_table_put(not_null(p_49), not_null(q_49), not_null(r_49));
  t = not_null(n_49);
  {
    ATerm q_3 (ATerm t)
    {
      ATerm z_12 = t;
      int a_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_108(t);
          ;
          LocalPopChoice(a_13);
        }
      else
        {
          t = z_12;
          {
            ATerm b_13 = t;
            int c_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(r_3, f_4, j_4, t);
                ;
                LocalPopChoice(c_13);
              }
            else
              {
                t = b_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_3, t);
    {
      ATerm d_13 = t;
      int e_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_50 = NULL;
          h_50 = t;
          {
            ATerm f_13 = t;
            int g_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_55 = NULL;
                t = h_50;
                {
                  ATerm i_13 = t;
                  int j_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_m_11;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(j_13);
                    }
                  else
                    {
                      t = i_13;
                      t = fetch_1_0(f_5, t);
                    }
                  t = h_50;
                  t = default_system_usage_0_0(t);
                  t = term_g_9;
                  h_55 = t;
                  t = SSL_exit(h_55);
                }
                ;
                LocalPopChoice(g_13);
              }
            else
              {
                t = f_13;
                {
                  ATerm l_55 = NULL;
                  t = term_a_12;
                  t = get_config_0_0(t);
                  t = h_50;
                  t = default_system_about_0_0(t);
                  t = term_g_9;
                  l_55 = t;
                  t = SSL_exit(l_55);
                }
              }
          }
          ;
          LocalPopChoice(e_13);
        }
      else
        {
          t = d_13;
          {
            ATerm k_13 = t;
            int r_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL;
                ATerm g_5 (ATerm t)
                {
                  ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL,f_14 = NULL;
                  n_50 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      m_50 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(n_50);
                  l_50 = t;
                  t = m_50;
                  if(((l_49 != NULL) && (l_49 != t)))
                    _fail(t);
                  else
                    l_49 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, m_50);
                  f_14 = t;
                  t = SSLsetAnnotations(f_14, l_50);
                  return(t);
                }
                t = fetch_1_0(g_5, t);
                t = term_y_5;
                if(((j_50 != NULL) && (j_50 != t)))
                  _fail(t);
                else
                  j_50 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_49)), term_s_13);
                if(((k_50 != NULL) && (k_50 != t)))
                  _fail(t);
                else
                  k_50 = t;
                t = SSL_printnl(not_null(j_50), not_null(k_50));
                t = (ATerm) ATmakeAppl(sym__2, term_y_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_49)), term_s_13));
                t = default_system_usage_0_0(t);
                t = term_d_6;
                if(((i_50 != NULL) && (i_50 != t)))
                  _fail(t);
                else
                  i_50 = t;
                t = SSL_exit(not_null(i_50));
                ;
                LocalPopChoice(r_13);
              }
            else
              {
                t = k_13;
              }
          }
        }
      if(((m_49 != NULL) && (m_49 != t)))
        _fail(t);
      else
        m_49 = t;
      t = term_y_9;
      if(((o_49 != NULL) && (o_49 != t)))
        _fail(t);
      else
        o_49 = t;
      t = SSL_table_destroy(not_null(o_49));
      t = not_null(m_49);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm x_106 (ATerm), ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm t)
{
  ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL;
  t = parse_options_1_0(x_106, t);
  s_50 = t;
  t = term_t_13;
  v_50 = t;
  t = SSL_table_create(v_50);
  t = term_t_13;
  t_50 = t;
  t = term_u_13;
  u_50 = t;
  t = SSL_table_put(t_50, u_50, s_50);
  t = s_50;
  t = z_106(t);
  {
    ATerm v_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(y_106, t);
        ;
        LocalPopChoice(w_13);
      }
    else
      {
        t = v_13;
        {
          ATerm x_13 = t;
          int y_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_107(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(y_13);
            }
          else
            {
              t = x_13;
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
  ATerm w_50 = NULL,x_50 = NULL;
  t = term_z_13;
  w_50 = t;
  t = term_z_4;
  x_50 = t;
  t = term_b_14;
  t = e_4(w_50, x_50, t);
  t = term_c_14;
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_d_14;
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL;
  y_50 = t;
  t = term_q_10;
  t = get_config_0_0(t);
  z_50 = t;
  t = term_y_5;
  a_51 = t;
  t = (ATerm) ATinsert(ATempty, z_50);
  b_51 = t;
  t = SSL_printnl(a_51, b_51);
  t = y_50;
  return(t);
}
ATerm iowrap_3_0 (ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm i_106 (ATerm), ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    ATerm e_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_106(t);
        ;
        LocalPopChoice(g_14);
      }
    else
      {
        t = e_14;
        {
          ATerm n_14 = t;
          int o_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(o_14);
            }
          else
            {
              t = n_14;
              {
                ATerm p_14 = t;
                int q_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(q_14);
                  }
                else
                  {
                    t = p_14;
                    {
                      ATerm s_14 = t;
                      int t_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(n_5, o_5, p_5, t);
                          ;
                          LocalPopChoice(t_14);
                        }
                      else
                        {
                          t = s_14;
                          {
                            ATerm u_14 = t;
                            int v_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(v_14);
                              }
                            else
                              {
                                t = u_14;
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
    ATerm c_51 = NULL,d_51 = NULL,e_51 = NULL;
    if(((d_51 != NULL) && (d_51 != t)))
      _fail(t);
    else
      d_51 = t;
    {
      ATerm x_14 = t;
      int y_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((c_51 != NULL) && (c_51 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_51 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(r_5, t);
          ;
          LocalPopChoice(y_14);
        }
      else
        {
          t = x_14;
          t = term_z_14;
          if(((c_51 != NULL) && (c_51 != t)))
            _fail(t);
          else
            c_51 = t;
        }
      t = not_null(c_51);
      t = ReadFromFile_0_0(t);
      if(((e_51 != NULL) && (e_51 != t)))
        _fail(t);
      else
        e_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_51), not_null(e_51));
      t = apply_strategy_1_0(g_106, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(h_5, i_106, i_5, l_5, t);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL,l_51 = NULL,r_14 = NULL;
  l_51 = t;
  if(match_cons(t, sym__2))
    {
      i_51 = ATgetArgument(t, 0);
      j_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_51);
  h_51 = t;
  t = j_51;
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_51 = NULL,o_55 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL,l_14 = NULL,k_14 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            z_51 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_51);
        o_55 = t;
        t = z_51;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_55 = ATgetFirst((ATermList) t);
            s_55 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_51);
        q_55 = t;
        t = s_55;
        t = Cons_2_0(v_5, w_5, t);
        t_55 = t;
        t = (ATerm) ATinsert(CheckATermList(t_55), r_55);
        k_14 = t;
        t = SSLsetAnnotations(k_14, q_55);
        u_55 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, u_55);
        l_14 = t;
        t = SSLsetAnnotations(l_14, o_55);
        ;
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
        t = debug_1_0(x_5, t);
      }
    k_51 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_51, k_51);
    r_14 = t;
    t = SSLsetAnnotations(r_14, h_51);
  }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm v_55 = NULL,w_55 = NULL,x_55 = NULL,y_55 = NULL,j_14 = NULL;
  y_55 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      w_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_55);
  v_55 = t;
  t = w_55;
  t = map_1_0(strategy_definition_0_0, t);
  x_55 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, x_55);
  j_14 = t;
  t = SSLsetAnnotations(j_14, v_55);
  return(t);
}
ATerm w_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = term_c_15;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(t_5, _fail, default_usage_0_0, t);
  return(t);
}

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
ATerm term_b_15;
ATerm term_x_14;
ATerm term_b_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_k_13;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_k_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_l_11;
ATerm term_i_11;
ATerm term_d_11;
ATerm term_b_11;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_v_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_f_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_y_8;
ATerm term_w_8;
ATerm term_u_8;
ATerm term_k_8;
ATerm term_z_7;
ATerm term_u_7;
ATerm term_p_7;
ATerm term_c_7;
ATerm term_z_6;
ATerm term_w_6;
ATerm term_t_6;
ATerm term_p_6;
ATerm term_e_6;
ATerm term_d_6;
ATerm term_b_6;
ATerm term_z_5;
ATerm term_y_5;
ATerm term_a_5;
void init_constant_terms (void)
{
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeAppl(sym__0);
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
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym__2, term_u_8, term_b_9);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_9);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym__2, term_l_9, term_a_5);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym__2, term_v_9, term_z_9);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym__2, term_v_11, term_a_5);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym__2, term_b_12, term_a_5);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym__2, term_i_11, term_a_5);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym__2, term_x_13, term_a_5);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-specification: ", 0, ATtrue));
}
ATerm default_usage_0_0 (ATerm);
ATerm debug_1_0 (ATerm t_91 (ATerm), ATerm);
ATerm b_0 (ATerm);
ATerm build_term_expression_0_0 (ATerm);
ATerm c_0 (ATerm);
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
ATerm map_1_0 (ATerm y_78 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm k_57 (ATerm), ATerm l_57 (ATerm), ATerm);
ATerm t_3 (ATerm o_38, ATerm p_38, ATerm);
ATerm u_3 (ATerm c_42, ATerm d_42, ATerm);
ATerm w_3 (ATerm v_91 (ATerm), ATerm c_401, ATerm g_42, ATerm);
ATerm v_3 (ATerm y_41, ATerm z_41, ATerm);
ATerm i_1 (ATerm);
ATerm k_1 (ATerm);
ATerm m_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm x_94 (ATerm), ATerm);
ATerm q_39 (ATerm k_39, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm x_3 (ATerm e_42, ATerm);
ATerm y_3 (ATerm q_38, ATerm r_38, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm b_41 (ATerm a_40, ATerm);
ATerm c_41 (ATerm e_40, ATerm f_40, ATerm g_40, ATerm);
ATerm d_41 (ATerm o_40, ATerm p_40, ATerm q_40, ATerm);
ATerm z_3 (ATerm);
ATerm n_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm i_79 (ATerm), ATerm);
ATerm s_3 (ATerm d_33, ATerm e_33, ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm g_93 (ATerm), ATerm);
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
ATerm f_4 (ATerm f_43, ATerm g_43, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm o_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm d_4 (ATerm d_48, ATerm e_48, ATerm c_48, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm p_2 (ATerm);
ATerm w_2 (ATerm);
ATerm y_2 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm a_4 (ATerm o_35, ATerm p_35, ATerm);
ATerm foldr_2_0 (ATerm b_85 (ATerm), ATerm c_85 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm f_93 (ATerm), ATerm);
ATerm b_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm c_3 (ATerm);
ATerm need_help_1_0 (ATerm v_95 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm c_4 (ATerm u_49, ATerm v_49, ATerm);
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
ATerm parse_options_p__1_0 (ATerm y_97 (ATerm), ATerm);
ATerm q_3 (ATerm);
ATerm e_4 (ATerm);
ATerm i_4 (ATerm);
ATerm k_4 (ATerm);
ATerm parse_options_1_0 (ATerm x_97 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm x_95 (ATerm), ATerm y_95 (ATerm), ATerm z_95 (ATerm), ATerm a_96 (ATerm), ATerm);
ATerm i_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm iowrap_3_0 (ATerm g_95 (ATerm), ATerm h_95 (ATerm), ATerm i_95 (ATerm), ATerm);
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
  ATerm a_0 = NULL,e_0 = NULL,f_0 = NULL,n_0 = NULL,o_0 = NULL;
  a_0 = t;
  t = term_a_5;
  t = whoami_0_0(t);
  e_0 = t;
  t = term_y_5;
  n_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_6), e_0), term_z_5);
  o_0 = t;
  t = SSL_printnl(n_0, o_0);
  t = term_d_6;
  f_0 = t;
  t = SSL_exit(f_0);
  t = a_0;
  return(t);
}
ATerm debug_1_0 (ATerm t_91 (ATerm), ATerm t)
{
  ATerm s_0 = NULL,x_0 = NULL,c_1 = NULL,d_1 = NULL;
  s_0 = t;
  t = t_91(t);
  x_0 = t;
  t = term_y_5;
  c_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_0), x_0);
  d_1 = t;
  t = SSL_printnl(c_1, d_1);
  t = s_0;
  return(t);
}
ATerm b_0 (ATerm t)
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
      LocalPopChoice(g_6);
    }
  else
    {
      t = f_6;
      t = debug_1_0(b_0, t);
    }
  return(t);
}
ATerm c_0 (ATerm t)
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
      ATerm e_10 = NULL,i_10 = NULL,k_10 = NULL;
      e_10 = t;
      if(match_cons(t, sym_Wld_0))
        {
          t = e_10;
        }
      else
        {
          if(match_cons(t, sym_Var_1))
            {
              i_10 = ATgetArgument(t, 0);
              {
                ATerm r_3 = NULL,g_4 = NULL,q_2 = NULL;
                t = SSLgetAnnotations(e_10);
                r_3 = t;
                t = SSL_is_string(i_10);
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
                  i_10 = ATgetArgument(t, 0);
                  {
                    ATerm j_5 = NULL,m_5 = NULL,r_2 = NULL;
                    t = SSLgetAnnotations(e_10);
                    j_5 = t;
                    t = SSL_is_int(i_10);
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
                      i_10 = ATgetArgument(t, 0);
                      {
                        ATerm s_5 = NULL,u_5 = NULL,s_2 = NULL;
                        t = SSLgetAnnotations(e_10);
                        s_5 = t;
                        t = SSL_is_real(i_10);
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
                          i_10 = ATgetArgument(t, 0);
                          {
                            ATerm a_6 = NULL,c_6 = NULL,t_2 = NULL;
                            t = SSLgetAnnotations(e_10);
                            a_6 = t;
                            t = SSL_is_string(i_10);
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
                              i_10 = ATgetArgument(t, 0);
                              k_10 = ATgetArgument(t, 1);
                              {
                                ATerm j_6 = NULL,m_6 = NULL,o_6 = NULL,u_2 = NULL;
                                t = SSLgetAnnotations(e_10);
                                j_6 = t;
                                t = SSL_is_string(i_10);
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
                                  i_10 = ATgetArgument(t, 0);
                                  k_10 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(e_10);
                              l_7 = t;
                              t = i_10;
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
      LocalPopChoice(i_6);
    }
  else
    {
      t = h_6;
      t = debug_1_0(c_0, t);
    }
  return(t);
}
ATerm q_0 (ATerm t)
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
      t = map_1_0(t_0, t);
    }
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm o_20 = NULL;
  o_20 = t;
  t = SSL_is_int(o_20);
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
  t = term_p_6;
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm q_6 = t;
  int s_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL;
      v_29 = t;
      if(match_cons(t, sym_Id_0))
        {
          t = v_29;
        }
      else
        {
          if(match_cons(t, sym_Fail_0))
            {
              t = v_29;
            }
          else
            {
              if(match_cons(t, sym_Not_1))
                {
                  w_29 = ATgetArgument(t, 0);
                  {
                    ATerm e_9 = NULL,j_9 = NULL,b_4 = NULL;
                    t = SSLgetAnnotations(v_29);
                    e_9 = t;
                    t = w_29;
                    t = strategy_expression_0_0(t);
                    j_9 = t;
                    t = (ATerm) ATmakeAppl(sym_Not_1, j_9);
                    b_4 = t;
                    t = SSLsetAnnotations(b_4, e_9);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Seq_2))
                    {
                      w_29 = ATgetArgument(t, 0);
                      x_29 = ATgetArgument(t, 1);
                      {
                        ATerm r_9 = NULL,x_9 = NULL,y_9 = NULL,h_4 = NULL;
                        t = SSLgetAnnotations(v_29);
                        r_9 = t;
                        t = w_29;
                        t = strategy_expression_0_0(t);
                        x_9 = t;
                        t = x_29;
                        t = strategy_expression_0_0(t);
                        y_9 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, x_9, y_9);
                        h_4 = t;
                        t = SSLsetAnnotations(h_4, r_9);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Choice_2))
                        {
                          w_29 = ATgetArgument(t, 0);
                          x_29 = ATgetArgument(t, 1);
                          {
                            ATerm n_10 = NULL,r_10 = NULL,s_10 = NULL,j_4 = NULL;
                            t = SSLgetAnnotations(v_29);
                            n_10 = t;
                            t = w_29;
                            t = strategy_expression_0_0(t);
                            r_10 = t;
                            t = x_29;
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
                              w_29 = ATgetArgument(t, 0);
                              x_29 = ATgetArgument(t, 1);
                              {
                                ATerm g_11 = NULL,j_11 = NULL,k_11 = NULL,l_4 = NULL;
                                t = SSLgetAnnotations(v_29);
                                g_11 = t;
                                t = w_29;
                                t = strategy_expression_0_0(t);
                                j_11 = t;
                                t = x_29;
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
                                  w_29 = ATgetArgument(t, 0);
                                  x_29 = ATgetArgument(t, 1);
                                  u_29 = ATgetArgument(t, 2);
                                  {
                                    ATerm t_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,m_4 = NULL;
                                    t = SSLgetAnnotations(v_29);
                                    t_11 = t;
                                    t = w_29;
                                    t = strategy_expression_0_0(t);
                                    x_11 = t;
                                    t = x_29;
                                    t = strategy_expression_0_0(t);
                                    y_11 = t;
                                    t = u_29;
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
                                      w_29 = ATgetArgument(t, 0);
                                      x_29 = ATgetArgument(t, 1);
                                      {
                                        ATerm i_12 = NULL,l_12 = NULL,m_12 = NULL,n_4 = NULL;
                                        t = SSLgetAnnotations(v_29);
                                        i_12 = t;
                                        t = w_29;
                                        t = strategy_expression_0_0(t);
                                        l_12 = t;
                                        t = x_29;
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
                                          w_29 = ATgetArgument(t, 0);
                                          x_29 = ATgetArgument(t, 1);
                                          {
                                            ATerm u_12 = NULL,x_12 = NULL,y_12 = NULL,o_4 = NULL;
                                            t = SSLgetAnnotations(v_29);
                                            u_12 = t;
                                            t = w_29;
                                            t = strategy_expression_0_0(t);
                                            x_12 = t;
                                            t = x_29;
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
                                              w_29 = ATgetArgument(t, 0);
                                              x_29 = ATgetArgument(t, 1);
                                              u_29 = ATgetArgument(t, 2);
                                              {
                                                ATerm h_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,q_4 = NULL,p_4 = NULL;
                                                t = SSLgetAnnotations(v_29);
                                                h_13 = t;
                                                t = w_29;
                                                if(match_cons(t, sym_SVar_1))
                                                  {
                                                    o_13 = ATgetArgument(t, 0);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSLgetAnnotations(w_29);
                                                n_13 = t;
                                                t = SSL_is_string(o_13);
                                                p_13 = t;
                                                t = (ATerm) ATmakeAppl(sym_SVar_1, p_13);
                                                p_4 = t;
                                                t = SSLsetAnnotations(p_4, n_13);
                                                q_13 = t;
                                                t = x_29;
                                                t = map_1_0(strategy_expression_0_0, t);
                                                l_13 = t;
                                                t = u_29;
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
                                                  w_29 = ATgetArgument(t, 0);
                                                  x_29 = ATgetArgument(t, 1);
                                                  u_29 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm a_14 = NULL,f_14 = NULL,i_14 = NULL,j_14 = NULL,r_4 = NULL;
                                                    t = SSLgetAnnotations(v_29);
                                                    a_14 = t;
                                                    t = SSL_is_string(w_29);
                                                    f_14 = t;
                                                    t = x_29;
                                                    t = map_1_0(strategy_expression_0_0, t);
                                                    i_14 = t;
                                                    t = u_29;
                                                    t = map_1_0(build_term_expression_0_0, t);
                                                    j_14 = t;
                                                    t = (ATerm) ATmakeAppl(sym_PrimT_3, f_14, i_14, j_14);
                                                    r_4 = t;
                                                    t = SSLsetAnnotations(r_4, a_14);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Rec_2))
                                                    {
                                                      w_29 = ATgetArgument(t, 0);
                                                      x_29 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm w_14 = NULL,e_15 = NULL,f_15 = NULL,s_4 = NULL;
                                                        t = SSLgetAnnotations(v_29);
                                                        w_14 = t;
                                                        t = SSL_is_string(w_29);
                                                        e_15 = t;
                                                        t = x_29;
                                                        t = strategy_expression_0_0(t);
                                                        f_15 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Rec_2, e_15, f_15);
                                                        s_4 = t;
                                                        t = SSLsetAnnotations(s_4, w_14);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Path_2))
                                                        {
                                                          w_29 = ATgetArgument(t, 0);
                                                          x_29 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm v_15 = NULL,y_15 = NULL,a_16 = NULL,t_4 = NULL;
                                                            t = SSLgetAnnotations(v_29);
                                                            v_15 = t;
                                                            t = SSL_is_int(w_29);
                                                            y_15 = t;
                                                            t = x_29;
                                                            t = strategy_expression_0_0(t);
                                                            a_16 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Path_2, y_15, a_16);
                                                            t_4 = t;
                                                            t = SSLsetAnnotations(t_4, v_15);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_One_1))
                                                            {
                                                              w_29 = ATgetArgument(t, 0);
                                                              {
                                                                ATerm k_16 = NULL,o_16 = NULL,u_4 = NULL;
                                                                t = SSLgetAnnotations(v_29);
                                                                k_16 = t;
                                                                t = w_29;
                                                                t = strategy_expression_0_0(t);
                                                                o_16 = t;
                                                                t = (ATerm) ATmakeAppl(sym_One_1, o_16);
                                                                u_4 = t;
                                                                t = SSLsetAnnotations(u_4, k_16);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_Some_1))
                                                                {
                                                                  w_29 = ATgetArgument(t, 0);
                                                                  {
                                                                    ATerm y_16 = NULL,f_17 = NULL,v_4 = NULL;
                                                                    t = SSLgetAnnotations(v_29);
                                                                    y_16 = t;
                                                                    t = w_29;
                                                                    t = strategy_expression_0_0(t);
                                                                    f_17 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Some_1, f_17);
                                                                    v_4 = t;
                                                                    t = SSLsetAnnotations(v_4, y_16);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_All_1))
                                                                    {
                                                                      w_29 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm o_17 = NULL,q_17 = NULL,w_4 = NULL;
                                                                        t = SSLgetAnnotations(v_29);
                                                                        o_17 = t;
                                                                        t = w_29;
                                                                        t = strategy_expression_0_0(t);
                                                                        q_17 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_All_1, q_17);
                                                                        w_4 = t;
                                                                        t = SSLsetAnnotations(w_4, o_17);
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Thread_1))
                                                                        {
                                                                          w_29 = ATgetArgument(t, 0);
                                                                          {
                                                                            ATerm a_18 = NULL,h_18 = NULL,b_5 = NULL;
                                                                            t = SSLgetAnnotations(v_29);
                                                                            a_18 = t;
                                                                            t = w_29;
                                                                            t = strategy_expression_0_0(t);
                                                                            h_18 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_Thread_1, h_18);
                                                                            b_5 = t;
                                                                            t = SSLsetAnnotations(b_5, a_18);
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Match_1))
                                                                            {
                                                                              w_29 = ATgetArgument(t, 0);
                                                                              {
                                                                                ATerm t_18 = NULL,v_18 = NULL,c_5 = NULL;
                                                                                t = SSLgetAnnotations(v_29);
                                                                                t_18 = t;
                                                                                t = w_29;
                                                                                t = match_term_expression_0_0(t);
                                                                                v_18 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, v_18);
                                                                                c_5 = t;
                                                                                t = SSLsetAnnotations(c_5, t_18);
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Build_1))
                                                                                {
                                                                                  w_29 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm b_19 = NULL,f_19 = NULL,d_5 = NULL;
                                                                                    t = SSLgetAnnotations(v_29);
                                                                                    b_19 = t;
                                                                                    t = w_29;
                                                                                    t = build_term_expression_0_0(t);
                                                                                    f_19 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_Build_1, f_19);
                                                                                    d_5 = t;
                                                                                    t = SSLsetAnnotations(d_5, b_19);
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Scope_2))
                                                                                    {
                                                                                      w_29 = ATgetArgument(t, 0);
                                                                                      x_29 = ATgetArgument(t, 1);
                                                                                      {
                                                                                        ATerm q_19 = NULL,w_19 = NULL,x_19 = NULL,e_5 = NULL;
                                                                                        t = SSLgetAnnotations(v_29);
                                                                                        q_19 = t;
                                                                                        t = w_29;
                                                                                        t = map_1_0(q_0, t);
                                                                                        w_19 = t;
                                                                                        t = x_29;
                                                                                        t = strategy_expression_0_0(t);
                                                                                        x_19 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, w_19, x_19);
                                                                                        e_5 = t;
                                                                                        t = SSLsetAnnotations(e_5, q_19);
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      ATerm x_20 = NULL,b_21 = NULL,d_21 = NULL,r_6 = NULL;
                                                                                      if(match_cons(t, sym_Let_2))
                                                                                        {
                                                                                          w_29 = ATgetArgument(t, 0);
                                                                                          x_29 = ATgetArgument(t, 1);
                                                                                        }
                                                                                      else
                                                                                        _fail(t);
                                                                                      t = SSLgetAnnotations(v_29);
                                                                                      x_20 = t;
                                                                                      t = w_29;
                                                                                      t = map_1_0(u_0, t);
                                                                                      b_21 = t;
                                                                                      t = x_29;
                                                                                      t = strategy_expression_0_0(t);
                                                                                      d_21 = t;
                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, b_21, d_21);
                                                                                      r_6 = t;
                                                                                      t = SSLsetAnnotations(r_6, x_20);
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
      LocalPopChoice(s_6);
    }
  else
    {
      t = q_6;
      t = debug_1_0(y_0, t);
    }
  return(t);
}
ATerm type_expression_0_0 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL;
  n_33 = t;
  if(match_cons(t, sym_ConstType_1))
    {
      o_33 = ATgetArgument(t, 0);
      {
        ATerm m_26 = NULL,o_26 = NULL,f_8 = NULL;
        t = SSLgetAnnotations(n_33);
        m_26 = t;
        t = o_33;
        {
          ATerm t_27 (ATerm t)
          {
            ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL;
            r_27 = t;
            if(match_cons(t, sym_Sort_2))
              {
                s_27 = ATgetArgument(t, 0);
                q_27 = ATgetArgument(t, 1);
                {
                  ATerm q_28 = NULL,u_28 = NULL,v_28 = NULL,d_8 = NULL;
                  t = SSLgetAnnotations(r_27);
                  q_28 = t;
                  t = SSL_is_string(s_27);
                  u_28 = t;
                  t = q_27;
                  t = map_1_0(t_27, t);
                  v_28 = t;
                  t = (ATerm) ATmakeAppl(sym_Sort_2, u_28, v_28);
                  d_8 = t;
                  t = SSLsetAnnotations(d_8, q_28);
                }
              }
            else
              {
                ATerm k_29 = NULL,m_29 = NULL,e_8 = NULL;
                if(match_cons(t, sym_SortVar_1))
                  {
                    s_27 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(r_27);
                k_29 = t;
                t = SSL_is_string(s_27);
                m_29 = t;
                t = (ATerm) ATmakeAppl(sym_SortVar_1, m_29);
                e_8 = t;
                t = SSLsetAnnotations(e_8, k_29);
              }
            return(t);
          }
          t = t_27(t);
          o_26 = t;
          t = (ATerm) ATmakeAppl(sym_ConstType_1, o_26);
          f_8 = t;
          t = SSLsetAnnotations(f_8, m_26);
        }
      }
    }
  else
    {
      ATerm j_30 = NULL,q_30 = NULL,r_30 = NULL,g_8 = NULL;
      if(match_cons(t, sym_FunType_2))
        {
          o_33 = ATgetArgument(t, 0);
          p_33 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_33);
      j_30 = t;
      t = o_33;
      t = map_1_0(type_expression_0_0, t);
      q_30 = t;
      t = p_33;
      t = type_expression_0_0(t);
      r_30 = t;
      t = (ATerm) ATmakeAppl(sym_FunType_2, q_30, r_30);
      g_8 = t;
      t = SSLsetAnnotations(g_8, j_30);
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
  ATerm f_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,n_8 = NULL;
  z_39 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      v_39 = ATgetArgument(t, 0);
      w_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_39);
  f_39 = t;
  t = SSL_is_string(v_39);
  x_39 = t;
  t = w_39;
  t = type_expression_0_0(t);
  y_39 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, x_39, y_39);
  n_8 = t;
  t = SSLsetAnnotations(n_8, f_39);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL,f_42 = NULL,p_42 = NULL,q_42 = NULL,o_8 = NULL;
  q_42 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      k_41 = ATgetArgument(t, 0);
      l_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_42);
  j_41 = t;
  t = SSL_is_string(k_41);
  f_42 = t;
  t = l_41;
  t = type_expression_0_0(t);
  p_42 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, f_42, p_42);
  o_8 = t;
  t = SSLsetAnnotations(o_8, j_41);
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = term_t_6;
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm u_6 = t;
  int v_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL;
      t_35 = t;
      if(match_cons(t, sym_SDef_3))
        {
          u_35 = ATgetArgument(t, 0);
          v_35 = ATgetArgument(t, 1);
          w_35 = ATgetArgument(t, 2);
          {
            ATerm k_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL,m_8 = NULL;
            t = SSLgetAnnotations(t_35);
            k_31 = t;
            t = SSL_is_string(u_35);
            o_31 = t;
            t = v_35;
            t = map_1_0(a_1, t);
            p_31 = t;
            t = w_35;
            t = strategy_expression_0_0(t);
            q_31 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, o_31, p_31, q_31);
            m_8 = t;
            t = SSLsetAnnotations(m_8, k_31);
          }
        }
      else
        {
          ATerm a_36 = NULL,d_37 = NULL,s_38 = NULL,t_38 = NULL,d_39 = NULL,p_8 = NULL;
          if(match_cons(t, sym_SDefT_4))
            {
              u_35 = ATgetArgument(t, 0);
              v_35 = ATgetArgument(t, 1);
              w_35 = ATgetArgument(t, 2);
              x_35 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_35);
          a_36 = t;
          t = SSL_is_string(u_35);
          d_37 = t;
          t = v_35;
          t = map_1_0(e_1, t);
          s_38 = t;
          t = w_35;
          t = map_1_0(f_1, t);
          t_38 = t;
          t = x_35;
          t = strategy_expression_0_0(t);
          d_39 = t;
          t = (ATerm) ATmakeAppl(sym_SDefT_4, d_37, s_38, t_38, d_39);
          p_8 = t;
          t = SSLsetAnnotations(p_8, a_36);
        }
      ;
      LocalPopChoice(v_6);
    }
  else
    {
      t = u_6;
      t = debug_1_0(g_1, t);
    }
  return(t);
}
ATerm map_1_0 (ATerm y_78 (ATerm), ATerm t)
{
  ATerm o_36 (ATerm t)
  {
    ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL;
    l_36 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_36;
      }
    else
      {
        ATerm z_43 = NULL,t_44 = NULL,w_44 = NULL,v_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_36 = ATgetFirst((ATermList) t);
            n_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_36);
        z_43 = t;
        t = m_36;
        t = y_78(t);
        t_44 = t;
        t = n_36;
        t = o_36(t);
        w_44 = t;
        t = (ATerm) ATinsert(CheckATermList(w_44), t_44);
        v_8 = t;
        t = SSLsetAnnotations(v_8, z_43);
      }
    return(t);
  }
  t = o_36(t);
  return(t);
}
ATerm Cons_2_0 (ATerm k_57 (ATerm), ATerm l_57 (ATerm), ATerm t)
{
  ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL,v_36 = NULL,w_36 = NULL,x_8 = NULL;
  w_36 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_36 = ATgetFirst((ATermList) t);
      s_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_36);
  q_36 = t;
  t = r_36;
  t = k_57(t);
  t_36 = t;
  t = s_36;
  t = l_57(t);
  v_36 = t;
  t = (ATerm) ATinsert(CheckATermList(v_36), t_36);
  x_8 = t;
  t = SSLsetAnnotations(x_8, q_36);
  return(t);
}
ATerm t_3 (ATerm o_38, ATerm p_38, ATerm t)
{
  ATerm x_36 = NULL;
  t = SSL_fputc(o_38, p_38);
  x_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_36);
  return(t);
}
ATerm u_3 (ATerm c_42, ATerm d_42, ATerm t)
{
  ATerm y_36 = NULL;
  t = SSL_write_term_to_stream_text(c_42, d_42);
  y_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_36);
  return(t);
}
ATerm w_3 (ATerm v_91 (ATerm), ATerm c_401, ATerm g_42, ATerm t)
{
  ATerm z_36 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_401, term_w_6);
  t = z_3(t);
  z_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_36, g_42);
  t = v_91(t);
  t = fclose_0_0(t);
  t = g_42;
  return(t);
}
ATerm v_3 (ATerm y_41, ATerm z_41, ATerm t)
{
  ATerm a_37 = NULL;
  t = SSL_write_term_to_stream_baf(y_41, z_41);
  a_37 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_37);
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
  ATerm n_47 = NULL,o_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_6 = ATgetArgument(t, 0);
      if(match_cons(x_6, sym_Stream_1))
        {
          n_47 = ATgetArgument(x_6, 0);
        }
      else
        _fail(t);
      o_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_3(n_47, o_47, t);
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm y_49 = NULL,z_49 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_6 = ATgetArgument(t, 0);
      if(match_cons(y_6, sym_Stream_1))
        {
          s_50 = ATgetArgument(y_6, 0);
        }
      else
        _fail(t);
      t_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3(s_50, t_50, t);
  y_49 = t;
  t = term_z_6;
  z_49 = t;
  t = y_49;
  if(match_cons(t, sym_Stream_1))
    {
      r_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_z_6, y_49);
  t = t_3(z_49, r_50, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL,u_38 = NULL,v_38 = NULL,c_9 = NULL,z_8 = NULL;
  f_37 = t;
  if(match_cons(t, sym__2))
    {
      m_37 = ATgetArgument(t, 0);
      n_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_37);
  l_37 = t;
  t = m_37;
  {
    ATerm a_7 = t;
    int b_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((e_37 != NULL) && (e_37 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                e_37 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(h_1, t);
        ;
        LocalPopChoice(b_7);
      }
    else
      {
        t = a_7;
        t = term_c_7;
        e_37 = t;
      }
    o_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_37, n_37);
    z_8 = t;
    t = SSLsetAnnotations(z_8, l_37);
    t = f_37;
    if(match_cons(t, sym__2))
      {
        h_37 = ATgetArgument(t, 0);
        i_37 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(f_37);
    g_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_37, (ATerm) ATmakeAppl(sym__2, not_null(e_37), i_37));
    c_9 = t;
    t = SSLsetAnnotations(c_9, g_37);
    k_37 = t;
    if(match_cons(t, sym__2))
      {
        u_38 = ATgetArgument(t, 0);
        v_38 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm d_7 = t;
      int e_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_45 = NULL,a_47 = NULL,b_47 = NULL,l_47 = NULL,m_47 = NULL,d_9 = NULL;
          t = SSLgetAnnotations(k_37);
          t_45 = t;
          t = u_38;
          t = fetch_1_0(i_1, t);
          a_47 = t;
          t = v_38;
          if(match_cons(t, sym__2))
            {
              l_47 = ATgetArgument(t, 0);
              m_47 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_3(k_1, l_47, m_47, t);
          b_47 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_47, b_47);
          d_9 = t;
          t = SSLsetAnnotations(d_9, t_45);
          ;
          LocalPopChoice(e_7);
        }
      else
        {
          t = d_7;
          {
            ATerm i_48 = NULL,h_49 = NULL,w_49 = NULL,x_49 = NULL,g_9 = NULL;
            t = SSLgetAnnotations(k_37);
            i_48 = t;
            t = v_38;
            if(match_cons(t, sym__2))
              {
                w_49 = ATgetArgument(t, 0);
                x_49 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = w_3(m_1, w_49, x_49, t);
            h_49 = t;
            t = (ATerm) ATmakeAppl(sym__2, u_38, h_49);
            g_9 = t;
            t = SSLsetAnnotations(g_9, i_48);
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
ATerm apply_strategy_1_0 (ATerm x_94 (ATerm), ATerm t)
{
  ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL;
  c_39 = t;
  t = dtime_0_0(t);
  t = c_39;
  t = x_94(t);
  b_39 = t;
  t = dtime_0_0(t);
  y_38 = t;
  t = b_39;
  if(match_cons(t, sym__2))
    {
      z_38 = ATgetArgument(t, 0);
      a_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_38), (ATerm) ATmakeAppl(sym_Runtime_1, y_38)), a_39);
  return(t);
}
ATerm q_39 (ATerm k_39, ATerm t)
{
  t = SSL_fclose(k_39);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL;
  o_39 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_39 = ATgetArgument(t, 0);
      {
        ATerm f_7 = t;
        int g_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_39);
            ;
            LocalPopChoice(g_7);
          }
        else
          {
            t = f_7;
            t = q_39(o_39, t);
          }
      }
    }
  else
    {
      t = q_39(o_39, t);
    }
  return(t);
}
ATerm x_3 (ATerm e_42, ATerm t)
{
  t = SSL_read_term_from_stream(e_42);
  return(t);
}
ATerm y_3 (ATerm q_38, ATerm r_38, ATerm t)
{
  ATerm r_39 = NULL;
  t = SSL_fopen(q_38, r_38);
  r_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_39);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_39 = NULL;
  t = SSL_stdin_stream();
  s_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_39);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_39 = NULL;
  t = SSL_stdout_stream();
  t_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_39);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_39 = NULL;
  t = SSL_stderr_stream();
  u_39 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_39);
  return(t);
}
ATerm b_41 (ATerm a_40, ATerm t)
{
  ATerm b_40 = NULL;
  t = SSL_explode_term(a_40);
  if(match_cons(t, sym__2))
    {
      ATerm h_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_7 = ATgetArgument(t, 1);
        if(((ATgetType(i_7) == AT_LIST) && !(ATisEmpty(i_7))))
          {
            b_40 = ATgetFirst((ATermList) i_7);
            {
              ATerm j_7 = (ATerm) ATgetNext((ATermList) i_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_40;
  if(match_cons(t, sym_stderr_0))
    {
      t = b_40;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_40;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_40;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm c_41 (ATerm e_40, ATerm f_40, ATerm g_40, ATerm t)
{
  ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL,m_40 = NULL,u_9 = NULL;
  t = SSLgetAnnotations(g_40);
  j_40 = t;
  t = e_40;
  if(match_cons(t, sym_Path_1))
    {
      m_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_40, f_40);
  u_9 = t;
  t = SSLsetAnnotations(u_9, j_40);
  if(match_cons(t, sym__2))
    {
      h_40 = ATgetArgument(t, 0);
      i_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(h_40, i_40, t);
  return(t);
}
ATerm d_41 (ATerm o_40, ATerm p_40, ATerm q_40, ATerm t)
{
  ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL,w_40 = NULL,w_9 = NULL;
  t = SSLgetAnnotations(q_40);
  t_40 = t;
  t = SSL_is_string(o_40);
  w_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_40, p_40);
  w_9 = t;
  t = SSLsetAnnotations(w_9, t_40);
  if(match_cons(t, sym__2))
    {
      r_40 = ATgetArgument(t, 0);
      s_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(r_40, s_40, t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL;
  y_40 = t;
  if(match_cons(t, sym__2))
    {
      z_40 = ATgetArgument(t, 0);
      a_41 = ATgetArgument(t, 1);
      {
        ATerm k_7 = t;
        int m_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_41(y_40, t);
            ;
            LocalPopChoice(m_7);
          }
        else
          {
            t = k_7;
            {
              ATerm n_7 = t;
              int o_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_41(z_40, a_41, y_40, t);
                  ;
                  LocalPopChoice(o_7);
                }
              else
                {
                  t = n_7;
                  t = d_41(z_40, a_41, y_40, t);
                }
            }
          }
      }
    }
  else
    {
      t = b_41(y_40, t);
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_p_7;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL,g_41 = NULL;
  ATerm s_7 = t;
  int t_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_41 = NULL;
      h_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_41, term_u_7);
      t = z_3(t);
      ;
      LocalPopChoice(t_7);
    }
  else
    {
      t = s_7;
      t = debug_1_0(n_1, t);
      _fail(t);
    }
  f_41 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_3(g_41, t);
  e_41 = t;
  t = f_41;
  t = fclose_0_0(t);
  t = e_41;
  return(t);
}
ATerm fetch_1_0 (ATerm i_79 (ATerm), ATerm t)
{
  ATerm m_42 (ATerm t)
  {
    ATerm j_42 = NULL,k_42 = NULL,l_42 = NULL;
    j_42 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_42 = ATgetFirst((ATermList) t);
        l_42 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm v_7 = t;
      int w_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_53 = NULL,q_53 = NULL,c_10 = NULL;
          t = SSLgetAnnotations(j_42);
          n_53 = t;
          t = k_42;
          t = i_79(t);
          q_53 = t;
          t = (ATerm) ATinsert(CheckATermList(l_42), q_53);
          c_10 = t;
          t = SSLsetAnnotations(c_10, n_53);
          ;
          LocalPopChoice(w_7);
        }
      else
        {
          t = v_7;
          {
            ATerm y_53 = NULL,b_54 = NULL,d_10 = NULL;
            t = SSLgetAnnotations(j_42);
            y_53 = t;
            t = l_42;
            t = m_42(t);
            b_54 = t;
            t = (ATerm) ATinsert(CheckATermList(b_54), k_42);
            d_10 = t;
            t = SSLsetAnnotations(d_10, y_53);
          }
        }
    }
    return(t);
  }
  t = m_42(t);
  return(t);
}
ATerm s_3 (ATerm d_33, ATerm e_33, ATerm t)
{
  t = SSL_strcat(d_33, e_33);
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm x_7 = t;
  int y_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(y_7);
    }
  else
    {
      t = x_7;
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_z_7;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm a_8 = t;
  int b_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_42 = NULL;
      v_42 = t;
      t = SSL_is_string(v_42);
      ;
      LocalPopChoice(b_8);
    }
  else
    {
      t = a_8;
      {
        ATerm c_8 = t;
        int h_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(o_1, t);
            ;
            LocalPopChoice(h_8);
          }
        else
          {
            t = c_8;
            {
              ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL;
              b_43 = t;
              if(match_cons(t, sym_Path_1))
                {
                  c_43 = ATgetArgument(t, 0);
                  t = c_43;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      c_43 = ATgetArgument(t, 0);
                      t = c_43;
                      {
                        ATerm i_8 = t;
                        int j_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(j_8);
                          }
                        else
                          {
                            t = i_8;
                            t = debug_1_0(p_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm j_43 = NULL,k_43 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          c_43 = ATgetArgument(t, 0);
                          d_43 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = c_43;
                      t = eval_config_0_0(t);
                      j_43 = t;
                      t = d_43;
                      t = eval_config_0_0(t);
                      k_43 = t;
                      t = (ATerm) ATmakeAppl(sym__2, j_43, k_43);
                      t = s_3(j_43, k_43, t);
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
  ATerm t_43 = NULL,u_43 = NULL;
  t_43 = t;
  t = term_k_8;
  u_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_8, t_43);
  t = c_4(u_43, t_43, t);
  {
    ATerm q_8 = t;
    int r_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_43 = NULL,w_43 = NULL;
        t = eval_config_0_0(t);
        v_43 = t;
        t = term_k_8;
        w_43 = t;
        t = SSL_table_put(w_43, t_43, v_43);
        t = v_43;
        ;
        LocalPopChoice(r_8);
      }
    else
      {
        t = q_8;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm g_93 (ATerm), ATerm t)
{
  ATerm a_44 = NULL;
  a_44 = t;
  {
    ATerm s_8 = t;
    int t_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_44 = NULL;
        t = term_u_8;
        t = get_config_0_0(t);
        c_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_44, term_w_8);
        t = geq_0_0(t);
        t = a_44;
        t = g_93(t);
        ;
        LocalPopChoice(t_8);
      }
    else
      {
        t = s_8;
        t = a_44;
      }
  }
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm f_44 = NULL;
  f_44 = t;
  if(match_string(t, "-k"))
    {
      t = f_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = f_44;
    }
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL;
  g_44 = t;
  t = SSL_string_to_int(g_44);
  h_44 = t;
  t = term_y_8;
  i_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_8, h_44);
  t = f_4(i_44, h_44, t);
  t = g_44;
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_a_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_1, s_1, u_1, t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm k_44 = NULL;
  k_44 = t;
  if(match_string(t, "-S"))
    {
      t = k_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = k_44;
    }
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm l_44 = NULL,m_44 = NULL;
  t = term_u_8;
  l_44 = t;
  t = term_b_9;
  m_44 = t;
  t = term_f_9;
  t = f_4(l_44, m_44, t);
  t = term_h_9;
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_i_9;
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
  ATerm n_44 = NULL,o_44 = NULL,p_44 = NULL;
  n_44 = t;
  t = SSL_string_to_int(n_44);
  o_44 = t;
  t = term_u_8;
  p_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_8, o_44);
  t = f_4(p_44, o_44, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, n_44);
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_k_9;
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
  ATerm q_44 = NULL,r_44 = NULL;
  t = term_l_9;
  q_44 = t;
  t = term_a_5;
  r_44 = t;
  t = term_m_9;
  t = f_4(q_44, r_44, t);
  t = term_n_9;
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_o_9;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_9 = t;
  int q_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_1, w_1, x_1, t);
      ;
      LocalPopChoice(q_9);
    }
  else
    {
      t = p_9;
      {
        ATerm s_9 = t;
        int t_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_1, d_2, g_2, t);
            ;
            LocalPopChoice(t_9);
          }
        else
          {
            t = s_9;
            t = Option_3_0(h_2, i_2, j_2, t);
          }
      }
    }
  return(t);
}
ATerm f_4 (ATerm f_43, ATerm g_43, ATerm t)
{
  ATerm s_44 = NULL;
  t = term_k_8;
  s_44 = t;
  t = SSL_table_put(s_44, f_43, g_43);
  t = (ATerm) ATmakeAppl(sym__3, term_k_8, f_43, g_43);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm v_44 = NULL,a_45 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_45 = NULL,c_45 = NULL,d_45 = NULL;
      t = term_a_5;
      t = h_0(t);
      b_45 = t;
      t = term_v_9;
      c_45 = t;
      t = term_z_9;
      d_45 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_9, term_z_9, b_45);
      t = d_4(c_45, d_45, b_45, t);
      _fail(t);
    }
  else
    {
      ATerm g_45 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_44 = ATgetFirst((ATermList) t);
          a_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_44;
      t = d_0(t);
      t = term_a_5;
      t = g_0(t);
      g_45 = t;
      t = (ATerm) ATinsert(CheckATermList(a_45), g_45);
    }
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm i_45 = NULL;
  i_45 = t;
  if(match_string(t, "-o"))
    {
      t = i_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = i_45;
    }
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm j_45 = NULL,k_45 = NULL;
  j_45 = t;
  t = term_a_10;
  k_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_10, j_45);
  t = f_4(k_45, j_45, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_45);
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_b_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_2, m_2, o_2, t);
  return(t);
}
ATerm d_4 (ATerm d_48, ATerm e_48, ATerm c_48, ATerm t)
{
  ATerm m_45 = NULL,n_45 = NULL,o_45 = NULL;
  m_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_48, e_48);
  {
    ATerm f_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_10 = ATgetArgument(t, 0);
            ATerm j_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, d_48, e_48);
        t = c_4(d_48, e_48, t);
        ;
        LocalPopChoice(g_10);
      }
    else
      {
        t = f_10;
        t = (ATerm) ATempty;
      }
    n_45 = t;
    t = (ATerm) ATinsert(CheckATermList(n_45), c_48);
    o_45 = t;
    t = SSL_table_put(d_48, e_48, o_45);
    t = m_45;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_45 = NULL,a_46 = NULL,b_46 = NULL;
      t = term_a_5;
      t = m_0(t);
      z_45 = t;
      t = term_v_9;
      a_46 = t;
      t = term_z_9;
      b_46 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_9, term_z_9, z_45);
      t = d_4(a_46, b_46, z_45, t);
      _fail(t);
    }
  else
    {
      ATerm f_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_45 = ATgetFirst((ATermList) t);
          w_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_45;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_45 = ATgetFirst((ATermList) t);
          y_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_45;
      t = k_0(t);
      t = x_45;
      t = l_0(t);
      f_46 = t;
      t = (ATerm) ATinsert(CheckATermList(y_45), f_46);
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm h_46 = NULL;
  h_46 = t;
  if(match_string(t, "-i"))
    {
      t = h_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_46;
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm i_46 = NULL,j_46 = NULL;
  i_46 = t;
  t = term_l_10;
  j_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_10, i_46);
  t = f_4(j_46, i_46, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_46);
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_m_10;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_2, w_2, y_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_5;
  t = whoami_0_0(t);
  k_46 = t;
  t = term_y_5;
  m_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_10), k_46);
  n_46 = t;
  t = SSL_printnl(m_46, n_46);
  t = term_d_6;
  l_46 = t;
  t = SSL_exit(l_46);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_p_10;
  t = get_config_0_0(t);
  return(t);
}
ATerm a_4 (ATerm o_35, ATerm p_35, ATerm t)
{
  ATerm q_10 = t;
  int t_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(o_35, p_35);
      ;
      LocalPopChoice(t_10);
    }
  else
    {
      t = q_10;
      t = SSL_addr(o_35, p_35);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm b_85 (ATerm), ATerm c_85 (ATerm), ATerm t)
{
  ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL;
  p_46 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_46;
      t = b_85(t);
    }
  else
    {
      ATerm u_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_46 = ATgetFirst((ATermList) t);
          r_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_46;
      t = foldr_2_0(b_85, c_85, t);
      u_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_46, u_46);
      t = c_85(t);
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
  ATerm s_54 = NULL,t_54 = NULL;
  if(match_cons(t, sym__2))
    {
      s_54 = ATgetArgument(t, 0);
      t_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_4(s_54, t_54, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm x_46 = NULL,o_54 = NULL,p_54 = NULL;
  t = times_0_0(t);
  p_54 = t;
  t = SSL_explode_term(p_54);
  if(match_cons(t, sym__2))
    {
      ATerm u_10 = ATgetArgument(t, 0);
      o_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_54;
  t = foldr_2_0(z_2, a_3, t);
  x_46 = t;
  t = SSL_TicksToSeconds(x_46);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL;
  i_47 = t;
  if(match_cons(t, sym__2))
    {
      j_47 = ATgetArgument(t, 0);
      k_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_10 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_47;
        if((j_47 != t))
          {
            _fail(t);
          }
        t = i_47;
        ;
        LocalPopChoice(w_10);
      }
    else
      {
        t = v_10;
        t = (ATerm) ATmakeAppl(sym__2, j_47, k_47);
        {
          ATerm x_10 = t;
          int y_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_47, k_47);
              ;
              LocalPopChoice(y_10);
            }
          else
            {
              t = x_10;
              t = SSL_gtr(j_47, k_47);
            }
          t = (ATerm) ATmakeAppl(sym__2, j_47, k_47);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_93 (ATerm), ATerm t)
{
  ATerm t_47 = NULL;
  t_47 = t;
  {
    ATerm z_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_47 = NULL;
        t = term_u_8;
        t = get_config_0_0(t);
        v_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_47, term_d_6);
        t = geq_0_0(t);
        t = t_47;
        t = f_93(t);
        ;
        LocalPopChoice(a_11);
      }
    else
      {
        t = z_10;
        t = t_47;
      }
  }
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm x_47 = NULL,y_47 = NULL,b_48 = NULL,f_48 = NULL;
  t = run_time_0_0(t);
  x_47 = t;
  t = term_a_5;
  t = whoami_0_0(t);
  y_47 = t;
  t = term_y_5;
  b_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_11), x_47), term_b_11), y_47);
  f_48 = t;
  t = SSL_printnl(b_48, f_48);
  t = (ATerm) ATmakeAppl(sym__2, term_y_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_11), x_47), term_b_11), y_47));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(b_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm g_48 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_9;
  g_48 = t;
  t = SSL_exit(g_48);
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm o_48 = NULL,p_48 = NULL;
  p_48 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = p_48;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          o_48 = ATgetArgument(t, 0);
          {
            ATerm f_55 = NULL,c_11 = NULL;
            t = SSLgetAnnotations(p_48);
            f_55 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, o_48);
            c_11 = t;
            t = SSLsetAnnotations(c_11, f_55);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = p_48;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm v_95 (ATerm), ATerm t)
{
  ATerm f_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_11);
    }
  else
    {
      t = f_11;
      t = fetch_1_0(c_3, t);
    }
  t = v_95(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_48 = ATgetFirst((ATermList) t);
      t_48 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_48 = NULL,y_48 = NULL;
        ATerm d_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(x_48)), not_null(y_48));
          return(t);
        }
        t = t_48;
        t = j_0(t);
        if(((x_48 != NULL) && (x_48 != t)))
          _fail(t);
        else
          x_48 = t;
        t = s_48;
        t = i_0(t);
        if(((y_48 != NULL) && (y_48 != t)))
          _fail(t);
        else
          y_48 = t;
        t = t_48;
        t = reverse_acc_2_0(i_0, d_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_5;
      t = j_0(t);
    }
  return(t);
}
ATerm c_4 (ATerm u_49, ATerm v_49, ATerm t)
{
  t = SSL_table_get(u_49, v_49);
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm c_49 = NULL,d_49 = NULL,e_49 = NULL,e_11 = NULL;
  e_49 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_49);
  c_49 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, d_49);
  e_11 = t;
  t = SSLsetAnnotations(e_11, c_49);
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm g_49 = NULL;
  g_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_49), term_l_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_49 = NULL,b_49 = NULL;
  ATerm m_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_10;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_11);
    }
  else
    {
      t = m_11;
      t = fetch_1_0(e_3, t);
    }
  t = term_o_11;
  t = echo_0_0(t);
  t = term_v_9;
  a_49 = t;
  t = term_z_9;
  b_49 = t;
  t = term_p_11;
  t = c_4(a_49, b_49, t);
  t = reverse_acc_2_0(_id, f_3, t);
  t = map_1_0(g_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL;
  i_49 = t;
  {
    ATerm q_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_49;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm s_11 = ATgetFirst((ATermList) t);
                ATerm u_11 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_49;
          }
        ;
        LocalPopChoice(r_11);
      }
    else
      {
        t = q_11;
        t = (ATerm) ATinsert(ATempty, i_49);
      }
    j_49 = t;
    t = term_c_7;
    k_49 = t;
    t = SSL_printnl(k_49, j_49);
    t = i_49;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_p_10;
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
  ATerm o_49 = NULL,p_49 = NULL;
  t = term_v_11;
  o_49 = t;
  t = term_a_5;
  p_49 = t;
  t = term_w_11;
  t = f_4(o_49, p_49, t);
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_a_12;
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
  ATerm q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL;
  t = term_v_11;
  s_49 = t;
  t = term_a_5;
  t_49 = t;
  t = term_w_11;
  t = f_4(s_49, t_49, t);
  t = term_b_12;
  q_49 = t;
  t = term_a_5;
  r_49 = t;
  t = term_c_12;
  t = f_4(q_49, r_49, t);
  t = term_d_12;
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_e_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_3, j_3, k_3, t);
      ;
      LocalPopChoice(g_12);
    }
  else
    {
      t = f_12;
      t = Option_3_0(m_3, n_3, o_3, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm y_97 (ATerm), ATerm t)
{
  ATerm a_50 = NULL,b_50 = NULL,c_50 = NULL,d_50 = NULL,f_50 = NULL,g_50 = NULL,c_14 = NULL;
  a_50 = t;
  {
    ATerm h_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_12;
        t = y_97(t);
        ;
        LocalPopChoice(j_12);
      }
    else
      {
        t = h_12;
      }
    t = a_50;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_50 = ATgetFirst((ATermList) t);
        d_50 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(a_50);
    b_50 = t;
    t = term_p_10;
    g_50 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_p_10, c_50);
    t = f_4(g_50, c_50, t);
    t = d_50;
    {
      ATerm q_50 (ATerm t)
      {
        ATerm n_12 = t;
        int o_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_12 = t;
            int q_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_50 = NULL;
                j_50 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = j_50;
                ;
                LocalPopChoice(q_12);
              }
            else
              {
                t = p_12;
                t = y_97(t);
                t = Cons_2_0(_id, q_50, t);
              }
            ;
            LocalPopChoice(o_12);
          }
        else
          {
            t = n_12;
            {
              ATerm m_50 = NULL,n_50 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_50 = ATgetFirst((ATermList) t);
                  n_50 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(n_50), (ATerm) ATmakeAppl(sym_Undefined_1, m_50));
            }
          }
        return(t);
      }
      t = q_50(t);
      f_50 = t;
      t = (ATerm) ATinsert(CheckATermList(f_50), (ATerm) ATmakeAppl(sym_Program_1, c_50));
      c_14 = t;
      t = SSLsetAnnotations(c_14, b_50);
    }
  }
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm c_51 = NULL;
  c_51 = t;
  if(match_string(t, "--help"))
    {
      t = c_51;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = c_51;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = c_51;
        }
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm d_51 = NULL,e_51 = NULL;
  t = term_i_11;
  d_51 = t;
  t = term_a_5;
  e_51 = t;
  t = term_r_12;
  t = f_4(d_51, e_51, t);
  t = term_s_12;
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_t_12;
  return(t);
}
ATerm k_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm x_97 (ATerm), ATerm t)
{
  ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL;
  x_50 = t;
  t = term_v_9;
  z_50 = t;
  t = term_z_9;
  a_51 = t;
  t = (ATerm) ATempty;
  b_51 = t;
  t = SSL_table_put(z_50, a_51, b_51);
  t = x_50;
  {
    ATerm p_3 (ATerm t)
    {
      ATerm v_12 = t;
      int w_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_97(t);
          ;
          LocalPopChoice(w_12);
        }
      else
        {
          t = v_12;
          {
            ATerm z_12 = t;
            int a_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(q_3, e_4, i_4, t);
                ;
                LocalPopChoice(a_13);
              }
            else
              {
                t = z_12;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_3, t);
    {
      ATerm b_13 = t;
      int c_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_51 = NULL;
          l_51 = t;
          {
            ATerm d_13 = t;
            int e_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_55 = NULL;
                t = l_51;
                {
                  ATerm f_13 = t;
                  int g_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_i_11;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(g_13);
                    }
                  else
                    {
                      t = f_13;
                      t = fetch_1_0(k_4, t);
                    }
                  t = l_51;
                  t = default_system_usage_0_0(t);
                  t = term_b_9;
                  m_55 = t;
                  t = SSL_exit(m_55);
                }
                ;
                LocalPopChoice(e_13);
              }
            else
              {
                t = d_13;
                {
                  ATerm q_55 = NULL;
                  t = term_v_11;
                  t = get_config_0_0(t);
                  t = l_51;
                  t = default_system_about_0_0(t);
                  t = term_b_9;
                  q_55 = t;
                  t = SSL_exit(q_55);
                }
              }
          }
          ;
          LocalPopChoice(c_13);
        }
      else
        {
          t = b_13;
          {
            ATerm i_13 = t;
            int j_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL;
                ATerm g_5 (ATerm t)
                {
                  ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL,h_14 = NULL;
                  r_51 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      q_51 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(r_51);
                  p_51 = t;
                  t = q_51;
                  if(((v_50 != NULL) && (v_50 != t)))
                    _fail(t);
                  else
                    v_50 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, q_51);
                  h_14 = t;
                  t = SSLsetAnnotations(h_14, p_51);
                  return(t);
                }
                t = fetch_1_0(g_5, t);
                t = term_y_5;
                n_51 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_50)), term_k_13);
                o_51 = t;
                t = SSL_printnl(n_51, o_51);
                t = (ATerm) ATmakeAppl(sym__2, term_y_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_50)), term_k_13));
                t = default_system_usage_0_0(t);
                t = term_d_6;
                m_51 = t;
                t = SSL_exit(m_51);
                ;
                LocalPopChoice(j_13);
              }
            else
              {
                t = i_13;
              }
          }
        }
      w_50 = t;
      t = term_v_9;
      y_50 = t;
      t = SSL_table_destroy(y_50);
      t = w_50;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm x_95 (ATerm), ATerm y_95 (ATerm), ATerm z_95 (ATerm), ATerm a_96 (ATerm), ATerm t)
{
  ATerm w_51 = NULL,x_51 = NULL,y_51 = NULL,z_51 = NULL;
  t = parse_options_1_0(x_95, t);
  w_51 = t;
  t = term_r_13;
  z_51 = t;
  t = SSL_table_create(z_51);
  t = term_r_13;
  x_51 = t;
  t = term_s_13;
  y_51 = t;
  t = SSL_table_put(x_51, y_51, w_51);
  t = w_51;
  t = z_95(t);
  {
    ATerm t_13 = t;
    int u_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(y_95, t);
        ;
        LocalPopChoice(u_13);
      }
    else
      {
        t = t_13;
        {
          ATerm v_13 = t;
          int w_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_96(t);
              t = report_success_0_0(t);
              ;
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
  ATerm a_52 = NULL,b_52 = NULL;
  t = term_x_13;
  a_52 = t;
  t = term_a_5;
  b_52 = t;
  t = term_y_13;
  t = f_4(a_52, b_52, t);
  t = term_z_13;
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm c_52 = NULL,d_52 = NULL,e_52 = NULL,f_52 = NULL;
  c_52 = t;
  t = term_p_10;
  t = get_config_0_0(t);
  d_52 = t;
  t = term_y_5;
  e_52 = t;
  t = (ATerm) ATinsert(ATempty, d_52);
  f_52 = t;
  t = SSL_printnl(e_52, f_52);
  t = c_52;
  return(t);
}
ATerm iowrap_3_0 (ATerm g_95 (ATerm), ATerm h_95 (ATerm), ATerm i_95 (ATerm), ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    ATerm d_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_95(t);
        ;
        LocalPopChoice(e_14);
      }
    else
      {
        t = d_14;
        {
          ATerm g_14 = t;
          int k_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(k_14);
            }
          else
            {
              t = g_14;
              {
                ATerm n_14 = t;
                int o_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
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
                          t = Option_3_0(n_5, o_5, p_5, t);
                          ;
                          LocalPopChoice(q_14);
                        }
                      else
                        {
                          t = p_14;
                          {
                            ATerm r_14 = t;
                            int t_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(t_14);
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
  ATerm l_5 (ATerm t)
  {
    ATerm g_52 = NULL,h_52 = NULL,i_52 = NULL;
    h_52 = t;
    {
      ATerm u_14 = t;
      int v_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((g_52 != NULL) && (g_52 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_52 = ATgetArgument(t, 0);
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
          t = term_x_14;
          g_52 = t;
        }
      t = not_null(g_52);
      t = ReadFromFile_0_0(t);
      i_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_52, i_52);
      t = apply_strategy_1_0(g_95, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(h_5, i_95, i_5, l_5, t);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm l_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL,y_14 = NULL;
  p_52 = t;
  if(match_cons(t, sym__2))
    {
      m_52 = ATgetArgument(t, 0);
      n_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_52);
  l_52 = t;
  t = n_52;
  {
    ATerm z_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_53 = NULL,t_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL,y_55 = NULL,z_55 = NULL,s_14 = NULL,m_14 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            d_53 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_52);
        t_55 = t;
        t = d_53;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_55 = ATgetFirst((ATermList) t);
            x_55 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_53);
        v_55 = t;
        t = x_55;
        t = Cons_2_0(v_5, w_5, t);
        y_55 = t;
        t = (ATerm) ATinsert(CheckATermList(y_55), w_55);
        m_14 = t;
        t = SSLsetAnnotations(m_14, v_55);
        z_55 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, z_55);
        s_14 = t;
        t = SSLsetAnnotations(s_14, t_55);
        ;
        LocalPopChoice(a_15);
      }
    else
      {
        t = z_14;
        t = debug_1_0(x_5, t);
      }
    o_52 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_52, o_52);
    y_14 = t;
    t = SSLsetAnnotations(y_14, l_52);
  }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm a_56 = NULL,b_56 = NULL,c_56 = NULL,d_56 = NULL,l_14 = NULL;
  d_56 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      b_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_56);
  a_56 = t;
  t = b_56;
  t = map_1_0(strategy_definition_0_0, t);
  c_56 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, c_56);
  l_14 = t;
  t = SSLsetAnnotations(l_14, a_56);
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
  t = term_b_15;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(t_5, _fail, default_usage_0_0, t);
  return(t);
}

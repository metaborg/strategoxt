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
ATerm term_r_14;
ATerm term_o_14;
ATerm term_a_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_u_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_p_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_w_11;
ATerm term_s_11;
ATerm term_q_11;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_a_11;
ATerm term_x_10;
ATerm term_j_10;
ATerm term_h_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_w_8;
ATerm term_r_8;
ATerm term_h_8;
ATerm term_a_8;
ATerm term_w_7;
ATerm term_a_7;
ATerm term_w_6;
ATerm term_p_6;
ATerm term_k_6;
ATerm term_f_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_a_6;
ATerm term_z_5;
ATerm term_x_5;
ATerm term_w_5;
void init_constant_terms (void)
{
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym__2, term_w_8, term_d_9);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_9);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym__2, term_i_9, term_w_5);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym__2, term_v_9, term_w_9);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym__2, term_q_11, term_w_5);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym__2, term_c_12, term_w_5);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym__2, term_d_11, term_w_5);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym__2, term_u_13, term_w_5);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
}
ATerm default_usage_0_0 (ATerm);
ATerm debug_1_0 (ATerm g_101 (ATerm), ATerm);
ATerm list_1_0 (ATerm v_88 (ATerm), ATerm);
ATerm e_0 (ATerm);
ATerm term_expression_0_0 (ATerm);
ATerm p_0 (ATerm);
ATerm r_0 (ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm w_0 (ATerm);
ATerm strategy_expression_0_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm b_1 (ATerm);
ATerm strategy_definition_0_0 (ATerm);
ATerm map_1_0 (ATerm r_88 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm z_67 (ATerm), ATerm a_68 (ATerm), ATerm);
ATerm t_3 (ATerm d_49, ATerm e_49, ATerm);
ATerm u_3 (ATerm r_52, ATerm s_52, ATerm);
ATerm w_3 (ATerm i_101 (ATerm), ATerm i_424, ATerm v_52, ATerm);
ATerm v_3 (ATerm n_52, ATerm o_52, ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm k_104 (ATerm), ATerm);
ATerm u_35 (ATerm o_35, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm x_3 (ATerm t_52, ATerm);
ATerm y_3 (ATerm f_49, ATerm g_49, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm h_37 (ATerm e_36, ATerm);
ATerm i_37 (ATerm i_36, ATerm j_36, ATerm k_36, ATerm);
ATerm j_37 (ATerm s_36, ATerm t_36, ATerm u_36, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm j_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm b_89 (ATerm), ATerm);
ATerm s_3 (ATerm t_43, ATerm u_43, ATerm);
ATerm l_1 (ATerm);
ATerm n_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm t_102 (ATerm), ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm r_1 (ATerm);
ATerm t_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm e_4 (ATerm u_53, ATerm v_53, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm k_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm c_4 (ATerm s_58, ATerm t_58, ATerm r_58, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm z_3 (ATerm d_46, ATerm e_46, ATerm);
ATerm foldr_2_0 (ATerm u_94 (ATerm), ATerm v_94 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm s_102 (ATerm), ATerm);
ATerm t_2 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm v_2 (ATerm);
ATerm need_help_1_0 (ATerm i_105 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm b_4 (ATerm j_60, ATerm k_60, ATerm);
ATerm z_2 (ATerm);
ATerm c_3 (ATerm);
ATerm g_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm h_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm r_3 (ATerm);
ATerm a_4 (ATerm);
ATerm d_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm l_107 (ATerm), ATerm);
ATerm j_4 (ATerm);
ATerm n_4 (ATerm);
ATerm p_4 (ATerm);
ATerm v_4 (ATerm);
ATerm parse_options_1_0 (ATerm k_107 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm);
ATerm y_4 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm iowrap_3_0 (ATerm t_104 (ATerm), ATerm u_104 (ATerm), ATerm v_104 (ATerm), ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
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
  t = term_w_5;
  t = whoami_0_0(t);
  l_0 = t;
  t = term_x_5;
  n_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_6), l_0), term_z_5);
  o_0 = t;
  t = SSL_printnl(n_0, o_0);
  t = term_b_6;
  m_0 = t;
  t = SSL_exit(m_0);
  t = c_0;
  return(t);
}
ATerm debug_1_0 (ATerm g_101 (ATerm), ATerm t)
{
  ATerm s_0 = NULL,x_0 = NULL,c_1 = NULL,d_1 = NULL;
  s_0 = t;
  t = g_101(t);
  x_0 = t;
  t = term_x_5;
  c_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_0), x_0);
  d_1 = t;
  t = SSL_printnl(c_1, d_1);
  t = s_0;
  return(t);
}
ATerm list_1_0 (ATerm v_88 (ATerm), ATerm t)
{
  t = map_1_0(v_88, t);
  return(t);
}
ATerm e_0 (ATerm t)
{
  t = term_c_6;
  return(t);
}
ATerm term_expression_0_0 (ATerm t)
{
  ATerm d_6 = t;
  int e_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_5 = NULL,t_5 = NULL,y_5 = NULL;
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
                                  y_5 = ATgetArgument(t, 1);
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
                                    t = y_5;
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
                                      y_5 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(s_5);
                                  l_4 = t;
                                  t = SSL_is_string(t_5);
                                  q_4 = t;
                                  t = y_5;
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
      LocalPopChoice(e_6);
    }
  else
    {
      t = d_6;
      t = debug_1_0(e_0, t);
    }
  return(t);
}
ATerm p_0 (ATerm t)
{
  ATerm s_19 = NULL;
  s_19 = t;
  t = SSL_is_string(s_19);
  return(t);
}
ATerm r_0 (ATerm t)
{
  ATerm a_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,h_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,i_5 = NULL;
  m_24 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      c_24 = ATgetArgument(t, 0);
      d_24 = ATgetArgument(t, 1);
      e_24 = ATgetArgument(t, 2);
      f_24 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_24);
  a_24 = t;
  t = SSL_is_string(c_24);
  h_24 = t;
  t = d_24;
  t = map_1_0(u_0, t);
  j_24 = t;
  t = e_24;
  t = map_1_0(v_0, t);
  k_24 = t;
  t = f_24;
  t = strategy_expression_0_0(t);
  l_24 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, h_24, j_24, k_24, l_24);
  i_5 = t;
  t = SSLsetAnnotations(i_5, a_24);
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,f_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,p_26 = NULL,f_5 = NULL,e_5 = NULL;
  p_26 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      d_26 = ATgetArgument(t, 0);
      f_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_26);
  c_26 = t;
  t = SSL_is_string(d_26);
  h_26 = t;
  t = f_26;
  if(match_cons(t, sym_FunType_2))
    {
      j_26 = ATgetArgument(t, 0);
      k_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_26);
  i_26 = t;
  t = j_26;
  t = list_1_0(_id, t);
  l_26 = t;
  t = (ATerm) ATmakeAppl(sym_FunType_2, l_26, k_26);
  e_5 = t;
  t = SSLsetAnnotations(e_5, i_26);
  m_26 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, h_26, m_26);
  f_5 = t;
  t = SSLsetAnnotations(f_5, c_26);
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm t_26 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL,j_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,h_5 = NULL,g_5 = NULL;
  n_27 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      e_27 = ATgetArgument(t, 0);
      f_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_27);
  t_26 = t;
  t = SSL_is_string(e_27);
  g_27 = t;
  t = f_27;
  if(match_cons(t, sym_ConstType_1))
    {
      l_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_27);
  j_27 = t;
  t = (ATerm) ATmakeAppl(sym_ConstType_1, l_27);
  g_5 = t;
  t = SSLsetAnnotations(g_5, j_27);
  m_27 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, g_27, m_27);
  h_5 = t;
  t = SSLsetAnnotations(h_5, t_26);
  return(t);
}
ATerm w_0 (ATerm t)
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
      ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL;
      k_28 = t;
      if(match_cons(t, sym_Id_0))
        {
          t = k_28;
        }
      else
        {
          if(match_cons(t, sym_Fail_0))
            {
              t = k_28;
            }
          else
            {
              if(match_cons(t, sym_Not_1))
                {
                  l_28 = ATgetArgument(t, 0);
                  {
                    ATerm i_7 = NULL,k_7 = NULL,u_2 = NULL;
                    t = SSLgetAnnotations(k_28);
                    i_7 = t;
                    t = l_28;
                    t = strategy_expression_0_0(t);
                    k_7 = t;
                    t = (ATerm) ATmakeAppl(sym_Not_1, k_7);
                    u_2 = t;
                    t = SSLsetAnnotations(u_2, i_7);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Test_1))
                    {
                      l_28 = ATgetArgument(t, 0);
                      {
                        ATerm q_7 = NULL,s_7 = NULL,x_2 = NULL;
                        t = SSLgetAnnotations(k_28);
                        q_7 = t;
                        t = l_28;
                        t = strategy_expression_0_0(t);
                        s_7 = t;
                        t = (ATerm) ATmakeAppl(sym_Test_1, s_7);
                        x_2 = t;
                        t = SSLsetAnnotations(x_2, q_7);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Seq_2))
                        {
                          l_28 = ATgetArgument(t, 0);
                          m_28 = ATgetArgument(t, 1);
                          {
                            ATerm z_7 = NULL,c_8 = NULL,d_8 = NULL,y_2 = NULL;
                            t = SSLgetAnnotations(k_28);
                            z_7 = t;
                            t = l_28;
                            t = strategy_expression_0_0(t);
                            c_8 = t;
                            t = m_28;
                            t = strategy_expression_0_0(t);
                            d_8 = t;
                            t = (ATerm) ATmakeAppl(sym_Seq_2, c_8, d_8);
                            y_2 = t;
                            t = SSLsetAnnotations(y_2, z_7);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Choice_2))
                            {
                              l_28 = ATgetArgument(t, 0);
                              m_28 = ATgetArgument(t, 1);
                              {
                                ATerm l_8 = NULL,o_8 = NULL,p_8 = NULL,a_3 = NULL;
                                t = SSLgetAnnotations(k_28);
                                l_8 = t;
                                t = l_28;
                                t = strategy_expression_0_0(t);
                                o_8 = t;
                                t = m_28;
                                t = strategy_expression_0_0(t);
                                p_8 = t;
                                t = (ATerm) ATmakeAppl(sym_Choice_2, o_8, p_8);
                                a_3 = t;
                                t = SSLsetAnnotations(a_3, l_8);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_LChoice_2))
                                {
                                  l_28 = ATgetArgument(t, 0);
                                  m_28 = ATgetArgument(t, 1);
                                  {
                                    ATerm x_8 = NULL,a_9 = NULL,b_9 = NULL,b_3 = NULL;
                                    t = SSLgetAnnotations(k_28);
                                    x_8 = t;
                                    t = l_28;
                                    t = strategy_expression_0_0(t);
                                    a_9 = t;
                                    t = m_28;
                                    t = strategy_expression_0_0(t);
                                    b_9 = t;
                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, a_9, b_9);
                                    b_3 = t;
                                    t = SSLsetAnnotations(b_3, x_8);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      l_28 = ATgetArgument(t, 0);
                                      m_28 = ATgetArgument(t, 1);
                                      j_28 = ATgetArgument(t, 2);
                                      {
                                        ATerm k_9 = NULL,p_9 = NULL,r_9 = NULL,s_9 = NULL,e_3 = NULL;
                                        t = SSLgetAnnotations(k_28);
                                        k_9 = t;
                                        t = l_28;
                                        t = strategy_expression_0_0(t);
                                        p_9 = t;
                                        t = m_28;
                                        t = strategy_expression_0_0(t);
                                        r_9 = t;
                                        t = j_28;
                                        t = strategy_expression_0_0(t);
                                        s_9 = t;
                                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, p_9, r_9, s_9);
                                        e_3 = t;
                                        t = SSLsetAnnotations(e_3, k_9);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_GChoice_2))
                                        {
                                          l_28 = ATgetArgument(t, 0);
                                          m_28 = ATgetArgument(t, 1);
                                          {
                                            ATerm d_10 = NULL,g_10 = NULL,i_10 = NULL,f_3 = NULL;
                                            t = SSLgetAnnotations(k_28);
                                            d_10 = t;
                                            t = l_28;
                                            t = strategy_expression_0_0(t);
                                            g_10 = t;
                                            t = m_28;
                                            t = strategy_expression_0_0(t);
                                            i_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_GChoice_2, g_10, i_10);
                                            f_3 = t;
                                            t = SSLsetAnnotations(f_3, d_10);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LGChoice_2))
                                            {
                                              l_28 = ATgetArgument(t, 0);
                                              m_28 = ATgetArgument(t, 1);
                                              {
                                                ATerm v_10 = NULL,y_10 = NULL,z_10 = NULL,j_3 = NULL;
                                                t = SSLgetAnnotations(k_28);
                                                v_10 = t;
                                                t = l_28;
                                                t = strategy_expression_0_0(t);
                                                y_10 = t;
                                                t = m_28;
                                                t = strategy_expression_0_0(t);
                                                z_10 = t;
                                                t = (ATerm) ATmakeAppl(sym_LGChoice_2, y_10, z_10);
                                                j_3 = t;
                                                t = SSLsetAnnotations(j_3, v_10);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_CallT_3))
                                                {
                                                  l_28 = ATgetArgument(t, 0);
                                                  m_28 = ATgetArgument(t, 1);
                                                  j_28 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm j_11 = NULL,t_11 = NULL,u_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,g_4 = NULL,f_4 = NULL;
                                                    t = SSLgetAnnotations(k_28);
                                                    j_11 = t;
                                                    t = l_28;
                                                    if(match_cons(t, sym_SVar_1))
                                                      {
                                                        z_11 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSLgetAnnotations(l_28);
                                                    y_11 = t;
                                                    t = z_11;
                                                    {
                                                      ATerm i_6 = t;
                                                      int j_6 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = SSL_is_string(z_11);
                                                          ;
                                                          LocalPopChoice(j_6);
                                                        }
                                                      else
                                                        {
                                                          t = i_6;
                                                          {
                                                            ATerm n_12 = NULL,q_12 = NULL,c_13 = NULL,g_13 = NULL,h_13 = NULL,q_3 = NULL;
                                                            if(match_cons(t, sym_Mod_2))
                                                              {
                                                                n_12 = ATgetArgument(t, 0);
                                                                q_12 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = SSLgetAnnotations(z_11);
                                                            c_13 = t;
                                                            t = SSL_is_string(n_12);
                                                            g_13 = t;
                                                            t = SSL_is_string(q_12);
                                                            h_13 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Mod_2, g_13, h_13);
                                                            q_3 = t;
                                                            t = SSLsetAnnotations(q_3, c_13);
                                                          }
                                                        }
                                                      a_12 = t;
                                                      t = (ATerm) ATmakeAppl(sym_SVar_1, a_12);
                                                      f_4 = t;
                                                      t = SSLsetAnnotations(f_4, y_11);
                                                      b_12 = t;
                                                      t = m_28;
                                                      t = map_1_0(strategy_expression_0_0, t);
                                                      t_11 = t;
                                                      t = j_28;
                                                      t = map_1_0(term_expression_0_0, t);
                                                      u_11 = t;
                                                      t = (ATerm) ATmakeAppl(sym_CallT_3, b_12, t_11, u_11);
                                                      g_4 = t;
                                                      t = SSLsetAnnotations(g_4, j_11);
                                                    }
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Rec_2))
                                                    {
                                                      l_28 = ATgetArgument(t, 0);
                                                      m_28 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm v_13 = NULL,y_13 = NULL,z_13 = NULL,i_4 = NULL;
                                                        t = SSLgetAnnotations(k_28);
                                                        v_13 = t;
                                                        t = SSL_is_string(l_28);
                                                        y_13 = t;
                                                        t = m_28;
                                                        t = strategy_expression_0_0(t);
                                                        z_13 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Rec_2, y_13, z_13);
                                                        i_4 = t;
                                                        t = SSLsetAnnotations(i_4, v_13);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Path_2))
                                                        {
                                                          l_28 = ATgetArgument(t, 0);
                                                          m_28 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm n_14 = NULL,w_14 = NULL,x_14 = NULL,k_4 = NULL;
                                                            t = SSLgetAnnotations(k_28);
                                                            n_14 = t;
                                                            t = SSL_is_int(l_28);
                                                            w_14 = t;
                                                            t = m_28;
                                                            t = strategy_expression_0_0(t);
                                                            x_14 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Path_2, w_14, x_14);
                                                            k_4 = t;
                                                            t = SSLsetAnnotations(k_4, n_14);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              l_28 = ATgetArgument(t, 0);
                                                              m_28 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm h_15 = NULL,k_15 = NULL,l_15 = NULL,m_4 = NULL;
                                                                t = SSLgetAnnotations(k_28);
                                                                h_15 = t;
                                                                t = SSL_is_string(l_28);
                                                                k_15 = t;
                                                                t = m_28;
                                                                t = map_1_0(strategy_expression_0_0, t);
                                                                l_15 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Cong_2, k_15, l_15);
                                                                m_4 = t;
                                                                t = SSLsetAnnotations(m_4, h_15);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_One_1))
                                                                {
                                                                  l_28 = ATgetArgument(t, 0);
                                                                  {
                                                                    ATerm b_16 = NULL,d_16 = NULL,o_4 = NULL;
                                                                    t = SSLgetAnnotations(k_28);
                                                                    b_16 = t;
                                                                    t = l_28;
                                                                    t = strategy_expression_0_0(t);
                                                                    d_16 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_One_1, d_16);
                                                                    o_4 = t;
                                                                    t = SSLsetAnnotations(o_4, b_16);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Some_1))
                                                                    {
                                                                      l_28 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm p_16 = NULL,s_16 = NULL,r_4 = NULL;
                                                                        t = SSLgetAnnotations(k_28);
                                                                        p_16 = t;
                                                                        t = l_28;
                                                                        t = strategy_expression_0_0(t);
                                                                        s_16 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Some_1, s_16);
                                                                        r_4 = t;
                                                                        t = SSLsetAnnotations(r_4, p_16);
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_All_1))
                                                                        {
                                                                          l_28 = ATgetArgument(t, 0);
                                                                          {
                                                                            ATerm z_16 = NULL,c_17 = NULL,s_4 = NULL;
                                                                            t = SSLgetAnnotations(k_28);
                                                                            z_16 = t;
                                                                            t = l_28;
                                                                            t = strategy_expression_0_0(t);
                                                                            c_17 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_All_1, c_17);
                                                                            s_4 = t;
                                                                            t = SSLsetAnnotations(s_4, z_16);
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Thread_1))
                                                                            {
                                                                              l_28 = ATgetArgument(t, 0);
                                                                              {
                                                                                ATerm r_17 = NULL,x_17 = NULL,u_4 = NULL;
                                                                                t = SSLgetAnnotations(k_28);
                                                                                r_17 = t;
                                                                                t = l_28;
                                                                                t = strategy_expression_0_0(t);
                                                                                x_17 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Thread_1, x_17);
                                                                                u_4 = t;
                                                                                t = SSLsetAnnotations(u_4, r_17);
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Match_1))
                                                                                {
                                                                                  l_28 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm e_18 = NULL,h_18 = NULL,z_4 = NULL;
                                                                                    t = SSLgetAnnotations(k_28);
                                                                                    e_18 = t;
                                                                                    t = l_28;
                                                                                    t = term_expression_0_0(t);
                                                                                    h_18 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, h_18);
                                                                                    z_4 = t;
                                                                                    t = SSLsetAnnotations(z_4, e_18);
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Build_1))
                                                                                    {
                                                                                      l_28 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm t_18 = NULL,w_18 = NULL,a_5 = NULL;
                                                                                        t = SSLgetAnnotations(k_28);
                                                                                        t_18 = t;
                                                                                        t = l_28;
                                                                                        t = term_expression_0_0(t);
                                                                                        w_18 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, w_18);
                                                                                        a_5 = t;
                                                                                        t = SSLsetAnnotations(a_5, t_18);
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Scope_2))
                                                                                        {
                                                                                          l_28 = ATgetArgument(t, 0);
                                                                                          m_28 = ATgetArgument(t, 1);
                                                                                          {
                                                                                            ATerm g_19 = NULL,p_19 = NULL,q_19 = NULL,b_5 = NULL;
                                                                                            t = SSLgetAnnotations(k_28);
                                                                                            g_19 = t;
                                                                                            t = l_28;
                                                                                            t = map_1_0(p_0, t);
                                                                                            p_19 = t;
                                                                                            t = m_28;
                                                                                            t = strategy_expression_0_0(t);
                                                                                            q_19 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Scope_2, p_19, q_19);
                                                                                            b_5 = t;
                                                                                            t = SSLsetAnnotations(b_5, g_19);
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_Where_1))
                                                                                            {
                                                                                              l_28 = ATgetArgument(t, 0);
                                                                                              {
                                                                                                ATerm f_20 = NULL,i_20 = NULL,c_5 = NULL;
                                                                                                t = SSLgetAnnotations(k_28);
                                                                                                f_20 = t;
                                                                                                t = l_28;
                                                                                                t = strategy_expression_0_0(t);
                                                                                                i_20 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Where_1, i_20);
                                                                                                c_5 = t;
                                                                                                t = SSLsetAnnotations(c_5, f_20);
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_PrimT_3))
                                                                                                {
                                                                                                  l_28 = ATgetArgument(t, 0);
                                                                                                  m_28 = ATgetArgument(t, 1);
                                                                                                  j_28 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm u_20 = NULL,y_20 = NULL,z_20 = NULL,b_21 = NULL,d_5 = NULL;
                                                                                                    t = SSLgetAnnotations(k_28);
                                                                                                    u_20 = t;
                                                                                                    t = SSL_is_string(l_28);
                                                                                                    y_20 = t;
                                                                                                    t = m_28;
                                                                                                    t = map_1_0(strategy_expression_0_0, t);
                                                                                                    z_20 = t;
                                                                                                    t = j_28;
                                                                                                    t = map_1_0(term_expression_0_0, t);
                                                                                                    b_21 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_PrimT_3, y_20, z_20, b_21);
                                                                                                    d_5 = t;
                                                                                                    t = SSLsetAnnotations(d_5, u_20);
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  ATerm r_23 = NULL,w_23 = NULL,x_23 = NULL,j_5 = NULL;
                                                                                                  if(match_cons(t, sym_Let_2))
                                                                                                    {
                                                                                                      l_28 = ATgetArgument(t, 0);
                                                                                                      m_28 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = SSLgetAnnotations(k_28);
                                                                                                  r_23 = t;
                                                                                                  t = l_28;
                                                                                                  t = map_1_0(r_0, t);
                                                                                                  w_23 = t;
                                                                                                  t = m_28;
                                                                                                  t = strategy_expression_0_0(t);
                                                                                                  x_23 = t;
                                                                                                  t = (ATerm) ATmakeAppl(sym_Let_2, w_23, x_23);
                                                                                                  j_5 = t;
                                                                                                  t = SSLsetAnnotations(j_5, r_23);
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
      LocalPopChoice(h_6);
    }
  else
    {
      t = g_6;
      t = debug_1_0(w_0, t);
    }
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL,m_30 = NULL,s_6 = NULL;
  m_30 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      i_30 = ATgetArgument(t, 0);
      j_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_30);
  h_30 = t;
  t = SSL_is_string(i_30);
  k_30 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, k_30, j_30);
  s_6 = t;
  t = SSLsetAnnotations(s_6, h_30);
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL,t_6 = NULL;
  u_30 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      o_30 = ATgetArgument(t, 0);
      s_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_30);
  n_30 = t;
  t = SSL_is_string(o_30);
  t_30 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, t_30, s_30);
  t_6 = t;
  t = SSLsetAnnotations(t_6, n_30);
  return(t);
}
ATerm b_1 (ATerm t)
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
      ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL,u_28 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,u_6 = NULL;
      e_32 = t;
      if(match_cons(t, sym_SDefT_4))
        {
          f_32 = ATgetArgument(t, 0);
          g_32 = ATgetArgument(t, 1);
          h_32 = ATgetArgument(t, 2);
          i_32 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_32);
      u_28 = t;
      t = f_32;
      {
        ATerm n_6 = t;
        int o_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_is_string(f_32);
            ;
            LocalPopChoice(o_6);
          }
        else
          {
            t = n_6;
            {
              ATerm f_30 = NULL,g_30 = NULL,n_33 = NULL,j_35 = NULL,z_35 = NULL,r_6 = NULL;
              if(match_cons(t, sym_Mod_2))
                {
                  f_30 = ATgetArgument(t, 0);
                  g_30 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(f_32);
              n_33 = t;
              t = SSL_is_string(f_30);
              j_35 = t;
              t = SSL_is_string(g_30);
              z_35 = t;
              t = (ATerm) ATmakeAppl(sym_Mod_2, j_35, z_35);
              r_6 = t;
              t = SSLsetAnnotations(r_6, n_33);
            }
          }
        j_29 = t;
        t = g_32;
        t = map_1_0(y_0, t);
        k_29 = t;
        t = h_32;
        t = map_1_0(z_0, t);
        l_29 = t;
        t = i_32;
        t = strategy_expression_0_0(t);
        m_29 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, j_29, k_29, l_29, m_29);
        u_6 = t;
        t = SSLsetAnnotations(u_6, u_28);
      }
      ;
      LocalPopChoice(m_6);
    }
  else
    {
      t = l_6;
      t = debug_1_0(b_1, t);
    }
  return(t);
}
ATerm map_1_0 (ATerm r_88 (ATerm), ATerm t)
{
  ATerm z_32 (ATerm t)
  {
    ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL;
    w_32 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_32;
      }
    else
      {
        ATerm f_37 = NULL,r_37 = NULL,o_38 = NULL,z_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_32 = ATgetFirst((ATermList) t);
            y_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_32);
        f_37 = t;
        t = x_32;
        t = r_88(t);
        r_37 = t;
        t = y_32;
        t = z_32(t);
        o_38 = t;
        t = (ATerm) ATinsert(CheckATermList(o_38), r_37);
        z_6 = t;
        t = SSLsetAnnotations(z_6, f_37);
      }
    return(t);
  }
  t = z_32(t);
  return(t);
}
ATerm Cons_2_0 (ATerm z_67 (ATerm), ATerm a_68 (ATerm), ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL,b_7 = NULL;
  g_33 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_33 = ATgetFirst((ATermList) t);
      d_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_33);
  b_33 = t;
  t = c_33;
  t = z_67(t);
  e_33 = t;
  t = d_33;
  t = a_68(t);
  f_33 = t;
  t = (ATerm) ATinsert(CheckATermList(f_33), e_33);
  b_7 = t;
  t = SSLsetAnnotations(b_7, b_33);
  return(t);
}
ATerm t_3 (ATerm d_49, ATerm e_49, ATerm t)
{
  ATerm h_33 = NULL;
  t = SSL_fputc(d_49, e_49);
  h_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_33);
  return(t);
}
ATerm u_3 (ATerm r_52, ATerm s_52, ATerm t)
{
  ATerm i_33 = NULL;
  t = SSL_write_term_to_stream_text(r_52, s_52);
  i_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_33);
  return(t);
}
ATerm w_3 (ATerm i_101 (ATerm), ATerm i_424, ATerm v_52, ATerm t)
{
  ATerm j_33 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_424, term_p_6);
  t = open_stream_0_0(t);
  j_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_33, v_52);
  t = i_101(t);
  t = fclose_0_0(t);
  t = v_52;
  return(t);
}
ATerm v_3 (ATerm n_52, ATerm o_52, ATerm t)
{
  ATerm k_33 = NULL;
  t = SSL_write_term_to_stream_baf(n_52, o_52);
  k_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_33);
  return(t);
}
ATerm g_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm c_42 = NULL,o_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_6 = ATgetArgument(t, 0);
      if(match_cons(q_6, sym_Stream_1))
        {
          c_42 = ATgetArgument(q_6, 0);
        }
      else
        _fail(t);
      o_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_3(c_42, o_42, t);
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm e_45 = NULL,f_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_6 = ATgetArgument(t, 0);
      if(match_cons(v_6, sym_Stream_1))
        {
          y_45 = ATgetArgument(v_6, 0);
        }
      else
        _fail(t);
      z_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3(y_45, z_45, t);
  e_45 = t;
  t = term_w_6;
  f_45 = t;
  t = e_45;
  if(match_cons(t, sym_Stream_1))
    {
      x_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_w_6, e_45);
  t = t_3(f_45, x_45, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL,y_34 = NULL,z_34 = NULL,e_7 = NULL,d_7 = NULL;
  if(((p_33 != NULL) && (p_33 != t)))
    _fail(t);
  else
    p_33 = t;
  if(match_cons(t, sym__2))
    {
      if(((w_33 != NULL) && (w_33 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_33 = ATgetArgument(t, 0);
      if(((x_33 != NULL) && (x_33 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(p_33));
  if(((v_33 != NULL) && (v_33 != t)))
    _fail(t);
  else
    v_33 = t;
  t = not_null(w_33);
  {
    ATerm x_6 = t;
    int y_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((o_33 != NULL) && (o_33 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                o_33 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(f_1, t);
        ;
        LocalPopChoice(y_6);
      }
    else
      {
        t = x_6;
        t = term_a_7;
        if(((o_33 != NULL) && (o_33 != t)))
          _fail(t);
        else
          o_33 = t;
      }
    if(((y_33 != NULL) && (y_33 != t)))
      _fail(t);
    else
      y_33 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_33), not_null(x_33));
    if(((d_7 != NULL) && (d_7 != t)))
      _fail(t);
    else
      d_7 = t;
    t = SSLsetAnnotations(not_null(d_7), not_null(v_33));
    t = not_null(p_33);
    if(match_cons(t, sym__2))
      {
        if(((r_33 != NULL) && (r_33 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          r_33 = ATgetArgument(t, 0);
        if(((s_33 != NULL) && (s_33 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          s_33 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(p_33));
    if(((q_33 != NULL) && (q_33 != t)))
      _fail(t);
    else
      q_33 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_33), (ATerm) ATmakeAppl(sym__2, not_null(o_33), not_null(s_33)));
    if(((e_7 != NULL) && (e_7 != t)))
      _fail(t);
    else
      e_7 = t;
    t = SSLsetAnnotations(not_null(e_7), not_null(q_33));
    if(((u_33 != NULL) && (u_33 != t)))
      _fail(t);
    else
      u_33 = t;
    if(match_cons(t, sym__2))
      {
        if(((y_34 != NULL) && (y_34 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          y_34 = ATgetArgument(t, 0);
        if(((z_34 != NULL) && (z_34 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          z_34 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm c_7 = t;
      int g_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_40 = NULL,z_40 = NULL,g_41 = NULL,h_41 = NULL,u_41 = NULL,f_7 = NULL;
          t = SSLgetAnnotations(not_null(u_33));
          b_40 = t;
          t = not_null(y_34);
          t = fetch_1_0(g_1, t);
          z_40 = t;
          t = not_null(z_34);
          if(match_cons(t, sym__2))
            {
              h_41 = ATgetArgument(t, 0);
              u_41 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_3(h_1, h_41, u_41, t);
          g_41 = t;
          t = (ATerm) ATmakeAppl(sym__2, z_40, g_41);
          f_7 = t;
          t = SSLsetAnnotations(f_7, b_40);
          ;
          LocalPopChoice(g_7);
        }
      else
        {
          t = c_7;
          {
            ATerm y_43 = NULL,p_44 = NULL,c_45 = NULL,d_45 = NULL,n_9 = NULL;
            t = SSLgetAnnotations(not_null(u_33));
            y_43 = t;
            t = not_null(z_34);
            if(match_cons(t, sym__2))
              {
                c_45 = ATgetArgument(t, 0);
                d_45 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = w_3(i_1, c_45, d_45, t);
            p_44 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_34), p_44);
            n_9 = t;
            t = SSLsetAnnotations(n_9, y_43);
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
ATerm apply_strategy_1_0 (ATerm k_104 (ATerm), ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL;
  g_35 = t;
  t = dtime_0_0(t);
  t = g_35;
  t = k_104(t);
  f_35 = t;
  t = dtime_0_0(t);
  c_35 = t;
  t = f_35;
  if(match_cons(t, sym__2))
    {
      d_35 = ATgetArgument(t, 0);
      e_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_35), (ATerm) ATmakeAppl(sym_Runtime_1, c_35)), e_35);
  return(t);
}
ATerm u_35 (ATerm o_35, ATerm t)
{
  t = SSL_fclose(o_35);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL;
  s_35 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_35 = ATgetArgument(t, 0);
      {
        ATerm h_7 = t;
        int j_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_35);
            ;
            LocalPopChoice(j_7);
          }
        else
          {
            t = h_7;
            t = u_35(s_35, t);
          }
      }
    }
  else
    {
      t = u_35(s_35, t);
    }
  return(t);
}
ATerm x_3 (ATerm t_52, ATerm t)
{
  t = SSL_read_term_from_stream(t_52);
  return(t);
}
ATerm y_3 (ATerm f_49, ATerm g_49, ATerm t)
{
  ATerm v_35 = NULL;
  t = SSL_fopen(f_49, g_49);
  v_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_35);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm w_35 = NULL;
  t = SSL_stdin_stream();
  w_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_35);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm x_35 = NULL;
  t = SSL_stdout_stream();
  x_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_35);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm y_35 = NULL;
  t = SSL_stderr_stream();
  y_35 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_35);
  return(t);
}
ATerm h_37 (ATerm e_36, ATerm t)
{
  ATerm f_36 = NULL;
  t = SSL_explode_term(e_36);
  if(match_cons(t, sym__2))
    {
      ATerm l_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_7 = ATgetArgument(t, 1);
        if(((ATgetType(m_7) == AT_LIST) && !(ATisEmpty(m_7))))
          {
            f_36 = ATgetFirst((ATermList) m_7);
            {
              ATerm n_7 = (ATerm) ATgetNext((ATermList) m_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_36;
  if(match_cons(t, sym_stderr_0))
    {
      t = f_36;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = f_36;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_36;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm i_37 (ATerm i_36, ATerm j_36, ATerm k_36, ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL,q_36 = NULL,k_10 = NULL;
  t = SSLgetAnnotations(k_36);
  n_36 = t;
  t = i_36;
  if(match_cons(t, sym_Path_1))
    {
      q_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_36, j_36);
  k_10 = t;
  t = SSLsetAnnotations(k_10, n_36);
  if(match_cons(t, sym__2))
    {
      l_36 = ATgetArgument(t, 0);
      m_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(l_36, m_36, t);
  return(t);
}
ATerm j_37 (ATerm s_36, ATerm t_36, ATerm u_36, ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL,a_37 = NULL,l_10 = NULL;
  t = SSLgetAnnotations(u_36);
  x_36 = t;
  t = SSL_is_string(s_36);
  a_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_37, t_36);
  l_10 = t;
  t = SSLsetAnnotations(l_10, x_36);
  if(match_cons(t, sym__2))
    {
      v_36 = ATgetArgument(t, 0);
      w_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(v_36, w_36, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL,g_37 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_7 = ATgetArgument(t, 0);
      ATerm p_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  c_37 = t;
  if(match_cons(t, sym__2))
    {
      d_37 = ATgetArgument(t, 0);
      g_37 = ATgetArgument(t, 1);
      {
        ATerm r_7 = t;
        int t_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_37(c_37, t);
            ;
            LocalPopChoice(t_7);
          }
        else
          {
            t = r_7;
            {
              ATerm u_7 = t;
              int v_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_37(d_37, g_37, c_37, t);
                  ;
                  LocalPopChoice(v_7);
                }
              else
                {
                  t = u_7;
                  t = j_37(d_37, g_37, c_37, t);
                }
            }
          }
      }
    }
  else
    {
      t = h_37(c_37, t);
    }
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = term_w_7;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL;
  ATerm x_7 = t;
  int y_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_37 = NULL;
      n_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_37, term_a_8);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(y_7);
    }
  else
    {
      t = x_7;
      t = debug_1_0(j_1, t);
      _fail(t);
    }
  l_37 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_3(m_37, t);
  k_37 = t;
  t = l_37;
  t = fclose_0_0(t);
  t = k_37;
  return(t);
}
ATerm fetch_1_0 (ATerm b_89 (ATerm), ATerm t)
{
  ATerm l_38 (ATerm t)
  {
    ATerm i_38 = NULL,j_38 = NULL,k_38 = NULL;
    i_38 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_38 = ATgetFirst((ATermList) t);
        k_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_8 = t;
      int e_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_48 = NULL,y_48 = NULL,s_10 = NULL;
          t = SSLgetAnnotations(i_38);
          v_48 = t;
          t = j_38;
          t = b_89(t);
          y_48 = t;
          t = (ATerm) ATinsert(CheckATermList(k_38), y_48);
          s_10 = t;
          t = SSLsetAnnotations(s_10, v_48);
          ;
          LocalPopChoice(e_8);
        }
      else
        {
          t = b_8;
          {
            ATerm k_49 = NULL,n_49 = NULL,f_11 = NULL;
            t = SSLgetAnnotations(i_38);
            k_49 = t;
            t = k_38;
            t = l_38(t);
            n_49 = t;
            t = (ATerm) ATinsert(CheckATermList(n_49), j_38);
            f_11 = t;
            t = SSLsetAnnotations(f_11, k_49);
          }
        }
    }
    return(t);
  }
  t = l_38(t);
  return(t);
}
ATerm s_3 (ATerm t_43, ATerm u_43, ATerm t)
{
  t = SSL_strcat(t_43, u_43);
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm f_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(g_8);
    }
  else
    {
      t = f_8;
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_h_8;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm i_8 = t;
  int j_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_38 = NULL;
      u_38 = t;
      t = SSL_is_string(u_38);
      ;
      LocalPopChoice(j_8);
    }
  else
    {
      t = i_8;
      {
        ATerm k_8 = t;
        int m_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(l_1, t);
            ;
            LocalPopChoice(m_8);
          }
        else
          {
            t = k_8;
            {
              ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL;
              a_39 = t;
              if(match_cons(t, sym_Path_1))
                {
                  b_39 = ATgetArgument(t, 0);
                  t = b_39;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      b_39 = ATgetArgument(t, 0);
                      t = b_39;
                      {
                        ATerm n_8 = t;
                        int q_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(q_8);
                          }
                        else
                          {
                            t = n_8;
                            t = debug_1_0(n_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm g_39 = NULL,h_39 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          b_39 = ATgetArgument(t, 0);
                          c_39 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = b_39;
                      t = eval_config_0_0(t);
                      g_39 = t;
                      t = c_39;
                      t = eval_config_0_0(t);
                      h_39 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_39, h_39);
                      t = s_3(g_39, h_39, t);
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
  ATerm l_39 = NULL,m_39 = NULL;
  l_39 = t;
  t = term_r_8;
  m_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_8, l_39);
  t = b_4(m_39, l_39, t);
  {
    ATerm s_8 = t;
    int t_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_39 = NULL,o_39 = NULL;
        t = eval_config_0_0(t);
        n_39 = t;
        t = term_r_8;
        o_39 = t;
        t = SSL_table_put(o_39, l_39, n_39);
        t = n_39;
        ;
        LocalPopChoice(t_8);
      }
    else
      {
        t = s_8;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm t_102 (ATerm), ATerm t)
{
  ATerm s_39 = NULL;
  s_39 = t;
  {
    ATerm u_8 = t;
    int v_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_39 = NULL;
        t = term_w_8;
        t = get_config_0_0(t);
        u_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_39, term_y_8);
        t = geq_0_0(t);
        t = s_39;
        t = t_102(t);
        ;
        LocalPopChoice(v_8);
      }
    else
      {
        t = u_8;
        t = s_39;
      }
  }
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm x_39 = NULL;
  x_39 = t;
  if(match_string(t, "-k"))
    {
      t = x_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_39;
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL;
  y_39 = t;
  t = SSL_string_to_int(y_39);
  z_39 = t;
  t = term_z_8;
  a_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_8, z_39);
  t = e_4(a_40, z_39, t);
  t = y_39;
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_c_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_1, p_1, q_1, t);
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm c_40 = NULL;
  c_40 = t;
  if(match_string(t, "-S"))
    {
      t = c_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = c_40;
    }
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm d_40 = NULL,e_40 = NULL;
  t = term_w_8;
  d_40 = t;
  t = term_d_9;
  e_40 = t;
  t = term_e_9;
  t = e_4(d_40, e_40, t);
  t = term_f_9;
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_g_9;
  return(t);
}
ATerm w_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL;
  f_40 = t;
  t = SSL_string_to_int(f_40);
  g_40 = t;
  t = term_w_8;
  h_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_8, g_40);
  t = e_4(h_40, g_40, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_40);
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_h_9;
  return(t);
}
ATerm z_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm i_40 = NULL,j_40 = NULL;
  t = term_i_9;
  i_40 = t;
  t = term_w_5;
  j_40 = t;
  t = term_j_9;
  t = e_4(i_40, j_40, t);
  t = term_l_9;
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_m_9;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_9 = t;
  int q_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_1, t_1, v_1, t);
      ;
      LocalPopChoice(q_9);
    }
  else
    {
      t = o_9;
      {
        ATerm t_9 = t;
        int u_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_1, x_1, y_1, t);
            ;
            LocalPopChoice(u_9);
          }
        else
          {
            t = t_9;
            t = Option_3_0(z_1, i_2, j_2, t);
          }
      }
    }
  return(t);
}
ATerm e_4 (ATerm u_53, ATerm v_53, ATerm t)
{
  ATerm k_40 = NULL;
  t = term_r_8;
  k_40 = t;
  t = SSL_table_put(k_40, u_53, v_53);
  t = (ATerm) ATmakeAppl(sym__3, term_r_8, u_53, v_53);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm n_40 = NULL,o_40 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL;
      t = term_w_5;
      t = d_0(t);
      p_40 = t;
      t = term_v_9;
      q_40 = t;
      t = term_w_9;
      r_40 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_9, term_w_9, p_40);
      t = c_4(q_40, r_40, p_40, t);
      _fail(t);
    }
  else
    {
      ATerm u_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_40 = ATgetFirst((ATermList) t);
          o_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_40;
      t = a_0(t);
      t = term_w_5;
      t = b_0(t);
      u_40 = t;
      t = (ATerm) ATinsert(CheckATermList(o_40), u_40);
    }
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm w_40 = NULL;
  w_40 = t;
  if(match_string(t, "-o"))
    {
      t = w_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = w_40;
    }
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm x_40 = NULL,y_40 = NULL;
  x_40 = t;
  t = term_x_9;
  y_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_9, x_40);
  t = e_4(y_40, x_40, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, x_40);
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_y_9;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_2, m_2, n_2, t);
  return(t);
}
ATerm c_4 (ATerm s_58, ATerm t_58, ATerm r_58, ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL;
  a_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_58, t_58);
  {
    ATerm z_9 = t;
    int a_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_10 = ATgetArgument(t, 0);
            ATerm c_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, s_58, t_58);
        t = b_4(s_58, t_58, t);
        ;
        LocalPopChoice(a_10);
      }
    else
      {
        t = z_9;
        t = (ATerm) ATempty;
      }
    b_41 = t;
    t = (ATerm) ATinsert(CheckATermList(b_41), r_58);
    c_41 = t;
    t = SSL_table_put(s_58, t_58, c_41);
    t = a_41;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL;
      t = term_w_5;
      t = j_0(t);
      n_41 = t;
      t = term_v_9;
      o_41 = t;
      t = term_w_9;
      p_41 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_9, term_w_9, n_41);
      t = c_4(o_41, p_41, n_41, t);
      _fail(t);
    }
  else
    {
      ATerm t_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_41 = ATgetFirst((ATermList) t);
          k_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_41;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_41 = ATgetFirst((ATermList) t);
          m_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_41;
      t = h_0(t);
      t = l_41;
      t = i_0(t);
      t_41 = t;
      t = (ATerm) ATinsert(CheckATermList(m_41), t_41);
    }
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm v_41 = NULL;
  v_41 = t;
  if(match_string(t, "-i"))
    {
      t = v_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = v_41;
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm w_41 = NULL,x_41 = NULL;
  w_41 = t;
  t = term_e_10;
  x_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_10, w_41);
  t = e_4(x_41, w_41, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, w_41);
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_f_10;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_2, p_2, q_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_5;
  t = whoami_0_0(t);
  y_41 = t;
  t = term_x_5;
  a_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_h_10), y_41);
  b_42 = t;
  t = SSL_printnl(a_42, b_42);
  t = term_b_6;
  z_41 = t;
  t = SSL_exit(z_41);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_j_10;
  t = get_config_0_0(t);
  return(t);
}
ATerm z_3 (ATerm d_46, ATerm e_46, ATerm t)
{
  ATerm m_10 = t;
  int n_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(d_46, e_46);
      ;
      LocalPopChoice(n_10);
    }
  else
    {
      t = m_10;
      t = SSL_addr(d_46, e_46);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm u_94 (ATerm), ATerm v_94 (ATerm), ATerm t)
{
  ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL;
  d_42 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_42;
      t = u_94(t);
    }
  else
    {
      ATerm i_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_42 = ATgetFirst((ATermList) t);
          f_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_42;
      t = foldr_2_0(u_94, v_94, t);
      i_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_42, i_42);
      t = v_94(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_d_9;
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm e_50 = NULL,f_50 = NULL;
  if(match_cons(t, sym__2))
    {
      e_50 = ATgetArgument(t, 0);
      f_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3(e_50, f_50, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_42 = NULL,a_50 = NULL,b_50 = NULL;
  t = times_0_0(t);
  b_50 = t;
  t = SSL_explode_term(b_50);
  if(match_cons(t, sym__2))
    {
      ATerm o_10 = ATgetArgument(t, 0);
      a_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_50;
  t = foldr_2_0(r_2, s_2, t);
  l_42 = t;
  t = SSL_TicksToSeconds(l_42);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_42 = NULL,x_42 = NULL,y_42 = NULL;
  w_42 = t;
  if(match_cons(t, sym__2))
    {
      x_42 = ATgetArgument(t, 0);
      y_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_10 = t;
    int q_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_42;
        if((x_42 != t))
          {
            _fail(t);
          }
        t = w_42;
        ;
        LocalPopChoice(q_10);
      }
    else
      {
        t = p_10;
        t = (ATerm) ATmakeAppl(sym__2, x_42, y_42);
        {
          ATerm r_10 = t;
          int t_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_42, y_42);
              ;
              LocalPopChoice(t_10);
            }
          else
            {
              t = r_10;
              t = SSL_gtr(x_42, y_42);
            }
          t = (ATerm) ATmakeAppl(sym__2, x_42, y_42);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_102 (ATerm), ATerm t)
{
  ATerm c_43 = NULL;
  c_43 = t;
  {
    ATerm u_10 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_43 = NULL;
        t = term_w_8;
        t = get_config_0_0(t);
        e_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_43, term_b_6);
        t = geq_0_0(t);
        t = c_43;
        t = s_102(t);
        ;
        LocalPopChoice(w_10);
      }
    else
      {
        t = u_10;
        t = c_43;
      }
  }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL,j_43 = NULL,k_43 = NULL;
  t = run_time_0_0(t);
  g_43 = t;
  t = term_w_5;
  t = whoami_0_0(t);
  h_43 = t;
  t = term_x_5;
  j_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_11), g_43), term_x_10), h_43);
  k_43 = t;
  t = SSL_printnl(j_43, k_43);
  t = (ATerm) ATmakeAppl(sym__2, term_x_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_11), g_43), term_x_10), h_43));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(t_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm l_43 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_9;
  l_43 = t;
  t = SSL_exit(l_43);
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm v_43 = NULL,w_43 = NULL;
  w_43 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = w_43;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          v_43 = ATgetArgument(t, 0);
          {
            ATerm r_50 = NULL,p_11 = NULL;
            t = SSLgetAnnotations(w_43);
            r_50 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, v_43);
            p_11 = t;
            t = SSLsetAnnotations(p_11, r_50);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = w_43;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm i_105 (ATerm), ATerm t)
{
  ATerm b_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_11);
    }
  else
    {
      t = b_11;
      t = fetch_1_0(v_2, t);
    }
  t = i_105(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm z_43 = NULL,b_44 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_43 = ATgetFirst((ATermList) t);
      b_44 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_44 = NULL,g_44 = NULL;
        ATerm w_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(f_44)), not_null(g_44));
          return(t);
        }
        t = not_null(b_44);
        t = g_0(t);
        if(((f_44 != NULL) && (f_44 != t)))
          _fail(t);
        else
          f_44 = t;
        t = not_null(z_43);
        t = f_0(t);
        if(((g_44 != NULL) && (g_44 != t)))
          _fail(t);
        else
          g_44 = t;
        t = not_null(b_44);
        t = reverse_acc_2_0(f_0, w_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_5;
      t = g_0(t);
    }
  return(t);
}
ATerm b_4 (ATerm j_60, ATerm k_60, ATerm t)
{
  t = SSL_table_get(j_60, k_60);
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL,r_11 = NULL;
  m_44 = t;
  if(match_cons(t, sym_Program_1))
    {
      l_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_44);
  k_44 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, l_44);
  r_11 = t;
  t = SSLsetAnnotations(r_11, k_44);
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm o_44 = NULL;
  o_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_44), term_e_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_44 = NULL,j_44 = NULL;
  ATerm g_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_10;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_11);
    }
  else
    {
      t = g_11;
      t = fetch_1_0(z_2, t);
    }
  t = term_i_11;
  t = echo_0_0(t);
  t = term_v_9;
  i_44 = t;
  t = term_w_9;
  j_44 = t;
  t = term_k_11;
  t = b_4(i_44, j_44, t);
  t = reverse_acc_2_0(_id, c_3, t);
  t = map_1_0(g_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL;
  q_44 = t;
  {
    ATerm l_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_44;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_11 = ATgetFirst((ATermList) t);
                ATerm o_11 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = q_44;
          }
        ;
        LocalPopChoice(m_11);
      }
    else
      {
        t = l_11;
        t = (ATerm) ATinsert(ATempty, q_44);
      }
    r_44 = t;
    t = term_a_7;
    s_44 = t;
    t = SSL_printnl(s_44, r_44);
    t = q_44;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_j_10;
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
ATerm o_3 (ATerm t)
{
  ATerm w_44 = NULL,x_44 = NULL;
  t = term_q_11;
  w_44 = t;
  t = term_w_5;
  x_44 = t;
  t = term_s_11;
  t = e_4(w_44, x_44, t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_w_11;
  return(t);
}
ATerm r_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL;
  t = term_q_11;
  a_45 = t;
  t = term_w_5;
  b_45 = t;
  t = term_s_11;
  t = e_4(a_45, b_45, t);
  t = term_c_12;
  y_44 = t;
  t = term_w_5;
  z_44 = t;
  t = term_d_12;
  t = e_4(y_44, z_44, t);
  t = term_i_12;
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_j_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_12 = t;
  int l_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_3, o_3, p_3, t);
      ;
      LocalPopChoice(l_12);
    }
  else
    {
      t = k_12;
      t = Option_3_0(r_3, a_4, d_4, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm l_107 (ATerm), ATerm t)
{
  ATerm g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,l_45 = NULL,m_45 = NULL,v_11 = NULL;
  if(((g_45 != NULL) && (g_45 != t)))
    _fail(t);
  else
    g_45 = t;
  {
    ATerm m_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_12;
        t = l_107(t);
        ;
        LocalPopChoice(o_12);
      }
    else
      {
        t = m_12;
      }
    t = not_null(g_45);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((i_45 != NULL) && (i_45 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          i_45 = ATgetFirst((ATermList) t);
        if(((j_45 != NULL) && (j_45 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          j_45 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(g_45));
    if(((h_45 != NULL) && (h_45 != t)))
      _fail(t);
    else
      h_45 = t;
    t = term_j_10;
    if(((m_45 != NULL) && (m_45 != t)))
      _fail(t);
    else
      m_45 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_j_10, not_null(i_45));
    t = e_4(not_null(m_45), not_null(i_45), t);
    t = not_null(j_45);
    {
      ATerm w_45 (ATerm t)
      {
        ATerm r_12 = t;
        int s_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_12 = t;
            int u_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_45 = NULL;
                p_45 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = p_45;
                ;
                LocalPopChoice(u_12);
              }
            else
              {
                t = t_12;
                t = l_107(t);
                t = Cons_2_0(_id, w_45, t);
              }
            ;
            LocalPopChoice(s_12);
          }
        else
          {
            t = r_12;
            {
              ATerm s_45 = NULL,t_45 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_45 = ATgetFirst((ATermList) t);
                  t_45 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(t_45), (ATerm) ATmakeAppl(sym_Undefined_1, s_45));
            }
          }
        return(t);
      }
      t = w_45(t);
      if(((l_45 != NULL) && (l_45 != t)))
        _fail(t);
      else
        l_45 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(l_45)), (ATerm) ATmakeAppl(sym_Program_1, not_null(i_45)));
      if(((v_11 != NULL) && (v_11 != t)))
        _fail(t);
      else
        v_11 = t;
      t = SSLsetAnnotations(not_null(v_11), not_null(h_45));
    }
  }
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm k_46 = NULL;
  k_46 = t;
  if(match_string(t, "--help"))
    {
      t = k_46;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_46;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_46;
        }
    }
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm l_46 = NULL,m_46 = NULL;
  t = term_d_11;
  l_46 = t;
  t = term_w_5;
  m_46 = t;
  t = term_v_12;
  t = e_4(l_46, m_46, t);
  t = term_w_12;
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_x_12;
  return(t);
}
ATerm v_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm k_107 (ATerm), ATerm t)
{
  ATerm b_46 = NULL,c_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL;
  if(((f_46 != NULL) && (f_46 != t)))
    _fail(t);
  else
    f_46 = t;
  t = term_v_9;
  if(((h_46 != NULL) && (h_46 != t)))
    _fail(t);
  else
    h_46 = t;
  t = term_w_9;
  if(((i_46 != NULL) && (i_46 != t)))
    _fail(t);
  else
    i_46 = t;
  t = (ATerm) ATempty;
  if(((j_46 != NULL) && (j_46 != t)))
    _fail(t);
  else
    j_46 = t;
  t = SSL_table_put(not_null(h_46), not_null(i_46), not_null(j_46));
  t = not_null(f_46);
  {
    ATerm h_4 (ATerm t)
    {
      ATerm y_12 = t;
      int z_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_107(t);
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
                t = Option_3_0(j_4, n_4, p_4, t);
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
    t = parse_options_p__1_0(h_4, t);
    {
      ATerm d_13 = t;
      int e_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_46 = NULL;
          t_46 = t;
          {
            ATerm f_13 = t;
            int i_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_50 = NULL;
                t = t_46;
                {
                  ATerm j_13 = t;
                  int k_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_d_11;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(k_13);
                    }
                  else
                    {
                      t = j_13;
                      t = fetch_1_0(v_4, t);
                    }
                  t = t_46;
                  t = default_system_usage_0_0(t);
                  t = term_d_9;
                  y_50 = t;
                  t = SSL_exit(y_50);
                }
                ;
                LocalPopChoice(i_13);
              }
            else
              {
                t = f_13;
                {
                  ATerm c_51 = NULL;
                  t = term_q_11;
                  t = get_config_0_0(t);
                  t = t_46;
                  t = default_system_about_0_0(t);
                  t = term_d_9;
                  c_51 = t;
                  t = SSL_exit(c_51);
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
            ATerm l_13 = t;
            int m_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL;
                ATerm w_4 (ATerm t)
                {
                  ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL,x_11 = NULL;
                  z_46 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      y_46 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(z_46);
                  x_46 = t;
                  t = y_46;
                  if(((b_46 != NULL) && (b_46 != t)))
                    _fail(t);
                  else
                    b_46 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, y_46);
                  x_11 = t;
                  t = SSLsetAnnotations(x_11, x_46);
                  return(t);
                }
                t = fetch_1_0(w_4, t);
                t = term_x_5;
                if(((v_46 != NULL) && (v_46 != t)))
                  _fail(t);
                else
                  v_46 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_46)), term_n_13);
                if(((w_46 != NULL) && (w_46 != t)))
                  _fail(t);
                else
                  w_46 = t;
                t = SSL_printnl(not_null(v_46), not_null(w_46));
                t = (ATerm) ATmakeAppl(sym__2, term_x_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_46)), term_n_13));
                t = default_system_usage_0_0(t);
                t = term_b_6;
                if(((u_46 != NULL) && (u_46 != t)))
                  _fail(t);
                else
                  u_46 = t;
                t = SSL_exit(not_null(u_46));
                ;
                LocalPopChoice(m_13);
              }
            else
              {
                t = l_13;
              }
          }
        }
      if(((c_46 != NULL) && (c_46 != t)))
        _fail(t);
      else
        c_46 = t;
      t = term_v_9;
      if(((g_46 != NULL) && (g_46 != t)))
        _fail(t);
      else
        g_46 = t;
      t = SSL_table_destroy(not_null(g_46));
      t = not_null(c_46);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm t)
{
  ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL;
  t = parse_options_1_0(k_105, t);
  e_47 = t;
  t = term_o_13;
  h_47 = t;
  t = SSL_table_create(h_47);
  t = term_o_13;
  f_47 = t;
  t = term_p_13;
  g_47 = t;
  t = SSL_table_put(f_47, g_47, e_47);
  t = e_47;
  t = m_105(t);
  {
    ATerm q_13 = t;
    int r_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(l_105, t);
        ;
        LocalPopChoice(r_13);
      }
    else
      {
        t = q_13;
        {
          ATerm s_13 = t;
          int t_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_105(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(t_13);
            }
          else
            {
              t = s_13;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = if_verbose2_1_0(o_5, t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm i_47 = NULL,k_47 = NULL;
  t = term_u_13;
  i_47 = t;
  t = term_w_5;
  k_47 = t;
  t = term_w_13;
  t = e_4(i_47, k_47, t);
  t = term_x_13;
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_a_14;
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL;
  l_47 = t;
  t = term_j_10;
  t = get_config_0_0(t);
  m_47 = t;
  t = term_x_5;
  n_47 = t;
  t = (ATerm) ATinsert(ATempty, m_47);
  o_47 = t;
  t = SSL_printnl(n_47, o_47);
  t = l_47;
  return(t);
}
ATerm iowrap_3_0 (ATerm t_104 (ATerm), ATerm u_104 (ATerm), ATerm v_104 (ATerm), ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_104(t);
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
              t = input_option_0_0(t);
              ;
              LocalPopChoice(e_14);
            }
          else
            {
              t = d_14;
              {
                ATerm f_14 = t;
                int g_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(g_14);
                  }
                else
                  {
                    t = f_14;
                    {
                      ATerm h_14 = t;
                      int i_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(l_5, m_5, n_5, t);
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
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(k_14);
                              }
                            else
                              {
                                t = j_14;
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
    ATerm p_47 = NULL,q_47 = NULL,r_47 = NULL;
    if(((q_47 != NULL) && (q_47 != t)))
      _fail(t);
    else
      q_47 = t;
    {
      ATerm l_14 = t;
      int m_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((p_47 != NULL) && (p_47 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  p_47 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(p_5, t);
          ;
          LocalPopChoice(m_14);
        }
      else
        {
          t = l_14;
          t = term_o_14;
          if(((p_47 != NULL) && (p_47 != t)))
            _fail(t);
          else
            p_47 = t;
        }
      t = not_null(p_47);
      t = ReadFromFile_0_0(t);
      if(((r_47 != NULL) && (r_47 != t)))
        _fail(t);
      else
        r_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_47), not_null(r_47));
      t = apply_strategy_1_0(t_104, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(x_4, v_104, y_4, k_5, t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL,h_12 = NULL;
  y_47 = t;
  if(match_cons(t, sym__2))
    {
      v_47 = ATgetArgument(t, 0);
      w_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_47);
  u_47 = t;
  t = w_47;
  {
    ATerm p_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_48 = NULL,f_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL,l_51 = NULL,g_12 = NULL,f_12 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            m_48 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_47);
        f_51 = t;
        t = m_48;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_51 = ATgetFirst((ATermList) t);
            j_51 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_48);
        h_51 = t;
        t = j_51;
        t = Cons_2_0(r_5, u_5, t);
        k_51 = t;
        t = (ATerm) ATinsert(CheckATermList(k_51), i_51);
        f_12 = t;
        t = SSLsetAnnotations(f_12, h_51);
        l_51 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, l_51);
        g_12 = t;
        t = SSLsetAnnotations(g_12, f_51);
        ;
        LocalPopChoice(q_14);
      }
    else
      {
        t = p_14;
        t = debug_1_0(v_5, t);
      }
    x_47 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_47, x_47);
    h_12 = t;
    t = SSLsetAnnotations(h_12, u_47);
  }
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL,e_12 = NULL;
  p_51 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      n_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_51);
  m_51 = t;
  t = n_51;
  t = map_1_0(strategy_definition_0_0, t);
  o_51 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, o_51);
  e_12 = t;
  t = SSLsetAnnotations(e_12, m_51);
  return(t);
}
ATerm u_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = term_r_14;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(q_5, _fail, default_usage_0_0, t);
  return(t);
}

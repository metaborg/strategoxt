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
ATerm term_q_14;
ATerm term_m_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_p_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_y_11;
ATerm term_w_11;
ATerm term_s_11;
ATerm term_q_11;
ATerm term_o_11;
ATerm term_h_11;
ATerm term_f_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_w_10;
ATerm term_u_10;
ATerm term_i_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_c_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
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
ATerm term_v_8;
ATerm term_u_8;
ATerm term_n_8;
ATerm term_f_8;
ATerm term_x_7;
ATerm term_u_7;
ATerm term_b_7;
ATerm term_x_6;
ATerm term_q_6;
ATerm term_l_6;
ATerm term_g_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_a_6;
ATerm term_y_5;
ATerm term_x_5;
void init_constant_terms (void)
{
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym__2, term_u_8, term_z_8);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_8);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym__2, term_g_9, term_x_5);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym__2, term_u_9, term_v_9);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym__2, term_o_11, term_x_5);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_x_5);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym__2, term_b_11, term_x_5);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym__2, term_u_13, term_x_5);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
}
ATerm default_usage_0_0 (ATerm);
ATerm debug_1_0 (ATerm g_90 (ATerm), ATerm);
ATerm list_1_0 (ATerm p_77 (ATerm), ATerm);
ATerm b_0 (ATerm);
ATerm term_expression_0_0 (ATerm);
ATerm c_0 (ATerm);
ATerm q_0 (ATerm);
ATerm t_0 (ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm strategy_expression_0_0 (ATerm);
ATerm w_0 (ATerm);
ATerm y_0 (ATerm);
ATerm a_1 (ATerm);
ATerm strategy_definition_0_0 (ATerm);
ATerm map_1_0 (ATerm l_77 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm s_56 (ATerm), ATerm t_56 (ATerm), ATerm);
ATerm t_3 (ATerm w_37, ATerm x_37, ATerm);
ATerm u_3 (ATerm k_41, ATerm l_41, ATerm);
ATerm w_3 (ATerm i_90 (ATerm), ATerm z_399, ATerm o_41, ATerm);
ATerm v_3 (ATerm g_41, ATerm h_41, ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm k_93 (ATerm), ATerm);
ATerm d_36 (ATerm w_35, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm x_3 (ATerm m_41, ATerm);
ATerm y_3 (ATerm y_37, ATerm z_37, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm o_37 (ATerm n_36, ATerm);
ATerm p_37 (ATerm r_36, ATerm s_36, ATerm t_36, ATerm);
ATerm q_37 (ATerm b_37, ATerm c_37, ATerm d_37, ATerm);
ATerm z_3 (ATerm);
ATerm i_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm v_77 (ATerm), ATerm);
ATerm s_3 (ATerm l_32, ATerm m_32, ATerm);
ATerm k_1 (ATerm);
ATerm m_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm t_91 (ATerm), ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm q_1 (ATerm);
ATerm s_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm d_2 (ATerm);
ATerm j_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm f_4 (ATerm n_42, ATerm o_42, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm d_4 (ATerm l_47, ATerm m_47, ATerm k_47, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm a_4 (ATerm w_34, ATerm x_34, ATerm);
ATerm foldr_2_0 (ATerm o_83 (ATerm), ATerm p_83 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm s_91 (ATerm), ATerm);
ATerm t_2 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm u_2 (ATerm);
ATerm need_help_1_0 (ATerm i_94 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm c_4 (ATerm c_49, ATerm d_49, ATerm);
ATerm w_2 (ATerm);
ATerm z_2 (ATerm);
ATerm d_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm g_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm r_3 (ATerm);
ATerm b_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm l_96 (ATerm), ATerm);
ATerm i_4 (ATerm);
ATerm m_4 (ATerm);
ATerm o_4 (ATerm);
ATerm u_4 (ATerm);
ATerm parse_options_1_0 (ATerm k_96 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm k_94 (ATerm), ATerm l_94 (ATerm), ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm);
ATerm y_4 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm iowrap_3_0 (ATerm t_93 (ATerm), ATerm u_93 (ATerm), ATerm v_93 (ATerm), ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
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
  ATerm a_0 = NULL,e_0 = NULL,f_0 = NULL,n_0 = NULL,o_0 = NULL;
  a_0 = t;
  t = term_x_5;
  t = whoami_0_0(t);
  e_0 = t;
  t = term_y_5;
  n_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_6), e_0), term_a_6);
  o_0 = t;
  t = SSL_printnl(n_0, o_0);
  t = term_c_6;
  f_0 = t;
  t = SSL_exit(f_0);
  t = a_0;
  return(t);
}
ATerm debug_1_0 (ATerm g_90 (ATerm), ATerm t)
{
  ATerm s_0 = NULL,x_0 = NULL,c_1 = NULL,d_1 = NULL;
  s_0 = t;
  t = g_90(t);
  x_0 = t;
  t = term_y_5;
  c_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_0), x_0);
  d_1 = t;
  t = SSL_printnl(c_1, d_1);
  t = s_0;
  return(t);
}
ATerm list_1_0 (ATerm p_77 (ATerm), ATerm t)
{
  t = map_1_0(p_77, t);
  return(t);
}
ATerm b_0 (ATerm t)
{
  t = term_d_6;
  return(t);
}
ATerm term_expression_0_0 (ATerm t)
{
  ATerm e_6 = t;
  int f_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_5 = NULL,u_5 = NULL,z_5 = NULL;
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
                                  z_5 = ATgetArgument(t, 1);
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
                                    t = z_5;
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
                                      z_5 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(t_5);
                                  k_4 = t;
                                  t = SSL_is_string(u_5);
                                  q_4 = t;
                                  t = z_5;
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
      LocalPopChoice(f_6);
    }
  else
    {
      t = e_6;
      t = debug_1_0(b_0, t);
    }
  return(t);
}
ATerm c_0 (ATerm t)
{
  ATerm s_19 = NULL;
  s_19 = t;
  t = SSL_is_string(s_19);
  return(t);
}
ATerm q_0 (ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL,e_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL,l_24 = NULL,n_24 = NULL,j_5 = NULL;
  n_24 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      b_24 = ATgetArgument(t, 0);
      c_24 = ATgetArgument(t, 1);
      e_24 = ATgetArgument(t, 2);
      g_24 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_24);
  a_24 = t;
  t = SSL_is_string(b_24);
  h_24 = t;
  t = c_24;
  t = map_1_0(t_0, t);
  i_24 = t;
  t = e_24;
  t = map_1_0(u_0, t);
  j_24 = t;
  t = g_24;
  t = strategy_expression_0_0(t);
  l_24 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, h_24, i_24, j_24, l_24);
  j_5 = t;
  t = SSLsetAnnotations(j_5, a_24);
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,l_26 = NULL,n_26 = NULL,o_26 = NULL,g_5 = NULL,f_5 = NULL;
  o_26 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      b_26 = ATgetArgument(t, 0);
      c_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_26);
  a_26 = t;
  t = SSL_is_string(b_26);
  d_26 = t;
  t = c_26;
  if(match_cons(t, sym_FunType_2))
    {
      i_26 = ATgetArgument(t, 0);
      j_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_26);
  h_26 = t;
  t = i_26;
  t = list_1_0(_id, t);
  l_26 = t;
  t = (ATerm) ATmakeAppl(sym_FunType_2, l_26, j_26);
  f_5 = t;
  t = SSLsetAnnotations(f_5, h_26);
  n_26 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, d_26, n_26);
  g_5 = t;
  t = SSLsetAnnotations(g_5, a_26);
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL,z_26 = NULL,k_27 = NULL,l_27 = NULL,i_5 = NULL,h_5 = NULL;
  l_27 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      s_26 = ATgetArgument(t, 0);
      v_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_27);
  r_26 = t;
  t = SSL_is_string(s_26);
  w_26 = t;
  t = v_26;
  if(match_cons(t, sym_ConstType_1))
    {
      z_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_26);
  x_26 = t;
  t = (ATerm) ATmakeAppl(sym_ConstType_1, z_26);
  h_5 = t;
  t = SSLsetAnnotations(h_5, x_26);
  k_27 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, w_26, k_27);
  i_5 = t;
  t = SSLsetAnnotations(i_5, r_26);
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = term_g_6;
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm h_6 = t;
  int i_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL;
      p_28 = t;
      if(match_cons(t, sym_Id_0))
        {
          t = p_28;
        }
      else
        {
          if(match_cons(t, sym_Fail_0))
            {
              t = p_28;
            }
          else
            {
              if(match_cons(t, sym_Not_1))
                {
                  q_28 = ATgetArgument(t, 0);
                  {
                    ATerm i_7 = NULL,k_7 = NULL,x_2 = NULL;
                    t = SSLgetAnnotations(p_28);
                    i_7 = t;
                    t = q_28;
                    t = strategy_expression_0_0(t);
                    k_7 = t;
                    t = (ATerm) ATmakeAppl(sym_Not_1, k_7);
                    x_2 = t;
                    t = SSLsetAnnotations(x_2, i_7);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Test_1))
                    {
                      q_28 = ATgetArgument(t, 0);
                      {
                        ATerm q_7 = NULL,s_7 = NULL,y_2 = NULL;
                        t = SSLgetAnnotations(p_28);
                        q_7 = t;
                        t = q_28;
                        t = strategy_expression_0_0(t);
                        s_7 = t;
                        t = (ATerm) ATmakeAppl(sym_Test_1, s_7);
                        y_2 = t;
                        t = SSLsetAnnotations(y_2, q_7);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Seq_2))
                        {
                          q_28 = ATgetArgument(t, 0);
                          r_28 = ATgetArgument(t, 1);
                          {
                            ATerm z_7 = NULL,c_8 = NULL,d_8 = NULL,a_3 = NULL;
                            t = SSLgetAnnotations(p_28);
                            z_7 = t;
                            t = q_28;
                            t = strategy_expression_0_0(t);
                            c_8 = t;
                            t = r_28;
                            t = strategy_expression_0_0(t);
                            d_8 = t;
                            t = (ATerm) ATmakeAppl(sym_Seq_2, c_8, d_8);
                            a_3 = t;
                            t = SSLsetAnnotations(a_3, z_7);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Choice_2))
                            {
                              q_28 = ATgetArgument(t, 0);
                              r_28 = ATgetArgument(t, 1);
                              {
                                ATerm l_8 = NULL,o_8 = NULL,p_8 = NULL,b_3 = NULL;
                                t = SSLgetAnnotations(p_28);
                                l_8 = t;
                                t = q_28;
                                t = strategy_expression_0_0(t);
                                o_8 = t;
                                t = r_28;
                                t = strategy_expression_0_0(t);
                                p_8 = t;
                                t = (ATerm) ATmakeAppl(sym_Choice_2, o_8, p_8);
                                b_3 = t;
                                t = SSLsetAnnotations(b_3, l_8);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_LChoice_2))
                                {
                                  q_28 = ATgetArgument(t, 0);
                                  r_28 = ATgetArgument(t, 1);
                                  {
                                    ATerm x_8 = NULL,a_9 = NULL,b_9 = NULL,e_3 = NULL;
                                    t = SSLgetAnnotations(p_28);
                                    x_8 = t;
                                    t = q_28;
                                    t = strategy_expression_0_0(t);
                                    a_9 = t;
                                    t = r_28;
                                    t = strategy_expression_0_0(t);
                                    b_9 = t;
                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, a_9, b_9);
                                    e_3 = t;
                                    t = SSLsetAnnotations(e_3, x_8);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      q_28 = ATgetArgument(t, 0);
                                      r_28 = ATgetArgument(t, 1);
                                      m_28 = ATgetArgument(t, 2);
                                      {
                                        ATerm k_9 = NULL,p_9 = NULL,q_9 = NULL,s_9 = NULL,f_3 = NULL;
                                        t = SSLgetAnnotations(p_28);
                                        k_9 = t;
                                        t = q_28;
                                        t = strategy_expression_0_0(t);
                                        p_9 = t;
                                        t = r_28;
                                        t = strategy_expression_0_0(t);
                                        q_9 = t;
                                        t = m_28;
                                        t = strategy_expression_0_0(t);
                                        s_9 = t;
                                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, p_9, q_9, s_9);
                                        f_3 = t;
                                        t = SSLsetAnnotations(f_3, k_9);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_GChoice_2))
                                        {
                                          q_28 = ATgetArgument(t, 0);
                                          r_28 = ATgetArgument(t, 1);
                                          {
                                            ATerm d_10 = NULL,g_10 = NULL,h_10 = NULL,j_3 = NULL;
                                            t = SSLgetAnnotations(p_28);
                                            d_10 = t;
                                            t = q_28;
                                            t = strategy_expression_0_0(t);
                                            g_10 = t;
                                            t = r_28;
                                            t = strategy_expression_0_0(t);
                                            h_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_GChoice_2, g_10, h_10);
                                            j_3 = t;
                                            t = SSLsetAnnotations(j_3, d_10);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LGChoice_2))
                                            {
                                              q_28 = ATgetArgument(t, 0);
                                              r_28 = ATgetArgument(t, 1);
                                              {
                                                ATerm v_10 = NULL,y_10 = NULL,z_10 = NULL,q_3 = NULL;
                                                t = SSLgetAnnotations(p_28);
                                                v_10 = t;
                                                t = q_28;
                                                t = strategy_expression_0_0(t);
                                                y_10 = t;
                                                t = r_28;
                                                t = strategy_expression_0_0(t);
                                                z_10 = t;
                                                t = (ATerm) ATmakeAppl(sym_LGChoice_2, y_10, z_10);
                                                q_3 = t;
                                                t = SSLsetAnnotations(q_3, v_10);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_CallT_3))
                                                {
                                                  q_28 = ATgetArgument(t, 0);
                                                  r_28 = ATgetArgument(t, 1);
                                                  m_28 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm j_11 = NULL,p_11 = NULL,u_11 = NULL,v_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,j_4 = NULL,h_4 = NULL;
                                                    t = SSLgetAnnotations(p_28);
                                                    j_11 = t;
                                                    t = q_28;
                                                    if(match_cons(t, sym_SVar_1))
                                                      {
                                                        z_11 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSLgetAnnotations(q_28);
                                                    v_11 = t;
                                                    t = z_11;
                                                    {
                                                      ATerm j_6 = t;
                                                      int k_6 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = SSL_is_string(z_11);
                                                          ;
                                                          LocalPopChoice(k_6);
                                                        }
                                                      else
                                                        {
                                                          t = j_6;
                                                          {
                                                            ATerm n_12 = NULL,o_12 = NULL,c_13 = NULL,g_13 = NULL,h_13 = NULL,g_4 = NULL;
                                                            if(match_cons(t, sym_Mod_2))
                                                              {
                                                                n_12 = ATgetArgument(t, 0);
                                                                o_12 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = SSLgetAnnotations(z_11);
                                                            c_13 = t;
                                                            t = SSL_is_string(n_12);
                                                            g_13 = t;
                                                            t = SSL_is_string(o_12);
                                                            h_13 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Mod_2, g_13, h_13);
                                                            g_4 = t;
                                                            t = SSLsetAnnotations(g_4, c_13);
                                                          }
                                                        }
                                                      a_12 = t;
                                                      t = (ATerm) ATmakeAppl(sym_SVar_1, a_12);
                                                      h_4 = t;
                                                      t = SSLsetAnnotations(h_4, v_11);
                                                      b_12 = t;
                                                      t = r_28;
                                                      t = map_1_0(strategy_expression_0_0, t);
                                                      p_11 = t;
                                                      t = m_28;
                                                      t = map_1_0(term_expression_0_0, t);
                                                      u_11 = t;
                                                      t = (ATerm) ATmakeAppl(sym_CallT_3, b_12, p_11, u_11);
                                                      j_4 = t;
                                                      t = SSLsetAnnotations(j_4, j_11);
                                                    }
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Rec_2))
                                                    {
                                                      q_28 = ATgetArgument(t, 0);
                                                      r_28 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm s_13 = NULL,y_13 = NULL,z_13 = NULL,l_4 = NULL;
                                                        t = SSLgetAnnotations(p_28);
                                                        s_13 = t;
                                                        t = SSL_is_string(q_28);
                                                        y_13 = t;
                                                        t = r_28;
                                                        t = strategy_expression_0_0(t);
                                                        z_13 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Rec_2, y_13, z_13);
                                                        l_4 = t;
                                                        t = SSLsetAnnotations(l_4, s_13);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Path_2))
                                                        {
                                                          q_28 = ATgetArgument(t, 0);
                                                          r_28 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm n_14 = NULL,t_14 = NULL,x_14 = NULL,n_4 = NULL;
                                                            t = SSLgetAnnotations(p_28);
                                                            n_14 = t;
                                                            t = SSL_is_int(q_28);
                                                            t_14 = t;
                                                            t = r_28;
                                                            t = strategy_expression_0_0(t);
                                                            x_14 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Path_2, t_14, x_14);
                                                            n_4 = t;
                                                            t = SSLsetAnnotations(n_4, n_14);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              q_28 = ATgetArgument(t, 0);
                                                              r_28 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm h_15 = NULL,k_15 = NULL,l_15 = NULL,p_4 = NULL;
                                                                t = SSLgetAnnotations(p_28);
                                                                h_15 = t;
                                                                t = SSL_is_string(q_28);
                                                                k_15 = t;
                                                                t = r_28;
                                                                t = map_1_0(strategy_expression_0_0, t);
                                                                l_15 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Cong_2, k_15, l_15);
                                                                p_4 = t;
                                                                t = SSLsetAnnotations(p_4, h_15);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_One_1))
                                                                {
                                                                  q_28 = ATgetArgument(t, 0);
                                                                  {
                                                                    ATerm x_15 = NULL,d_16 = NULL,s_4 = NULL;
                                                                    t = SSLgetAnnotations(p_28);
                                                                    x_15 = t;
                                                                    t = q_28;
                                                                    t = strategy_expression_0_0(t);
                                                                    d_16 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_One_1, d_16);
                                                                    s_4 = t;
                                                                    t = SSLsetAnnotations(s_4, x_15);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Some_1))
                                                                    {
                                                                      q_28 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm p_16 = NULL,r_16 = NULL,t_4 = NULL;
                                                                        t = SSLgetAnnotations(p_28);
                                                                        p_16 = t;
                                                                        t = q_28;
                                                                        t = strategy_expression_0_0(t);
                                                                        r_16 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Some_1, r_16);
                                                                        t_4 = t;
                                                                        t = SSLsetAnnotations(t_4, p_16);
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_All_1))
                                                                        {
                                                                          q_28 = ATgetArgument(t, 0);
                                                                          {
                                                                            ATerm z_16 = NULL,b_17 = NULL,v_4 = NULL;
                                                                            t = SSLgetAnnotations(p_28);
                                                                            z_16 = t;
                                                                            t = q_28;
                                                                            t = strategy_expression_0_0(t);
                                                                            b_17 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_All_1, b_17);
                                                                            v_4 = t;
                                                                            t = SSLsetAnnotations(v_4, z_16);
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Thread_1))
                                                                            {
                                                                              q_28 = ATgetArgument(t, 0);
                                                                              {
                                                                                ATerm q_17 = NULL,t_17 = NULL,z_4 = NULL;
                                                                                t = SSLgetAnnotations(p_28);
                                                                                q_17 = t;
                                                                                t = q_28;
                                                                                t = strategy_expression_0_0(t);
                                                                                t_17 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Thread_1, t_17);
                                                                                z_4 = t;
                                                                                t = SSLsetAnnotations(z_4, q_17);
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Match_1))
                                                                                {
                                                                                  q_28 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm e_18 = NULL,g_18 = NULL,a_5 = NULL;
                                                                                    t = SSLgetAnnotations(p_28);
                                                                                    e_18 = t;
                                                                                    t = q_28;
                                                                                    t = term_expression_0_0(t);
                                                                                    g_18 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, g_18);
                                                                                    a_5 = t;
                                                                                    t = SSLsetAnnotations(a_5, e_18);
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Build_1))
                                                                                    {
                                                                                      q_28 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm t_18 = NULL,v_18 = NULL,b_5 = NULL;
                                                                                        t = SSLgetAnnotations(p_28);
                                                                                        t_18 = t;
                                                                                        t = q_28;
                                                                                        t = term_expression_0_0(t);
                                                                                        v_18 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, v_18);
                                                                                        b_5 = t;
                                                                                        t = SSLsetAnnotations(b_5, t_18);
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Scope_2))
                                                                                        {
                                                                                          q_28 = ATgetArgument(t, 0);
                                                                                          r_28 = ATgetArgument(t, 1);
                                                                                          {
                                                                                            ATerm f_19 = NULL,n_19 = NULL,q_19 = NULL,c_5 = NULL;
                                                                                            t = SSLgetAnnotations(p_28);
                                                                                            f_19 = t;
                                                                                            t = q_28;
                                                                                            t = map_1_0(c_0, t);
                                                                                            n_19 = t;
                                                                                            t = r_28;
                                                                                            t = strategy_expression_0_0(t);
                                                                                            q_19 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Scope_2, n_19, q_19);
                                                                                            c_5 = t;
                                                                                            t = SSLsetAnnotations(c_5, f_19);
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_Where_1))
                                                                                            {
                                                                                              q_28 = ATgetArgument(t, 0);
                                                                                              {
                                                                                                ATerm e_20 = NULL,i_20 = NULL,d_5 = NULL;
                                                                                                t = SSLgetAnnotations(p_28);
                                                                                                e_20 = t;
                                                                                                t = q_28;
                                                                                                t = strategy_expression_0_0(t);
                                                                                                i_20 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Where_1, i_20);
                                                                                                d_5 = t;
                                                                                                t = SSLsetAnnotations(d_5, e_20);
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_PrimT_3))
                                                                                                {
                                                                                                  q_28 = ATgetArgument(t, 0);
                                                                                                  r_28 = ATgetArgument(t, 1);
                                                                                                  m_28 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm v_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,e_5 = NULL;
                                                                                                    t = SSLgetAnnotations(p_28);
                                                                                                    v_20 = t;
                                                                                                    t = SSL_is_string(q_28);
                                                                                                    z_20 = t;
                                                                                                    t = r_28;
                                                                                                    t = map_1_0(strategy_expression_0_0, t);
                                                                                                    a_21 = t;
                                                                                                    t = m_28;
                                                                                                    t = map_1_0(term_expression_0_0, t);
                                                                                                    b_21 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_PrimT_3, z_20, a_21, b_21);
                                                                                                    e_5 = t;
                                                                                                    t = SSLsetAnnotations(e_5, v_20);
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  ATerm s_23 = NULL,v_23 = NULL,w_23 = NULL,k_5 = NULL;
                                                                                                  if(match_cons(t, sym_Let_2))
                                                                                                    {
                                                                                                      q_28 = ATgetArgument(t, 0);
                                                                                                      r_28 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = SSLgetAnnotations(p_28);
                                                                                                  s_23 = t;
                                                                                                  t = q_28;
                                                                                                  t = map_1_0(q_0, t);
                                                                                                  v_23 = t;
                                                                                                  t = r_28;
                                                                                                  t = strategy_expression_0_0(t);
                                                                                                  w_23 = t;
                                                                                                  t = (ATerm) ATmakeAppl(sym_Let_2, v_23, w_23);
                                                                                                  k_5 = t;
                                                                                                  t = SSLsetAnnotations(k_5, s_23);
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
      LocalPopChoice(i_6);
    }
  else
    {
      t = h_6;
      t = debug_1_0(v_0, t);
    }
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL,t_6 = NULL;
  l_30 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      i_30 = ATgetArgument(t, 0);
      j_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_30);
  h_30 = t;
  t = SSL_is_string(i_30);
  k_30 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, k_30, j_30);
  t_6 = t;
  t = SSLsetAnnotations(t_6, h_30);
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL,q_30 = NULL,s_30 = NULL,u_6 = NULL;
  s_30 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      n_30 = ATgetArgument(t, 0);
      o_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_30);
  m_30 = t;
  t = SSL_is_string(n_30);
  q_30 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, q_30, o_30);
  u_6 = t;
  t = SSLsetAnnotations(u_6, m_30);
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = term_l_6;
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm m_6 = t;
  int n_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL,n_32 = NULL,l_28 = NULL,a_29 = NULL,h_29 = NULL,i_29 = NULL,k_29 = NULL,v_6 = NULL;
      h_32 = t;
      if(match_cons(t, sym_SDefT_4))
        {
          i_32 = ATgetArgument(t, 0);
          j_32 = ATgetArgument(t, 1);
          k_32 = ATgetArgument(t, 2);
          n_32 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_32);
      l_28 = t;
      t = i_32;
      {
        ATerm o_6 = t;
        int p_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_is_string(i_32);
            ;
            LocalPopChoice(p_6);
          }
        else
          {
            t = o_6;
            {
              ATerm f_30 = NULL,g_30 = NULL,r_32 = NULL,s_33 = NULL,t_33 = NULL,s_6 = NULL;
              if(match_cons(t, sym_Mod_2))
                {
                  f_30 = ATgetArgument(t, 0);
                  g_30 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(i_32);
              r_32 = t;
              t = SSL_is_string(f_30);
              s_33 = t;
              t = SSL_is_string(g_30);
              t_33 = t;
              t = (ATerm) ATmakeAppl(sym_Mod_2, s_33, t_33);
              s_6 = t;
              t = SSLsetAnnotations(s_6, r_32);
            }
          }
        a_29 = t;
        t = j_32;
        t = map_1_0(w_0, t);
        h_29 = t;
        t = k_32;
        t = map_1_0(y_0, t);
        i_29 = t;
        t = n_32;
        t = strategy_expression_0_0(t);
        k_29 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, a_29, h_29, i_29, k_29);
        v_6 = t;
        t = SSLsetAnnotations(v_6, l_28);
      }
      ;
      LocalPopChoice(n_6);
    }
  else
    {
      t = m_6;
      t = debug_1_0(a_1, t);
    }
  return(t);
}
ATerm map_1_0 (ATerm l_77 (ATerm), ATerm t)
{
  ATerm f_33 (ATerm t)
  {
    ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL;
    c_33 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_33;
      }
    else
      {
        ATerm j_36 = NULL,m_36 = NULL,a_38 = NULL,a_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_33 = ATgetFirst((ATermList) t);
            e_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_33);
        j_36 = t;
        t = d_33;
        t = l_77(t);
        m_36 = t;
        t = e_33;
        t = f_33(t);
        a_38 = t;
        t = (ATerm) ATinsert(CheckATermList(a_38), m_36);
        a_7 = t;
        t = SSLsetAnnotations(a_7, j_36);
      }
    return(t);
  }
  t = f_33(t);
  return(t);
}
ATerm Cons_2_0 (ATerm s_56 (ATerm), ATerm t_56 (ATerm), ATerm t)
{
  ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL,c_7 = NULL;
  m_33 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_33 = ATgetFirst((ATermList) t);
      j_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_33);
  h_33 = t;
  t = i_33;
  t = s_56(t);
  k_33 = t;
  t = j_33;
  t = t_56(t);
  l_33 = t;
  t = (ATerm) ATinsert(CheckATermList(l_33), k_33);
  c_7 = t;
  t = SSLsetAnnotations(c_7, h_33);
  return(t);
}
ATerm t_3 (ATerm w_37, ATerm x_37, ATerm t)
{
  ATerm n_33 = NULL;
  t = SSL_fputc(w_37, x_37);
  n_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_33);
  return(t);
}
ATerm u_3 (ATerm k_41, ATerm l_41, ATerm t)
{
  ATerm o_33 = NULL;
  t = SSL_write_term_to_stream_text(k_41, l_41);
  o_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_33);
  return(t);
}
ATerm w_3 (ATerm i_90 (ATerm), ATerm z_399, ATerm o_41, ATerm t)
{
  ATerm p_33 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_399, term_q_6);
  t = z_3(t);
  p_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_33, o_41);
  t = i_90(t);
  t = fclose_0_0(t);
  t = o_41;
  return(t);
}
ATerm v_3 (ATerm g_41, ATerm h_41, ATerm t)
{
  ATerm q_33 = NULL;
  t = SSL_write_term_to_stream_baf(g_41, h_41);
  q_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_33);
  return(t);
}
ATerm f_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm n_41 = NULL,p_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_6 = ATgetArgument(t, 0);
      if(match_cons(r_6, sym_Stream_1))
        {
          n_41 = ATgetArgument(r_6, 0);
        }
      else
        _fail(t);
      p_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_3(n_41, p_41, t);
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm p_43 = NULL,q_43 = NULL,c_44 = NULL,e_44 = NULL,f_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_6 = ATgetArgument(t, 0);
      if(match_cons(w_6, sym_Stream_1))
        {
          e_44 = ATgetArgument(w_6, 0);
        }
      else
        _fail(t);
      f_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3(e_44, f_44, t);
  p_43 = t;
  t = term_x_6;
  q_43 = t;
  t = p_43;
  if(match_cons(t, sym_Stream_1))
    {
      c_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_x_6, p_43);
  t = t_3(q_43, c_44, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL,g_35 = NULL,h_35 = NULL,f_7 = NULL,e_7 = NULL;
  v_33 = t;
  if(match_cons(t, sym__2))
    {
      c_34 = ATgetArgument(t, 0);
      d_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_33);
  b_34 = t;
  t = c_34;
  {
    ATerm y_6 = t;
    int z_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((u_33 != NULL) && (u_33 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                u_33 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(e_1, t);
        ;
        LocalPopChoice(z_6);
      }
    else
      {
        t = y_6;
        t = term_b_7;
        u_33 = t;
      }
    e_34 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_34, d_34);
    e_7 = t;
    t = SSLsetAnnotations(e_7, b_34);
    t = v_33;
    if(match_cons(t, sym__2))
      {
        x_33 = ATgetArgument(t, 0);
        y_33 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(v_33);
    w_33 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_33, (ATerm) ATmakeAppl(sym__2, not_null(u_33), y_33));
    f_7 = t;
    t = SSLsetAnnotations(f_7, w_33);
    a_34 = t;
    if(match_cons(t, sym__2))
      {
        g_35 = ATgetArgument(t, 0);
        h_35 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm d_7 = t;
      int g_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_39 = NULL,e_40 = NULL,j_40 = NULL,o_40 = NULL,y_40 = NULL,o_9 = NULL;
          t = SSLgetAnnotations(a_34);
          d_39 = t;
          t = g_35;
          t = fetch_1_0(f_1, t);
          e_40 = t;
          t = h_35;
          if(match_cons(t, sym__2))
            {
              o_40 = ATgetArgument(t, 0);
              y_40 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_3(g_1, o_40, y_40, t);
          j_40 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_40, j_40);
          o_9 = t;
          t = SSLsetAnnotations(o_9, d_39);
          ;
          LocalPopChoice(g_7);
        }
      else
        {
          t = d_7;
          {
            ATerm w_42 = NULL,z_42 = NULL,a_43 = NULL,d_43 = NULL,r_9 = NULL;
            t = SSLgetAnnotations(a_34);
            w_42 = t;
            t = h_35;
            if(match_cons(t, sym__2))
              {
                a_43 = ATgetArgument(t, 0);
                d_43 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = w_3(h_1, a_43, d_43, t);
            z_42 = t;
            t = (ATerm) ATmakeAppl(sym__2, g_35, z_42);
            r_9 = t;
            t = SSLsetAnnotations(r_9, w_42);
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
ATerm apply_strategy_1_0 (ATerm k_93 (ATerm), ATerm t)
{
  ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL;
  o_35 = t;
  t = dtime_0_0(t);
  t = o_35;
  t = k_93(t);
  n_35 = t;
  t = dtime_0_0(t);
  k_35 = t;
  t = n_35;
  if(match_cons(t, sym__2))
    {
      l_35 = ATgetArgument(t, 0);
      m_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_35), (ATerm) ATmakeAppl(sym_Runtime_1, k_35)), m_35);
  return(t);
}
ATerm d_36 (ATerm w_35, ATerm t)
{
  t = SSL_fclose(w_35);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL;
  a_36 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_35 = ATgetArgument(t, 0);
      {
        ATerm h_7 = t;
        int j_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_35);
            ;
            LocalPopChoice(j_7);
          }
        else
          {
            t = h_7;
            t = d_36(a_36, t);
          }
      }
    }
  else
    {
      t = d_36(a_36, t);
    }
  return(t);
}
ATerm x_3 (ATerm m_41, ATerm t)
{
  t = SSL_read_term_from_stream(m_41);
  return(t);
}
ATerm y_3 (ATerm y_37, ATerm z_37, ATerm t)
{
  ATerm e_36 = NULL;
  t = SSL_fopen(y_37, z_37);
  e_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_36);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_36 = NULL;
  t = SSL_stdin_stream();
  f_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_36);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_36 = NULL;
  t = SSL_stdout_stream();
  g_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_36);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_36 = NULL;
  t = SSL_stderr_stream();
  h_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_36);
  return(t);
}
ATerm o_37 (ATerm n_36, ATerm t)
{
  ATerm o_36 = NULL;
  t = SSL_explode_term(n_36);
  if(match_cons(t, sym__2))
    {
      ATerm l_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_7 = ATgetArgument(t, 1);
        if(((ATgetType(m_7) == AT_LIST) && !(ATisEmpty(m_7))))
          {
            o_36 = ATgetFirst((ATermList) m_7);
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
  t = o_36;
  if(match_cons(t, sym_stderr_0))
    {
      t = o_36;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = o_36;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = o_36;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm p_37 (ATerm r_36, ATerm s_36, ATerm t_36, ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL,z_36 = NULL,m_10 = NULL;
  t = SSLgetAnnotations(t_36);
  w_36 = t;
  t = r_36;
  if(match_cons(t, sym_Path_1))
    {
      z_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_36, s_36);
  m_10 = t;
  t = SSLsetAnnotations(m_10, w_36);
  if(match_cons(t, sym__2))
    {
      u_36 = ATgetArgument(t, 0);
      v_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(u_36, v_36, t);
  return(t);
}
ATerm q_37 (ATerm b_37, ATerm c_37, ATerm d_37, ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL,j_37 = NULL,n_10 = NULL;
  t = SSLgetAnnotations(d_37);
  g_37 = t;
  t = SSL_is_string(b_37);
  j_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_37, c_37);
  n_10 = t;
  t = SSLsetAnnotations(n_10, g_37);
  if(match_cons(t, sym__2))
    {
      e_37 = ATgetArgument(t, 0);
      f_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(e_37, f_37, t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL;
  l_37 = t;
  if(match_cons(t, sym__2))
    {
      m_37 = ATgetArgument(t, 0);
      n_37 = ATgetArgument(t, 1);
      {
        ATerm o_7 = t;
        int p_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_37(l_37, t);
            ;
            LocalPopChoice(p_7);
          }
        else
          {
            t = o_7;
            {
              ATerm r_7 = t;
              int t_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_37(m_37, n_37, l_37, t);
                  ;
                  LocalPopChoice(t_7);
                }
              else
                {
                  t = r_7;
                  t = q_37(m_37, n_37, l_37, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_37(l_37, t);
    }
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_u_7;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL;
  ATerm v_7 = t;
  int w_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_37 = NULL;
      u_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_37, term_x_7);
      t = z_3(t);
      ;
      LocalPopChoice(w_7);
    }
  else
    {
      t = v_7;
      t = debug_1_0(i_1, t);
      _fail(t);
    }
  s_37 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_3(t_37, t);
  r_37 = t;
  t = s_37;
  t = fclose_0_0(t);
  t = r_37;
  return(t);
}
ATerm fetch_1_0 (ATerm v_77 (ATerm), ATerm t)
{
  ATerm y_38 (ATerm t)
  {
    ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL;
    v_38 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_38 = ATgetFirst((ATermList) t);
        x_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_7 = t;
      int a_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_46 = NULL,w_46 = NULL,g_11 = NULL;
          t = SSLgetAnnotations(v_38);
          t_46 = t;
          t = w_38;
          t = v_77(t);
          w_46 = t;
          t = (ATerm) ATinsert(CheckATermList(x_38), w_46);
          g_11 = t;
          t = SSLsetAnnotations(g_11, t_46);
          ;
          LocalPopChoice(a_8);
        }
      else
        {
          t = y_7;
          {
            ATerm b_49 = NULL,a_50 = NULL,m_11 = NULL;
            t = SSLgetAnnotations(v_38);
            b_49 = t;
            t = x_38;
            t = y_38(t);
            a_50 = t;
            t = (ATerm) ATinsert(CheckATermList(a_50), w_38);
            m_11 = t;
            t = SSLsetAnnotations(m_11, b_49);
          }
        }
    }
    return(t);
  }
  t = y_38(t);
  return(t);
}
ATerm s_3 (ATerm l_32, ATerm m_32, ATerm t)
{
  t = SSL_strcat(l_32, m_32);
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm b_8 = t;
  int e_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(e_8);
    }
  else
    {
      t = b_8;
    }
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_f_8;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_8 = t;
  int h_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_39 = NULL;
      h_39 = t;
      t = SSL_is_string(h_39);
      ;
      LocalPopChoice(h_8);
    }
  else
    {
      t = g_8;
      {
        ATerm i_8 = t;
        int j_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(k_1, t);
            ;
            LocalPopChoice(j_8);
          }
        else
          {
            t = i_8;
            {
              ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL;
              n_39 = t;
              if(match_cons(t, sym_Path_1))
                {
                  o_39 = ATgetArgument(t, 0);
                  t = o_39;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      o_39 = ATgetArgument(t, 0);
                      t = o_39;
                      {
                        ATerm k_8 = t;
                        int m_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(m_8);
                          }
                        else
                          {
                            t = k_8;
                            t = debug_1_0(m_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm t_39 = NULL,u_39 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          o_39 = ATgetArgument(t, 0);
                          p_39 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = o_39;
                      t = eval_config_0_0(t);
                      t_39 = t;
                      t = p_39;
                      t = eval_config_0_0(t);
                      u_39 = t;
                      t = (ATerm) ATmakeAppl(sym__2, t_39, u_39);
                      t = s_3(t_39, u_39, t);
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
  ATerm y_39 = NULL,z_39 = NULL;
  y_39 = t;
  t = term_n_8;
  z_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_8, y_39);
  t = c_4(z_39, y_39, t);
  {
    ATerm q_8 = t;
    int r_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_40 = NULL,b_40 = NULL;
        t = eval_config_0_0(t);
        a_40 = t;
        t = term_n_8;
        b_40 = t;
        t = SSL_table_put(b_40, y_39, a_40);
        t = a_40;
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
ATerm if_verbose2_1_0 (ATerm t_91 (ATerm), ATerm t)
{
  ATerm f_40 = NULL;
  f_40 = t;
  {
    ATerm s_8 = t;
    int t_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_40 = NULL;
        t = term_u_8;
        t = get_config_0_0(t);
        h_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_40, term_v_8);
        t = geq_0_0(t);
        t = f_40;
        t = t_91(t);
        ;
        LocalPopChoice(t_8);
      }
    else
      {
        t = s_8;
        t = f_40;
      }
  }
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm k_40 = NULL;
  k_40 = t;
  if(match_string(t, "-k"))
    {
      t = k_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = k_40;
    }
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL;
  l_40 = t;
  t = SSL_string_to_int(l_40);
  m_40 = t;
  t = term_w_8;
  n_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_8, m_40);
  t = f_4(n_40, m_40, t);
  t = l_40;
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_y_8;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_1, o_1, p_1, t);
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm p_40 = NULL;
  p_40 = t;
  if(match_string(t, "-S"))
    {
      t = p_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = p_40;
    }
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm q_40 = NULL,r_40 = NULL;
  t = term_u_8;
  q_40 = t;
  t = term_z_8;
  r_40 = t;
  t = term_c_9;
  t = f_4(q_40, r_40, t);
  t = term_d_9;
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_e_9;
  return(t);
}
ATerm v_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL;
  s_40 = t;
  t = SSL_string_to_int(s_40);
  t_40 = t;
  t = term_u_8;
  u_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_8, t_40);
  t = f_4(u_40, t_40, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_40);
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_f_9;
  return(t);
}
ATerm y_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL;
  t = term_g_9;
  v_40 = t;
  t = term_x_5;
  w_40 = t;
  t = term_h_9;
  t = f_4(v_40, w_40, t);
  t = term_i_9;
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_j_9;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_1, s_1, u_1, t);
      ;
      LocalPopChoice(m_9);
    }
  else
    {
      t = l_9;
      {
        ATerm n_9 = t;
        int t_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(v_1, w_1, x_1, t);
            ;
            LocalPopChoice(t_9);
          }
        else
          {
            t = n_9;
            t = Option_3_0(y_1, d_2, j_2, t);
          }
      }
    }
  return(t);
}
ATerm f_4 (ATerm n_42, ATerm o_42, ATerm t)
{
  ATerm x_40 = NULL;
  t = term_n_8;
  x_40 = t;
  t = SSL_table_put(x_40, n_42, o_42);
  t = (ATerm) ATmakeAppl(sym__3, term_n_8, n_42, o_42);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_41 = NULL,d_41 = NULL,e_41 = NULL;
      t = term_x_5;
      t = h_0(t);
      c_41 = t;
      t = term_u_9;
      d_41 = t;
      t = term_v_9;
      e_41 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_9, term_v_9, c_41);
      t = d_4(d_41, e_41, c_41, t);
      _fail(t);
    }
  else
    {
      ATerm j_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_41 = ATgetFirst((ATermList) t);
          b_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_41;
      t = d_0(t);
      t = term_x_5;
      t = g_0(t);
      j_41 = t;
      t = (ATerm) ATinsert(CheckATermList(b_41), j_41);
    }
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm q_41 = NULL;
  q_41 = t;
  if(match_string(t, "-o"))
    {
      t = q_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_41;
    }
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm r_41 = NULL,s_41 = NULL;
  r_41 = t;
  t = term_w_9;
  s_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_9, r_41);
  t = f_4(s_41, r_41, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_41);
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_x_9;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_2, m_2, n_2, t);
  return(t);
}
ATerm d_4 (ATerm l_47, ATerm m_47, ATerm k_47, ATerm t)
{
  ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL;
  u_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_47, m_47);
  {
    ATerm y_9 = t;
    int z_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_10 = ATgetArgument(t, 0);
            ATerm b_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_47, m_47);
        t = c_4(l_47, m_47, t);
        ;
        LocalPopChoice(z_9);
      }
    else
      {
        t = y_9;
        t = (ATerm) ATempty;
      }
    v_41 = t;
    t = (ATerm) ATinsert(CheckATermList(v_41), k_47);
    w_41 = t;
    t = SSL_table_put(l_47, m_47, w_41);
    t = u_41;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_42 = NULL,i_42 = NULL,j_42 = NULL;
      t = term_x_5;
      t = m_0(t);
      h_42 = t;
      t = term_u_9;
      i_42 = t;
      t = term_v_9;
      j_42 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_9, term_v_9, h_42);
      t = d_4(i_42, j_42, h_42, t);
      _fail(t);
    }
  else
    {
      ATerm p_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_42 = ATgetFirst((ATermList) t);
          e_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_42;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_42 = ATgetFirst((ATermList) t);
          g_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_42;
      t = k_0(t);
      t = f_42;
      t = l_0(t);
      p_42 = t;
      t = (ATerm) ATinsert(CheckATermList(g_42), p_42);
    }
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm r_42 = NULL;
  r_42 = t;
  if(match_string(t, "-i"))
    {
      t = r_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_42;
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm s_42 = NULL,t_42 = NULL;
  s_42 = t;
  t = term_c_10;
  t_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_10, s_42);
  t = f_4(t_42, s_42, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_42);
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_e_10;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_2, p_2, q_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_42 = NULL,v_42 = NULL,b_43 = NULL,c_43 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_5;
  t = whoami_0_0(t);
  u_42 = t;
  t = term_y_5;
  b_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_f_10), u_42);
  c_43 = t;
  t = SSL_printnl(b_43, c_43);
  t = term_c_6;
  v_42 = t;
  t = SSL_exit(v_42);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_i_10;
  t = get_config_0_0(t);
  return(t);
}
ATerm a_4 (ATerm w_34, ATerm x_34, ATerm t)
{
  ATerm j_10 = t;
  int k_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(w_34, x_34);
      ;
      LocalPopChoice(k_10);
    }
  else
    {
      t = j_10;
      t = SSL_addr(w_34, x_34);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_83 (ATerm), ATerm p_83 (ATerm), ATerm t)
{
  ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL;
  e_43 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_43;
      t = o_83(t);
    }
  else
    {
      ATerm j_43 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_43 = ATgetFirst((ATermList) t);
          g_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_43;
      t = foldr_2_0(o_83, p_83, t);
      j_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_43, j_43);
      t = p_83(t);
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
  t = term_z_8;
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm r_50 = NULL,s_50 = NULL;
  if(match_cons(t, sym__2))
    {
      r_50 = ATgetArgument(t, 0);
      s_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_4(r_50, s_50, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm m_43 = NULL,n_50 = NULL,o_50 = NULL;
  t = times_0_0(t);
  o_50 = t;
  t = SSL_explode_term(o_50);
  if(match_cons(t, sym__2))
    {
      ATerm l_10 = ATgetArgument(t, 0);
      n_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_50;
  t = foldr_2_0(r_2, s_2, t);
  m_43 = t;
  t = SSL_TicksToSeconds(m_43);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL;
  x_43 = t;
  if(match_cons(t, sym__2))
    {
      y_43 = ATgetArgument(t, 0);
      z_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_10 = t;
    int p_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_43;
        if((y_43 != t))
          {
            _fail(t);
          }
        t = x_43;
        ;
        LocalPopChoice(p_10);
      }
    else
      {
        t = o_10;
        t = (ATerm) ATmakeAppl(sym__2, y_43, z_43);
        {
          ATerm q_10 = t;
          int r_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_43, z_43);
              ;
              LocalPopChoice(r_10);
            }
          else
            {
              t = q_10;
              t = SSL_gtr(y_43, z_43);
            }
          t = (ATerm) ATmakeAppl(sym__2, y_43, z_43);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm s_91 (ATerm), ATerm t)
{
  ATerm d_44 = NULL;
  d_44 = t;
  {
    ATerm s_10 = t;
    int t_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_44 = NULL;
        t = term_u_8;
        t = get_config_0_0(t);
        j_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_44, term_c_6);
        t = geq_0_0(t);
        t = d_44;
        t = s_91(t);
        ;
        LocalPopChoice(t_10);
      }
    else
      {
        t = s_10;
        t = d_44;
      }
  }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm l_44 = NULL,m_44 = NULL,o_44 = NULL,p_44 = NULL;
  t = run_time_0_0(t);
  l_44 = t;
  t = term_x_5;
  t = whoami_0_0(t);
  m_44 = t;
  t = term_y_5;
  o_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_10), l_44), term_u_10), m_44);
  p_44 = t;
  t = SSL_printnl(o_44, p_44);
  t = (ATerm) ATmakeAppl(sym__2, term_y_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_10), l_44), term_u_10), m_44));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(t_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm q_44 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_8;
  q_44 = t;
  t = SSL_exit(q_44);
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm y_44 = NULL,z_44 = NULL;
  z_44 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = z_44;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          y_44 = ATgetArgument(t, 0);
          {
            ATerm e_51 = NULL,r_11 = NULL;
            t = SSLgetAnnotations(z_44);
            e_51 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, y_44);
            r_11 = t;
            t = SSLsetAnnotations(r_11, e_51);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = z_44;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm i_94 (ATerm), ATerm t)
{
  ATerm x_10 = t;
  int a_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_11);
    }
  else
    {
      t = x_10;
      t = fetch_1_0(u_2, t);
    }
  t = i_94(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm c_45 = NULL,d_45 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_45 = ATgetFirst((ATermList) t);
      d_45 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_45 = NULL,i_45 = NULL;
        ATerm v_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(h_45)), not_null(i_45));
          return(t);
        }
        t = d_45;
        t = j_0(t);
        if(((h_45 != NULL) && (h_45 != t)))
          _fail(t);
        else
          h_45 = t;
        t = c_45;
        t = i_0(t);
        if(((i_45 != NULL) && (i_45 != t)))
          _fail(t);
        else
          i_45 = t;
        t = d_45;
        t = reverse_acc_2_0(i_0, v_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_5;
      t = j_0(t);
    }
  return(t);
}
ATerm c_4 (ATerm c_49, ATerm d_49, ATerm t)
{
  t = SSL_table_get(c_49, d_49);
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm m_45 = NULL,n_45 = NULL,o_45 = NULL,t_11 = NULL;
  o_45 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_45);
  m_45 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, n_45);
  t_11 = t;
  t = SSLsetAnnotations(t_11, m_45);
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm q_45 = NULL;
  q_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_45), term_c_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm k_45 = NULL,l_45 = NULL;
  ATerm d_11 = t;
  int e_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_10;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_11);
    }
  else
    {
      t = d_11;
      t = fetch_1_0(w_2, t);
    }
  t = term_f_11;
  t = echo_0_0(t);
  t = term_u_9;
  k_45 = t;
  t = term_v_9;
  l_45 = t;
  t = term_h_11;
  t = c_4(k_45, l_45, t);
  t = reverse_acc_2_0(_id, z_2, t);
  t = map_1_0(d_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL;
  s_45 = t;
  {
    ATerm i_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_45;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm l_11 = ATgetFirst((ATermList) t);
                ATerm n_11 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_45;
          }
        ;
        LocalPopChoice(k_11);
      }
    else
      {
        t = i_11;
        t = (ATerm) ATinsert(ATempty, s_45);
      }
    t_45 = t;
    t = term_b_7;
    u_45 = t;
    t = SSL_printnl(u_45, t_45);
    t = s_45;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_i_10;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm y_45 = NULL,z_45 = NULL;
  t = term_o_11;
  y_45 = t;
  t = term_x_5;
  z_45 = t;
  t = term_q_11;
  t = f_4(y_45, z_45, t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_s_11;
  return(t);
}
ATerm p_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL;
  t = term_o_11;
  c_46 = t;
  t = term_x_5;
  d_46 = t;
  t = term_q_11;
  t = f_4(c_46, d_46, t);
  t = term_w_11;
  a_46 = t;
  t = term_x_5;
  b_46 = t;
  t = term_y_11;
  t = f_4(a_46, b_46, t);
  t = term_c_12;
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_e_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_3, n_3, o_3, t);
      ;
      LocalPopChoice(k_12);
    }
  else
    {
      t = j_12;
      t = Option_3_0(p_3, r_3, b_4, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm l_96 (ATerm), ATerm t)
{
  ATerm i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,n_46 = NULL,o_46 = NULL,x_11 = NULL;
  i_46 = t;
  {
    ATerm l_12 = t;
    int m_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_12;
        t = l_96(t);
        ;
        LocalPopChoice(m_12);
      }
    else
      {
        t = l_12;
      }
    t = i_46;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_46 = ATgetFirst((ATermList) t);
        l_46 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(i_46);
    j_46 = t;
    t = term_i_10;
    o_46 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_i_10, k_46);
    t = f_4(o_46, k_46, t);
    t = l_46;
    {
      ATerm d_47 (ATerm t)
      {
        ATerm q_12 = t;
        int r_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_12 = t;
            int t_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_46 = NULL;
                r_46 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = r_46;
                ;
                LocalPopChoice(t_12);
              }
            else
              {
                t = s_12;
                t = l_96(t);
                t = Cons_2_0(_id, d_47, t);
              }
            ;
            LocalPopChoice(r_12);
          }
        else
          {
            t = q_12;
            {
              ATerm z_46 = NULL,a_47 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_46 = ATgetFirst((ATermList) t);
                  a_47 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(a_47), (ATerm) ATmakeAppl(sym_Undefined_1, z_46));
            }
          }
        return(t);
      }
      t = d_47(t);
      n_46 = t;
      t = (ATerm) ATinsert(CheckATermList(n_46), (ATerm) ATmakeAppl(sym_Program_1, k_46));
      x_11 = t;
      t = SSLsetAnnotations(x_11, j_46);
    }
  }
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm t_47 = NULL;
  t_47 = t;
  if(match_string(t, "--help"))
    {
      t = t_47;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_47;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_47;
        }
    }
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm u_47 = NULL,v_47 = NULL;
  t = term_b_11;
  u_47 = t;
  t = term_x_5;
  v_47 = t;
  t = term_u_12;
  t = f_4(u_47, v_47, t);
  t = term_v_12;
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_w_12;
  return(t);
}
ATerm u_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm k_96 (ATerm), ATerm t)
{
  ATerm j_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL,s_47 = NULL;
  o_47 = t;
  t = term_u_9;
  q_47 = t;
  t = term_v_9;
  r_47 = t;
  t = (ATerm) ATempty;
  s_47 = t;
  t = SSL_table_put(q_47, r_47, s_47);
  t = o_47;
  {
    ATerm e_4 (ATerm t)
    {
      ATerm x_12 = t;
      int y_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_96(t);
          ;
          LocalPopChoice(y_12);
        }
      else
        {
          t = x_12;
          {
            ATerm z_12 = t;
            int a_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(i_4, m_4, o_4, t);
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
    t = parse_options_p__1_0(e_4, t);
    {
      ATerm b_13 = t;
      int d_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_48 = NULL;
          c_48 = t;
          {
            ATerm e_13 = t;
            int f_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_51 = NULL;
                t = c_48;
                {
                  ATerm i_13 = t;
                  int j_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_b_11;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(j_13);
                    }
                  else
                    {
                      t = i_13;
                      t = fetch_1_0(u_4, t);
                    }
                  t = c_48;
                  t = default_system_usage_0_0(t);
                  t = term_z_8;
                  l_51 = t;
                  t = SSL_exit(l_51);
                }
                ;
                LocalPopChoice(f_13);
              }
            else
              {
                t = e_13;
                {
                  ATerm p_51 = NULL;
                  t = term_o_11;
                  t = get_config_0_0(t);
                  t = c_48;
                  t = default_system_about_0_0(t);
                  t = term_z_8;
                  p_51 = t;
                  t = SSL_exit(p_51);
                }
              }
          }
          ;
          LocalPopChoice(d_13);
        }
      else
        {
          t = b_13;
          {
            ATerm k_13 = t;
            int l_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_48 = NULL,e_48 = NULL,f_48 = NULL;
                ATerm w_4 (ATerm t)
                {
                  ATerm g_48 = NULL,h_48 = NULL,i_48 = NULL,d_12 = NULL;
                  i_48 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      h_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(i_48);
                  g_48 = t;
                  t = h_48;
                  if(((j_47 != NULL) && (j_47 != t)))
                    _fail(t);
                  else
                    j_47 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, h_48);
                  d_12 = t;
                  t = SSLsetAnnotations(d_12, g_48);
                  return(t);
                }
                t = fetch_1_0(w_4, t);
                t = term_y_5;
                e_48 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_47)), term_m_13);
                f_48 = t;
                t = SSL_printnl(e_48, f_48);
                t = (ATerm) ATmakeAppl(sym__2, term_y_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_47)), term_m_13));
                t = default_system_usage_0_0(t);
                t = term_c_6;
                d_48 = t;
                t = SSL_exit(d_48);
                ;
                LocalPopChoice(l_13);
              }
            else
              {
                t = k_13;
              }
          }
        }
      n_47 = t;
      t = term_u_9;
      p_47 = t;
      t = SSL_table_destroy(p_47);
      t = n_47;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm k_94 (ATerm), ATerm l_94 (ATerm), ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm t)
{
  ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL;
  t = parse_options_1_0(k_94, t);
  n_48 = t;
  t = term_n_13;
  q_48 = t;
  t = SSL_table_create(q_48);
  t = term_n_13;
  o_48 = t;
  t = term_o_13;
  p_48 = t;
  t = SSL_table_put(o_48, p_48, n_48);
  t = n_48;
  t = m_94(t);
  {
    ATerm p_13 = t;
    int q_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(l_94, t);
        ;
        LocalPopChoice(q_13);
      }
    else
      {
        t = p_13;
        {
          ATerm r_13 = t;
          int t_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_94(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(t_13);
            }
          else
            {
              t = r_13;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm y_4 (ATerm t)
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
  ATerm r_48 = NULL,s_48 = NULL;
  t = term_u_13;
  r_48 = t;
  t = term_x_5;
  s_48 = t;
  t = term_v_13;
  t = f_4(r_48, s_48, t);
  t = term_w_13;
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL;
  t_48 = t;
  t = term_i_10;
  t = get_config_0_0(t);
  u_48 = t;
  t = term_y_5;
  v_48 = t;
  t = (ATerm) ATinsert(ATempty, u_48);
  w_48 = t;
  t = SSL_printnl(v_48, w_48);
  t = t_48;
  return(t);
}
ATerm iowrap_3_0 (ATerm t_93 (ATerm), ATerm u_93 (ATerm), ATerm v_93 (ATerm), ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    ATerm a_14 = t;
    int b_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_93(t);
        ;
        LocalPopChoice(b_14);
      }
    else
      {
        t = a_14;
        {
          ATerm c_14 = t;
          int d_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(d_14);
            }
          else
            {
              t = c_14;
              {
                ATerm e_14 = t;
                int f_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(f_14);
                  }
                else
                  {
                    t = e_14;
                    {
                      ATerm g_14 = t;
                      int h_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(m_5, n_5, o_5, t);
                          ;
                          LocalPopChoice(h_14);
                        }
                      else
                        {
                          t = g_14;
                          {
                            ATerm i_14 = t;
                            int j_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(j_14);
                              }
                            else
                              {
                                t = i_14;
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
    ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL;
    y_48 = t;
    {
      ATerm k_14 = t;
      int l_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((x_48 != NULL) && (x_48 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  x_48 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(q_5, t);
          ;
          LocalPopChoice(l_14);
        }
      else
        {
          t = k_14;
          t = term_m_14;
          x_48 = t;
        }
      t = not_null(x_48);
      t = ReadFromFile_0_0(t);
      z_48 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_48, z_48);
      t = apply_strategy_1_0(t_93, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(x_4, v_93, y_4, l_5, t);
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,i_12 = NULL;
  i_49 = t;
  if(match_cons(t, sym__2))
    {
      f_49 = ATgetArgument(t, 0);
      g_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_49);
  e_49 = t;
  t = g_49;
  {
    ATerm o_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_49 = NULL,s_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL,h_12 = NULL,g_12 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            w_49 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_49);
        s_51 = t;
        t = w_49;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_51 = ATgetFirst((ATermList) t);
            w_51 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_49);
        u_51 = t;
        t = w_51;
        t = Cons_2_0(s_5, v_5, t);
        x_51 = t;
        t = (ATerm) ATinsert(CheckATermList(x_51), v_51);
        g_12 = t;
        t = SSLsetAnnotations(g_12, u_51);
        y_51 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, y_51);
        h_12 = t;
        t = SSLsetAnnotations(h_12, s_51);
        ;
        LocalPopChoice(p_14);
      }
    else
      {
        t = o_14;
        t = debug_1_0(w_5, t);
      }
    h_49 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_49, h_49);
    i_12 = t;
    t = SSLsetAnnotations(i_12, e_49);
  }
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm z_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL,f_12 = NULL;
  c_52 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      a_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_52);
  z_51 = t;
  t = a_52;
  t = map_1_0(strategy_definition_0_0, t);
  b_52 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, b_52);
  f_12 = t;
  t = SSLsetAnnotations(f_12, z_51);
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
  t = term_q_14;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(r_5, _fail, default_usage_0_0, t);
  return(t);
}

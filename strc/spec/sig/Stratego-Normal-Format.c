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
ATerm term_z_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_q_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_d_12;
ATerm term_b_12;
ATerm term_x_11;
ATerm term_v_11;
ATerm term_r_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_z_10;
ATerm term_w_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_e_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_v_8;
ATerm term_q_8;
ATerm term_g_8;
ATerm term_z_7;
ATerm term_v_7;
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
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym__2, term_v_8, term_c_9);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_9);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym__2, term_h_9, term_w_5);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
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
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym__2, term_v_9, term_w_9);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym__2, term_r_11, term_w_5);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym__2, term_b_12, term_w_5);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym__2, term_c_11, term_w_5);
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
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym__2, term_v_13, term_w_5);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
}
ATerm default_usage_0_0 (ATerm);
ATerm debug_1_0 (ATerm b_90 (ATerm), ATerm);
ATerm list_1_0 (ATerm k_77 (ATerm), ATerm);
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
ATerm map_1_0 (ATerm g_77 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm o_56 (ATerm), ATerm p_56 (ATerm), ATerm);
ATerm t_3 (ATerm s_37, ATerm t_37, ATerm);
ATerm u_3 (ATerm g_41, ATerm h_41, ATerm);
ATerm w_3 (ATerm d_90 (ATerm), ATerm t_395, ATerm k_41, ATerm);
ATerm v_3 (ATerm c_41, ATerm d_41, ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm f_93 (ATerm), ATerm);
ATerm c_36 (ATerm v_35, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm x_3 (ATerm i_41, ATerm);
ATerm y_3 (ATerm u_37, ATerm v_37, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm n_37 (ATerm m_36, ATerm);
ATerm o_37 (ATerm q_36, ATerm r_36, ATerm s_36, ATerm);
ATerm p_37 (ATerm a_37, ATerm b_37, ATerm c_37, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm i_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm q_77 (ATerm), ATerm);
ATerm s_3 (ATerm i_32, ATerm j_32, ATerm);
ATerm k_1 (ATerm);
ATerm m_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm o_91 (ATerm), ATerm);
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
ATerm e_4 (ATerm j_42, ATerm k_42, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm c_4 (ATerm h_47, ATerm i_47, ATerm g_47, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm z_3 (ATerm s_34, ATerm t_34, ATerm);
ATerm foldr_2_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm n_91 (ATerm), ATerm);
ATerm t_2 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm u_2 (ATerm);
ATerm need_help_1_0 (ATerm d_94 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm b_4 (ATerm y_48, ATerm z_48, ATerm);
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
ATerm a_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm g_96 (ATerm), ATerm);
ATerm h_4 (ATerm);
ATerm l_4 (ATerm);
ATerm n_4 (ATerm);
ATerm t_4 (ATerm);
ATerm parse_options_1_0 (ATerm f_96 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm f_94 (ATerm), ATerm g_94 (ATerm), ATerm h_94 (ATerm), ATerm i_94 (ATerm), ATerm);
ATerm x_4 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm iowrap_3_0 (ATerm o_93 (ATerm), ATerm p_93 (ATerm), ATerm q_93 (ATerm), ATerm);
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
  ATerm a_0 = NULL,e_0 = NULL,f_0 = NULL,n_0 = NULL,o_0 = NULL;
  a_0 = t;
  t = term_w_5;
  t = whoami_0_0(t);
  e_0 = t;
  t = term_x_5;
  n_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_6), e_0), term_z_5);
  o_0 = t;
  t = SSL_printnl(n_0, o_0);
  t = term_b_6;
  f_0 = t;
  t = SSL_exit(f_0);
  t = a_0;
  return(t);
}
ATerm debug_1_0 (ATerm b_90 (ATerm), ATerm t)
{
  ATerm s_0 = NULL,x_0 = NULL,c_1 = NULL,d_1 = NULL;
  s_0 = t;
  t = b_90(t);
  x_0 = t;
  t = term_x_5;
  c_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_0), x_0);
  d_1 = t;
  t = SSL_printnl(c_1, d_1);
  t = s_0;
  return(t);
}
ATerm list_1_0 (ATerm k_77 (ATerm), ATerm t)
{
  t = map_1_0(k_77, t);
  return(t);
}
ATerm b_0 (ATerm t)
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
                                  y_5 = ATgetArgument(t, 1);
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
                                    t = y_5;
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
                                      y_5 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(s_5);
                                  j_4 = t;
                                  t = SSL_is_string(t_5);
                                  p_4 = t;
                                  t = y_5;
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
      LocalPopChoice(e_6);
    }
  else
    {
      t = d_6;
      t = debug_1_0(b_0, t);
    }
  return(t);
}
ATerm c_0 (ATerm t)
{
  ATerm r_19 = NULL;
  r_19 = t;
  t = SSL_is_string(r_19);
  return(t);
}
ATerm q_0 (ATerm t)
{
  ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL,d_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,k_24 = NULL,m_24 = NULL,i_5 = NULL;
  m_24 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      a_24 = ATgetArgument(t, 0);
      b_24 = ATgetArgument(t, 1);
      d_24 = ATgetArgument(t, 2);
      f_24 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_24);
  z_23 = t;
  t = SSL_is_string(a_24);
  g_24 = t;
  t = b_24;
  t = map_1_0(t_0, t);
  h_24 = t;
  t = d_24;
  t = map_1_0(u_0, t);
  i_24 = t;
  t = f_24;
  t = strategy_expression_0_0(t);
  k_24 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, g_24, h_24, i_24, k_24);
  i_5 = t;
  t = SSLsetAnnotations(i_5, z_23);
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,k_26 = NULL,m_26 = NULL,n_26 = NULL,f_5 = NULL,e_5 = NULL;
  n_26 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      a_26 = ATgetArgument(t, 0);
      b_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_26);
  z_25 = t;
  t = SSL_is_string(a_26);
  c_26 = t;
  t = b_26;
  if(match_cons(t, sym_FunType_2))
    {
      h_26 = ATgetArgument(t, 0);
      i_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_26);
  g_26 = t;
  t = h_26;
  t = list_1_0(_id, t);
  k_26 = t;
  t = (ATerm) ATmakeAppl(sym_FunType_2, k_26, i_26);
  e_5 = t;
  t = SSLsetAnnotations(e_5, g_26);
  m_26 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, c_26, m_26);
  f_5 = t;
  t = SSLsetAnnotations(f_5, z_25);
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,y_26 = NULL,j_27 = NULL,k_27 = NULL,h_5 = NULL,g_5 = NULL;
  k_27 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      r_26 = ATgetArgument(t, 0);
      u_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_27);
  q_26 = t;
  t = SSL_is_string(r_26);
  v_26 = t;
  t = u_26;
  if(match_cons(t, sym_ConstType_1))
    {
      y_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_26);
  w_26 = t;
  t = (ATerm) ATmakeAppl(sym_ConstType_1, y_26);
  g_5 = t;
  t = SSLsetAnnotations(g_5, w_26);
  j_27 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, v_26, j_27);
  h_5 = t;
  t = SSLsetAnnotations(h_5, q_26);
  return(t);
}
ATerm v_0 (ATerm t)
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
      ATerm l_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL;
      o_28 = t;
      if(match_cons(t, sym_Id_0))
        {
          t = o_28;
        }
      else
        {
          if(match_cons(t, sym_Fail_0))
            {
              t = o_28;
            }
          else
            {
              if(match_cons(t, sym_Not_1))
                {
                  p_28 = ATgetArgument(t, 0);
                  {
                    ATerm h_7 = NULL,j_7 = NULL,x_2 = NULL;
                    t = SSLgetAnnotations(o_28);
                    h_7 = t;
                    t = p_28;
                    t = strategy_expression_0_0(t);
                    j_7 = t;
                    t = (ATerm) ATmakeAppl(sym_Not_1, j_7);
                    x_2 = t;
                    t = SSLsetAnnotations(x_2, h_7);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Test_1))
                    {
                      p_28 = ATgetArgument(t, 0);
                      {
                        ATerm p_7 = NULL,r_7 = NULL,y_2 = NULL;
                        t = SSLgetAnnotations(o_28);
                        p_7 = t;
                        t = p_28;
                        t = strategy_expression_0_0(t);
                        r_7 = t;
                        t = (ATerm) ATmakeAppl(sym_Test_1, r_7);
                        y_2 = t;
                        t = SSLsetAnnotations(y_2, p_7);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Seq_2))
                        {
                          p_28 = ATgetArgument(t, 0);
                          q_28 = ATgetArgument(t, 1);
                          {
                            ATerm y_7 = NULL,b_8 = NULL,c_8 = NULL,a_3 = NULL;
                            t = SSLgetAnnotations(o_28);
                            y_7 = t;
                            t = p_28;
                            t = strategy_expression_0_0(t);
                            b_8 = t;
                            t = q_28;
                            t = strategy_expression_0_0(t);
                            c_8 = t;
                            t = (ATerm) ATmakeAppl(sym_Seq_2, b_8, c_8);
                            a_3 = t;
                            t = SSLsetAnnotations(a_3, y_7);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Choice_2))
                            {
                              p_28 = ATgetArgument(t, 0);
                              q_28 = ATgetArgument(t, 1);
                              {
                                ATerm k_8 = NULL,n_8 = NULL,o_8 = NULL,b_3 = NULL;
                                t = SSLgetAnnotations(o_28);
                                k_8 = t;
                                t = p_28;
                                t = strategy_expression_0_0(t);
                                n_8 = t;
                                t = q_28;
                                t = strategy_expression_0_0(t);
                                o_8 = t;
                                t = (ATerm) ATmakeAppl(sym_Choice_2, n_8, o_8);
                                b_3 = t;
                                t = SSLsetAnnotations(b_3, k_8);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_LChoice_2))
                                {
                                  p_28 = ATgetArgument(t, 0);
                                  q_28 = ATgetArgument(t, 1);
                                  {
                                    ATerm w_8 = NULL,z_8 = NULL,a_9 = NULL,e_3 = NULL;
                                    t = SSLgetAnnotations(o_28);
                                    w_8 = t;
                                    t = p_28;
                                    t = strategy_expression_0_0(t);
                                    z_8 = t;
                                    t = q_28;
                                    t = strategy_expression_0_0(t);
                                    a_9 = t;
                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, z_8, a_9);
                                    e_3 = t;
                                    t = SSLsetAnnotations(e_3, w_8);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      p_28 = ATgetArgument(t, 0);
                                      q_28 = ATgetArgument(t, 1);
                                      l_28 = ATgetArgument(t, 2);
                                      {
                                        ATerm j_9 = NULL,o_9 = NULL,p_9 = NULL,r_9 = NULL,f_3 = NULL;
                                        t = SSLgetAnnotations(o_28);
                                        j_9 = t;
                                        t = p_28;
                                        t = strategy_expression_0_0(t);
                                        o_9 = t;
                                        t = q_28;
                                        t = strategy_expression_0_0(t);
                                        p_9 = t;
                                        t = l_28;
                                        t = strategy_expression_0_0(t);
                                        r_9 = t;
                                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, o_9, p_9, r_9);
                                        f_3 = t;
                                        t = SSLsetAnnotations(f_3, j_9);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_GChoice_2))
                                        {
                                          p_28 = ATgetArgument(t, 0);
                                          q_28 = ATgetArgument(t, 1);
                                          {
                                            ATerm c_10 = NULL,f_10 = NULL,g_10 = NULL,j_3 = NULL;
                                            t = SSLgetAnnotations(o_28);
                                            c_10 = t;
                                            t = p_28;
                                            t = strategy_expression_0_0(t);
                                            f_10 = t;
                                            t = q_28;
                                            t = strategy_expression_0_0(t);
                                            g_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_GChoice_2, f_10, g_10);
                                            j_3 = t;
                                            t = SSLsetAnnotations(j_3, c_10);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LGChoice_2))
                                            {
                                              p_28 = ATgetArgument(t, 0);
                                              q_28 = ATgetArgument(t, 1);
                                              {
                                                ATerm u_10 = NULL,x_10 = NULL,y_10 = NULL,q_3 = NULL;
                                                t = SSLgetAnnotations(o_28);
                                                u_10 = t;
                                                t = p_28;
                                                t = strategy_expression_0_0(t);
                                                x_10 = t;
                                                t = q_28;
                                                t = strategy_expression_0_0(t);
                                                y_10 = t;
                                                t = (ATerm) ATmakeAppl(sym_LGChoice_2, x_10, y_10);
                                                q_3 = t;
                                                t = SSLsetAnnotations(q_3, u_10);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_CallT_3))
                                                {
                                                  p_28 = ATgetArgument(t, 0);
                                                  q_28 = ATgetArgument(t, 1);
                                                  l_28 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm i_11 = NULL,o_11 = NULL,t_11 = NULL,u_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,i_4 = NULL,g_4 = NULL;
                                                    t = SSLgetAnnotations(o_28);
                                                    i_11 = t;
                                                    t = p_28;
                                                    if(match_cons(t, sym_SVar_1))
                                                      {
                                                        y_11 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSLgetAnnotations(p_28);
                                                    u_11 = t;
                                                    t = y_11;
                                                    {
                                                      ATerm i_6 = t;
                                                      int j_6 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = SSL_is_string(y_11);
                                                          ;
                                                          LocalPopChoice(j_6);
                                                        }
                                                      else
                                                        {
                                                          t = i_6;
                                                          {
                                                            ATerm m_12 = NULL,n_12 = NULL,b_13 = NULL,f_13 = NULL,g_13 = NULL,f_4 = NULL;
                                                            if(match_cons(t, sym_Mod_2))
                                                              {
                                                                m_12 = ATgetArgument(t, 0);
                                                                n_12 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = SSLgetAnnotations(y_11);
                                                            b_13 = t;
                                                            t = SSL_is_string(m_12);
                                                            f_13 = t;
                                                            t = SSL_is_string(n_12);
                                                            g_13 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Mod_2, f_13, g_13);
                                                            f_4 = t;
                                                            t = SSLsetAnnotations(f_4, b_13);
                                                          }
                                                        }
                                                      z_11 = t;
                                                      t = (ATerm) ATmakeAppl(sym_SVar_1, z_11);
                                                      g_4 = t;
                                                      t = SSLsetAnnotations(g_4, u_11);
                                                      a_12 = t;
                                                      t = q_28;
                                                      t = map_1_0(strategy_expression_0_0, t);
                                                      o_11 = t;
                                                      t = l_28;
                                                      t = map_1_0(term_expression_0_0, t);
                                                      t_11 = t;
                                                      t = (ATerm) ATmakeAppl(sym_CallT_3, a_12, o_11, t_11);
                                                      i_4 = t;
                                                      t = SSLsetAnnotations(i_4, i_11);
                                                    }
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Rec_2))
                                                    {
                                                      p_28 = ATgetArgument(t, 0);
                                                      q_28 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm r_13 = NULL,x_13 = NULL,y_13 = NULL,k_4 = NULL;
                                                        t = SSLgetAnnotations(o_28);
                                                        r_13 = t;
                                                        t = SSL_is_string(p_28);
                                                        x_13 = t;
                                                        t = q_28;
                                                        t = strategy_expression_0_0(t);
                                                        y_13 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Rec_2, x_13, y_13);
                                                        k_4 = t;
                                                        t = SSLsetAnnotations(k_4, r_13);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Path_2))
                                                        {
                                                          p_28 = ATgetArgument(t, 0);
                                                          q_28 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm m_14 = NULL,s_14 = NULL,w_14 = NULL,m_4 = NULL;
                                                            t = SSLgetAnnotations(o_28);
                                                            m_14 = t;
                                                            t = SSL_is_int(p_28);
                                                            s_14 = t;
                                                            t = q_28;
                                                            t = strategy_expression_0_0(t);
                                                            w_14 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Path_2, s_14, w_14);
                                                            m_4 = t;
                                                            t = SSLsetAnnotations(m_4, m_14);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              p_28 = ATgetArgument(t, 0);
                                                              q_28 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm g_15 = NULL,j_15 = NULL,k_15 = NULL,o_4 = NULL;
                                                                t = SSLgetAnnotations(o_28);
                                                                g_15 = t;
                                                                t = SSL_is_string(p_28);
                                                                j_15 = t;
                                                                t = q_28;
                                                                t = map_1_0(strategy_expression_0_0, t);
                                                                k_15 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Cong_2, j_15, k_15);
                                                                o_4 = t;
                                                                t = SSLsetAnnotations(o_4, g_15);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_One_1))
                                                                {
                                                                  p_28 = ATgetArgument(t, 0);
                                                                  {
                                                                    ATerm w_15 = NULL,c_16 = NULL,r_4 = NULL;
                                                                    t = SSLgetAnnotations(o_28);
                                                                    w_15 = t;
                                                                    t = p_28;
                                                                    t = strategy_expression_0_0(t);
                                                                    c_16 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_One_1, c_16);
                                                                    r_4 = t;
                                                                    t = SSLsetAnnotations(r_4, w_15);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Some_1))
                                                                    {
                                                                      p_28 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm o_16 = NULL,q_16 = NULL,s_4 = NULL;
                                                                        t = SSLgetAnnotations(o_28);
                                                                        o_16 = t;
                                                                        t = p_28;
                                                                        t = strategy_expression_0_0(t);
                                                                        q_16 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Some_1, q_16);
                                                                        s_4 = t;
                                                                        t = SSLsetAnnotations(s_4, o_16);
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_All_1))
                                                                        {
                                                                          p_28 = ATgetArgument(t, 0);
                                                                          {
                                                                            ATerm y_16 = NULL,a_17 = NULL,u_4 = NULL;
                                                                            t = SSLgetAnnotations(o_28);
                                                                            y_16 = t;
                                                                            t = p_28;
                                                                            t = strategy_expression_0_0(t);
                                                                            a_17 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_All_1, a_17);
                                                                            u_4 = t;
                                                                            t = SSLsetAnnotations(u_4, y_16);
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Thread_1))
                                                                            {
                                                                              p_28 = ATgetArgument(t, 0);
                                                                              {
                                                                                ATerm p_17 = NULL,s_17 = NULL,y_4 = NULL;
                                                                                t = SSLgetAnnotations(o_28);
                                                                                p_17 = t;
                                                                                t = p_28;
                                                                                t = strategy_expression_0_0(t);
                                                                                s_17 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Thread_1, s_17);
                                                                                y_4 = t;
                                                                                t = SSLsetAnnotations(y_4, p_17);
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Match_1))
                                                                                {
                                                                                  p_28 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm d_18 = NULL,f_18 = NULL,z_4 = NULL;
                                                                                    t = SSLgetAnnotations(o_28);
                                                                                    d_18 = t;
                                                                                    t = p_28;
                                                                                    t = term_expression_0_0(t);
                                                                                    f_18 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, f_18);
                                                                                    z_4 = t;
                                                                                    t = SSLsetAnnotations(z_4, d_18);
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Build_1))
                                                                                    {
                                                                                      p_28 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm s_18 = NULL,u_18 = NULL,a_5 = NULL;
                                                                                        t = SSLgetAnnotations(o_28);
                                                                                        s_18 = t;
                                                                                        t = p_28;
                                                                                        t = term_expression_0_0(t);
                                                                                        u_18 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, u_18);
                                                                                        a_5 = t;
                                                                                        t = SSLsetAnnotations(a_5, s_18);
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Scope_2))
                                                                                        {
                                                                                          p_28 = ATgetArgument(t, 0);
                                                                                          q_28 = ATgetArgument(t, 1);
                                                                                          {
                                                                                            ATerm e_19 = NULL,m_19 = NULL,p_19 = NULL,b_5 = NULL;
                                                                                            t = SSLgetAnnotations(o_28);
                                                                                            e_19 = t;
                                                                                            t = p_28;
                                                                                            t = map_1_0(c_0, t);
                                                                                            m_19 = t;
                                                                                            t = q_28;
                                                                                            t = strategy_expression_0_0(t);
                                                                                            p_19 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Scope_2, m_19, p_19);
                                                                                            b_5 = t;
                                                                                            t = SSLsetAnnotations(b_5, e_19);
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_Where_1))
                                                                                            {
                                                                                              p_28 = ATgetArgument(t, 0);
                                                                                              {
                                                                                                ATerm d_20 = NULL,h_20 = NULL,c_5 = NULL;
                                                                                                t = SSLgetAnnotations(o_28);
                                                                                                d_20 = t;
                                                                                                t = p_28;
                                                                                                t = strategy_expression_0_0(t);
                                                                                                h_20 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Where_1, h_20);
                                                                                                c_5 = t;
                                                                                                t = SSLsetAnnotations(c_5, d_20);
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_PrimT_3))
                                                                                                {
                                                                                                  p_28 = ATgetArgument(t, 0);
                                                                                                  q_28 = ATgetArgument(t, 1);
                                                                                                  l_28 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm u_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,d_5 = NULL;
                                                                                                    t = SSLgetAnnotations(o_28);
                                                                                                    u_20 = t;
                                                                                                    t = SSL_is_string(p_28);
                                                                                                    y_20 = t;
                                                                                                    t = q_28;
                                                                                                    t = map_1_0(strategy_expression_0_0, t);
                                                                                                    z_20 = t;
                                                                                                    t = l_28;
                                                                                                    t = map_1_0(term_expression_0_0, t);
                                                                                                    a_21 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_PrimT_3, y_20, z_20, a_21);
                                                                                                    d_5 = t;
                                                                                                    t = SSLsetAnnotations(d_5, u_20);
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  ATerm r_23 = NULL,u_23 = NULL,v_23 = NULL,j_5 = NULL;
                                                                                                  if(match_cons(t, sym_Let_2))
                                                                                                    {
                                                                                                      p_28 = ATgetArgument(t, 0);
                                                                                                      q_28 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = SSLgetAnnotations(o_28);
                                                                                                  r_23 = t;
                                                                                                  t = p_28;
                                                                                                  t = map_1_0(q_0, t);
                                                                                                  u_23 = t;
                                                                                                  t = q_28;
                                                                                                  t = strategy_expression_0_0(t);
                                                                                                  v_23 = t;
                                                                                                  t = (ATerm) ATmakeAppl(sym_Let_2, u_23, v_23);
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
      t = debug_1_0(v_0, t);
    }
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL,s_6 = NULL;
  k_30 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      h_30 = ATgetArgument(t, 0);
      i_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_30);
  g_30 = t;
  t = SSL_is_string(h_30);
  j_30 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, j_30, i_30);
  s_6 = t;
  t = SSLsetAnnotations(s_6, g_30);
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL,p_30 = NULL,r_30 = NULL,t_6 = NULL;
  r_30 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      m_30 = ATgetArgument(t, 0);
      n_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_30);
  l_30 = t;
  t = SSL_is_string(m_30);
  p_30 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, p_30, n_30);
  t_6 = t;
  t = SSLsetAnnotations(t_6, l_30);
  return(t);
}
ATerm a_1 (ATerm t)
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
      ATerm g_32 = NULL,h_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL,k_28 = NULL,z_28 = NULL,g_29 = NULL,h_29 = NULL,j_29 = NULL,u_6 = NULL;
      g_32 = t;
      if(match_cons(t, sym_SDefT_4))
        {
          h_32 = ATgetArgument(t, 0);
          k_32 = ATgetArgument(t, 1);
          l_32 = ATgetArgument(t, 2);
          m_32 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_32);
      k_28 = t;
      t = h_32;
      {
        ATerm n_6 = t;
        int o_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_is_string(h_32);
            ;
            LocalPopChoice(o_6);
          }
        else
          {
            t = n_6;
            {
              ATerm e_30 = NULL,f_30 = NULL,q_32 = NULL,r_33 = NULL,s_33 = NULL,r_6 = NULL;
              if(match_cons(t, sym_Mod_2))
                {
                  e_30 = ATgetArgument(t, 0);
                  f_30 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(h_32);
              q_32 = t;
              t = SSL_is_string(e_30);
              r_33 = t;
              t = SSL_is_string(f_30);
              s_33 = t;
              t = (ATerm) ATmakeAppl(sym_Mod_2, r_33, s_33);
              r_6 = t;
              t = SSLsetAnnotations(r_6, q_32);
            }
          }
        z_28 = t;
        t = k_32;
        t = map_1_0(w_0, t);
        g_29 = t;
        t = l_32;
        t = map_1_0(y_0, t);
        h_29 = t;
        t = m_32;
        t = strategy_expression_0_0(t);
        j_29 = t;
        t = (ATerm) ATmakeAppl(sym_SDefT_4, z_28, g_29, h_29, j_29);
        u_6 = t;
        t = SSLsetAnnotations(u_6, k_28);
      }
      ;
      LocalPopChoice(m_6);
    }
  else
    {
      t = l_6;
      t = debug_1_0(a_1, t);
    }
  return(t);
}
ATerm map_1_0 (ATerm g_77 (ATerm), ATerm t)
{
  ATerm e_33 (ATerm t)
  {
    ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL;
    b_33 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_33;
      }
    else
      {
        ATerm i_36 = NULL,l_36 = NULL,w_37 = NULL,z_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_33 = ATgetFirst((ATermList) t);
            d_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_33);
        i_36 = t;
        t = c_33;
        t = g_77(t);
        l_36 = t;
        t = d_33;
        t = e_33(t);
        w_37 = t;
        t = (ATerm) ATinsert(CheckATermList(w_37), l_36);
        z_6 = t;
        t = SSLsetAnnotations(z_6, i_36);
      }
    return(t);
  }
  t = e_33(t);
  return(t);
}
ATerm Cons_2_0 (ATerm o_56 (ATerm), ATerm p_56 (ATerm), ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL,b_7 = NULL;
  l_33 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_33 = ATgetFirst((ATermList) t);
      i_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_33);
  g_33 = t;
  t = h_33;
  t = o_56(t);
  j_33 = t;
  t = i_33;
  t = p_56(t);
  k_33 = t;
  t = (ATerm) ATinsert(CheckATermList(k_33), j_33);
  b_7 = t;
  t = SSLsetAnnotations(b_7, g_33);
  return(t);
}
ATerm t_3 (ATerm s_37, ATerm t_37, ATerm t)
{
  ATerm m_33 = NULL;
  t = SSL_fputc(s_37, t_37);
  m_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_33);
  return(t);
}
ATerm u_3 (ATerm g_41, ATerm h_41, ATerm t)
{
  ATerm n_33 = NULL;
  t = SSL_write_term_to_stream_text(g_41, h_41);
  n_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_33);
  return(t);
}
ATerm w_3 (ATerm d_90 (ATerm), ATerm t_395, ATerm k_41, ATerm t)
{
  ATerm o_33 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_395, term_p_6);
  t = open_stream_0_0(t);
  o_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_33, k_41);
  t = d_90(t);
  t = fclose_0_0(t);
  t = k_41;
  return(t);
}
ATerm v_3 (ATerm c_41, ATerm d_41, ATerm t)
{
  ATerm p_33 = NULL;
  t = SSL_write_term_to_stream_baf(c_41, d_41);
  p_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_33);
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
  ATerm j_41 = NULL,o_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_6 = ATgetArgument(t, 0);
      if(match_cons(q_6, sym_Stream_1))
        {
          j_41 = ATgetArgument(q_6, 0);
        }
      else
        _fail(t);
      o_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_3(j_41, o_41, t);
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm o_43 = NULL,p_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_6 = ATgetArgument(t, 0);
      if(match_cons(v_6, sym_Stream_1))
        {
          b_44 = ATgetArgument(v_6, 0);
        }
      else
        _fail(t);
      c_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3(b_44, c_44, t);
  o_43 = t;
  t = term_w_6;
  p_43 = t;
  t = o_43;
  if(match_cons(t, sym_Stream_1))
    {
      a_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_w_6, o_43);
  t = t_3(p_43, a_44, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,f_35 = NULL,g_35 = NULL,e_7 = NULL,d_7 = NULL;
  u_33 = t;
  if(match_cons(t, sym__2))
    {
      b_34 = ATgetArgument(t, 0);
      c_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_33);
  a_34 = t;
  t = b_34;
  {
    ATerm x_6 = t;
    int y_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((t_33 != NULL) && (t_33 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                t_33 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(e_1, t);
        ;
        LocalPopChoice(y_6);
      }
    else
      {
        t = x_6;
        t = term_a_7;
        t_33 = t;
      }
    d_34 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_34, c_34);
    d_7 = t;
    t = SSLsetAnnotations(d_7, a_34);
    t = u_33;
    if(match_cons(t, sym__2))
      {
        w_33 = ATgetArgument(t, 0);
        x_33 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_33);
    v_33 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_33, (ATerm) ATmakeAppl(sym__2, not_null(t_33), x_33));
    e_7 = t;
    t = SSLsetAnnotations(e_7, v_33);
    z_33 = t;
    if(match_cons(t, sym__2))
      {
        f_35 = ATgetArgument(t, 0);
        g_35 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm c_7 = t;
      int f_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_39 = NULL,d_40 = NULL,i_40 = NULL,n_40 = NULL,x_40 = NULL,n_9 = NULL;
          t = SSLgetAnnotations(z_33);
          c_39 = t;
          t = f_35;
          t = fetch_1_0(f_1, t);
          d_40 = t;
          t = g_35;
          if(match_cons(t, sym__2))
            {
              n_40 = ATgetArgument(t, 0);
              x_40 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_3(g_1, n_40, x_40, t);
          i_40 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_40, i_40);
          n_9 = t;
          t = SSLsetAnnotations(n_9, c_39);
          ;
          LocalPopChoice(f_7);
        }
      else
        {
          t = c_7;
          {
            ATerm s_42 = NULL,v_42 = NULL,w_42 = NULL,c_43 = NULL,q_9 = NULL;
            t = SSLgetAnnotations(z_33);
            s_42 = t;
            t = g_35;
            if(match_cons(t, sym__2))
              {
                w_42 = ATgetArgument(t, 0);
                c_43 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = w_3(h_1, w_42, c_43, t);
            v_42 = t;
            t = (ATerm) ATmakeAppl(sym__2, f_35, v_42);
            q_9 = t;
            t = SSLsetAnnotations(q_9, s_42);
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
ATerm apply_strategy_1_0 (ATerm f_93 (ATerm), ATerm t)
{
  ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL;
  n_35 = t;
  t = dtime_0_0(t);
  t = n_35;
  t = f_93(t);
  m_35 = t;
  t = dtime_0_0(t);
  j_35 = t;
  t = m_35;
  if(match_cons(t, sym__2))
    {
      k_35 = ATgetArgument(t, 0);
      l_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_35), (ATerm) ATmakeAppl(sym_Runtime_1, j_35)), l_35);
  return(t);
}
ATerm c_36 (ATerm v_35, ATerm t)
{
  t = SSL_fclose(v_35);
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
        ATerm g_7 = t;
        int i_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_35);
            ;
            LocalPopChoice(i_7);
          }
        else
          {
            t = g_7;
            t = c_36(a_36, t);
          }
      }
    }
  else
    {
      t = c_36(a_36, t);
    }
  return(t);
}
ATerm x_3 (ATerm i_41, ATerm t)
{
  t = SSL_read_term_from_stream(i_41);
  return(t);
}
ATerm y_3 (ATerm u_37, ATerm v_37, ATerm t)
{
  ATerm d_36 = NULL;
  t = SSL_fopen(u_37, v_37);
  d_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_36);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_36 = NULL;
  t = SSL_stdin_stream();
  e_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_36);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_36 = NULL;
  t = SSL_stdout_stream();
  f_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_36);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_36 = NULL;
  t = SSL_stderr_stream();
  g_36 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_36);
  return(t);
}
ATerm n_37 (ATerm m_36, ATerm t)
{
  ATerm n_36 = NULL;
  t = SSL_explode_term(m_36);
  if(match_cons(t, sym__2))
    {
      ATerm k_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_7 = ATgetArgument(t, 1);
        if(((ATgetType(l_7) == AT_LIST) && !(ATisEmpty(l_7))))
          {
            n_36 = ATgetFirst((ATermList) l_7);
            {
              ATerm m_7 = (ATerm) ATgetNext((ATermList) l_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_36;
  if(match_cons(t, sym_stderr_0))
    {
      t = n_36;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = n_36;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_36;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm o_37 (ATerm q_36, ATerm r_36, ATerm s_36, ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL,y_36 = NULL,l_10 = NULL;
  t = SSLgetAnnotations(s_36);
  v_36 = t;
  t = q_36;
  if(match_cons(t, sym_Path_1))
    {
      y_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_36, r_36);
  l_10 = t;
  t = SSLsetAnnotations(l_10, v_36);
  if(match_cons(t, sym__2))
    {
      t_36 = ATgetArgument(t, 0);
      u_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(t_36, u_36, t);
  return(t);
}
ATerm p_37 (ATerm a_37, ATerm b_37, ATerm c_37, ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL,i_37 = NULL,m_10 = NULL;
  t = SSLgetAnnotations(c_37);
  f_37 = t;
  t = SSL_is_string(a_37);
  i_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_37, b_37);
  m_10 = t;
  t = SSLsetAnnotations(m_10, f_37);
  if(match_cons(t, sym__2))
    {
      d_37 = ATgetArgument(t, 0);
      e_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(d_37, e_37, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_7 = ATgetArgument(t, 0);
      ATerm o_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  k_37 = t;
  if(match_cons(t, sym__2))
    {
      l_37 = ATgetArgument(t, 0);
      m_37 = ATgetArgument(t, 1);
      {
        ATerm q_7 = t;
        int s_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_37(k_37, t);
            ;
            LocalPopChoice(s_7);
          }
        else
          {
            t = q_7;
            {
              ATerm t_7 = t;
              int u_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_37(l_37, m_37, k_37, t);
                  ;
                  LocalPopChoice(u_7);
                }
              else
                {
                  t = t_7;
                  t = p_37(l_37, m_37, k_37, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_37(k_37, t);
    }
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_v_7;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_37 = NULL,r_37 = NULL,y_37 = NULL;
  ATerm w_7 = t;
  int x_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_37 = NULL;
      z_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_37, term_z_7);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(x_7);
    }
  else
    {
      t = w_7;
      t = debug_1_0(i_1, t);
      _fail(t);
    }
  r_37 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_3(y_37, t);
  q_37 = t;
  t = r_37;
  t = fclose_0_0(t);
  t = q_37;
  return(t);
}
ATerm fetch_1_0 (ATerm q_77 (ATerm), ATerm t)
{
  ATerm x_38 (ATerm t)
  {
    ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL;
    u_38 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_38 = ATgetFirst((ATermList) t);
        w_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm a_8 = t;
      int d_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_46 = NULL,s_46 = NULL,f_11 = NULL;
          t = SSLgetAnnotations(u_38);
          p_46 = t;
          t = v_38;
          t = q_77(t);
          s_46 = t;
          t = (ATerm) ATinsert(CheckATermList(w_38), s_46);
          f_11 = t;
          t = SSLsetAnnotations(f_11, p_46);
          ;
          LocalPopChoice(d_8);
        }
      else
        {
          t = a_8;
          {
            ATerm c_49 = NULL,z_49 = NULL,l_11 = NULL;
            t = SSLgetAnnotations(u_38);
            c_49 = t;
            t = w_38;
            t = x_38(t);
            z_49 = t;
            t = (ATerm) ATinsert(CheckATermList(z_49), v_38);
            l_11 = t;
            t = SSLsetAnnotations(l_11, c_49);
          }
        }
    }
    return(t);
  }
  t = x_38(t);
  return(t);
}
ATerm s_3 (ATerm i_32, ATerm j_32, ATerm t)
{
  t = SSL_strcat(i_32, j_32);
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm e_8 = t;
  int f_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(f_8);
    }
  else
    {
      t = e_8;
    }
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_g_8;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm h_8 = t;
  int i_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_39 = NULL;
      g_39 = t;
      t = SSL_is_string(g_39);
      ;
      LocalPopChoice(i_8);
    }
  else
    {
      t = h_8;
      {
        ATerm j_8 = t;
        int l_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(k_1, t);
            ;
            LocalPopChoice(l_8);
          }
        else
          {
            t = j_8;
            {
              ATerm m_39 = NULL,n_39 = NULL,o_39 = NULL;
              m_39 = t;
              if(match_cons(t, sym_Path_1))
                {
                  n_39 = ATgetArgument(t, 0);
                  t = n_39;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      n_39 = ATgetArgument(t, 0);
                      t = n_39;
                      {
                        ATerm m_8 = t;
                        int p_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(p_8);
                          }
                        else
                          {
                            t = m_8;
                            t = debug_1_0(m_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm s_39 = NULL,t_39 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          n_39 = ATgetArgument(t, 0);
                          o_39 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = n_39;
                      t = eval_config_0_0(t);
                      s_39 = t;
                      t = o_39;
                      t = eval_config_0_0(t);
                      t_39 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_39, t_39);
                      t = s_3(s_39, t_39, t);
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
  ATerm x_39 = NULL,y_39 = NULL;
  x_39 = t;
  t = term_q_8;
  y_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_8, x_39);
  t = b_4(y_39, x_39, t);
  {
    ATerm r_8 = t;
    int s_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_39 = NULL,a_40 = NULL;
        t = eval_config_0_0(t);
        z_39 = t;
        t = term_q_8;
        a_40 = t;
        t = SSL_table_put(a_40, x_39, z_39);
        t = z_39;
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
ATerm if_verbose2_1_0 (ATerm o_91 (ATerm), ATerm t)
{
  ATerm e_40 = NULL;
  e_40 = t;
  {
    ATerm t_8 = t;
    int u_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_40 = NULL;
        t = term_v_8;
        t = get_config_0_0(t);
        g_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_40, term_x_8);
        t = geq_0_0(t);
        t = e_40;
        t = o_91(t);
        ;
        LocalPopChoice(u_8);
      }
    else
      {
        t = t_8;
        t = e_40;
      }
  }
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm j_40 = NULL;
  j_40 = t;
  if(match_string(t, "-k"))
    {
      t = j_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = j_40;
    }
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL;
  k_40 = t;
  t = SSL_string_to_int(k_40);
  l_40 = t;
  t = term_y_8;
  m_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_8, l_40);
  t = e_4(m_40, l_40, t);
  t = k_40;
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_b_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_1, o_1, p_1, t);
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm o_40 = NULL;
  o_40 = t;
  if(match_string(t, "-S"))
    {
      t = o_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_40;
    }
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm p_40 = NULL,q_40 = NULL;
  t = term_v_8;
  p_40 = t;
  t = term_c_9;
  q_40 = t;
  t = term_d_9;
  t = e_4(p_40, q_40, t);
  t = term_e_9;
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_f_9;
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
  ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL;
  r_40 = t;
  t = SSL_string_to_int(r_40);
  s_40 = t;
  t = term_v_8;
  t_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_8, s_40);
  t = e_4(t_40, s_40, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, r_40);
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_g_9;
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
  ATerm u_40 = NULL,v_40 = NULL;
  t = term_h_9;
  u_40 = t;
  t = term_w_5;
  v_40 = t;
  t = term_i_9;
  t = e_4(u_40, v_40, t);
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
  int s_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_1, s_1, u_1, t);
      ;
      LocalPopChoice(s_9);
    }
  else
    {
      t = m_9;
      {
        ATerm t_9 = t;
        int u_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(v_1, w_1, x_1, t);
            ;
            LocalPopChoice(u_9);
          }
        else
          {
            t = t_9;
            t = Option_3_0(y_1, d_2, j_2, t);
          }
      }
    }
  return(t);
}
ATerm e_4 (ATerm j_42, ATerm k_42, ATerm t)
{
  ATerm w_40 = NULL;
  t = term_q_8;
  w_40 = t;
  t = SSL_table_put(w_40, j_42, k_42);
  t = (ATerm) ATmakeAppl(sym__3, term_q_8, j_42, k_42);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm z_40 = NULL,a_41 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_41 = NULL,e_41 = NULL,f_41 = NULL;
      t = term_w_5;
      t = h_0(t);
      b_41 = t;
      t = term_v_9;
      e_41 = t;
      t = term_w_9;
      f_41 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_9, term_w_9, b_41);
      t = c_4(e_41, f_41, b_41, t);
      _fail(t);
    }
  else
    {
      ATerm n_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_40 = ATgetFirst((ATermList) t);
          a_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_40;
      t = d_0(t);
      t = term_w_5;
      t = g_0(t);
      n_41 = t;
      t = (ATerm) ATinsert(CheckATermList(a_41), n_41);
    }
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm p_41 = NULL;
  p_41 = t;
  if(match_string(t, "-o"))
    {
      t = p_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_41;
    }
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm q_41 = NULL,r_41 = NULL;
  q_41 = t;
  t = term_x_9;
  r_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_9, q_41);
  t = e_4(r_41, q_41, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_41);
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_y_9;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_2, m_2, n_2, t);
  return(t);
}
ATerm c_4 (ATerm h_47, ATerm i_47, ATerm g_47, ATerm t)
{
  ATerm t_41 = NULL,u_41 = NULL,v_41 = NULL;
  t_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_47, i_47);
  {
    ATerm z_9 = t;
    int a_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_10 = ATgetArgument(t, 0);
            ATerm d_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_47, i_47);
        t = b_4(h_47, i_47, t);
        ;
        LocalPopChoice(a_10);
      }
    else
      {
        t = z_9;
        t = (ATerm) ATempty;
      }
    u_41 = t;
    t = (ATerm) ATinsert(CheckATermList(u_41), g_47);
    v_41 = t;
    t = SSL_table_put(h_47, i_47, v_41);
    t = t_41;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL;
      t = term_w_5;
      t = m_0(t);
      g_42 = t;
      t = term_v_9;
      h_42 = t;
      t = term_w_9;
      i_42 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_9, term_w_9, g_42);
      t = c_4(h_42, i_42, g_42, t);
      _fail(t);
    }
  else
    {
      ATerm o_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_42 = ATgetFirst((ATermList) t);
          d_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_42;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_42 = ATgetFirst((ATermList) t);
          f_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_42;
      t = k_0(t);
      t = e_42;
      t = l_0(t);
      o_42 = t;
      t = (ATerm) ATinsert(CheckATermList(f_42), o_42);
    }
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm q_42 = NULL;
  q_42 = t;
  if(match_string(t, "-i"))
    {
      t = q_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_42;
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm r_42 = NULL,x_42 = NULL;
  r_42 = t;
  t = term_e_10;
  x_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_10, r_42);
  t = e_4(x_42, r_42, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, r_42);
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_h_10;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_2, p_2, q_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_5;
  t = whoami_0_0(t);
  y_42 = t;
  t = term_x_5;
  a_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_10), y_42);
  b_43 = t;
  t = SSL_printnl(a_43, b_43);
  t = term_b_6;
  z_42 = t;
  t = SSL_exit(z_42);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_j_10;
  t = get_config_0_0(t);
  return(t);
}
ATerm z_3 (ATerm s_34, ATerm t_34, ATerm t)
{
  ATerm k_10 = t;
  int n_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(s_34, t_34);
      ;
      LocalPopChoice(n_10);
    }
  else
    {
      t = k_10;
      t = SSL_addr(s_34, t_34);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm t)
{
  ATerm d_43 = NULL,e_43 = NULL,f_43 = NULL;
  d_43 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_43;
      t = j_83(t);
    }
  else
    {
      ATerm i_43 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_43 = ATgetFirst((ATermList) t);
          f_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_43;
      t = foldr_2_0(j_83, k_83, t);
      i_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_43, i_43);
      t = k_83(t);
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
  t = term_c_9;
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm q_50 = NULL,r_50 = NULL;
  if(match_cons(t, sym__2))
    {
      q_50 = ATgetArgument(t, 0);
      r_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3(q_50, r_50, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_43 = NULL,m_50 = NULL,n_50 = NULL;
  t = times_0_0(t);
  n_50 = t;
  t = SSL_explode_term(n_50);
  if(match_cons(t, sym__2))
    {
      ATerm o_10 = ATgetArgument(t, 0);
      m_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_50;
  t = foldr_2_0(r_2, s_2, t);
  l_43 = t;
  t = SSL_TicksToSeconds(l_43);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_43 = NULL,x_43 = NULL,y_43 = NULL;
  w_43 = t;
  if(match_cons(t, sym__2))
    {
      x_43 = ATgetArgument(t, 0);
      y_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_10 = t;
    int q_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_43;
        if((x_43 != t))
          {
            _fail(t);
          }
        t = w_43;
        ;
        LocalPopChoice(q_10);
      }
    else
      {
        t = p_10;
        t = (ATerm) ATmakeAppl(sym__2, x_43, y_43);
        {
          ATerm r_10 = t;
          int s_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_43, y_43);
              ;
              LocalPopChoice(s_10);
            }
          else
            {
              t = r_10;
              t = SSL_gtr(x_43, y_43);
            }
          t = (ATerm) ATmakeAppl(sym__2, x_43, y_43);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_91 (ATerm), ATerm t)
{
  ATerm g_44 = NULL;
  g_44 = t;
  {
    ATerm t_10 = t;
    int v_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_44 = NULL;
        t = term_v_8;
        t = get_config_0_0(t);
        i_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_44, term_b_6);
        t = geq_0_0(t);
        t = g_44;
        t = n_91(t);
        ;
        LocalPopChoice(v_10);
      }
    else
      {
        t = t_10;
        t = g_44;
      }
  }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm k_44 = NULL,l_44 = NULL,n_44 = NULL,o_44 = NULL;
  t = run_time_0_0(t);
  k_44 = t;
  t = term_w_5;
  t = whoami_0_0(t);
  l_44 = t;
  t = term_x_5;
  n_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_10), k_44), term_w_10), l_44);
  o_44 = t;
  t = SSL_printnl(n_44, o_44);
  t = (ATerm) ATmakeAppl(sym__2, term_x_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_10), k_44), term_w_10), l_44));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(t_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm p_44 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_9;
  p_44 = t;
  t = SSL_exit(p_44);
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm x_44 = NULL,y_44 = NULL;
  y_44 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = y_44;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          x_44 = ATgetArgument(t, 0);
          {
            ATerm d_51 = NULL,q_11 = NULL;
            t = SSLgetAnnotations(y_44);
            d_51 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, x_44);
            q_11 = t;
            t = SSLsetAnnotations(q_11, d_51);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = y_44;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_94 (ATerm), ATerm t)
{
  ATerm a_11 = t;
  int b_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_11);
    }
  else
    {
      t = a_11;
      t = fetch_1_0(u_2, t);
    }
  t = d_94(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm b_45 = NULL,c_45 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_45 = ATgetFirst((ATermList) t);
      c_45 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_45 = NULL,h_45 = NULL;
        ATerm v_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_45)), not_null(h_45));
          return(t);
        }
        t = c_45;
        t = j_0(t);
        if(((g_45 != NULL) && (g_45 != t)))
          _fail(t);
        else
          g_45 = t;
        t = b_45;
        t = i_0(t);
        if(((h_45 != NULL) && (h_45 != t)))
          _fail(t);
        else
          h_45 = t;
        t = c_45;
        t = reverse_acc_2_0(i_0, v_2, t);
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
ATerm b_4 (ATerm y_48, ATerm z_48, ATerm t)
{
  t = SSL_table_get(y_48, z_48);
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL,s_11 = NULL;
  n_45 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_45);
  l_45 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, m_45);
  s_11 = t;
  t = SSLsetAnnotations(s_11, l_45);
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm p_45 = NULL;
  p_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_45), term_d_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_45 = NULL,k_45 = NULL;
  ATerm e_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_10;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_11);
    }
  else
    {
      t = e_11;
      t = fetch_1_0(w_2, t);
    }
  t = term_h_11;
  t = echo_0_0(t);
  t = term_v_9;
  j_45 = t;
  t = term_w_9;
  k_45 = t;
  t = term_j_11;
  t = b_4(j_45, k_45, t);
  t = reverse_acc_2_0(_id, z_2, t);
  t = map_1_0(d_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_45 = NULL,s_45 = NULL,t_45 = NULL;
  r_45 = t;
  {
    ATerm k_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_45;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_11 = ATgetFirst((ATermList) t);
                ATerm p_11 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_45;
          }
        ;
        LocalPopChoice(m_11);
      }
    else
      {
        t = k_11;
        t = (ATerm) ATinsert(ATempty, r_45);
      }
    s_45 = t;
    t = term_a_7;
    t_45 = t;
    t = SSL_printnl(t_45, s_45);
    t = r_45;
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
ATerm g_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm x_45 = NULL,y_45 = NULL;
  t = term_r_11;
  x_45 = t;
  t = term_w_5;
  y_45 = t;
  t = term_v_11;
  t = e_4(x_45, y_45, t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_x_11;
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
  ATerm z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL;
  t = term_r_11;
  b_46 = t;
  t = term_w_5;
  c_46 = t;
  t = term_v_11;
  t = e_4(b_46, c_46, t);
  t = term_b_12;
  z_45 = t;
  t = term_w_5;
  a_46 = t;
  t = term_d_12;
  t = e_4(z_45, a_46, t);
  t = term_i_12;
  return(t);
}
ATerm a_4 (ATerm t)
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
      t = Option_3_0(g_3, n_3, o_3, t);
      ;
      LocalPopChoice(l_12);
    }
  else
    {
      t = k_12;
      t = Option_3_0(p_3, r_3, a_4, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_96 (ATerm), ATerm t)
{
  ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,m_46 = NULL,n_46 = NULL,w_11 = NULL;
  h_46 = t;
  {
    ATerm o_12 = t;
    int p_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_12;
        t = g_96(t);
        ;
        LocalPopChoice(p_12);
      }
    else
      {
        t = o_12;
      }
    t = h_46;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_46 = ATgetFirst((ATermList) t);
        k_46 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(h_46);
    i_46 = t;
    t = term_j_10;
    n_46 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_j_10, j_46);
    t = e_4(n_46, j_46, t);
    t = k_46;
    {
      ATerm c_47 (ATerm t)
      {
        ATerm r_12 = t;
        int s_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_12 = t;
            int u_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_46 = NULL;
                v_46 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = v_46;
                ;
                LocalPopChoice(u_12);
              }
            else
              {
                t = t_12;
                t = g_96(t);
                t = Cons_2_0(_id, c_47, t);
              }
            ;
            LocalPopChoice(s_12);
          }
        else
          {
            t = r_12;
            {
              ATerm y_46 = NULL,z_46 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_46 = ATgetFirst((ATermList) t);
                  z_46 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(z_46), (ATerm) ATmakeAppl(sym_Undefined_1, y_46));
            }
          }
        return(t);
      }
      t = c_47(t);
      m_46 = t;
      t = (ATerm) ATinsert(CheckATermList(m_46), (ATerm) ATmakeAppl(sym_Program_1, j_46));
      w_11 = t;
      t = SSLsetAnnotations(w_11, i_46);
    }
  }
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm s_47 = NULL;
  s_47 = t;
  if(match_string(t, "--help"))
    {
      t = s_47;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = s_47;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = s_47;
        }
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL;
  t = term_c_11;
  t_47 = t;
  t = term_w_5;
  u_47 = t;
  t = term_v_12;
  t = e_4(t_47, u_47, t);
  t = term_w_12;
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_x_12;
  return(t);
}
ATerm t_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm f_96 (ATerm), ATerm t)
{
  ATerm l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL;
  n_47 = t;
  t = term_v_9;
  p_47 = t;
  t = term_w_9;
  q_47 = t;
  t = (ATerm) ATempty;
  r_47 = t;
  t = SSL_table_put(p_47, q_47, r_47);
  t = n_47;
  {
    ATerm d_4 (ATerm t)
    {
      ATerm y_12 = t;
      int z_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_96(t);
          ;
          LocalPopChoice(z_12);
        }
      else
        {
          t = y_12;
          {
            ATerm a_13 = t;
            int c_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(h_4, l_4, n_4, t);
                ;
                LocalPopChoice(c_13);
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
    t = parse_options_p__1_0(d_4, t);
    {
      ATerm d_13 = t;
      int e_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_48 = NULL;
          b_48 = t;
          {
            ATerm h_13 = t;
            int i_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_51 = NULL;
                t = b_48;
                {
                  ATerm j_13 = t;
                  int k_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_c_11;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(k_13);
                    }
                  else
                    {
                      t = j_13;
                      t = fetch_1_0(t_4, t);
                    }
                  t = b_48;
                  t = default_system_usage_0_0(t);
                  t = term_c_9;
                  k_51 = t;
                  t = SSL_exit(k_51);
                }
                ;
                LocalPopChoice(i_13);
              }
            else
              {
                t = h_13;
                {
                  ATerm o_51 = NULL;
                  t = term_r_11;
                  t = get_config_0_0(t);
                  t = b_48;
                  t = default_system_about_0_0(t);
                  t = term_c_9;
                  o_51 = t;
                  t = SSL_exit(o_51);
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
                ATerm c_48 = NULL,d_48 = NULL,e_48 = NULL;
                ATerm v_4 (ATerm t)
                {
                  ATerm f_48 = NULL,g_48 = NULL,h_48 = NULL,c_12 = NULL;
                  h_48 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      g_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(h_48);
                  f_48 = t;
                  t = g_48;
                  if(((l_47 != NULL) && (l_47 != t)))
                    _fail(t);
                  else
                    l_47 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, g_48);
                  c_12 = t;
                  t = SSLsetAnnotations(c_12, f_48);
                  return(t);
                }
                t = fetch_1_0(v_4, t);
                t = term_x_5;
                d_48 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_47)), term_n_13);
                e_48 = t;
                t = SSL_printnl(d_48, e_48);
                t = (ATerm) ATmakeAppl(sym__2, term_x_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_47)), term_n_13));
                t = default_system_usage_0_0(t);
                t = term_b_6;
                c_48 = t;
                t = SSL_exit(c_48);
                ;
                LocalPopChoice(m_13);
              }
            else
              {
                t = l_13;
              }
          }
        }
      m_47 = t;
      t = term_v_9;
      o_47 = t;
      t = SSL_table_destroy(o_47);
      t = m_47;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_94 (ATerm), ATerm g_94 (ATerm), ATerm h_94 (ATerm), ATerm i_94 (ATerm), ATerm t)
{
  ATerm m_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL;
  t = parse_options_1_0(f_94, t);
  m_48 = t;
  t = term_o_13;
  p_48 = t;
  t = SSL_table_create(p_48);
  t = term_o_13;
  n_48 = t;
  t = term_p_13;
  o_48 = t;
  t = SSL_table_put(n_48, o_48, m_48);
  t = m_48;
  t = h_94(t);
  {
    ATerm q_13 = t;
    int s_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_94, t);
        ;
        LocalPopChoice(s_13);
      }
    else
      {
        t = q_13;
        {
          ATerm t_13 = t;
          int u_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_94(t);
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
ATerm x_4 (ATerm t)
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
  ATerm q_48 = NULL,r_48 = NULL;
  t = term_v_13;
  q_48 = t;
  t = term_w_5;
  r_48 = t;
  t = term_w_13;
  t = e_4(q_48, r_48, t);
  t = term_z_13;
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_a_14;
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL;
  s_48 = t;
  t = term_j_10;
  t = get_config_0_0(t);
  t_48 = t;
  t = term_x_5;
  u_48 = t;
  t = (ATerm) ATinsert(ATempty, t_48);
  v_48 = t;
  t = SSL_printnl(u_48, v_48);
  t = s_48;
  return(t);
}
ATerm iowrap_3_0 (ATerm o_93 (ATerm), ATerm p_93 (ATerm), ATerm q_93 (ATerm), ATerm t)
{
  ATerm w_4 (ATerm t)
  {
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_93(t);
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
    ATerm w_48 = NULL,x_48 = NULL,a_49 = NULL;
    x_48 = t;
    {
      ATerm l_14 = t;
      int n_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((w_48 != NULL) && (w_48 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  w_48 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(p_5, t);
          ;
          LocalPopChoice(n_14);
        }
      else
        {
          t = l_14;
          t = term_o_14;
          w_48 = t;
        }
      t = not_null(w_48);
      t = ReadFromFile_0_0(t);
      a_49 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_48, a_49);
      t = apply_strategy_1_0(o_93, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(w_4, q_93, x_4, k_5, t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm d_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL,h_49 = NULL,h_12 = NULL;
  h_49 = t;
  if(match_cons(t, sym__2))
    {
      e_49 = ATgetArgument(t, 0);
      f_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_49);
  d_49 = t;
  t = f_49;
  {
    ATerm p_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_49 = NULL,r_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL,g_12 = NULL,f_12 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            v_49 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_49);
        r_51 = t;
        t = v_49;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_51 = ATgetFirst((ATermList) t);
            v_51 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_49);
        t_51 = t;
        t = v_51;
        t = Cons_2_0(r_5, u_5, t);
        w_51 = t;
        t = (ATerm) ATinsert(CheckATermList(w_51), u_51);
        f_12 = t;
        t = SSLsetAnnotations(f_12, t_51);
        x_51 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, x_51);
        g_12 = t;
        t = SSLsetAnnotations(g_12, r_51);
        ;
        LocalPopChoice(q_14);
      }
    else
      {
        t = p_14;
        t = debug_1_0(v_5, t);
      }
    g_49 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_49, g_49);
    h_12 = t;
    t = SSLsetAnnotations(h_12, d_49);
  }
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm y_51 = NULL,z_51 = NULL,a_52 = NULL,b_52 = NULL,e_12 = NULL;
  b_52 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      z_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_52);
  y_51 = t;
  t = z_51;
  t = map_1_0(strategy_definition_0_0, t);
  a_52 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, a_52);
  e_12 = t;
  t = SSLsetAnnotations(e_12, y_51);
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

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
Symbol sym_ExtSDefInl_4;
Symbol sym_ExtSDef_3;
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
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_ExtSDef_3 = ATmakeSymbol("ExtSDef", 3, ATfalse);
  ATprotectSymbol(sym_ExtSDef_3);
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
ATerm term_i_15;
ATerm term_e_15;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_j_13;
ATerm term_b_13;
ATerm term_q_12;
ATerm term_o_12;
ATerm term_m_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_g_12;
ATerm term_z_11;
ATerm term_s_11;
ATerm term_q_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_r_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_g_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_c_9;
ATerm term_s_8;
ATerm term_k_8;
ATerm term_h_8;
ATerm term_r_7;
ATerm term_n_7;
ATerm term_j_7;
ATerm term_n_6;
ATerm term_i_6;
ATerm term_f_6;
ATerm term_e_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_a_6;
void init_constant_terms (void)
{
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym__2, term_h_9, term_m_9);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_9);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym__2, term_u_9, term_a_6);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym__2, term_c_10, term_d_10);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym__2, term_z_11, term_a_6);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym__2, term_k_12, term_a_6);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym__2, term_m_11, term_a_6);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym__2, term_l_14, term_a_6);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
}
ATerm default_usage_0_0 (ATerm);
ATerm debug_1_0 (ATerm u_90 (ATerm), ATerm);
ATerm list_1_0 (ATerm d_78 (ATerm), ATerm);
ATerm b_0 (ATerm);
ATerm term_expression_0_0 (ATerm);
ATerm f_0 (ATerm);
ATerm q_0 (ATerm);
ATerm t_0 (ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm strategy_expression_0_0 (ATerm);
ATerm w_0 (ATerm);
ATerm y_0 (ATerm);
ATerm a_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm strategy_definition_0_0 (ATerm);
ATerm map_1_0 (ATerm z_77 (ATerm), ATerm);
ATerm t_3 (ATerm d_38, ATerm e_38, ATerm);
ATerm u_3 (ATerm r_41, ATerm s_41, ATerm);
ATerm w_3 (ATerm w_90 (ATerm), ATerm g_400, ATerm v_41, ATerm);
ATerm v_3 (ATerm n_41, ATerm o_41, ATerm);
ATerm k_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm y_93 (ATerm), ATerm);
ATerm b_41 (ATerm v_40, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm x_3 (ATerm t_41, ATerm);
ATerm y_3 (ATerm f_38, ATerm g_38, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm t_42 (ATerm l_41, ATerm);
ATerm w_42 (ATerm w_41, ATerm x_41, ATerm y_41, ATerm);
ATerm x_42 (ATerm g_42, ATerm h_42, ATerm i_42, ATerm);
ATerm z_3 (ATerm);
ATerm o_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm j_78 (ATerm), ATerm);
ATerm s_3 (ATerm s_32, ATerm t_32, ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm h_92 (ATerm), ATerm);
ATerm s_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm d_2 (ATerm);
ATerm j_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm f_4 (ATerm u_42, ATerm v_42, ATerm);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm d_4 (ATerm s_47, ATerm t_47, ATerm r_47, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm a_4 (ATerm d_35, ATerm e_35, ATerm);
ATerm foldr_2_0 (ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm g_92 (ATerm), ATerm);
ATerm z_2 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm d_3 (ATerm);
ATerm need_help_1_0 (ATerm w_94 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm c_4 (ATerm j_49, ATerm k_49, ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm r_3 (ATerm);
ATerm b_4 (ATerm);
ATerm e_4 (ATerm);
ATerm i_4 (ATerm);
ATerm m_4 (ATerm);
ATerm o_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm z_56 (ATerm), ATerm a_57 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm z_96 (ATerm), ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm l_5 (ATerm);
ATerm parse_options_1_0 (ATerm y_96 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm y_94 (ATerm), ATerm z_94 (ATerm), ATerm a_95 (ATerm), ATerm b_95 (ATerm), ATerm);
ATerm o_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm v_5 (ATerm);
ATerm iowrap_3_0 (ATerm h_94 (ATerm), ATerm i_94 (ATerm), ATerm j_94 (ATerm), ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
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
  t = term_a_6;
  t = whoami_0_0(t);
  l_0 = t;
  t = term_b_6;
  n_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_6), l_0), term_c_6);
  o_0 = t;
  t = SSL_printnl(n_0, o_0);
  t = term_e_6;
  m_0 = t;
  t = SSL_exit(m_0);
  t = a_0;
  return(t);
}
ATerm debug_1_0 (ATerm u_90 (ATerm), ATerm t)
{
  ATerm s_0 = NULL,x_0 = NULL,c_1 = NULL,d_1 = NULL;
  s_0 = t;
  t = u_90(t);
  x_0 = t;
  t = term_b_6;
  c_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_0), x_0);
  d_1 = t;
  t = SSL_printnl(c_1, d_1);
  t = s_0;
  return(t);
}
ATerm list_1_0 (ATerm d_78 (ATerm), ATerm t)
{
  t = map_1_0(d_78, t);
  return(t);
}
ATerm b_0 (ATerm t)
{
  t = term_f_6;
  return(t);
}
ATerm term_expression_0_0 (ATerm t)
{
  ATerm g_6 = t;
  int h_6 = stack_ptr;
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
      LocalPopChoice(h_6);
    }
  else
    {
      t = g_6;
      t = debug_1_0(b_0, t);
    }
  return(t);
}
ATerm f_0 (ATerm t)
{
  ATerm b_20 = NULL;
  b_20 = t;
  t = SSL_is_string(b_20);
  return(t);
}
ATerm q_0 (ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL,o_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,v_24 = NULL,x_24 = NULL,j_5 = NULL;
  x_24 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      l_24 = ATgetArgument(t, 0);
      m_24 = ATgetArgument(t, 1);
      o_24 = ATgetArgument(t, 2);
      q_24 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_24);
  k_24 = t;
  t = SSL_is_string(l_24);
  r_24 = t;
  t = m_24;
  t = map_1_0(t_0, t);
  s_24 = t;
  t = o_24;
  t = map_1_0(u_0, t);
  t_24 = t;
  t = q_24;
  t = strategy_expression_0_0(t);
  v_24 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, r_24, s_24, t_24, v_24);
  j_5 = t;
  t = SSLsetAnnotations(j_5, k_24);
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL,d_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,g_5 = NULL,f_5 = NULL;
  l_26 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      b_26 = ATgetArgument(t, 0);
      d_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_26);
  a_26 = t;
  t = SSL_is_string(b_26);
  f_26 = t;
  t = d_26;
  if(match_cons(t, sym_FunType_2))
    {
      h_26 = ATgetArgument(t, 0);
      i_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_26);
  g_26 = t;
  t = h_26;
  t = list_1_0(_id, t);
  j_26 = t;
  t = (ATerm) ATmakeAppl(sym_FunType_2, j_26, i_26);
  f_5 = t;
  t = SSLsetAnnotations(f_5, g_26);
  k_26 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, f_26, k_26);
  g_5 = t;
  t = SSLsetAnnotations(g_5, a_26);
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm o_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,x_26 = NULL,y_26 = NULL,i_5 = NULL,h_5 = NULL;
  y_26 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      q_26 = ATgetArgument(t, 0);
      r_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_26);
  o_26 = t;
  t = SSL_is_string(q_26);
  s_26 = t;
  t = r_26;
  if(match_cons(t, sym_ConstType_1))
    {
      u_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_26);
  t_26 = t;
  t = (ATerm) ATmakeAppl(sym_ConstType_1, u_26);
  h_5 = t;
  t = SSLsetAnnotations(h_5, t_26);
  x_26 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, s_26, x_26);
  i_5 = t;
  t = SSLsetAnnotations(i_5, o_26);
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = term_i_6;
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm j_6 = t;
  int k_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL;
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
                    ATerm i_7 = NULL,k_7 = NULL,x_2 = NULL;
                    t = SSLgetAnnotations(o_28);
                    i_7 = t;
                    t = p_28;
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
                      p_28 = ATgetArgument(t, 0);
                      {
                        ATerm q_7 = NULL,s_7 = NULL,y_2 = NULL;
                        t = SSLgetAnnotations(o_28);
                        q_7 = t;
                        t = p_28;
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
                          p_28 = ATgetArgument(t, 0);
                          q_28 = ATgetArgument(t, 1);
                          {
                            ATerm z_7 = NULL,c_8 = NULL,d_8 = NULL,a_3 = NULL;
                            t = SSLgetAnnotations(o_28);
                            z_7 = t;
                            t = p_28;
                            t = strategy_expression_0_0(t);
                            c_8 = t;
                            t = q_28;
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
                              p_28 = ATgetArgument(t, 0);
                              q_28 = ATgetArgument(t, 1);
                              {
                                ATerm l_8 = NULL,o_8 = NULL,p_8 = NULL,b_3 = NULL;
                                t = SSLgetAnnotations(o_28);
                                l_8 = t;
                                t = p_28;
                                t = strategy_expression_0_0(t);
                                o_8 = t;
                                t = q_28;
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
                                  p_28 = ATgetArgument(t, 0);
                                  q_28 = ATgetArgument(t, 1);
                                  {
                                    ATerm x_8 = NULL,a_9 = NULL,b_9 = NULL,e_3 = NULL;
                                    t = SSLgetAnnotations(o_28);
                                    x_8 = t;
                                    t = p_28;
                                    t = strategy_expression_0_0(t);
                                    a_9 = t;
                                    t = q_28;
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
                                      p_28 = ATgetArgument(t, 0);
                                      q_28 = ATgetArgument(t, 1);
                                      n_28 = ATgetArgument(t, 2);
                                      {
                                        ATerm k_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,f_3 = NULL;
                                        t = SSLgetAnnotations(o_28);
                                        k_9 = t;
                                        t = p_28;
                                        t = strategy_expression_0_0(t);
                                        o_9 = t;
                                        t = q_28;
                                        t = strategy_expression_0_0(t);
                                        p_9 = t;
                                        t = n_28;
                                        t = strategy_expression_0_0(t);
                                        q_9 = t;
                                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, o_9, p_9, q_9);
                                        f_3 = t;
                                        t = SSLsetAnnotations(f_3, k_9);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_GChoice_2))
                                        {
                                          p_28 = ATgetArgument(t, 0);
                                          q_28 = ATgetArgument(t, 1);
                                          {
                                            ATerm f_10 = NULL,i_10 = NULL,l_10 = NULL,j_3 = NULL;
                                            t = SSLgetAnnotations(o_28);
                                            f_10 = t;
                                            t = p_28;
                                            t = strategy_expression_0_0(t);
                                            i_10 = t;
                                            t = q_28;
                                            t = strategy_expression_0_0(t);
                                            l_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_GChoice_2, i_10, l_10);
                                            j_3 = t;
                                            t = SSLsetAnnotations(j_3, f_10);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LGChoice_2))
                                            {
                                              p_28 = ATgetArgument(t, 0);
                                              q_28 = ATgetArgument(t, 1);
                                              {
                                                ATerm b_11 = NULL,e_11 = NULL,f_11 = NULL,q_3 = NULL;
                                                t = SSLgetAnnotations(o_28);
                                                b_11 = t;
                                                t = p_28;
                                                t = strategy_expression_0_0(t);
                                                e_11 = t;
                                                t = q_28;
                                                t = strategy_expression_0_0(t);
                                                f_11 = t;
                                                t = (ATerm) ATmakeAppl(sym_LGChoice_2, e_11, f_11);
                                                q_3 = t;
                                                t = SSLsetAnnotations(q_3, b_11);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_CallT_3))
                                                {
                                                  p_28 = ATgetArgument(t, 0);
                                                  q_28 = ATgetArgument(t, 1);
                                                  n_28 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm r_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,j_4 = NULL,h_4 = NULL;
                                                    t = SSLgetAnnotations(o_28);
                                                    r_11 = t;
                                                    t = p_28;
                                                    if(match_cons(t, sym_SVar_1))
                                                      {
                                                        d_12 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSLgetAnnotations(p_28);
                                                    c_12 = t;
                                                    t = d_12;
                                                    {
                                                      ATerm l_6 = t;
                                                      int m_6 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = SSL_is_string(d_12);
                                                          ;
                                                          LocalPopChoice(m_6);
                                                        }
                                                      else
                                                        {
                                                          t = l_6;
                                                          {
                                                            ATerm r_12 = NULL,u_12 = NULL,i_13 = NULL,n_13 = NULL,o_13 = NULL,g_4 = NULL;
                                                            if(match_cons(t, sym_Mod_2))
                                                              {
                                                                r_12 = ATgetArgument(t, 0);
                                                                u_12 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = SSLgetAnnotations(d_12);
                                                            i_13 = t;
                                                            t = SSL_is_string(r_12);
                                                            n_13 = t;
                                                            t = SSL_is_string(u_12);
                                                            o_13 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Mod_2, n_13, o_13);
                                                            g_4 = t;
                                                            t = SSLsetAnnotations(g_4, i_13);
                                                          }
                                                        }
                                                      e_12 = t;
                                                      t = (ATerm) ATmakeAppl(sym_SVar_1, e_12);
                                                      h_4 = t;
                                                      t = SSLsetAnnotations(h_4, c_12);
                                                      f_12 = t;
                                                      t = q_28;
                                                      t = map_1_0(strategy_expression_0_0, t);
                                                      a_12 = t;
                                                      t = n_28;
                                                      t = map_1_0(term_expression_0_0, t);
                                                      b_12 = t;
                                                      t = (ATerm) ATmakeAppl(sym_CallT_3, f_12, a_12, b_12);
                                                      j_4 = t;
                                                      t = SSLsetAnnotations(j_4, r_11);
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
                                                        ATerm v_13 = NULL,a_14 = NULL,c_14 = NULL,l_4 = NULL;
                                                        t = SSLgetAnnotations(o_28);
                                                        v_13 = t;
                                                        t = SSL_is_string(p_28);
                                                        a_14 = t;
                                                        t = q_28;
                                                        t = strategy_expression_0_0(t);
                                                        c_14 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Rec_2, a_14, c_14);
                                                        l_4 = t;
                                                        t = SSLsetAnnotations(l_4, v_13);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Path_2))
                                                        {
                                                          p_28 = ATgetArgument(t, 0);
                                                          q_28 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm n_14 = NULL,s_14 = NULL,u_14 = NULL,n_4 = NULL;
                                                            t = SSLgetAnnotations(o_28);
                                                            n_14 = t;
                                                            t = SSL_is_int(p_28);
                                                            s_14 = t;
                                                            t = q_28;
                                                            t = strategy_expression_0_0(t);
                                                            u_14 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Path_2, s_14, u_14);
                                                            n_4 = t;
                                                            t = SSLsetAnnotations(n_4, n_14);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              p_28 = ATgetArgument(t, 0);
                                                              q_28 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm h_15 = NULL,l_15 = NULL,m_15 = NULL,p_4 = NULL;
                                                                t = SSLgetAnnotations(o_28);
                                                                h_15 = t;
                                                                t = SSL_is_string(p_28);
                                                                l_15 = t;
                                                                t = q_28;
                                                                t = map_1_0(strategy_expression_0_0, t);
                                                                m_15 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Cong_2, l_15, m_15);
                                                                p_4 = t;
                                                                t = SSLsetAnnotations(p_4, h_15);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_One_1))
                                                                {
                                                                  p_28 = ATgetArgument(t, 0);
                                                                  {
                                                                    ATerm e_16 = NULL,g_16 = NULL,s_4 = NULL;
                                                                    t = SSLgetAnnotations(o_28);
                                                                    e_16 = t;
                                                                    t = p_28;
                                                                    t = strategy_expression_0_0(t);
                                                                    g_16 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_One_1, g_16);
                                                                    s_4 = t;
                                                                    t = SSLsetAnnotations(s_4, e_16);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Some_1))
                                                                    {
                                                                      p_28 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm n_16 = NULL,r_16 = NULL,t_4 = NULL;
                                                                        t = SSLgetAnnotations(o_28);
                                                                        n_16 = t;
                                                                        t = p_28;
                                                                        t = strategy_expression_0_0(t);
                                                                        r_16 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Some_1, r_16);
                                                                        t_4 = t;
                                                                        t = SSLsetAnnotations(t_4, n_16);
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_All_1))
                                                                        {
                                                                          p_28 = ATgetArgument(t, 0);
                                                                          {
                                                                            ATerm z_16 = NULL,i_17 = NULL,v_4 = NULL;
                                                                            t = SSLgetAnnotations(o_28);
                                                                            z_16 = t;
                                                                            t = p_28;
                                                                            t = strategy_expression_0_0(t);
                                                                            i_17 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_All_1, i_17);
                                                                            v_4 = t;
                                                                            t = SSLsetAnnotations(v_4, z_16);
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Thread_1))
                                                                            {
                                                                              p_28 = ATgetArgument(t, 0);
                                                                              {
                                                                                ATerm s_17 = NULL,x_17 = NULL,z_4 = NULL;
                                                                                t = SSLgetAnnotations(o_28);
                                                                                s_17 = t;
                                                                                t = p_28;
                                                                                t = strategy_expression_0_0(t);
                                                                                x_17 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Thread_1, x_17);
                                                                                z_4 = t;
                                                                                t = SSLsetAnnotations(z_4, s_17);
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Match_1))
                                                                                {
                                                                                  p_28 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm j_18 = NULL,o_18 = NULL,a_5 = NULL;
                                                                                    t = SSLgetAnnotations(o_28);
                                                                                    j_18 = t;
                                                                                    t = p_28;
                                                                                    t = term_expression_0_0(t);
                                                                                    o_18 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, o_18);
                                                                                    a_5 = t;
                                                                                    t = SSLsetAnnotations(a_5, j_18);
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Build_1))
                                                                                    {
                                                                                      p_28 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm e_19 = NULL,g_19 = NULL,b_5 = NULL;
                                                                                        t = SSLgetAnnotations(o_28);
                                                                                        e_19 = t;
                                                                                        t = p_28;
                                                                                        t = term_expression_0_0(t);
                                                                                        g_19 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, g_19);
                                                                                        b_5 = t;
                                                                                        t = SSLsetAnnotations(b_5, e_19);
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Scope_2))
                                                                                        {
                                                                                          p_28 = ATgetArgument(t, 0);
                                                                                          q_28 = ATgetArgument(t, 1);
                                                                                          {
                                                                                            ATerm p_19 = NULL,v_19 = NULL,z_19 = NULL,c_5 = NULL;
                                                                                            t = SSLgetAnnotations(o_28);
                                                                                            p_19 = t;
                                                                                            t = p_28;
                                                                                            t = map_1_0(f_0, t);
                                                                                            v_19 = t;
                                                                                            t = q_28;
                                                                                            t = strategy_expression_0_0(t);
                                                                                            z_19 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Scope_2, v_19, z_19);
                                                                                            c_5 = t;
                                                                                            t = SSLsetAnnotations(c_5, p_19);
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_Where_1))
                                                                                            {
                                                                                              p_28 = ATgetArgument(t, 0);
                                                                                              {
                                                                                                ATerm k_20 = NULL,m_20 = NULL,d_5 = NULL;
                                                                                                t = SSLgetAnnotations(o_28);
                                                                                                k_20 = t;
                                                                                                t = p_28;
                                                                                                t = strategy_expression_0_0(t);
                                                                                                m_20 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Where_1, m_20);
                                                                                                d_5 = t;
                                                                                                t = SSLsetAnnotations(d_5, k_20);
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_PrimT_3))
                                                                                                {
                                                                                                  p_28 = ATgetArgument(t, 0);
                                                                                                  q_28 = ATgetArgument(t, 1);
                                                                                                  n_28 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm w_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,e_5 = NULL;
                                                                                                    t = SSLgetAnnotations(o_28);
                                                                                                    w_20 = t;
                                                                                                    t = SSL_is_string(p_28);
                                                                                                    a_21 = t;
                                                                                                    t = q_28;
                                                                                                    t = map_1_0(strategy_expression_0_0, t);
                                                                                                    b_21 = t;
                                                                                                    t = n_28;
                                                                                                    t = map_1_0(term_expression_0_0, t);
                                                                                                    c_21 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_PrimT_3, a_21, b_21, c_21);
                                                                                                    e_5 = t;
                                                                                                    t = SSLsetAnnotations(e_5, w_20);
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  ATerm c_24 = NULL,f_24 = NULL,g_24 = NULL,k_5 = NULL;
                                                                                                  if(match_cons(t, sym_Let_2))
                                                                                                    {
                                                                                                      p_28 = ATgetArgument(t, 0);
                                                                                                      q_28 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = SSLgetAnnotations(o_28);
                                                                                                  c_24 = t;
                                                                                                  t = p_28;
                                                                                                  t = map_1_0(q_0, t);
                                                                                                  f_24 = t;
                                                                                                  t = q_28;
                                                                                                  t = strategy_expression_0_0(t);
                                                                                                  g_24 = t;
                                                                                                  t = (ATerm) ATmakeAppl(sym_Let_2, f_24, g_24);
                                                                                                  k_5 = t;
                                                                                                  t = SSLsetAnnotations(k_5, c_24);
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
      LocalPopChoice(k_6);
    }
  else
    {
      t = j_6;
      t = debug_1_0(v_0, t);
    }
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,t_6 = NULL;
  d_31 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      a_31 = ATgetArgument(t, 0);
      b_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_31);
  z_30 = t;
  t = SSL_is_string(a_31);
  c_31 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, c_31, b_31);
  t_6 = t;
  t = SSLsetAnnotations(t_6, z_30);
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,u_6 = NULL;
  i_31 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      f_31 = ATgetArgument(t, 0);
      g_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_31);
  e_31 = t;
  t = SSL_is_string(f_31);
  h_31 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, h_31, g_31);
  u_6 = t;
  t = SSLsetAnnotations(u_6, e_31);
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,x_6 = NULL;
  u_34 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      o_34 = ATgetArgument(t, 0);
      s_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_34);
  n_34 = t;
  t = SSL_is_string(o_34);
  t_34 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, t_34, s_34);
  x_6 = t;
  t = SSLsetAnnotations(x_6, n_34);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm w_34 = NULL,x_34 = NULL,j_36 = NULL,s_37 = NULL,t_37 = NULL,y_6 = NULL;
  t_37 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      x_34 = ATgetArgument(t, 0);
      j_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_37);
  w_34 = t;
  t = SSL_is_string(x_34);
  s_37 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, s_37, j_36);
  y_6 = t;
  t = SSLsetAnnotations(y_6, w_34);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL,b_7 = NULL;
  e_47 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      b_47 = ATgetArgument(t, 0);
      c_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_47);
  a_47 = t;
  t = SSL_is_string(b_47);
  d_47 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, d_47, c_47);
  b_7 = t;
  t = SSLsetAnnotations(b_7, a_47);
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm i_47 = NULL,j_47 = NULL,p_47 = NULL,a_48 = NULL,i_48 = NULL,c_7 = NULL;
  i_48 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      j_47 = ATgetArgument(t, 0);
      p_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_48);
  i_47 = t;
  t = SSL_is_string(j_47);
  a_48 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, a_48, p_47);
  c_7 = t;
  t = SSLsetAnnotations(c_7, i_47);
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = term_n_6;
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm o_6 = t;
  int p_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL;
      i_37 = t;
      if(match_cons(t, sym_SDefT_4))
        {
          j_37 = ATgetArgument(t, 0);
          k_37 = ATgetArgument(t, 1);
          l_37 = ATgetArgument(t, 2);
          h_37 = ATgetArgument(t, 3);
          {
            ATerm q_29 = NULL,x_29 = NULL,y_29 = NULL,a_30 = NULL,l_30 = NULL,v_6 = NULL;
            t = SSLgetAnnotations(i_37);
            q_29 = t;
            t = j_37;
            {
              ATerm q_6 = t;
              int r_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SSL_is_string(j_37);
                  ;
                  LocalPopChoice(r_6);
                }
              else
                {
                  t = q_6;
                  {
                    ATerm x_30 = NULL,y_30 = NULL,z_31 = NULL,j_32 = NULL,l_32 = NULL,s_6 = NULL;
                    if(match_cons(t, sym_Mod_2))
                      {
                        x_30 = ATgetArgument(t, 0);
                        y_30 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(j_37);
                    z_31 = t;
                    t = SSL_is_string(x_30);
                    j_32 = t;
                    t = SSL_is_string(y_30);
                    l_32 = t;
                    t = (ATerm) ATmakeAppl(sym_Mod_2, j_32, l_32);
                    s_6 = t;
                    t = SSLsetAnnotations(s_6, z_31);
                  }
                }
              x_29 = t;
              t = k_37;
              t = map_1_0(w_0, t);
              y_29 = t;
              t = l_37;
              t = map_1_0(y_0, t);
              a_30 = t;
              t = h_37;
              t = strategy_expression_0_0(t);
              l_30 = t;
              t = (ATerm) ATmakeAppl(sym_SDefT_4, x_29, y_29, a_30, l_30);
              v_6 = t;
              t = SSLsetAnnotations(v_6, q_29);
            }
          }
        }
      else
        {
          if(match_cons(t, sym_ExtSDefInl_4))
            {
              j_37 = ATgetArgument(t, 0);
              k_37 = ATgetArgument(t, 1);
              l_37 = ATgetArgument(t, 2);
              h_37 = ATgetArgument(t, 3);
              {
                ATerm b_33 = NULL,n_33 = NULL,o_33 = NULL,q_33 = NULL,u_33 = NULL,z_6 = NULL;
                t = SSLgetAnnotations(i_37);
                b_33 = t;
                t = j_37;
                {
                  ATerm e_7 = t;
                  int f_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_is_string(j_37);
                      ;
                      LocalPopChoice(f_7);
                    }
                  else
                    {
                      t = e_7;
                      {
                        ATerm i_34 = NULL,m_34 = NULL,g_41 = NULL,j_41 = NULL,k_41 = NULL,w_6 = NULL;
                        if(match_cons(t, sym_Mod_2))
                          {
                            i_34 = ATgetArgument(t, 0);
                            m_34 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(j_37);
                        g_41 = t;
                        t = SSL_is_string(i_34);
                        j_41 = t;
                        t = SSL_is_string(m_34);
                        k_41 = t;
                        t = (ATerm) ATmakeAppl(sym_Mod_2, j_41, k_41);
                        w_6 = t;
                        t = SSLsetAnnotations(w_6, g_41);
                      }
                    }
                  n_33 = t;
                  t = k_37;
                  t = map_1_0(a_1, t);
                  o_33 = t;
                  t = l_37;
                  t = map_1_0(e_1, t);
                  q_33 = t;
                  t = h_37;
                  t = strategy_expression_0_0(t);
                  u_33 = t;
                  t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, n_33, o_33, q_33, u_33);
                  z_6 = t;
                  t = SSLsetAnnotations(z_6, b_33);
                }
              }
            }
          else
            {
              ATerm i_43 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,d_7 = NULL;
              if(match_cons(t, sym_ExtSDef_3))
                {
                  j_37 = ATgetArgument(t, 0);
                  k_37 = ATgetArgument(t, 1);
                  l_37 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(i_37);
              i_43 = t;
              t = j_37;
              {
                ATerm g_7 = t;
                int h_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = SSL_is_string(j_37);
                    ;
                    LocalPopChoice(h_7);
                  }
                else
                  {
                    t = g_7;
                    {
                      ATerm s_46 = NULL,w_46 = NULL,u_50 = NULL,p_51 = NULL,q_51 = NULL,a_7 = NULL;
                      if(match_cons(t, sym_Mod_2))
                        {
                          s_46 = ATgetArgument(t, 0);
                          w_46 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(j_37);
                      u_50 = t;
                      t = SSL_is_string(s_46);
                      p_51 = t;
                      t = SSL_is_string(w_46);
                      q_51 = t;
                      t = (ATerm) ATmakeAppl(sym_Mod_2, p_51, q_51);
                      a_7 = t;
                      t = SSLsetAnnotations(a_7, u_50);
                    }
                  }
                i_44 = t;
                t = k_37;
                t = map_1_0(f_1, t);
                j_44 = t;
                t = l_37;
                t = map_1_0(g_1, t);
                k_44 = t;
                t = (ATerm) ATmakeAppl(sym_ExtSDef_3, i_44, j_44, k_44);
                d_7 = t;
                t = SSLsetAnnotations(d_7, i_43);
              }
            }
        }
      ;
      LocalPopChoice(p_6);
    }
  else
    {
      t = o_6;
      t = debug_1_0(h_1, t);
    }
  return(t);
}
ATerm map_1_0 (ATerm z_77 (ATerm), ATerm t)
{
  ATerm m_38 (ATerm t)
  {
    ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL;
    j_38 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_38;
      }
    else
      {
        ATerm b_54 = NULL,b_55 = NULL,c_55 = NULL,q_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_38 = ATgetFirst((ATermList) t);
            l_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_38);
        b_54 = t;
        t = k_38;
        t = z_77(t);
        b_55 = t;
        t = l_38;
        t = m_38(t);
        c_55 = t;
        t = (ATerm) ATinsert(CheckATermList(c_55), b_55);
        q_10 = t;
        t = SSLsetAnnotations(q_10, b_54);
      }
    return(t);
  }
  t = m_38(t);
  return(t);
}
ATerm t_3 (ATerm d_38, ATerm e_38, ATerm t)
{
  ATerm o_38 = NULL;
  t = SSL_fputc(d_38, e_38);
  o_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_38);
  return(t);
}
ATerm u_3 (ATerm r_41, ATerm s_41, ATerm t)
{
  ATerm p_38 = NULL;
  t = SSL_write_term_to_stream_text(r_41, s_41);
  p_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_38);
  return(t);
}
ATerm w_3 (ATerm w_90 (ATerm), ATerm g_400, ATerm v_41, ATerm t)
{
  ATerm q_38 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, g_400, term_j_7);
  t = z_3(t);
  q_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_38, v_41);
  t = w_90(t);
  t = fclose_0_0(t);
  t = v_41;
  return(t);
}
ATerm v_3 (ATerm n_41, ATerm o_41, ATerm t)
{
  ATerm r_38 = NULL;
  t = SSL_write_term_to_stream_baf(n_41, o_41);
  r_38 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_38);
  return(t);
}
ATerm k_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm q_55 = NULL,r_55 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_7 = ATgetArgument(t, 0);
      if(match_cons(l_7, sym_Stream_1))
        {
          q_55 = ATgetArgument(l_7, 0);
        }
      else
        _fail(t);
      r_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_3(q_55, r_55, t);
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_7 = ATgetArgument(t, 0);
      if(match_cons(m_7, sym_Stream_1))
        {
          f_56 = ATgetArgument(m_7, 0);
        }
      else
        _fail(t);
      g_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3(f_56, g_56, t);
  c_56 = t;
  t = term_n_7;
  d_56 = t;
  t = c_56;
  if(match_cons(t, sym_Stream_1))
    {
      e_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_n_7, c_56);
  t = t_3(d_56, e_56, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,f_40 = NULL,g_40 = NULL,u_10 = NULL,t_10 = NULL;
  w_38 = t;
  if(match_cons(t, sym__2))
    {
      d_39 = ATgetArgument(t, 0);
      e_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_38);
  c_39 = t;
  t = d_39;
  {
    ATerm o_7 = t;
    int p_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((v_38 != NULL) && (v_38 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                v_38 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(i_1, t);
        ;
        LocalPopChoice(p_7);
      }
    else
      {
        t = o_7;
        t = term_r_7;
        v_38 = t;
      }
    f_39 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_39, e_39);
    t_10 = t;
    t = SSLsetAnnotations(t_10, c_39);
    t = w_38;
    if(match_cons(t, sym__2))
      {
        y_38 = ATgetArgument(t, 0);
        z_38 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(w_38);
    x_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_38, (ATerm) ATmakeAppl(sym__2, not_null(v_38), z_38));
    u_10 = t;
    t = SSLsetAnnotations(u_10, x_38);
    b_39 = t;
    if(match_cons(t, sym__2))
      {
        f_40 = ATgetArgument(t, 0);
        g_40 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm t_7 = t;
      int u_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_55 = NULL,m_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL,y_10 = NULL;
          t = SSLgetAnnotations(b_39);
          j_55 = t;
          t = f_40;
          t = fetch_1_0(k_1, t);
          m_55 = t;
          t = g_40;
          if(match_cons(t, sym__2))
            {
              o_55 = ATgetArgument(t, 0);
              p_55 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_3(m_1, o_55, p_55, t);
          n_55 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_55, n_55);
          y_10 = t;
          t = SSLsetAnnotations(y_10, j_55);
          ;
          LocalPopChoice(u_7);
        }
      else
        {
          t = t_7;
          {
            ATerm w_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL,z_10 = NULL;
            t = SSLgetAnnotations(b_39);
            w_55 = t;
            t = g_40;
            if(match_cons(t, sym__2))
              {
                a_56 = ATgetArgument(t, 0);
                b_56 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = w_3(n_1, a_56, b_56, t);
            z_55 = t;
            t = (ATerm) ATmakeAppl(sym__2, f_40, z_55);
            z_10 = t;
            t = SSLsetAnnotations(z_10, w_55);
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
ATerm apply_strategy_1_0 (ATerm y_93 (ATerm), ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL;
  n_40 = t;
  t = dtime_0_0(t);
  t = n_40;
  t = y_93(t);
  m_40 = t;
  t = dtime_0_0(t);
  j_40 = t;
  t = m_40;
  if(match_cons(t, sym__2))
    {
      k_40 = ATgetArgument(t, 0);
      l_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_40), (ATerm) ATmakeAppl(sym_Runtime_1, j_40)), l_40);
  return(t);
}
ATerm b_41 (ATerm v_40, ATerm t)
{
  t = SSL_fclose(v_40);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL;
  z_40 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_40 = ATgetArgument(t, 0);
      {
        ATerm v_7 = t;
        int w_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(y_40);
            ;
            LocalPopChoice(w_7);
          }
        else
          {
            t = v_7;
            t = b_41(z_40, t);
          }
      }
    }
  else
    {
      t = b_41(z_40, t);
    }
  return(t);
}
ATerm x_3 (ATerm t_41, ATerm t)
{
  t = SSL_read_term_from_stream(t_41);
  return(t);
}
ATerm y_3 (ATerm f_38, ATerm g_38, ATerm t)
{
  ATerm c_41 = NULL;
  t = SSL_fopen(f_38, g_38);
  c_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_41);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm d_41 = NULL;
  t = SSL_stdin_stream();
  d_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_41);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_41 = NULL;
  t = SSL_stdout_stream();
  e_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_41);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_41 = NULL;
  t = SSL_stderr_stream();
  f_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_41);
  return(t);
}
ATerm t_42 (ATerm l_41, ATerm t)
{
  ATerm m_41 = NULL;
  t = SSL_explode_term(l_41);
  if(match_cons(t, sym__2))
    {
      ATerm x_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_7 = ATgetArgument(t, 1);
        if(((ATgetType(y_7) == AT_LIST) && !(ATisEmpty(y_7))))
          {
            m_41 = ATgetFirst((ATermList) y_7);
            {
              ATerm a_8 = (ATerm) ATgetNext((ATermList) y_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_41;
  if(match_cons(t, sym_stderr_0))
    {
      t = m_41;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = m_41;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = m_41;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm w_42 (ATerm w_41, ATerm x_41, ATerm y_41, ATerm t)
{
  ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL,e_42 = NULL,t_11 = NULL;
  t = SSLgetAnnotations(y_41);
  b_42 = t;
  t = w_41;
  if(match_cons(t, sym_Path_1))
    {
      e_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_42, x_41);
  t_11 = t;
  t = SSLsetAnnotations(t_11, b_42);
  if(match_cons(t, sym__2))
    {
      z_41 = ATgetArgument(t, 0);
      a_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(z_41, a_42, t);
  return(t);
}
ATerm x_42 (ATerm g_42, ATerm h_42, ATerm i_42, ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL,l_42 = NULL,o_42 = NULL,u_11 = NULL;
  t = SSLgetAnnotations(i_42);
  l_42 = t;
  t = SSL_is_string(g_42);
  o_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_42, h_42);
  u_11 = t;
  t = SSLsetAnnotations(u_11, l_42);
  if(match_cons(t, sym__2))
    {
      j_42 = ATgetArgument(t, 0);
      k_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(j_42, k_42, t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm q_42 = NULL,r_42 = NULL,s_42 = NULL;
  q_42 = t;
  if(match_cons(t, sym__2))
    {
      r_42 = ATgetArgument(t, 0);
      s_42 = ATgetArgument(t, 1);
      {
        ATerm b_8 = t;
        int e_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_42(q_42, t);
            ;
            LocalPopChoice(e_8);
          }
        else
          {
            t = b_8;
            {
              ATerm f_8 = t;
              int g_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_42(r_42, s_42, q_42, t);
                  ;
                  LocalPopChoice(g_8);
                }
              else
                {
                  t = f_8;
                  t = x_42(r_42, s_42, q_42, t);
                }
            }
          }
      }
    }
  else
    {
      t = t_42(q_42, t);
    }
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_h_8;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL;
  ATerm i_8 = t;
  int j_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_43 = NULL;
      b_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_43, term_k_8);
      t = z_3(t);
      ;
      LocalPopChoice(j_8);
    }
  else
    {
      t = i_8;
      t = debug_1_0(o_1, t);
      _fail(t);
    }
  z_42 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_3(a_43, t);
  y_42 = t;
  t = z_42;
  t = fclose_0_0(t);
  t = y_42;
  return(t);
}
ATerm fetch_1_0 (ATerm j_78 (ATerm), ATerm t)
{
  ATerm e_44 (ATerm t)
  {
    ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL;
    b_44 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_44 = ATgetFirst((ATermList) t);
        d_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_8 = t;
      int n_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_56 = NULL,v_56 = NULL,h_12 = NULL;
          t = SSLgetAnnotations(b_44);
          s_56 = t;
          t = c_44;
          t = j_78(t);
          v_56 = t;
          t = (ATerm) ATinsert(CheckATermList(d_44), v_56);
          h_12 = t;
          t = SSLsetAnnotations(h_12, s_56);
          ;
          LocalPopChoice(n_8);
        }
      else
        {
          t = m_8;
          {
            ATerm f_57 = NULL,i_57 = NULL,i_12 = NULL;
            t = SSLgetAnnotations(b_44);
            f_57 = t;
            t = d_44;
            t = e_44(t);
            i_57 = t;
            t = (ATerm) ATinsert(CheckATermList(i_57), c_44);
            i_12 = t;
            t = SSLsetAnnotations(i_12, f_57);
          }
        }
    }
    return(t);
  }
  t = e_44(t);
  return(t);
}
ATerm s_3 (ATerm s_32, ATerm t_32, ATerm t)
{
  t = SSL_strcat(s_32, t_32);
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(r_8);
    }
  else
    {
      t = q_8;
    }
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_s_8;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm t_8 = t;
  int u_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_44 = NULL;
      r_44 = t;
      t = SSL_is_string(r_44);
      ;
      LocalPopChoice(u_8);
    }
  else
    {
      t = t_8;
      {
        ATerm v_8 = t;
        int w_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(p_1, t);
            ;
            LocalPopChoice(w_8);
          }
        else
          {
            t = v_8;
            {
              ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL;
              x_44 = t;
              if(match_cons(t, sym_Path_1))
                {
                  y_44 = ATgetArgument(t, 0);
                  t = y_44;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      y_44 = ATgetArgument(t, 0);
                      t = y_44;
                      {
                        ATerm y_8 = t;
                        int z_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(z_8);
                          }
                        else
                          {
                            t = y_8;
                            t = debug_1_0(q_1, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm d_45 = NULL,e_45 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          y_44 = ATgetArgument(t, 0);
                          z_44 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = y_44;
                      t = eval_config_0_0(t);
                      d_45 = t;
                      t = z_44;
                      t = eval_config_0_0(t);
                      e_45 = t;
                      t = (ATerm) ATmakeAppl(sym__2, d_45, e_45);
                      t = s_3(d_45, e_45, t);
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
  ATerm i_45 = NULL,j_45 = NULL;
  i_45 = t;
  t = term_c_9;
  j_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_9, i_45);
  t = c_4(j_45, i_45, t);
  {
    ATerm d_9 = t;
    int e_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_45 = NULL,l_45 = NULL;
        t = eval_config_0_0(t);
        k_45 = t;
        t = term_c_9;
        l_45 = t;
        t = SSL_table_put(l_45, i_45, k_45);
        t = k_45;
        ;
        LocalPopChoice(e_9);
      }
    else
      {
        t = d_9;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm h_92 (ATerm), ATerm t)
{
  ATerm p_45 = NULL;
  p_45 = t;
  {
    ATerm f_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_45 = NULL;
        t = term_h_9;
        t = get_config_0_0(t);
        r_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_45, term_i_9);
        t = geq_0_0(t);
        t = p_45;
        t = h_92(t);
        ;
        LocalPopChoice(g_9);
      }
    else
      {
        t = f_9;
        t = p_45;
      }
  }
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm u_45 = NULL;
  u_45 = t;
  if(match_string(t, "-k"))
    {
      t = u_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = u_45;
    }
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm v_45 = NULL,w_45 = NULL,x_45 = NULL;
  v_45 = t;
  t = SSL_string_to_int(v_45);
  w_45 = t;
  t = term_j_9;
  x_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_9, w_45);
  t = f_4(x_45, w_45, t);
  t = v_45;
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_l_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_1, u_1, v_1, t);
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm z_45 = NULL;
  z_45 = t;
  if(match_string(t, "-S"))
    {
      t = z_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = z_45;
    }
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL;
  t = term_h_9;
  a_46 = t;
  t = term_m_9;
  b_46 = t;
  t = term_n_9;
  t = f_4(a_46, b_46, t);
  t = term_r_9;
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_s_9;
  return(t);
}
ATerm d_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL;
  c_46 = t;
  t = SSL_string_to_int(c_46);
  d_46 = t;
  t = term_h_9;
  e_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_9, d_46);
  t = f_4(e_46, d_46, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_46);
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_t_9;
  return(t);
}
ATerm m_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL;
  t = term_u_9;
  f_46 = t;
  t = term_a_6;
  g_46 = t;
  t = term_v_9;
  t = f_4(f_46, g_46, t);
  t = term_w_9;
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_x_9;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_9 = t;
  int z_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_1, x_1, y_1, t);
      ;
      LocalPopChoice(z_9);
    }
  else
    {
      t = y_9;
      {
        ATerm a_10 = t;
        int b_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_2, j_2, l_2, t);
            ;
            LocalPopChoice(b_10);
          }
        else
          {
            t = a_10;
            t = Option_3_0(m_2, n_2, o_2, t);
          }
      }
    }
  return(t);
}
ATerm f_4 (ATerm u_42, ATerm v_42, ATerm t)
{
  ATerm h_46 = NULL;
  t = term_c_9;
  h_46 = t;
  t = SSL_table_put(h_46, u_42, v_42);
  t = (ATerm) ATmakeAppl(sym__3, term_c_9, u_42, v_42);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_46 = NULL,n_46 = NULL,o_46 = NULL;
      t = term_a_6;
      t = e_0(t);
      m_46 = t;
      t = term_c_10;
      n_46 = t;
      t = term_d_10;
      o_46 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_10, term_d_10, m_46);
      t = d_4(n_46, o_46, m_46, t);
      _fail(t);
    }
  else
    {
      ATerm r_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_46 = ATgetFirst((ATermList) t);
          l_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_46;
      t = c_0(t);
      t = term_a_6;
      t = d_0(t);
      r_46 = t;
      t = (ATerm) ATinsert(CheckATermList(l_46), r_46);
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm t_46 = NULL;
  t_46 = t;
  if(match_string(t, "-o"))
    {
      t = t_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_46;
    }
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm u_46 = NULL,v_46 = NULL;
  u_46 = t;
  t = term_e_10;
  v_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_10, u_46);
  t = f_4(v_46, u_46, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, u_46);
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_g_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_2, q_2, r_2, t);
  return(t);
}
ATerm d_4 (ATerm s_47, ATerm t_47, ATerm r_47, ATerm t)
{
  ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL;
  x_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_47, t_47);
  {
    ATerm h_10 = t;
    int j_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_10 = ATgetArgument(t, 0);
            ATerm m_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, s_47, t_47);
        t = c_4(s_47, t_47, t);
        ;
        LocalPopChoice(j_10);
      }
    else
      {
        t = h_10;
        t = (ATerm) ATempty;
      }
    y_46 = t;
    t = (ATerm) ATinsert(CheckATermList(y_46), r_47);
    z_46 = t;
    t = SSL_table_put(s_47, t_47, z_46);
    t = x_46;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_47 = NULL,u_47 = NULL,v_47 = NULL;
      t = term_a_6;
      t = k_0(t);
      q_47 = t;
      t = term_c_10;
      u_47 = t;
      t = term_d_10;
      v_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_10, term_d_10, q_47);
      t = d_4(u_47, v_47, q_47, t);
      _fail(t);
    }
  else
    {
      ATerm z_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_47 = ATgetFirst((ATermList) t);
          m_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_47;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_47 = ATgetFirst((ATermList) t);
          o_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_47;
      t = i_0(t);
      t = n_47;
      t = j_0(t);
      z_47 = t;
      t = (ATerm) ATinsert(CheckATermList(o_47), z_47);
    }
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm b_48 = NULL;
  b_48 = t;
  if(match_string(t, "-i"))
    {
      t = b_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_48;
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm c_48 = NULL,d_48 = NULL;
  c_48 = t;
  t = term_n_10;
  d_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_10, c_48);
  t = f_4(d_48, c_48, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_48);
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_o_10;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_2, t_2, u_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_6;
  t = whoami_0_0(t);
  e_48 = t;
  t = term_b_6;
  g_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_p_10), e_48);
  h_48 = t;
  t = SSL_printnl(g_48, h_48);
  t = term_e_6;
  f_48 = t;
  t = SSL_exit(f_48);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_r_10;
  t = get_config_0_0(t);
  return(t);
}
ATerm a_4 (ATerm d_35, ATerm e_35, ATerm t)
{
  ATerm s_10 = t;
  int v_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(d_35, e_35);
      ;
      LocalPopChoice(v_10);
    }
  else
    {
      t = s_10;
      t = SSL_addr(d_35, e_35);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_84 (ATerm), ATerm d_84 (ATerm), ATerm t)
{
  ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL;
  j_48 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_48;
      t = c_84(t);
    }
  else
    {
      ATerm o_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_48 = ATgetFirst((ATermList) t);
          l_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_48;
      t = foldr_2_0(c_84, d_84, t);
      o_48 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_48, o_48);
      t = d_84(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = term_m_9;
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm z_57 = NULL,a_58 = NULL;
  if(match_cons(t, sym__2))
    {
      z_57 = ATgetArgument(t, 0);
      a_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_4(z_57, a_58, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_48 = NULL,v_57 = NULL,w_57 = NULL;
  t = times_0_0(t);
  w_57 = t;
  t = SSL_explode_term(w_57);
  if(match_cons(t, sym__2))
    {
      ATerm w_10 = ATgetArgument(t, 0);
      v_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_57;
  t = foldr_2_0(v_2, w_2, t);
  r_48 = t;
  t = SSL_TicksToSeconds(r_48);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_49 = NULL,d_49 = NULL,e_49 = NULL;
  c_49 = t;
  if(match_cons(t, sym__2))
    {
      d_49 = ATgetArgument(t, 0);
      e_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_49;
        if((d_49 != t))
          {
            _fail(t);
          }
        t = c_49;
        ;
        LocalPopChoice(a_11);
      }
    else
      {
        t = x_10;
        t = (ATerm) ATmakeAppl(sym__2, d_49, e_49);
        {
          ATerm c_11 = t;
          int d_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_49, e_49);
              ;
              LocalPopChoice(d_11);
            }
          else
            {
              t = c_11;
              t = SSL_gtr(d_49, e_49);
            }
          t = (ATerm) ATmakeAppl(sym__2, d_49, e_49);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_92 (ATerm), ATerm t)
{
  ATerm i_49 = NULL;
  i_49 = t;
  {
    ATerm g_11 = t;
    int h_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_49 = NULL;
        t = term_h_9;
        t = get_config_0_0(t);
        m_49 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_49, term_e_6);
        t = geq_0_0(t);
        t = i_49;
        t = g_92(t);
        ;
        LocalPopChoice(h_11);
      }
    else
      {
        t = g_11;
        t = i_49;
      }
  }
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL,r_49 = NULL,s_49 = NULL;
  t = run_time_0_0(t);
  o_49 = t;
  t = term_a_6;
  t = whoami_0_0(t);
  p_49 = t;
  t = term_b_6;
  r_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_11), o_49), term_i_11), p_49);
  s_49 = t;
  t = SSL_printnl(r_49, s_49);
  t = (ATerm) ATmakeAppl(sym__2, term_b_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_11), o_49), term_i_11), p_49));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(z_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm t_49 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_9;
  t_49 = t;
  t = SSL_exit(t_49);
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL;
  c_50 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = c_50;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          b_50 = ATgetArgument(t, 0);
          {
            ATerm m_58 = NULL,l_12 = NULL;
            t = SSLgetAnnotations(c_50);
            m_58 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, b_50);
            l_12 = t;
            t = SSLsetAnnotations(l_12, m_58);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = c_50;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm w_94 (ATerm), ATerm t)
{
  ATerm k_11 = t;
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
      t = k_11;
      t = fetch_1_0(d_3, t);
    }
  t = w_94(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm f_50 = NULL,g_50 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_50 = ATgetFirst((ATermList) t);
      g_50 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_50 = NULL,l_50 = NULL;
        ATerm g_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(k_50)), not_null(l_50));
          return(t);
        }
        t = g_50;
        t = h_0(t);
        if(((k_50 != NULL) && (k_50 != t)))
          _fail(t);
        else
          k_50 = t;
        t = f_50;
        t = g_0(t);
        if(((l_50 != NULL) && (l_50 != t)))
          _fail(t);
        else
          l_50 = t;
        t = g_50;
        t = reverse_acc_2_0(g_0, g_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_6;
      t = h_0(t);
    }
  return(t);
}
ATerm c_4 (ATerm j_49, ATerm k_49, ATerm t)
{
  t = SSL_table_get(j_49, k_49);
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm p_50 = NULL,q_50 = NULL,r_50 = NULL,n_12 = NULL;
  r_50 = t;
  if(match_cons(t, sym_Program_1))
    {
      q_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_50);
  p_50 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, q_50);
  n_12 = t;
  t = SSLsetAnnotations(n_12, p_50);
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm t_50 = NULL;
  t_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_50), term_n_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_50 = NULL,o_50 = NULL;
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_10;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_11);
    }
  else
    {
      t = o_11;
      t = fetch_1_0(n_3, t);
    }
  t = term_q_11;
  t = echo_0_0(t);
  t = term_c_10;
  n_50 = t;
  t = term_d_10;
  o_50 = t;
  t = term_s_11;
  t = c_4(n_50, o_50, t);
  t = reverse_acc_2_0(_id, o_3, t);
  t = map_1_0(p_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL;
  v_50 = t;
  {
    ATerm v_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_50;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_11 = ATgetFirst((ATermList) t);
                ATerm y_11 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_50;
          }
        ;
        LocalPopChoice(w_11);
      }
    else
      {
        t = v_11;
        t = (ATerm) ATinsert(ATempty, v_50);
      }
    w_50 = t;
    t = term_r_7;
    x_50 = t;
    t = SSL_printnl(x_50, w_50);
    t = v_50;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_r_10;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL;
  t = term_z_11;
  b_51 = t;
  t = term_a_6;
  c_51 = t;
  t = term_g_12;
  t = f_4(b_51, c_51, t);
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_j_12;
  return(t);
}
ATerm i_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm d_51 = NULL,e_51 = NULL,f_51 = NULL,g_51 = NULL;
  t = term_z_11;
  f_51 = t;
  t = term_a_6;
  g_51 = t;
  t = term_g_12;
  t = f_4(f_51, g_51, t);
  t = term_k_12;
  d_51 = t;
  t = term_a_6;
  e_51 = t;
  t = term_m_12;
  t = f_4(d_51, e_51, t);
  t = term_o_12;
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_q_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm s_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_3, b_4, e_4, t);
      ;
      LocalPopChoice(v_12);
    }
  else
    {
      t = s_12;
      t = Option_3_0(i_4, m_4, o_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_56 (ATerm), ATerm a_57 (ATerm), ATerm t)
{
  ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL,l_51 = NULL,m_51 = NULL,p_12 = NULL;
  m_51 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_51 = ATgetFirst((ATermList) t);
      j_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_51);
  h_51 = t;
  t = i_51;
  t = z_56(t);
  k_51 = t;
  t = j_51;
  t = a_57(t);
  l_51 = t;
  t = (ATerm) ATinsert(CheckATermList(l_51), k_51);
  p_12 = t;
  t = SSLsetAnnotations(p_12, h_51);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_96 (ATerm), ATerm t)
{
  ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL,w_51 = NULL,x_51 = NULL,t_12 = NULL;
  r_51 = t;
  {
    ATerm x_12 = t;
    int a_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_13;
        t = z_96(t);
        ;
        LocalPopChoice(a_13);
      }
    else
      {
        t = x_12;
      }
    t = r_51;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_51 = ATgetFirst((ATermList) t);
        u_51 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(r_51);
    s_51 = t;
    t = term_r_10;
    x_51 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_r_10, t_51);
    t = f_4(x_51, t_51, t);
    t = u_51;
    {
      ATerm h_52 (ATerm t)
      {
        ATerm e_13 = t;
        int f_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_13 = t;
            int h_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_52 = NULL;
                a_52 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = a_52;
                ;
                LocalPopChoice(h_13);
              }
            else
              {
                t = g_13;
                t = z_96(t);
                t = Cons_2_0(_id, h_52, t);
              }
            ;
            LocalPopChoice(f_13);
          }
        else
          {
            t = e_13;
            {
              ATerm d_52 = NULL,e_52 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_52 = ATgetFirst((ATermList) t);
                  e_52 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(e_52), (ATerm) ATmakeAppl(sym_Undefined_1, d_52));
            }
          }
        return(t);
      }
      t = h_52(t);
      w_51 = t;
      t = (ATerm) ATinsert(CheckATermList(w_51), (ATerm) ATmakeAppl(sym_Program_1, t_51));
      t_12 = t;
      t = SSLsetAnnotations(t_12, s_51);
    }
  }
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm t_52 = NULL;
  t_52 = t;
  if(match_string(t, "--help"))
    {
      t = t_52;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_52;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_52;
        }
    }
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm u_52 = NULL,v_52 = NULL;
  t = term_m_11;
  u_52 = t;
  t = term_a_6;
  v_52 = t;
  t = term_j_13;
  t = f_4(u_52, v_52, t);
  t = term_l_13;
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = term_m_13;
  return(t);
}
ATerm l_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_96 (ATerm), ATerm t)
{
  ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL,r_52 = NULL,s_52 = NULL;
  o_52 = t;
  t = term_c_10;
  q_52 = t;
  t = term_d_10;
  r_52 = t;
  t = (ATerm) ATempty;
  s_52 = t;
  t = SSL_table_put(q_52, r_52, s_52);
  t = o_52;
  {
    ATerm u_4 (ATerm t)
    {
      ATerm p_13 = t;
      int q_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_96(t);
          ;
          LocalPopChoice(q_13);
        }
      else
        {
          t = p_13;
          {
            ATerm r_13 = t;
            int s_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(w_4, x_4, y_4, t);
                ;
                LocalPopChoice(s_13);
              }
            else
              {
                t = r_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(u_4, t);
    {
      ATerm t_13 = t;
      int u_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_53 = NULL;
          c_53 = t;
          {
            ATerm w_13 = t;
            int x_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_58 = NULL;
                t = c_53;
                {
                  ATerm y_13 = t;
                  int z_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_m_11;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(z_13);
                    }
                  else
                    {
                      t = y_13;
                      t = fetch_1_0(l_5, t);
                    }
                  t = c_53;
                  t = default_system_usage_0_0(t);
                  t = term_m_9;
                  t_58 = t;
                  t = SSL_exit(t_58);
                }
                ;
                LocalPopChoice(x_13);
              }
            else
              {
                t = w_13;
                {
                  ATerm x_58 = NULL;
                  t = term_z_11;
                  t = get_config_0_0(t);
                  t = c_53;
                  t = default_system_about_0_0(t);
                  t = term_m_9;
                  x_58 = t;
                  t = SSL_exit(x_58);
                }
              }
          }
          ;
          LocalPopChoice(u_13);
        }
      else
        {
          t = t_13;
          {
            ATerm b_14 = t;
            int d_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_53 = NULL,e_53 = NULL,f_53 = NULL;
                ATerm m_5 (ATerm t)
                {
                  ATerm g_53 = NULL,h_53 = NULL,i_53 = NULL,w_12 = NULL;
                  i_53 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      h_53 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(i_53);
                  g_53 = t;
                  t = h_53;
                  if(((m_52 != NULL) && (m_52 != t)))
                    _fail(t);
                  else
                    m_52 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, h_53);
                  w_12 = t;
                  t = SSLsetAnnotations(w_12, g_53);
                  return(t);
                }
                t = fetch_1_0(m_5, t);
                t = term_b_6;
                e_53 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_52)), term_e_14);
                f_53 = t;
                t = SSL_printnl(e_53, f_53);
                t = (ATerm) ATmakeAppl(sym__2, term_b_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_52)), term_e_14));
                t = default_system_usage_0_0(t);
                t = term_e_6;
                d_53 = t;
                t = SSL_exit(d_53);
                ;
                LocalPopChoice(d_14);
              }
            else
              {
                t = b_14;
              }
          }
        }
      n_52 = t;
      t = term_c_10;
      p_52 = t;
      t = SSL_table_destroy(p_52);
      t = n_52;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_94 (ATerm), ATerm z_94 (ATerm), ATerm a_95 (ATerm), ATerm b_95 (ATerm), ATerm t)
{
  ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL;
  t = parse_options_1_0(y_94, t);
  n_53 = t;
  t = term_f_14;
  q_53 = t;
  t = SSL_table_create(q_53);
  t = term_f_14;
  o_53 = t;
  t = term_g_14;
  p_53 = t;
  t = SSL_table_put(o_53, p_53, n_53);
  t = n_53;
  t = a_95(t);
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_94, t);
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
              t = b_95(t);
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
ATerm o_5 (ATerm t)
{
  t = if_verbose2_1_0(v_5, t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm r_53 = NULL,s_53 = NULL;
  t = term_l_14;
  r_53 = t;
  t = term_a_6;
  s_53 = t;
  t = term_m_14;
  t = f_4(r_53, s_53, t);
  t = term_o_14;
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = term_p_14;
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm t_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL;
  t_53 = t;
  t = term_r_10;
  t = get_config_0_0(t);
  u_53 = t;
  t = term_b_6;
  v_53 = t;
  t = (ATerm) ATinsert(ATempty, u_53);
  w_53 = t;
  t = SSL_printnl(v_53, w_53);
  t = t_53;
  return(t);
}
ATerm iowrap_3_0 (ATerm h_94 (ATerm), ATerm i_94 (ATerm), ATerm j_94 (ATerm), ATerm t)
{
  ATerm n_5 (ATerm t)
  {
    ATerm q_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_94(t);
        ;
        LocalPopChoice(r_14);
      }
    else
      {
        t = q_14;
        {
          ATerm t_14 = t;
          int v_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(v_14);
            }
          else
            {
              t = t_14;
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
                          t = Option_3_0(q_5, r_5, s_5, t);
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
  ATerm p_5 (ATerm t)
  {
    ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL;
    y_53 = t;
    {
      ATerm c_15 = t;
      int d_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((x_53 != NULL) && (x_53 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  x_53 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(w_5, t);
          ;
          LocalPopChoice(d_15);
        }
      else
        {
          t = c_15;
          t = term_e_15;
          x_53 = t;
        }
      t = not_null(x_53);
      t = ReadFromFile_0_0(t);
      z_53 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_53, z_53);
      t = apply_strategy_1_0(h_94, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(n_5, j_94, o_5, p_5, t);
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm c_54 = NULL,d_54 = NULL,e_54 = NULL,f_54 = NULL,g_54 = NULL,k_13 = NULL;
  g_54 = t;
  if(match_cons(t, sym__2))
    {
      d_54 = ATgetArgument(t, 0);
      e_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_54);
  c_54 = t;
  t = e_54;
  {
    ATerm f_15 = t;
    int g_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_54 = NULL,a_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL,d_13 = NULL,c_13 = NULL,z_12 = NULL,y_12 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            x_54 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_54);
        a_59 = t;
        t = x_54;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_59 = ATgetFirst((ATermList) t);
            e_59 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_54);
        c_59 = t;
        t = e_59;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_59 = ATgetFirst((ATermList) t);
            i_59 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_59);
        g_59 = t;
        t = h_59;
        if(match_cons(t, sym_Strategies_1))
          {
            l_59 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_59);
        k_59 = t;
        t = l_59;
        t = map_1_0(strategy_definition_0_0, t);
        m_59 = t;
        t = (ATerm) ATmakeAppl(sym_Strategies_1, m_59);
        y_12 = t;
        t = SSLsetAnnotations(y_12, k_59);
        n_59 = t;
        t = i_59;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(i_59), n_59);
        z_12 = t;
        t = SSLsetAnnotations(z_12, g_59);
        j_59 = t;
        t = (ATerm) ATinsert(CheckATermList(j_59), d_59);
        c_13 = t;
        t = SSLsetAnnotations(c_13, c_59);
        f_59 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, f_59);
        d_13 = t;
        t = SSLsetAnnotations(d_13, a_59);
        ;
        LocalPopChoice(g_15);
      }
    else
      {
        t = f_15;
        t = debug_1_0(y_5, t);
      }
    f_54 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_54, f_54);
    k_13 = t;
    t = SSLsetAnnotations(k_13, c_54);
  }
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_i_15;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(x_5, _fail, default_usage_0_0, t);
  return(t);
}

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
ATerm term_b_24;
ATerm term_y_23;
ATerm term_l_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_c_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_i_22;
ATerm term_d_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_a_19;
ATerm term_s_18;
ATerm term_n_18;
ATerm term_k_18;
ATerm term_w_17;
ATerm term_t_17;
ATerm term_p_17;
ATerm term_h_17;
ATerm term_w_14;
ATerm term_u_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_w_8;
void init_constant_terms (void)
{
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("not a match-term-expression: ", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym__2, term_g_19, term_k_19);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym__2, term_q_19, term_w_8);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym__2, term_z_19, term_a_20);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym__2, term_r_21, term_w_8);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym__2, term_u_21, term_w_8);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym__2, term_g_21, term_w_8);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym__2, term_h_23, term_w_8);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
}
ATerm default_usage_0_0 (ATerm);
ATerm debug_1_0 (ATerm w_102 (ATerm), ATerm);
ATerm Let_2_0 (ATerm o_73 (ATerm), ATerm p_73 (ATerm), ATerm);
ATerm Var_1_0 (ATerm e_70 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm n_73 (ATerm), ATerm);
ATerm Call_2_0 (ATerm q_73 (ATerm), ATerm r_73 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm u_74 (ATerm), ATerm v_74 (ATerm), ATerm w_74 (ATerm), ATerm);
ATerm Where_1_0 (ATerm o_74 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm term_expression_0_0 (ATerm);
ATerm Build_1_0 (ATerm w_73 (ATerm), ATerm);
ATerm Op_2_0 (ATerm k_70 (ATerm), ATerm l_70 (ATerm), ATerm);
ATerm As_2_0 (ATerm v_70 (ATerm), ATerm w_70 (ATerm), ATerm);
ATerm BuildDefault_1_0 (ATerm b_71 (ATerm), ATerm);
ATerm Str_1_0 (ATerm i_70 (ATerm), ATerm);
ATerm Real_1_0 (ATerm h_70 (ATerm), ATerm);
ATerm Int_1_0 (ATerm g_70 (ATerm), ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm match_term_exp_0_0 (ATerm);
ATerm Match_1_0 (ATerm v_73 (ATerm), ATerm);
ATerm Thread_1_0 (ATerm c_75 (ATerm), ATerm);
ATerm All_1_0 (ATerm b_75 (ATerm), ATerm);
ATerm Some_1_0 (ATerm z_74 (ATerm), ATerm);
ATerm One_1_0 (ATerm a_75 (ATerm), ATerm);
ATerm Cong_2_0 (ATerm x_68 (ATerm), ATerm y_68 (ATerm), ATerm);
ATerm Path_2_0 (ATerm x_74 (ATerm), ATerm y_74 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm l_74 (ATerm), ATerm m_74 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm s_73 (ATerm), ATerm t_73 (ATerm), ATerm u_73 (ATerm), ATerm);
ATerm LGChoice_2_0 (ATerm g_74 (ATerm), ATerm h_74 (ATerm), ATerm);
ATerm GChoice_2_0 (ATerm g_73 (ATerm), ATerm h_73 (ATerm), ATerm);
ATerm GuardedLChoice_3_0 (ATerm i_74 (ATerm), ATerm j_74 (ATerm), ATerm k_74 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm e_74 (ATerm), ATerm f_74 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm c_73 (ATerm), ATerm d_73 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm c_74 (ATerm), ATerm d_74 (ATerm), ATerm);
ATerm Test_1_0 (ATerm p_74 (ATerm), ATerm);
ATerm Not_1_0 (ATerm n_74 (ATerm), ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm r_6 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm y_6 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm strategy_expression_0_0 (ATerm);
ATerm VarDec_2_0 (ATerm z_75 (ATerm), ATerm a_76 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm i_76 (ATerm), ATerm j_76 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm d_76 (ATerm), ATerm e_76 (ATerm), ATerm f_76 (ATerm), ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm l_8 (ATerm);
ATerm n_8 (ATerm);
ATerm o_8 (ATerm);
ATerm p_8 (ATerm);
ATerm q_8 (ATerm);
ATerm t_8 (ATerm);
ATerm u_8 (ATerm);
ATerm y_8 (ATerm);
ATerm c_9 (ATerm);
ATerm strategy_definition_0_0 (ATerm);
ATerm map_1_0 (ATerm h_90 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm b_69 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm t_68 (ATerm), ATerm u_68 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm g_69 (ATerm), ATerm);
ATerm _2_0 (ATerm e_64 (ATerm), ATerm f_64 (ATerm), ATerm);
ATerm t_3 (ATerm x_49, ATerm y_49, ATerm);
ATerm u_3 (ATerm l_53, ATerm m_53, ATerm);
ATerm w_3 (ATerm y_102 (ATerm), ATerm g_426, ATerm p_53, ATerm);
ATerm v_3 (ATerm h_53, ATerm i_53, ATerm);
ATerm g_9 (ATerm);
ATerm h_9 (ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm k_9 (ATerm);
ATerm l_9 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm a_106 (ATerm), ATerm);
ATerm b_32 (ATerm v_31, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm x_3 (ATerm n_53, ATerm);
ATerm y_3 (ATerm z_49, ATerm a_50, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm m_9 (ATerm);
ATerm n_9 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm o_9 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm r_90 (ATerm), ATerm);
ATerm s_3 (ATerm n_44, ATerm o_44, ATerm);
ATerm p_9 (ATerm);
ATerm q_9 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm j_104 (ATerm), ATerm);
ATerm r_9 (ATerm);
ATerm t_9 (ATerm);
ATerm u_9 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm w_9 (ATerm);
ATerm y_9 (ATerm);
ATerm z_9 (ATerm);
ATerm a_10 (ATerm);
ATerm c_10 (ATerm);
ATerm d_10 (ATerm);
ATerm f_10 (ATerm);
ATerm g_10 (ATerm);
ATerm h_10 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm e_4 (ATerm o_54, ATerm p_54, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm i_10 (ATerm);
ATerm k_10 (ATerm);
ATerm l_10 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm c_4 (ATerm m_59, ATerm n_59, ATerm l_59, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm m_10 (ATerm);
ATerm n_10 (ATerm);
ATerm o_10 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm z_3 (ATerm x_46, ATerm y_46, ATerm);
ATerm foldr_2_0 (ATerm k_96 (ATerm), ATerm l_96 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm p_10 (ATerm);
ATerm r_10 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm i_104 (ATerm), ATerm);
ATerm s_10 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm w_10 (ATerm);
ATerm need_help_1_0 (ATerm y_106 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm b_4 (ATerm d_61, ATerm e_61, ATerm);
ATerm Program_1_0 (ATerm u_81 (ATerm), ATerm);
ATerm y_10 (ATerm);
ATerm z_10 (ATerm);
ATerm b_11 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm v_81 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm c_11 (ATerm);
ATerm d_11 (ATerm);
ATerm e_11 (ATerm);
ATerm f_11 (ATerm);
ATerm g_11 (ATerm);
ATerm i_11 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm j_11 (ATerm);
ATerm parse_options_p__1_0 (ATerm b_109 (ATerm), ATerm);
ATerm p_11 (ATerm);
ATerm r_11 (ATerm);
ATerm s_11 (ATerm);
ATerm t_11 (ATerm);
ATerm parse_options_1_0 (ATerm a_109 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm c_107 (ATerm), ATerm d_107 (ATerm), ATerm);
ATerm a_12 (ATerm);
ATerm c_12 (ATerm);
ATerm d_12 (ATerm);
ATerm e_12 (ATerm);
ATerm f_12 (ATerm);
ATerm iowrap_3_0 (ATerm j_106 (ATerm), ATerm k_106 (ATerm), ATerm l_106 (ATerm), ATerm);
ATerm i_12 (ATerm);
ATerm j_12 (ATerm);
ATerm k_12 (ATerm);
ATerm l_12 (ATerm);
ATerm m_12 (ATerm);
ATerm n_12 (ATerm);
ATerm p_12 (ATerm);
ATerm t_12 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm e_0 = NULL,l_0 = NULL,m_0 = NULL,n_0 = NULL,o_0 = NULL;
  e_0 = t;
  t = term_w_8;
  t = whoami_0_0(t);
  l_0 = t;
  t = term_u_12;
  m_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_12), l_0), term_v_12);
  n_0 = t;
  t = SSL_printnl(m_0, n_0);
  t = term_x_12;
  o_0 = t;
  t = SSL_exit(o_0);
  t = e_0;
  return(t);
}
ATerm debug_1_0 (ATerm w_102 (ATerm), ATerm t)
{
  ATerm x_0 = NULL,d_1 = NULL,e_1 = NULL,n_1 = NULL;
  x_0 = t;
  t = w_102(t);
  d_1 = t;
  t = term_u_12;
  e_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_0), d_1);
  n_1 = t;
  t = SSL_printnl(e_1, n_1);
  t = x_0;
  return(t);
}
ATerm Let_2_0 (ATerm o_73 (ATerm), ATerm p_73 (ATerm), ATerm t)
{
  ATerm q_1 = NULL,r_1 = NULL,t_1 = NULL,u_1 = NULL,v_1 = NULL,x_1 = NULL,c_0 = NULL,k_0 = NULL;
  x_1 = t;
  if(match_cons(t, sym_Let_2))
    {
      r_1 = ATgetArgument(t, 0);
      t_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_1);
  q_1 = t;
  t = r_1;
  t = o_73(t);
  u_1 = t;
  t = t_1;
  t = p_73(t);
  v_1 = t;
  k_0 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, u_1, v_1);
  c_0 = t;
  t = SSLsetAnnotations(c_0, q_1);
  return(t);
}
ATerm Var_1_0 (ATerm e_70 (ATerm), ATerm t)
{
  ATerm b_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL,q_0 = NULL,s_0 = NULL;
  f_2 = t;
  if(match_cons(t, sym_Var_1))
    {
      d_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_2);
  b_2 = t;
  t = d_2;
  t = e_70(t);
  e_2 = t;
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, e_2);
  q_0 = t;
  t = SSLsetAnnotations(q_0, b_2);
  return(t);
}
ATerm SVar_1_0 (ATerm n_73 (ATerm), ATerm t)
{
  ATerm i_2 = NULL,j_2 = NULL,o_2 = NULL,q_2 = NULL,u_0 = NULL,v_0 = NULL;
  q_2 = t;
  if(match_cons(t, sym_SVar_1))
    {
      j_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_2);
  i_2 = t;
  t = j_2;
  t = n_73(t);
  o_2 = t;
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, o_2);
  u_0 = t;
  t = SSLsetAnnotations(u_0, i_2);
  return(t);
}
ATerm Call_2_0 (ATerm q_73 (ATerm), ATerm r_73 (ATerm), ATerm t)
{
  ATerm t_2 = NULL,u_2 = NULL,w_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL,w_0 = NULL,y_0 = NULL;
  a_3 = t;
  if(match_cons(t, sym_Call_2))
    {
      u_2 = ATgetArgument(t, 0);
      w_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_3);
  t_2 = t;
  t = u_2;
  t = q_73(t);
  y_2 = t;
  t = w_2;
  t = r_73(t);
  z_2 = t;
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, y_2, z_2);
  w_0 = t;
  t = SSLsetAnnotations(w_0, t_2);
  return(t);
}
ATerm PrimT_3_0 (ATerm u_74 (ATerm), ATerm v_74 (ATerm), ATerm w_74 (ATerm), ATerm t)
{
  ATerm f_3 = NULL,i_3 = NULL,j_3 = NULL,r_3 = NULL,f_5 = NULL,y_5 = NULL,z_5 = NULL,c_6 = NULL,z_0 = NULL,a_1 = NULL;
  c_6 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      i_3 = ATgetArgument(t, 0);
      j_3 = ATgetArgument(t, 1);
      r_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_6);
  f_3 = t;
  t = i_3;
  t = u_74(t);
  f_5 = t;
  t = j_3;
  t = v_74(t);
  y_5 = t;
  t = r_3;
  t = w_74(t);
  z_5 = t;
  a_1 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, f_5, y_5, z_5);
  z_0 = t;
  t = SSLsetAnnotations(z_0, f_3);
  return(t);
}
ATerm Where_1_0 (ATerm o_74 (ATerm), ATerm t)
{
  ATerm k_6 = NULL,p_6 = NULL,q_6 = NULL,s_6 = NULL,b_1 = NULL,c_1 = NULL;
  s_6 = t;
  if(match_cons(t, sym_Where_1))
    {
      p_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_6);
  k_6 = t;
  t = p_6;
  t = o_74(t);
  q_6 = t;
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym_Where_1, q_6);
  b_1 = t;
  t = SSLsetAnnotations(b_1, k_6);
  return(t);
}
ATerm Scope_2_0 (ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm t)
{
  ATerm x_6 = NULL,z_6 = NULL,a_7 = NULL,d_7 = NULL,g_7 = NULL,p_7 = NULL,g_1 = NULL,h_1 = NULL;
  p_7 = t;
  if(match_cons(t, sym_Scope_2))
    {
      z_6 = ATgetArgument(t, 0);
      a_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_7);
  x_6 = t;
  t = z_6;
  t = y_73(t);
  d_7 = t;
  t = a_7;
  t = z_73(t);
  g_7 = t;
  h_1 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, d_7, g_7);
  g_1 = t;
  t = SSLsetAnnotations(g_1, x_6);
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm x_7 = NULL;
  x_7 = t;
  t = SSL_is_string(x_7);
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm a_8 = NULL;
  a_8 = t;
  t = SSL_is_int(a_8);
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm m_8 = NULL;
  m_8 = t;
  t = SSL_is_real(m_8);
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm r_8 = NULL;
  r_8 = t;
  t = SSL_is_string(r_8);
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = Var_1_0(s_5, t);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm s_8 = NULL;
  s_8 = t;
  t = SSL_is_string(s_8);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm v_8 = NULL;
  v_8 = t;
  t = SSL_is_string(v_8);
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = map_1_0(term_expression_0_0, t);
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = term_y_12;
  return(t);
}
ATerm term_expression_0_0 (ATerm t)
{
  ATerm z_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
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
            t = Var_1_0(n_5, t);
            ;
            LocalPopChoice(g_13);
          }
        else
          {
            t = f_13;
            {
              ATerm h_13 = t;
              int i_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1_0(o_5, t);
                  ;
                  LocalPopChoice(i_13);
                }
              else
                {
                  t = h_13;
                  {
                    ATerm j_13 = t;
                    int k_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1_0(p_5, t);
                        ;
                        LocalPopChoice(k_13);
                      }
                    else
                      {
                        t = j_13;
                        {
                          ATerm l_13 = t;
                          int m_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1_0(q_5, t);
                              ;
                              LocalPopChoice(m_13);
                            }
                          else
                            {
                              t = l_13;
                              {
                                ATerm n_13 = t;
                                int p_13 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildDefault_1_0(term_expression_0_0, t);
                                    ;
                                    LocalPopChoice(p_13);
                                  }
                                else
                                  {
                                    t = n_13;
                                    {
                                      ATerm q_13 = t;
                                      int r_13 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = As_2_0(r_5, term_expression_0_0, t);
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
                                                t = Op_2_0(t_5, u_5, t);
                                                ;
                                                LocalPopChoice(t_13);
                                              }
                                            else
                                              {
                                                t = s_13;
                                                t = debug_1_0(v_5, t);
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
  return(t);
}
ATerm Build_1_0 (ATerm w_73 (ATerm), ATerm t)
{
  ATerm x_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,i_1 = NULL,j_1 = NULL;
  b_9 = t;
  if(match_cons(t, sym_Build_1))
    {
      z_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_9);
  x_8 = t;
  t = z_8;
  t = w_73(t);
  a_9 = t;
  j_1 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, a_9);
  i_1 = t;
  t = SSLsetAnnotations(i_1, x_8);
  return(t);
}
ATerm Op_2_0 (ATerm k_70 (ATerm), ATerm l_70 (ATerm), ATerm t)
{
  ATerm s_9 = NULL,v_9 = NULL,x_9 = NULL,b_10 = NULL,e_10 = NULL,j_10 = NULL,k_1 = NULL,l_1 = NULL;
  j_10 = t;
  if(match_cons(t, sym_Op_2))
    {
      v_9 = ATgetArgument(t, 0);
      x_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_10);
  s_9 = t;
  t = v_9;
  t = k_70(t);
  b_10 = t;
  t = x_9;
  t = l_70(t);
  e_10 = t;
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, b_10, e_10);
  k_1 = t;
  t = SSLsetAnnotations(k_1, s_9);
  return(t);
}
ATerm As_2_0 (ATerm v_70 (ATerm), ATerm w_70 (ATerm), ATerm t)
{
  ATerm q_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,a_11 = NULL,h_11 = NULL,m_1 = NULL,o_1 = NULL;
  h_11 = t;
  if(match_cons(t, sym_As_2))
    {
      t_10 = ATgetArgument(t, 0);
      u_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_11);
  q_10 = t;
  t = t_10;
  t = v_70(t);
  v_10 = t;
  t = u_10;
  t = w_70(t);
  a_11 = t;
  o_1 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, v_10, a_11);
  m_1 = t;
  t = SSLsetAnnotations(m_1, q_10);
  return(t);
}
ATerm BuildDefault_1_0 (ATerm b_71 (ATerm), ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL,o_11 = NULL,q_11 = NULL,p_1 = NULL,s_1 = NULL;
  q_11 = t;
  if(match_cons(t, sym_BuildDefault_1))
    {
      l_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_11);
  k_11 = t;
  t = l_11;
  t = b_71(t);
  o_11 = t;
  s_1 = t;
  t = (ATerm) ATmakeAppl(sym_BuildDefault_1, o_11);
  p_1 = t;
  t = SSLsetAnnotations(p_1, k_11);
  return(t);
}
ATerm Str_1_0 (ATerm i_70 (ATerm), ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL,z_11 = NULL,g_12 = NULL,y_1 = NULL,a_2 = NULL;
  g_12 = t;
  if(match_cons(t, sym_Str_1))
    {
      w_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_12);
  v_11 = t;
  t = w_11;
  t = i_70(t);
  z_11 = t;
  a_2 = t;
  t = (ATerm) ATmakeAppl(sym_Str_1, z_11);
  y_1 = t;
  t = SSLsetAnnotations(y_1, v_11);
  return(t);
}
ATerm Real_1_0 (ATerm h_70 (ATerm), ATerm t)
{
  ATerm o_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,c_2 = NULL,g_2 = NULL;
  s_12 = t;
  if(match_cons(t, sym_Real_1))
    {
      q_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_12);
  o_12 = t;
  t = q_12;
  t = h_70(t);
  r_12 = t;
  g_2 = t;
  t = (ATerm) ATmakeAppl(sym_Real_1, r_12);
  c_2 = t;
  t = SSLsetAnnotations(c_2, o_12);
  return(t);
}
ATerm Int_1_0 (ATerm g_70 (ATerm), ATerm t)
{
  ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,h_2 = NULL,k_2 = NULL;
  e_13 = t;
  if(match_cons(t, sym_Int_1))
    {
      c_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_13);
  b_13 = t;
  t = c_13;
  t = g_70(t);
  d_13 = t;
  k_2 = t;
  t = (ATerm) ATmakeAppl(sym_Int_1, d_13);
  h_2 = t;
  t = SSLsetAnnotations(h_2, b_13);
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm o_13 = NULL;
  o_13 = t;
  t = SSL_is_string(o_13);
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm v_13 = NULL;
  v_13 = t;
  t = SSL_is_int(v_13);
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm x_13 = NULL;
  x_13 = t;
  t = SSL_is_real(x_13);
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm y_13 = NULL;
  y_13 = t;
  t = SSL_is_string(y_13);
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = Var_1_0(e_6, t);
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm z_13 = NULL;
  z_13 = t;
  t = SSL_is_string(z_13);
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm b_14 = NULL;
  b_14 = t;
  t = SSL_is_string(b_14);
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = map_1_0(match_term_exp_0_0, t);
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_u_13;
  return(t);
}
ATerm match_term_exp_0_0 (ATerm t)
{
  ATerm w_13 = t;
  int a_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      ;
      LocalPopChoice(a_14);
    }
  else
    {
      t = w_13;
      {
        ATerm c_14 = t;
        int d_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1_0(w_5, t);
            ;
            LocalPopChoice(d_14);
          }
        else
          {
            t = c_14;
            {
              ATerm e_14 = t;
              int j_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1_0(x_5, t);
                  ;
                  LocalPopChoice(j_14);
                }
              else
                {
                  t = e_14;
                  {
                    ATerm k_14 = t;
                    int l_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1_0(a_6, t);
                        ;
                        LocalPopChoice(l_14);
                      }
                    else
                      {
                        t = k_14;
                        {
                          ATerm m_14 = t;
                          int n_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1_0(b_6, t);
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
                                    t = BuildDefault_1_0(match_term_exp_0_0, t);
                                    ;
                                    LocalPopChoice(p_14);
                                  }
                                else
                                  {
                                    t = o_14;
                                    {
                                      ATerm q_14 = t;
                                      int r_14 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = As_2_0(d_6, match_term_exp_0_0, t);
                                          ;
                                          LocalPopChoice(r_14);
                                        }
                                      else
                                        {
                                          t = q_14;
                                          {
                                            ATerm s_14 = t;
                                            int t_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Op_2_0(f_6, g_6, t);
                                                ;
                                                LocalPopChoice(t_14);
                                              }
                                            else
                                              {
                                                t = s_14;
                                                t = debug_1_0(h_6, t);
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
  return(t);
}
ATerm Match_1_0 (ATerm v_73 (ATerm), ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,n_2 = NULL,p_2 = NULL;
  i_14 = t;
  if(match_cons(t, sym_Match_1))
    {
      g_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_14);
  f_14 = t;
  t = g_14;
  t = v_73(t);
  h_14 = t;
  p_2 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, h_14);
  n_2 = t;
  t = SSLsetAnnotations(n_2, f_14);
  return(t);
}
ATerm Thread_1_0 (ATerm c_75 (ATerm), ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL,f_15 = NULL,r_2 = NULL,s_2 = NULL;
  f_15 = t;
  if(match_cons(t, sym_Thread_1))
    {
      a_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_15);
  z_14 = t;
  t = a_15;
  t = c_75(t);
  b_15 = t;
  s_2 = t;
  t = (ATerm) ATmakeAppl(sym_Thread_1, b_15);
  r_2 = t;
  t = SSLsetAnnotations(r_2, z_14);
  return(t);
}
ATerm All_1_0 (ATerm b_75 (ATerm), ATerm t)
{
  ATerm o_15 = NULL,v_15 = NULL,c_16 = NULL,e_16 = NULL,v_2 = NULL,x_2 = NULL;
  e_16 = t;
  if(match_cons(t, sym_All_1))
    {
      v_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_16);
  o_15 = t;
  t = v_15;
  t = b_75(t);
  c_16 = t;
  x_2 = t;
  t = (ATerm) ATmakeAppl(sym_All_1, c_16);
  v_2 = t;
  t = SSLsetAnnotations(v_2, o_15);
  return(t);
}
ATerm Some_1_0 (ATerm z_74 (ATerm), ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL,r_16 = NULL,b_3 = NULL,c_3 = NULL;
  r_16 = t;
  if(match_cons(t, sym_Some_1))
    {
      m_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_16);
  l_16 = t;
  t = m_16;
  t = z_74(t);
  n_16 = t;
  c_3 = t;
  t = (ATerm) ATmakeAppl(sym_Some_1, n_16);
  b_3 = t;
  t = SSLsetAnnotations(b_3, l_16);
  return(t);
}
ATerm One_1_0 (ATerm a_75 (ATerm), ATerm t)
{
  ATerm v_16 = NULL,c_17 = NULL,j_17 = NULL,s_17 = NULL,d_3 = NULL,e_3 = NULL;
  s_17 = t;
  if(match_cons(t, sym_One_1))
    {
      c_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_17);
  v_16 = t;
  t = c_17;
  t = a_75(t);
  j_17 = t;
  e_3 = t;
  t = (ATerm) ATmakeAppl(sym_One_1, j_17);
  d_3 = t;
  t = SSLsetAnnotations(d_3, v_16);
  return(t);
}
ATerm Cong_2_0 (ATerm x_68 (ATerm), ATerm y_68 (ATerm), ATerm t)
{
  ATerm v_18 = NULL,e_19 = NULL,n_19 = NULL,y_19 = NULL,h_20 = NULL,q_20 = NULL,g_3 = NULL,h_3 = NULL;
  q_20 = t;
  if(match_cons(t, sym_Cong_2))
    {
      e_19 = ATgetArgument(t, 0);
      n_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_20);
  v_18 = t;
  t = e_19;
  t = x_68(t);
  y_19 = t;
  t = n_19;
  t = y_68(t);
  h_20 = t;
  h_3 = t;
  t = (ATerm) ATmakeAppl(sym_Cong_2, y_19, h_20);
  g_3 = t;
  t = SSLsetAnnotations(g_3, v_18);
  return(t);
}
ATerm Path_2_0 (ATerm x_74 (ATerm), ATerm y_74 (ATerm), ATerm t)
{
  ATerm n_21 = NULL,w_21 = NULL,j_22 = NULL,u_22 = NULL,b_23 = NULL,k_23 = NULL,k_3 = NULL,l_3 = NULL;
  k_23 = t;
  if(match_cons(t, sym_Path_2))
    {
      w_21 = ATgetArgument(t, 0);
      j_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_23);
  n_21 = t;
  t = w_21;
  t = x_74(t);
  u_22 = t;
  t = j_22;
  t = y_74(t);
  b_23 = t;
  l_3 = t;
  t = (ATerm) ATmakeAppl(sym_Path_2, u_22, b_23);
  k_3 = t;
  t = SSLsetAnnotations(k_3, n_21);
  return(t);
}
ATerm Rec_2_0 (ATerm l_74 (ATerm), ATerm m_74 (ATerm), ATerm t)
{
  ATerm h_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,m_3 = NULL,o_3 = NULL;
  s_24 = t;
  if(match_cons(t, sym_Rec_2))
    {
      o_24 = ATgetArgument(t, 0);
      p_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_24);
  h_24 = t;
  t = o_24;
  t = l_74(t);
  q_24 = t;
  t = p_24;
  t = m_74(t);
  r_24 = t;
  o_3 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, q_24, r_24);
  m_3 = t;
  t = SSLsetAnnotations(m_3, h_24);
  return(t);
}
ATerm CallT_3_0 (ATerm s_73 (ATerm), ATerm t_73 (ATerm), ATerm u_73 (ATerm), ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,p_3 = NULL,q_3 = NULL;
  c_25 = t;
  if(match_cons(t, sym_CallT_3))
    {
      w_24 = ATgetArgument(t, 0);
      x_24 = ATgetArgument(t, 1);
      y_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_25);
  v_24 = t;
  t = w_24;
  t = s_73(t);
  z_24 = t;
  t = x_24;
  t = t_73(t);
  a_25 = t;
  t = y_24;
  t = u_73(t);
  b_25 = t;
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, z_24, a_25, b_25);
  p_3 = t;
  t = SSLsetAnnotations(p_3, v_24);
  return(t);
}
ATerm LGChoice_2_0 (ATerm g_74 (ATerm), ATerm h_74 (ATerm), ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,d_4 = NULL,f_4 = NULL;
  k_25 = t;
  if(match_cons(t, sym_LGChoice_2))
    {
      g_25 = ATgetArgument(t, 0);
      h_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_25);
  f_25 = t;
  t = g_25;
  t = g_74(t);
  i_25 = t;
  t = h_25;
  t = h_74(t);
  j_25 = t;
  f_4 = t;
  t = (ATerm) ATmakeAppl(sym_LGChoice_2, i_25, j_25);
  d_4 = t;
  t = SSLsetAnnotations(d_4, f_25);
  return(t);
}
ATerm GChoice_2_0 (ATerm g_73 (ATerm), ATerm h_73 (ATerm), ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,g_4 = NULL,h_4 = NULL;
  s_25 = t;
  if(match_cons(t, sym_GChoice_2))
    {
      o_25 = ATgetArgument(t, 0);
      p_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_25);
  n_25 = t;
  t = o_25;
  t = g_73(t);
  q_25 = t;
  t = p_25;
  t = h_73(t);
  r_25 = t;
  h_4 = t;
  t = (ATerm) ATmakeAppl(sym_GChoice_2, q_25, r_25);
  g_4 = t;
  t = SSLsetAnnotations(g_4, n_25);
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm i_74 (ATerm), ATerm j_74 (ATerm), ATerm k_74 (ATerm), ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,i_4 = NULL,j_4 = NULL;
  c_26 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      w_25 = ATgetArgument(t, 0);
      x_25 = ATgetArgument(t, 1);
      y_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_26);
  v_25 = t;
  t = w_25;
  t = i_74(t);
  z_25 = t;
  t = x_25;
  t = j_74(t);
  a_26 = t;
  t = y_25;
  t = k_74(t);
  b_26 = t;
  j_4 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, z_25, a_26, b_26);
  i_4 = t;
  t = SSLsetAnnotations(i_4, v_25);
  return(t);
}
ATerm LChoice_2_0 (ATerm e_74 (ATerm), ATerm f_74 (ATerm), ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,k_4 = NULL,l_4 = NULL;
  k_26 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      g_26 = ATgetArgument(t, 0);
      h_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_26);
  f_26 = t;
  t = g_26;
  t = e_74(t);
  i_26 = t;
  t = h_26;
  t = f_74(t);
  j_26 = t;
  l_4 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, i_26, j_26);
  k_4 = t;
  t = SSLsetAnnotations(k_4, f_26);
  return(t);
}
ATerm Choice_2_0 (ATerm c_73 (ATerm), ATerm d_73 (ATerm), ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,m_4 = NULL,n_4 = NULL;
  s_26 = t;
  if(match_cons(t, sym_Choice_2))
    {
      o_26 = ATgetArgument(t, 0);
      p_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_26);
  n_26 = t;
  t = o_26;
  t = c_73(t);
  q_26 = t;
  t = p_26;
  t = d_73(t);
  r_26 = t;
  n_4 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, q_26, r_26);
  m_4 = t;
  t = SSLsetAnnotations(m_4, n_26);
  return(t);
}
ATerm Seq_2_0 (ATerm c_74 (ATerm), ATerm d_74 (ATerm), ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL,o_4 = NULL,p_4 = NULL;
  a_27 = t;
  if(match_cons(t, sym_Seq_2))
    {
      w_26 = ATgetArgument(t, 0);
      x_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_27);
  v_26 = t;
  t = w_26;
  t = c_74(t);
  y_26 = t;
  t = x_26;
  t = d_74(t);
  z_26 = t;
  p_4 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, y_26, z_26);
  o_4 = t;
  t = SSLsetAnnotations(o_4, v_26);
  return(t);
}
ATerm Test_1_0 (ATerm p_74 (ATerm), ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL,q_4 = NULL,r_4 = NULL;
  g_27 = t;
  if(match_cons(t, sym_Test_1))
    {
      e_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_27);
  d_27 = t;
  t = e_27;
  t = p_74(t);
  f_27 = t;
  r_4 = t;
  t = (ATerm) ATmakeAppl(sym_Test_1, f_27);
  q_4 = t;
  t = SSLsetAnnotations(q_4, d_27);
  return(t);
}
ATerm Not_1_0 (ATerm n_74 (ATerm), ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,s_4 = NULL,t_4 = NULL;
  m_27 = t;
  if(match_cons(t, sym_Not_1))
    {
      k_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_27);
  j_27 = t;
  t = k_27;
  t = n_74(t);
  l_27 = t;
  t_4 = t;
  t = (ATerm) ATmakeAppl(sym_Not_1, l_27);
  s_4 = t;
  t = SSLsetAnnotations(s_4, j_27);
  return(t);
}
ATerm i_6 (ATerm t)
{
  t = SVar_1_0(m_6, t);
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = map_1_0(n_6, t);
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = map_1_0(v_6, t);
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm p_27 = NULL;
  p_27 = t;
  t = SSL_is_string(p_27);
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = CallT_3_0(o_6, r_6, t_6, t);
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = SVar_1_0(u_6, t);
  return(t);
}
ATerm r_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm t_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm q_27 = NULL;
  q_27 = t;
  t = SSL_is_string(q_27);
  return(t);
}
ATerm v_6 (ATerm t)
{
  t = Var_1_0(w_6, t);
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm r_27 = NULL;
  r_27 = t;
  t = SSL_is_string(r_27);
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm s_27 = NULL;
  s_27 = t;
  t = SSL_is_string(s_27);
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm t_27 = NULL;
  t_27 = t;
  t = SSL_is_int(t_27);
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm u_27 = NULL;
  u_27 = t;
  t = SSL_is_string(u_27);
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = map_1_0(strategy_expression_0_0, t);
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = map_1_0(h_7, t);
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm v_27 = NULL;
  v_27 = t;
  t = SSL_is_string(v_27);
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm w_27 = NULL;
  w_27 = t;
  t = SSL_is_string(w_27);
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = map_1_0(l_7, t);
  return(t);
}
ATerm k_7 (ATerm t)
{
  t = map_1_0(q_7, t);
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = Call_2_0(m_7, n_7, t);
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = SVar_1_0(o_7, t);
  return(t);
}
ATerm n_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm x_27 = NULL;
  x_27 = t;
  t = SSL_is_string(x_27);
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = Var_1_0(r_7, t);
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm y_27 = NULL;
  y_27 = t;
  t = SSL_is_string(y_27);
  return(t);
}
ATerm s_7 (ATerm t)
{
  t = map_1_0(t_7, t);
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm u_14 = t;
  int v_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SDef_3_0(u_7, v_7, strategy_expression_0_0, t);
      ;
      LocalPopChoice(v_14);
    }
  else
    {
      t = u_14;
      t = SDefT_4_0(z_7, b_8, c_8, strategy_expression_0_0, t);
    }
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm z_27 = NULL;
  z_27 = t;
  t = SSL_is_string(z_27);
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = map_1_0(w_7, t);
  return(t);
}
ATerm w_7 (ATerm t)
{
  t = VarDec_2_0(y_7, _id, t);
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm p_0 = NULL;
  p_0 = t;
  t = SSL_is_string(p_0);
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm b_28 = NULL;
  b_28 = t;
  t = SSL_is_string(b_28);
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = map_1_0(d_8, t);
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = map_1_0(f_8, t);
  return(t);
}
ATerm d_8 (ATerm t)
{
  t = VarDec_2_0(e_8, _id, t);
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm r_0 = NULL;
  r_0 = t;
  t = SSL_is_string(r_0);
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = VarDec_2_0(g_8, _id, t);
  return(t);
}
ATerm g_8 (ATerm t)
{
  ATerm t_0 = NULL;
  t_0 = t;
  t = SSL_is_string(t_0);
  return(t);
}
ATerm h_8 (ATerm t)
{
  t = term_w_14;
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm x_14 = t;
  int y_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      ;
      LocalPopChoice(y_14);
    }
  else
    {
      t = x_14;
      {
        ATerm c_15 = t;
        int d_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_Fail_0)))
              _fail(t);
            ;
            LocalPopChoice(d_15);
          }
        else
          {
            t = c_15;
            {
              ATerm e_15 = t;
              int g_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Not_1_0(strategy_expression_0_0, t);
                  ;
                  LocalPopChoice(g_15);
                }
              else
                {
                  t = e_15;
                  {
                    ATerm h_15 = t;
                    int i_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Test_1_0(strategy_expression_0_0, t);
                        ;
                        LocalPopChoice(i_15);
                      }
                    else
                      {
                        t = h_15;
                        {
                          ATerm j_15 = t;
                          int k_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Seq_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                              ;
                              LocalPopChoice(k_15);
                            }
                          else
                            {
                              t = j_15;
                              {
                                ATerm l_15 = t;
                                int m_15 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Choice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                    ;
                                    LocalPopChoice(m_15);
                                  }
                                else
                                  {
                                    t = l_15;
                                    {
                                      ATerm n_15 = t;
                                      int p_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                          ;
                                          LocalPopChoice(p_15);
                                        }
                                      else
                                        {
                                          t = n_15;
                                          {
                                            ATerm q_15 = t;
                                            int r_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = GuardedLChoice_3_0(strategy_expression_0_0, strategy_expression_0_0, strategy_expression_0_0, t);
                                                ;
                                                LocalPopChoice(r_15);
                                              }
                                            else
                                              {
                                                t = q_15;
                                                {
                                                  ATerm s_15 = t;
                                                  int t_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = GChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                                      ;
                                                      LocalPopChoice(t_15);
                                                    }
                                                  else
                                                    {
                                                      t = s_15;
                                                      {
                                                        ATerm u_15 = t;
                                                        int w_15 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = LGChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                                            ;
                                                            LocalPopChoice(w_15);
                                                          }
                                                        else
                                                          {
                                                            t = u_15;
                                                            {
                                                              ATerm x_15 = t;
                                                              int y_15 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = CallT_3_0(i_6, j_6, l_6, t);
                                                                  ;
                                                                  LocalPopChoice(y_15);
                                                                }
                                                              else
                                                                {
                                                                  t = x_15;
                                                                  {
                                                                    ATerm z_15 = t;
                                                                    int a_16 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2_0(y_6, strategy_expression_0_0, t);
                                                                        ;
                                                                        LocalPopChoice(a_16);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = z_15;
                                                                        {
                                                                          ATerm b_16 = t;
                                                                          int d_16 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Path_2_0(b_7, strategy_expression_0_0, t);
                                                                              ;
                                                                              LocalPopChoice(d_16);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = b_16;
                                                                              {
                                                                                ATerm f_16 = t;
                                                                                int g_16 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Cong_2_0(c_7, e_7, t);
                                                                                    ;
                                                                                    LocalPopChoice(g_16);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = f_16;
                                                                                    {
                                                                                      ATerm h_16 = t;
                                                                                      int i_16 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = One_1_0(strategy_expression_0_0, t);
                                                                                          ;
                                                                                          LocalPopChoice(i_16);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = h_16;
                                                                                          {
                                                                                            ATerm j_16 = t;
                                                                                            int k_16 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Some_1_0(strategy_expression_0_0, t);
                                                                                                ;
                                                                                                LocalPopChoice(k_16);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = j_16;
                                                                                                {
                                                                                                  ATerm o_16 = t;
                                                                                                  int p_16 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = All_1_0(strategy_expression_0_0, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(p_16);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = o_16;
                                                                                                      {
                                                                                                        ATerm q_16 = t;
                                                                                                        int s_16 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Thread_1_0(strategy_expression_0_0, t);
                                                                                                            ;
                                                                                                            LocalPopChoice(s_16);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = q_16;
                                                                                                            {
                                                                                                              ATerm t_16 = t;
                                                                                                              int u_16 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Match_1_0(match_term_exp_0_0, t);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(u_16);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = t_16;
                                                                                                                  {
                                                                                                                    ATerm w_16 = t;
                                                                                                                    int x_16 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Build_1_0(term_expression_0_0, t);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(x_16);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = w_16;
                                                                                                                        {
                                                                                                                          ATerm y_16 = t;
                                                                                                                          int z_16 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = Scope_2_0(f_7, strategy_expression_0_0, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(z_16);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = y_16;
                                                                                                                              {
                                                                                                                                ATerm a_17 = t;
                                                                                                                                int b_17 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = Where_1_0(strategy_expression_0_0, t);
                                                                                                                                    ;
                                                                                                                                    LocalPopChoice(b_17);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = a_17;
                                                                                                                                    {
                                                                                                                                      ATerm d_17 = t;
                                                                                                                                      int e_17 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = PrimT_3_0(i_7, j_7, k_7, t);
                                                                                                                                          ;
                                                                                                                                          LocalPopChoice(e_17);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = d_17;
                                                                                                                                          {
                                                                                                                                            ATerm f_17 = t;
                                                                                                                                            int g_17 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                t = Let_2_0(s_7, strategy_expression_0_0, t);
                                                                                                                                                ;
                                                                                                                                                LocalPopChoice(g_17);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = f_17;
                                                                                                                                                t = debug_1_0(h_8, t);
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
    }
  return(t);
}
ATerm VarDec_2_0 (ATerm z_75 (ATerm), ATerm a_76 (ATerm), ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL,u_4 = NULL,v_4 = NULL;
  k_28 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      g_28 = ATgetArgument(t, 0);
      h_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_28);
  f_28 = t;
  t = g_28;
  t = z_75(t);
  i_28 = t;
  t = h_28;
  t = a_76(t);
  j_28 = t;
  v_4 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, i_28, j_28);
  u_4 = t;
  t = SSLsetAnnotations(u_4, f_28);
  return(t);
}
ATerm SDefT_4_0 (ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm i_76 (ATerm), ATerm j_76 (ATerm), ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,w_4 = NULL,x_4 = NULL;
  w_28 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      o_28 = ATgetArgument(t, 0);
      p_28 = ATgetArgument(t, 1);
      q_28 = ATgetArgument(t, 2);
      r_28 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_28);
  n_28 = t;
  t = o_28;
  t = g_76(t);
  s_28 = t;
  t = p_28;
  t = h_76(t);
  t_28 = t;
  t = q_28;
  t = i_76(t);
  u_28 = t;
  t = r_28;
  t = j_76(t);
  v_28 = t;
  x_4 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, s_28, t_28, u_28, v_28);
  w_4 = t;
  t = SSLsetAnnotations(w_4, n_28);
  return(t);
}
ATerm SDef_3_0 (ATerm d_76 (ATerm), ATerm e_76 (ATerm), ATerm f_76 (ATerm), ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,y_4 = NULL,z_4 = NULL;
  g_29 = t;
  if(match_cons(t, sym_SDef_3))
    {
      a_29 = ATgetArgument(t, 0);
      b_29 = ATgetArgument(t, 1);
      c_29 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_29);
  z_28 = t;
  t = a_29;
  t = d_76(t);
  d_29 = t;
  t = b_29;
  t = e_76(t);
  e_29 = t;
  t = c_29;
  t = f_76(t);
  f_29 = t;
  z_4 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, d_29, e_29, f_29);
  y_4 = t;
  t = SSLsetAnnotations(y_4, z_28);
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm j_29 = NULL;
  j_29 = t;
  t = SSL_is_string(j_29);
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = map_1_0(k_8, t);
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = VarDec_2_0(l_8, _id, t);
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm k_29 = NULL;
  k_29 = t;
  t = SSL_is_string(k_29);
  return(t);
}
ATerm n_8 (ATerm t)
{
  ATerm l_29 = NULL;
  l_29 = t;
  t = SSL_is_string(l_29);
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = map_1_0(q_8, t);
  return(t);
}
ATerm p_8 (ATerm t)
{
  t = map_1_0(u_8, t);
  return(t);
}
ATerm q_8 (ATerm t)
{
  t = VarDec_2_0(t_8, _id, t);
  return(t);
}
ATerm t_8 (ATerm t)
{
  ATerm m_29 = NULL;
  m_29 = t;
  t = SSL_is_string(m_29);
  return(t);
}
ATerm u_8 (ATerm t)
{
  t = VarDec_2_0(y_8, _id, t);
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm n_29 = NULL;
  n_29 = t;
  t = SSL_is_string(n_29);
  return(t);
}
ATerm c_9 (ATerm t)
{
  t = term_h_17;
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm i_17 = t;
  int k_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SDef_3_0(i_8, j_8, strategy_expression_0_0, t);
      ;
      LocalPopChoice(k_17);
    }
  else
    {
      t = i_17;
      {
        ATerm l_17 = t;
        int m_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(n_8, o_8, p_8, strategy_expression_0_0, t);
            ;
            LocalPopChoice(m_17);
          }
        else
          {
            t = l_17;
            t = debug_1_0(c_9, t);
          }
      }
    }
  return(t);
}
ATerm map_1_0 (ATerm h_90 (ATerm), ATerm t)
{
  ATerm o_29 (ATerm t)
  {
    ATerm n_17 = t;
    int o_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(o_17);
      }
    else
      {
        t = n_17;
        t = Cons_2_0(h_90, o_29, t);
      }
    return(t);
  }
  t = o_29(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm b_69 (ATerm), ATerm t)
{
  ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL,a_5 = NULL,b_5 = NULL;
  s_29 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      q_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_29);
  p_29 = t;
  t = q_29;
  t = b_69(t);
  r_29 = t;
  b_5 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, r_29);
  a_5 = t;
  t = SSLsetAnnotations(a_5, p_29);
  return(t);
}
ATerm Cons_2_0 (ATerm t_68 (ATerm), ATerm u_68 (ATerm), ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL,c_5 = NULL,d_5 = NULL;
  a_30 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_29 = ATgetFirst((ATermList) t);
      x_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_30);
  v_29 = t;
  t = w_29;
  t = t_68(t);
  y_29 = t;
  t = x_29;
  t = u_68(t);
  z_29 = t;
  d_5 = t;
  t = (ATerm) ATinsert(CheckATermList(z_29), y_29);
  c_5 = t;
  t = SSLsetAnnotations(c_5, v_29);
  return(t);
}
ATerm Specification_1_0 (ATerm g_69 (ATerm), ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL,e_5 = NULL,g_5 = NULL;
  g_30 = t;
  if(match_cons(t, sym_Specification_1))
    {
      e_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_30);
  d_30 = t;
  t = e_30;
  t = g_69(t);
  f_30 = t;
  g_5 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, f_30);
  e_5 = t;
  t = SSLsetAnnotations(e_5, d_30);
  return(t);
}
ATerm _2_0 (ATerm e_64 (ATerm), ATerm f_64 (ATerm), ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL,h_5 = NULL,i_5 = NULL;
  o_30 = t;
  if(match_cons(t, sym__2))
    {
      k_30 = ATgetArgument(t, 0);
      l_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_30);
  j_30 = t;
  t = k_30;
  t = e_64(t);
  m_30 = t;
  t = l_30;
  t = f_64(t);
  n_30 = t;
  i_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_30, n_30);
  h_5 = t;
  t = SSLsetAnnotations(h_5, j_30);
  return(t);
}
ATerm t_3 (ATerm x_49, ATerm y_49, ATerm t)
{
  ATerm r_30 = NULL;
  t = SSL_fputc(x_49, y_49);
  r_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_30);
  return(t);
}
ATerm u_3 (ATerm l_53, ATerm m_53, ATerm t)
{
  ATerm s_30 = NULL;
  t = SSL_write_term_to_stream_text(l_53, m_53);
  s_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_30);
  return(t);
}
ATerm w_3 (ATerm y_102 (ATerm), ATerm g_426, ATerm p_53, ATerm t)
{
  ATerm t_30 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, g_426, term_p_17);
  t = open_stream_0_0(t);
  t_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_30, p_53);
  t = y_102(t);
  t = fclose_0_0(t);
  t = p_53;
  return(t);
}
ATerm v_3 (ATerm h_53, ATerm i_53, ATerm t)
{
  ATerm u_30 = NULL;
  t = SSL_write_term_to_stream_baf(h_53, i_53);
  u_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_30);
  return(t);
}
ATerm g_9 (ATerm t)
{
  t = fetch_1_0(i_9, t);
  return(t);
}
ATerm h_9 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL;
  if(match_cons(t, sym__2))
    {
      y_30 = ATgetArgument(t, 0);
      z_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_3(j_9, y_30, z_30, t);
  return(t);
}
ATerm i_9 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm j_9 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_17 = ATgetArgument(t, 0);
      if(match_cons(q_17, sym_Stream_1))
        {
          a_31 = ATgetArgument(q_17, 0);
        }
      else
        _fail(t);
      b_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_3(a_31, b_31, t);
  return(t);
}
ATerm k_9 (ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL;
  if(match_cons(t, sym__2))
    {
      c_31 = ATgetArgument(t, 0);
      d_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_3(l_9, c_31, d_31, t);
  return(t);
}
ATerm l_9 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_17 = ATgetArgument(t, 0);
      if(match_cons(r_17, sym_Stream_1))
        {
          f_31 = ATgetArgument(r_17, 0);
        }
      else
        _fail(t);
      g_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3(f_31, g_31, t);
  e_31 = t;
  t = term_t_17;
  h_31 = t;
  t = e_31;
  if(match_cons(t, sym_Stream_1))
    {
      i_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_t_17, e_31);
  t = t_3(h_31, i_31, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL;
  v_30 = t;
  {
    ATerm d_9 (ATerm t)
    {
      ATerm u_17 = t;
      int v_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_9 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((w_30 != NULL) && (w_30 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  w_30 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(e_9, t);
          ;
          LocalPopChoice(v_17);
        }
      else
        {
          t = u_17;
          t = term_w_17;
          if(((w_30 != NULL) && (w_30 != t)))
            _fail(t);
          else
            w_30 = t;
        }
      return(t);
    }
    t = _2_0(d_9, _id, t);
    t = v_30;
    {
      ATerm f_9 (ATerm t)
      {
        ATerm x_30 = NULL;
        x_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_30), x_30);
        return(t);
      }
      t = _2_0(_id, f_9, t);
      {
        ATerm x_17 = t;
        int y_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(g_9, h_9, t);
            ;
            LocalPopChoice(y_17);
          }
        else
          {
            t = x_17;
            t = _2_0(_id, k_9, t);
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
ATerm apply_strategy_1_0 (ATerm a_106 (ATerm), ATerm t)
{
  ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL;
  j_31 = t;
  t = dtime_0_0(t);
  t = j_31;
  t = a_106(t);
  k_31 = t;
  t = dtime_0_0(t);
  l_31 = t;
  t = k_31;
  if(match_cons(t, sym__2))
    {
      m_31 = ATgetArgument(t, 0);
      n_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_31), (ATerm) ATmakeAppl(sym_Runtime_1, l_31)), n_31);
  return(t);
}
ATerm b_32 (ATerm v_31, ATerm t)
{
  t = SSL_fclose(v_31);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_31 = NULL,z_31 = NULL;
  z_31 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_31 = ATgetArgument(t, 0);
      {
        ATerm z_17 = t;
        int a_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(y_31);
            ;
            LocalPopChoice(a_18);
          }
        else
          {
            t = z_17;
            t = b_32(z_31, t);
          }
      }
    }
  else
    {
      t = b_32(z_31, t);
    }
  return(t);
}
ATerm x_3 (ATerm n_53, ATerm t)
{
  t = SSL_read_term_from_stream(n_53);
  return(t);
}
ATerm y_3 (ATerm z_49, ATerm a_50, ATerm t)
{
  ATerm c_32 = NULL;
  t = SSL_fopen(z_49, a_50);
  c_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_32);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm d_32 = NULL;
  t = SSL_stdin_stream();
  d_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_32);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_32 = NULL;
  t = SSL_stdout_stream();
  e_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_32);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_32 = NULL;
  t = SSL_stderr_stream();
  f_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_32);
  return(t);
}
ATerm m_9 (ATerm t)
{
  ATerm r_32 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      r_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_32;
  return(t);
}
ATerm n_9 (ATerm t)
{
  ATerm u_32 = NULL;
  u_32 = t;
  t = SSL_is_string(u_32);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_18 = ATgetArgument(t, 0);
      ATerm c_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_32 = NULL,f_1 = NULL;
        o_32 = t;
        t = SSL_explode_term(o_32);
        if(match_cons(t, sym__2))
          {
            ATerm f_18 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_18) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm g_18 = ATgetArgument(t, 1);
              if(((ATgetType(g_18) == AT_LIST) && !(ATisEmpty(g_18))))
                {
                  f_1 = ATgetFirst((ATermList) g_18);
                  {
                    ATerm h_18 = (ATerm) ATgetNext((ATermList) g_18);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = f_1;
        if(match_cons(t, sym_stderr_0))
          {
            t = f_1;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = f_1;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = f_1;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        {
          ATerm i_18 = t;
          int j_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_32 = NULL,q_32 = NULL;
              t = _2_0(m_9, _id, t);
              if(match_cons(t, sym__2))
                {
                  p_32 = ATgetArgument(t, 0);
                  q_32 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_3(p_32, q_32, t);
              ;
              LocalPopChoice(j_18);
            }
          else
            {
              t = i_18;
              {
                ATerm s_32 = NULL,t_32 = NULL;
                t = _2_0(n_9, _id, t);
                if(match_cons(t, sym__2))
                  {
                    s_32 = ATgetArgument(t, 0);
                    t_32 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = y_3(s_32, t_32, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm o_9 (ATerm t)
{
  t = term_k_18;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL;
  ATerm l_18 = t;
  int m_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_32 = NULL;
      z_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_32, term_n_18);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(m_18);
    }
  else
    {
      t = l_18;
      t = debug_1_0(o_9, t);
      _fail(t);
    }
  w_32 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_3(y_32, t);
  x_32 = t;
  t = w_32;
  t = fclose_0_0(t);
  t = x_32;
  return(t);
}
ATerm fetch_1_0 (ATerm r_90 (ATerm), ATerm t)
{
  ATerm b_33 (ATerm t)
  {
    ATerm o_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(r_90, _id, t);
        ;
        LocalPopChoice(p_18);
      }
    else
      {
        t = o_18;
        t = Cons_2_0(_id, b_33, t);
      }
    return(t);
  }
  t = b_33(t);
  return(t);
}
ATerm s_3 (ATerm n_44, ATerm o_44, ATerm t)
{
  t = SSL_strcat(n_44, o_44);
  return(t);
}
ATerm p_9 (ATerm t)
{
  ATerm q_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(r_18);
    }
  else
    {
      t = q_18;
    }
  return(t);
}
ATerm q_9 (ATerm t)
{
  t = term_s_18;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm t_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_33 = NULL;
      h_33 = t;
      t = SSL_is_string(h_33);
      ;
      LocalPopChoice(u_18);
    }
  else
    {
      t = t_18;
      {
        ATerm w_18 = t;
        int x_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(p_9, t);
            ;
            LocalPopChoice(x_18);
          }
        else
          {
            t = w_18;
            {
              ATerm l_33 = NULL,m_33 = NULL,n_33 = NULL;
              l_33 = t;
              if(match_cons(t, sym_Path_1))
                {
                  m_33 = ATgetArgument(t, 0);
                  t = m_33;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      m_33 = ATgetArgument(t, 0);
                      t = m_33;
                      {
                        ATerm y_18 = t;
                        int z_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(z_18);
                          }
                        else
                          {
                            t = y_18;
                            t = debug_1_0(q_9, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm r_33 = NULL,s_33 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          m_33 = ATgetArgument(t, 0);
                          n_33 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = m_33;
                      t = eval_config_0_0(t);
                      r_33 = t;
                      t = n_33;
                      t = eval_config_0_0(t);
                      s_33 = t;
                      t = (ATerm) ATmakeAppl(sym__2, r_33, s_33);
                      t = s_3(r_33, s_33, t);
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
  ATerm v_33 = NULL,w_33 = NULL;
  v_33 = t;
  t = term_a_19;
  w_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_19, v_33);
  t = b_4(w_33, v_33, t);
  {
    ATerm b_19 = t;
    int c_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_33 = NULL,y_33 = NULL;
        t = eval_config_0_0(t);
        x_33 = t;
        t = term_a_19;
        y_33 = t;
        t = SSL_table_put(y_33, v_33, x_33);
        t = x_33;
        ;
        LocalPopChoice(c_19);
      }
    else
      {
        t = b_19;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm j_104 (ATerm), ATerm t)
{
  ATerm d_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_33 = NULL,b_34 = NULL;
      z_33 = t;
      t = term_g_19;
      t = get_config_0_0(t);
      b_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_34, term_h_19);
      t = geq_0_0(t);
      t = z_33;
      t = j_104(t);
      ;
      LocalPopChoice(f_19);
    }
  else
    {
      t = d_19;
    }
  return(t);
}
ATerm r_9 (ATerm t)
{
  ATerm d_34 = NULL;
  d_34 = t;
  if(match_string(t, "-k"))
    {
      t = d_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = d_34;
    }
  return(t);
}
ATerm t_9 (ATerm t)
{
  ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL;
  e_34 = t;
  t = SSL_string_to_int(e_34);
  f_34 = t;
  t = term_i_19;
  g_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_19, f_34);
  t = e_4(g_34, f_34, t);
  t = e_34;
  return(t);
}
ATerm u_9 (ATerm t)
{
  t = term_j_19;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_9, t_9, u_9, t);
  return(t);
}
ATerm w_9 (ATerm t)
{
  ATerm i_34 = NULL;
  i_34 = t;
  if(match_string(t, "-S"))
    {
      t = i_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_34;
    }
  return(t);
}
ATerm y_9 (ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL;
  t = term_g_19;
  j_34 = t;
  t = term_k_19;
  k_34 = t;
  t = term_l_19;
  t = e_4(j_34, k_34, t);
  t = term_m_19;
  return(t);
}
ATerm z_9 (ATerm t)
{
  t = term_o_19;
  return(t);
}
ATerm a_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_10 (ATerm t)
{
  ATerm l_34 = NULL,m_34 = NULL,n_34 = NULL;
  l_34 = t;
  t = SSL_string_to_int(l_34);
  m_34 = t;
  t = term_g_19;
  n_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_19, m_34);
  t = e_4(n_34, m_34, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_34);
  return(t);
}
ATerm d_10 (ATerm t)
{
  t = term_p_19;
  return(t);
}
ATerm f_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_10 (ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL;
  t = term_q_19;
  o_34 = t;
  t = term_w_8;
  p_34 = t;
  t = term_r_19;
  t = e_4(o_34, p_34, t);
  t = term_s_19;
  return(t);
}
ATerm h_10 (ATerm t)
{
  t = term_t_19;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_9, y_9, z_9, t);
      ;
      LocalPopChoice(v_19);
    }
  else
    {
      t = u_19;
      {
        ATerm w_19 = t;
        int x_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(a_10, c_10, d_10, t);
            ;
            LocalPopChoice(x_19);
          }
        else
          {
            t = w_19;
            t = Option_3_0(f_10, g_10, h_10, t);
          }
      }
    }
  return(t);
}
ATerm e_4 (ATerm o_54, ATerm p_54, ATerm t)
{
  ATerm q_34 = NULL;
  t = term_a_19;
  q_34 = t;
  t = SSL_table_put(q_34, o_54, p_54);
  t = (ATerm) ATmakeAppl(sym__3, term_a_19, o_54, p_54);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL;
      t = term_w_8;
      t = d_0(t);
      v_34 = t;
      t = term_z_19;
      w_34 = t;
      t = term_a_20;
      x_34 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_19, term_a_20, v_34);
      t = c_4(w_34, x_34, v_34, t);
      _fail(t);
    }
  else
    {
      ATerm a_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_34 = ATgetFirst((ATermList) t);
          u_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_34;
      t = a_0(t);
      t = term_w_8;
      t = b_0(t);
      a_35 = t;
      t = (ATerm) ATinsert(CheckATermList(u_34), a_35);
    }
  return(t);
}
ATerm i_10 (ATerm t)
{
  ATerm c_35 = NULL;
  c_35 = t;
  if(match_string(t, "-o"))
    {
      t = c_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = c_35;
    }
  return(t);
}
ATerm k_10 (ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL;
  d_35 = t;
  t = term_b_20;
  e_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_20, d_35);
  t = e_4(e_35, d_35, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, d_35);
  return(t);
}
ATerm l_10 (ATerm t)
{
  t = term_c_20;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_10, k_10, l_10, t);
  return(t);
}
ATerm c_4 (ATerm m_59, ATerm n_59, ATerm l_59, ATerm t)
{
  ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL;
  g_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_59, n_59);
  {
    ATerm d_20 = t;
    int e_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_20 = ATgetArgument(t, 0);
            ATerm g_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_59, n_59);
        t = b_4(m_59, n_59, t);
        ;
        LocalPopChoice(e_20);
      }
    else
      {
        t = d_20;
        t = (ATerm) ATempty;
      }
    h_35 = t;
    t = (ATerm) ATinsert(CheckATermList(h_35), l_59);
    i_35 = t;
    t = SSL_table_put(m_59, n_59, i_35);
    t = g_35;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL;
      t = term_w_8;
      t = j_0(t);
      t_35 = t;
      t = term_z_19;
      u_35 = t;
      t = term_a_20;
      v_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_19, term_a_20, t_35);
      t = c_4(u_35, v_35, t_35, t);
      _fail(t);
    }
  else
    {
      ATerm z_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_35 = ATgetFirst((ATermList) t);
          q_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_35;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_35 = ATgetFirst((ATermList) t);
          s_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_35;
      t = h_0(t);
      t = r_35;
      t = i_0(t);
      z_35 = t;
      t = (ATerm) ATinsert(CheckATermList(s_35), z_35);
    }
  return(t);
}
ATerm m_10 (ATerm t)
{
  ATerm b_36 = NULL;
  b_36 = t;
  if(match_string(t, "-i"))
    {
      t = b_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_36;
    }
  return(t);
}
ATerm n_10 (ATerm t)
{
  ATerm c_36 = NULL,d_36 = NULL;
  c_36 = t;
  t = term_i_20;
  d_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_20, c_36);
  t = e_4(d_36, c_36, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_36);
  return(t);
}
ATerm o_10 (ATerm t)
{
  t = term_j_20;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_10, n_10, o_10, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_8;
  t = whoami_0_0(t);
  e_36 = t;
  t = term_u_12;
  f_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_20), e_36);
  g_36 = t;
  t = SSL_printnl(f_36, g_36);
  t = term_x_12;
  h_36 = t;
  t = SSL_exit(h_36);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_l_20;
  t = get_config_0_0(t);
  return(t);
}
ATerm z_3 (ATerm x_46, ATerm y_46, ATerm t)
{
  ATerm m_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_46, y_46);
      ;
      LocalPopChoice(n_20);
    }
  else
    {
      t = m_20;
      t = SSL_addr(x_46, y_46);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm k_96 (ATerm), ATerm l_96 (ATerm), ATerm t)
{
  ATerm o_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_96(t);
      ;
      LocalPopChoice(p_20);
    }
  else
    {
      t = o_20;
      {
        ATerm k_36 = NULL,l_36 = NULL,o_36 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_36 = ATgetFirst((ATermList) t);
            l_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_36;
        t = foldr_2_0(k_96, l_96, t);
        o_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_36, o_36);
        t = l_96(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm p_10 (ATerm t)
{
  t = term_k_19;
  return(t);
}
ATerm r_10 (ATerm t)
{
  ATerm l_2 = NULL,m_2 = NULL;
  if(match_cons(t, sym__2))
    {
      l_2 = ATgetArgument(t, 0);
      m_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3(l_2, m_2, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_36 = NULL,w_1 = NULL,z_1 = NULL;
  t = times_0_0(t);
  w_1 = t;
  t = SSL_explode_term(w_1);
  if(match_cons(t, sym__2))
    {
      ATerm r_20 = ATgetArgument(t, 0);
      z_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_1;
  t = foldr_2_0(p_10, r_10, t);
  r_36 = t;
  t = SSL_TicksToSeconds(r_36);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL;
  c_37 = t;
  if(match_cons(t, sym__2))
    {
      d_37 = ATgetArgument(t, 0);
      e_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_20 = t;
    int t_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_37;
        if((d_37 != t))
          {
            _fail(t);
          }
        t = c_37;
        ;
        LocalPopChoice(t_20);
      }
    else
      {
        t = s_20;
        t = (ATerm) ATmakeAppl(sym__2, d_37, e_37);
        {
          ATerm u_20 = t;
          int v_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_37, e_37);
              ;
              LocalPopChoice(v_20);
            }
          else
            {
              t = u_20;
              t = SSL_gtr(d_37, e_37);
            }
          t = (ATerm) ATmakeAppl(sym__2, d_37, e_37);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_104 (ATerm), ATerm t)
{
  ATerm w_20 = t;
  int x_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_37 = NULL,j_37 = NULL;
      h_37 = t;
      t = term_g_19;
      t = get_config_0_0(t);
      j_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_37, term_x_12);
      t = geq_0_0(t);
      t = h_37;
      t = i_104(t);
      ;
      LocalPopChoice(x_20);
    }
  else
    {
      t = w_20;
    }
  return(t);
}
ATerm s_10 (ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL;
  t = run_time_0_0(t);
  l_37 = t;
  t = term_w_8;
  t = whoami_0_0(t);
  m_37 = t;
  t = term_u_12;
  n_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_20), l_37), term_y_20), m_37);
  o_37 = t;
  t = SSL_printnl(n_37, o_37);
  t = (ATerm) ATmakeAppl(sym__2, term_u_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_20), l_37), term_y_20), m_37));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(s_10, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm p_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_19;
  p_37 = t;
  t = SSL_exit(p_37);
  return(t);
}
ATerm w_10 (ATerm t)
{
  ATerm a_21 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(b_21);
    }
  else
    {
      t = a_21;
      {
        ATerm c_21 = t;
        int d_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(d_21);
          }
        else
          {
            t = c_21;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm y_106 (ATerm), ATerm t)
{
  ATerm e_21 = t;
  int f_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_21);
    }
  else
    {
      t = e_21;
      t = fetch_1_0(w_10, t);
    }
  t = y_106(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm r_37 = NULL,s_37 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_37 = ATgetFirst((ATermList) t);
      s_37 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_37 = NULL,x_37 = NULL;
        t = s_37;
        t = g_0(t);
        w_37 = t;
        t = r_37;
        t = f_0(t);
        x_37 = t;
        t = s_37;
        {
          ATerm x_10 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(w_37), x_37);
            return(t);
          }
          t = reverse_acc_2_0(f_0, x_10, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_8;
      t = g_0(t);
    }
  return(t);
}
ATerm b_4 (ATerm d_61, ATerm e_61, ATerm t)
{
  t = SSL_table_get(d_61, e_61);
  return(t);
}
ATerm Program_1_0 (ATerm u_81 (ATerm), ATerm t)
{
  ATerm a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL,j_5 = NULL,k_5 = NULL;
  d_38 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_38);
  a_38 = t;
  t = b_38;
  t = u_81(t);
  c_38 = t;
  k_5 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, c_38);
  j_5 = t;
  t = SSLsetAnnotations(j_5, a_38);
  return(t);
}
ATerm y_10 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm z_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_11 (ATerm t)
{
  ATerm i_38 = NULL;
  i_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_38), term_h_21);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_38 = NULL,h_38 = NULL;
  ATerm i_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_21);
    }
  else
    {
      t = i_21;
      t = fetch_1_0(y_10, t);
    }
  t = term_k_21;
  t = echo_0_0(t);
  t = term_z_19;
  g_38 = t;
  t = term_a_20;
  h_38 = t;
  t = term_l_21;
  t = b_4(g_38, h_38, t);
  t = reverse_acc_2_0(_id, z_10, t);
  t = map_1_0(b_11, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm v_81 (ATerm), ATerm t)
{
  ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,l_5 = NULL,m_5 = NULL;
  m_38 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      k_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_38);
  j_38 = t;
  t = k_38;
  t = v_81(t);
  l_38 = t;
  m_5 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, l_38);
  l_5 = t;
  t = SSLsetAnnotations(l_5, j_38);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL;
  q_38 = t;
  {
    ATerm m_21 = t;
    int o_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_38;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_21 = ATgetFirst((ATermList) t);
                ATerm q_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = q_38;
          }
        ;
        LocalPopChoice(o_21);
      }
    else
      {
        t = m_21;
        t = (ATerm) ATinsert(ATempty, q_38);
      }
    r_38 = t;
    t = term_w_17;
    s_38 = t;
    t = SSL_printnl(s_38, r_38);
    t = q_38;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_l_20;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm c_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_11 (ATerm t)
{
  ATerm w_38 = NULL,x_38 = NULL;
  t = term_r_21;
  w_38 = t;
  t = term_w_8;
  x_38 = t;
  t = term_s_21;
  t = e_4(w_38, x_38, t);
  return(t);
}
ATerm e_11 (ATerm t)
{
  t = term_t_21;
  return(t);
}
ATerm f_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_11 (ATerm t)
{
  ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL;
  t = term_r_21;
  y_38 = t;
  t = term_w_8;
  z_38 = t;
  t = term_s_21;
  t = e_4(y_38, z_38, t);
  t = term_u_21;
  a_39 = t;
  t = term_w_8;
  b_39 = t;
  t = term_v_21;
  t = e_4(a_39, b_39, t);
  t = term_x_21;
  return(t);
}
ATerm i_11 (ATerm t)
{
  t = term_y_21;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_21 = t;
  int a_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_11, d_11, e_11, t);
      ;
      LocalPopChoice(a_22);
    }
  else
    {
      t = z_21;
      t = Option_3_0(f_11, g_11, i_11, t);
    }
  return(t);
}
ATerm j_11 (ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL;
  e_39 = t;
  t = term_l_20;
  f_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_20, e_39);
  t = e_4(f_39, e_39, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, e_39);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_109 (ATerm), ATerm t)
{
  ATerm d_39 = NULL;
  d_39 = t;
  {
    ATerm b_22 = t;
    int c_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_22;
        t = b_109(t);
        ;
        LocalPopChoice(c_22);
      }
    else
      {
        t = b_22;
      }
    t = d_39;
    {
      ATerm m_11 (ATerm t)
      {
        ATerm e_22 = t;
        int f_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_22 = t;
            int h_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(h_22);
              }
            else
              {
                t = g_22;
                t = b_109(t);
                t = Cons_2_0(_id, m_11, t);
              }
            ;
            LocalPopChoice(f_22);
          }
        else
          {
            t = e_22;
            {
              ATerm h_39 = NULL,i_39 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_39 = ATgetFirst((ATermList) t);
                  i_39 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(i_39), (ATerm) ATmakeAppl(sym_Undefined_1, h_39));
            }
          }
        return(t);
      }
      t = Cons_2_0(j_11, m_11, t);
    }
  }
  return(t);
}
ATerm p_11 (ATerm t)
{
  ATerm w_39 = NULL;
  w_39 = t;
  if(match_string(t, "--help"))
    {
      t = w_39;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = w_39;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = w_39;
        }
    }
  return(t);
}
ATerm r_11 (ATerm t)
{
  ATerm x_39 = NULL,y_39 = NULL;
  t = term_g_21;
  x_39 = t;
  t = term_w_8;
  y_39 = t;
  t = term_i_22;
  t = e_4(x_39, y_39, t);
  t = term_k_22;
  return(t);
}
ATerm s_11 (ATerm t)
{
  t = term_l_22;
  return(t);
}
ATerm t_11 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm a_109 (ATerm), ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL;
  p_39 = t;
  t = term_z_19;
  s_39 = t;
  t = term_a_20;
  t_39 = t;
  t = (ATerm) ATempty;
  u_39 = t;
  t = SSL_table_put(s_39, t_39, u_39);
  t = p_39;
  {
    ATerm n_11 (ATerm t)
    {
      ATerm m_22 = t;
      int n_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_109(t);
          ;
          LocalPopChoice(n_22);
        }
      else
        {
          t = m_22;
          {
            ATerm o_22 = t;
            int p_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_11, r_11, s_11, t);
                ;
                LocalPopChoice(p_22);
              }
            else
              {
                t = o_22;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(n_11, t);
    {
      ATerm q_22 = t;
      int r_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_40 = NULL;
          f_40 = t;
          {
            ATerm s_22 = t;
            int t_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_3 = NULL;
                t = f_40;
                {
                  ATerm v_22 = t;
                  int w_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_g_21;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(w_22);
                    }
                  else
                    {
                      t = v_22;
                      t = fetch_1_0(t_11, t);
                    }
                  t = f_40;
                  t = default_system_usage_0_0(t);
                  t = term_k_19;
                  n_3 = t;
                  t = SSL_exit(n_3);
                }
                ;
                LocalPopChoice(t_22);
              }
            else
              {
                t = s_22;
                {
                  ATerm a_4 = NULL;
                  t = term_r_21;
                  t = get_config_0_0(t);
                  t = f_40;
                  t = default_system_about_0_0(t);
                  t = term_k_19;
                  a_4 = t;
                  t = SSL_exit(a_4);
                }
              }
          }
          ;
          LocalPopChoice(r_22);
        }
      else
        {
          t = q_22;
          {
            ATerm x_22 = t;
            int y_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL;
                ATerm u_11 (ATerm t)
                {
                  ATerm x_11 (ATerm t)
                  {
                    if(((q_39 != NULL) && (q_39 != t)))
                      _fail(t);
                    else
                      q_39 = t;
                    return(t);
                  }
                  t = Undefined_1_0(x_11, t);
                  return(t);
                }
                t = fetch_1_0(u_11, t);
                t = term_u_12;
                g_40 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_39)), term_z_22);
                h_40 = t;
                t = SSL_printnl(g_40, h_40);
                t = (ATerm) ATmakeAppl(sym__2, term_u_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_39)), term_z_22));
                t = default_system_usage_0_0(t);
                t = term_x_12;
                i_40 = t;
                t = SSL_exit(i_40);
                ;
                LocalPopChoice(y_22);
              }
            else
              {
                t = x_22;
              }
          }
        }
      r_39 = t;
      t = term_z_19;
      v_39 = t;
      t = SSL_table_destroy(v_39);
      t = r_39;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm c_107 (ATerm), ATerm d_107 (ATerm), ATerm t)
{
  ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL;
  t = parse_options_1_0(a_107, t);
  l_40 = t;
  t = term_a_23;
  m_40 = t;
  t = SSL_table_create(m_40);
  t = term_a_23;
  n_40 = t;
  t = term_c_23;
  o_40 = t;
  t = SSL_table_put(n_40, o_40, l_40);
  t = l_40;
  t = c_107(t);
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_107, t);
        ;
        LocalPopChoice(e_23);
      }
    else
      {
        t = d_23;
        {
          ATerm f_23 = t;
          int g_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_107(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(g_23);
            }
          else
            {
              t = f_23;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm a_12 (ATerm t)
{
  t = if_verbose2_1_0(f_12, t);
  return(t);
}
ATerm c_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_12 (ATerm t)
{
  ATerm p_40 = NULL,q_40 = NULL;
  t = term_h_23;
  p_40 = t;
  t = term_w_8;
  q_40 = t;
  t = term_i_23;
  t = e_4(p_40, q_40, t);
  t = term_j_23;
  return(t);
}
ATerm e_12 (ATerm t)
{
  t = term_l_23;
  return(t);
}
ATerm f_12 (ATerm t)
{
  ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL;
  r_40 = t;
  t = term_l_20;
  t = get_config_0_0(t);
  s_40 = t;
  t = term_u_12;
  t_40 = t;
  t = (ATerm) ATinsert(ATempty, s_40);
  u_40 = t;
  t = SSL_printnl(t_40, u_40);
  t = r_40;
  return(t);
}
ATerm iowrap_3_0 (ATerm j_106 (ATerm), ATerm k_106 (ATerm), ATerm l_106 (ATerm), ATerm t)
{
  ATerm y_11 (ATerm t)
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_106(t);
        ;
        LocalPopChoice(n_23);
      }
    else
      {
        t = m_23;
        {
          ATerm o_23 = t;
          int p_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(p_23);
            }
          else
            {
              t = o_23;
              {
                ATerm q_23 = t;
                int r_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(r_23);
                  }
                else
                  {
                    t = q_23;
                    {
                      ATerm s_23 = t;
                      int t_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(c_12, d_12, e_12, t);
                          ;
                          LocalPopChoice(t_23);
                        }
                      else
                        {
                          t = s_23;
                          {
                            ATerm u_23 = t;
                            int v_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(v_23);
                              }
                            else
                              {
                                t = u_23;
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
  ATerm b_12 (ATerm t)
  {
    ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL;
    v_40 = t;
    {
      ATerm w_23 = t;
      int x_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_12 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((w_40 != NULL) && (w_40 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  w_40 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(h_12, t);
          ;
          LocalPopChoice(x_23);
        }
      else
        {
          t = w_23;
          t = term_y_23;
          w_40 = t;
        }
      t = not_null(w_40);
      t = ReadFromFile_0_0(t);
      x_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_40, x_40);
      t = apply_strategy_1_0(j_106, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(y_11, l_106, a_12, b_12, t);
  return(t);
}
ATerm i_12 (ATerm t)
{
  t = _2_0(_id, j_12, t);
  return(t);
}
ATerm j_12 (ATerm t)
{
  ATerm z_23 = t;
  int a_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Specification_1_0(k_12, t);
      ;
      LocalPopChoice(a_24);
    }
  else
    {
      t = z_23;
      t = debug_1_0(t_12, t);
    }
  return(t);
}
ATerm k_12 (ATerm t)
{
  t = Cons_2_0(_id, l_12, t);
  return(t);
}
ATerm l_12 (ATerm t)
{
  t = Cons_2_0(m_12, n_12, t);
  return(t);
}
ATerm m_12 (ATerm t)
{
  t = Strategies_1_0(p_12, t);
  return(t);
}
ATerm n_12 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm p_12 (ATerm t)
{
  t = map_1_0(strategy_definition_0_0, t);
  return(t);
}
ATerm t_12 (ATerm t)
{
  t = term_b_24;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(i_12, _fail, default_usage_0_0, t);
  return(t);
}

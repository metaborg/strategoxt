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
ATerm term_a_23;
ATerm term_x_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_d_21;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_q_20;
ATerm term_l_20;
ATerm term_j_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_z_17;
ATerm term_s_17;
ATerm term_m_17;
ATerm term_j_17;
ATerm term_t_16;
ATerm term_p_16;
ATerm term_m_16;
ATerm term_y_15;
ATerm term_p_13;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_e_11;
ATerm term_f_3;
void init_constant_terms (void)
{
  ATprotect(&(term_f_3));
  term_f_3 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym__2, term_e_18, term_i_18);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_18);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym__2, term_n_18, term_f_3);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym__2, term_w_18, term_x_18);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym__2, term_q_20, term_f_3);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym__2, term_u_20, term_f_3);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym__2, term_f_20, term_f_3);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym__2, term_f_22, term_f_3);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-specification: ", 0, ATtrue));
}
ATerm default_usage_0_0 (ATerm);
ATerm debug_1_0 (ATerm t_102 (ATerm), ATerm);
ATerm Let_2_0 (ATerm k_73 (ATerm), ATerm l_73 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm u_73 (ATerm), ATerm v_73 (ATerm), ATerm);
ATerm BuildDefault_1_0 (ATerm x_70 (ATerm), ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm build_term_expression_0_0 (ATerm);
ATerm Build_1_0 (ATerm s_73 (ATerm), ATerm);
ATerm As_2_0 (ATerm r_70 (ATerm), ATerm s_70 (ATerm), ATerm);
ATerm Op_2_0 (ATerm g_70 (ATerm), ATerm h_70 (ATerm), ATerm);
ATerm Str_1_0 (ATerm e_70 (ATerm), ATerm);
ATerm Real_1_0 (ATerm d_70 (ATerm), ATerm);
ATerm Int_1_0 (ATerm c_70 (ATerm), ATerm);
ATerm Var_1_0 (ATerm a_70 (ATerm), ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm match_term_expression_0_0 (ATerm);
ATerm Match_1_0 (ATerm r_73 (ATerm), ATerm);
ATerm Thread_1_0 (ATerm y_74 (ATerm), ATerm);
ATerm All_1_0 (ATerm x_74 (ATerm), ATerm);
ATerm Some_1_0 (ATerm v_74 (ATerm), ATerm);
ATerm One_1_0 (ATerm w_74 (ATerm), ATerm);
ATerm Path_2_0 (ATerm t_74 (ATerm), ATerm u_74 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm h_74 (ATerm), ATerm i_74 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm q_74 (ATerm), ATerm r_74 (ATerm), ATerm s_74 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm j_73 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm o_73 (ATerm), ATerm p_73 (ATerm), ATerm q_73 (ATerm), ATerm);
ATerm LGChoice_2_0 (ATerm c_74 (ATerm), ATerm d_74 (ATerm), ATerm);
ATerm GChoice_2_0 (ATerm c_73 (ATerm), ATerm d_73 (ATerm), ATerm);
ATerm GuardedLChoice_3_0 (ATerm e_74 (ATerm), ATerm f_74 (ATerm), ATerm g_74 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm y_72 (ATerm), ATerm z_72 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm);
ATerm Not_1_0 (ATerm j_74 (ATerm), ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm r_6 (ATerm);
ATerm v_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm strategy_expression_0_0 (ATerm);
ATerm FunType_2_0 (ATerm j_69 (ATerm), ATerm k_69 (ATerm), ATerm);
ATerm SortVar_1_0 (ATerm q_69 (ATerm), ATerm);
ATerm Sort_2_0 (ATerm s_69 (ATerm), ATerm t_69 (ATerm), ATerm);
ATerm ConstType_1_0 (ATerm i_69 (ATerm), ATerm);
ATerm l_7 (ATerm);
ATerm n_7 (ATerm);
ATerm p_7 (ATerm);
ATerm type_expression_0_0 (ATerm);
ATerm VarDec_2_0 (ATerm v_75 (ATerm), ATerm w_75 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm e_76 (ATerm), ATerm f_76 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm z_75 (ATerm), ATerm a_76 (ATerm), ATerm b_76 (ATerm), ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm strategy_definition_0_0 (ATerm);
ATerm map_1_0 (ATerm e_90 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm x_68 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm r_68 (ATerm), ATerm s_68 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm c_69 (ATerm), ATerm);
ATerm _2_0 (ATerm c_64 (ATerm), ATerm d_64 (ATerm), ATerm);
ATerm t_3 (ATerm v_49, ATerm w_49, ATerm);
ATerm u_3 (ATerm j_53, ATerm k_53, ATerm);
ATerm w_3 (ATerm v_102 (ATerm), ATerm d_426, ATerm n_53, ATerm);
ATerm v_3 (ATerm f_53, ATerm g_53, ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm l_8 (ATerm);
ATerm m_8 (ATerm);
ATerm n_8 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm x_105 (ATerm), ATerm);
ATerm u_31 (ATerm o_31, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm x_3 (ATerm l_53, ATerm);
ATerm y_3 (ATerm x_49, ATerm y_49, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm u_8 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm o_90 (ATerm), ATerm);
ATerm s_3 (ATerm l_44, ATerm m_44, ATerm);
ATerm v_8 (ATerm);
ATerm w_8 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm g_104 (ATerm), ATerm);
ATerm z_8 (ATerm);
ATerm a_9 (ATerm);
ATerm b_9 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm c_9 (ATerm);
ATerm d_9 (ATerm);
ATerm e_9 (ATerm);
ATerm f_9 (ATerm);
ATerm g_9 (ATerm);
ATerm h_9 (ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm l_9 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm e_4 (ATerm m_54, ATerm n_54, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm m_9 (ATerm);
ATerm o_9 (ATerm);
ATerm p_9 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm c_4 (ATerm k_59, ATerm l_59, ATerm j_59, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm q_9 (ATerm);
ATerm r_9 (ATerm);
ATerm s_9 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm z_3 (ATerm v_46, ATerm w_46, ATerm);
ATerm foldr_2_0 (ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm t_9 (ATerm);
ATerm v_9 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm f_104 (ATerm), ATerm);
ATerm w_9 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm x_9 (ATerm);
ATerm need_help_1_0 (ATerm v_106 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm b_4 (ATerm b_61, ATerm c_61, ATerm);
ATerm Program_1_0 (ATerm i_82 (ATerm), ATerm);
ATerm a_10 (ATerm);
ATerm c_10 (ATerm);
ATerm d_10 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm j_82 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm e_10 (ATerm);
ATerm f_10 (ATerm);
ATerm h_10 (ATerm);
ATerm i_10 (ATerm);
ATerm j_10 (ATerm);
ATerm k_10 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm l_10 (ATerm);
ATerm parse_options_p__1_0 (ATerm y_108 (ATerm), ATerm);
ATerm t_10 (ATerm);
ATerm u_10 (ATerm);
ATerm v_10 (ATerm);
ATerm w_10 (ATerm);
ATerm parse_options_1_0 (ATerm x_108 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm x_106 (ATerm), ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm);
ATerm a_11 (ATerm);
ATerm c_11 (ATerm);
ATerm d_11 (ATerm);
ATerm j_11 (ATerm);
ATerm k_11 (ATerm);
ATerm iowrap_3_0 (ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm i_106 (ATerm), ATerm);
ATerm m_11 (ATerm);
ATerm p_11 (ATerm);
ATerm q_11 (ATerm);
ATerm t_11 (ATerm);
ATerm u_11 (ATerm);
ATerm v_11 (ATerm);
ATerm w_11 (ATerm);
ATerm x_11 (ATerm);
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
  t = term_f_3;
  t = whoami_0_0(t);
  l_0 = t;
  t = term_e_11;
  m_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_11), l_0), term_y_11);
  n_0 = t;
  t = SSL_printnl(m_0, n_0);
  t = term_a_12;
  o_0 = t;
  t = SSL_exit(o_0);
  t = e_0;
  return(t);
}
ATerm debug_1_0 (ATerm t_102 (ATerm), ATerm t)
{
  ATerm x_0 = NULL,d_1 = NULL,e_1 = NULL,n_1 = NULL;
  x_0 = t;
  t = t_102(t);
  d_1 = t;
  t = term_e_11;
  e_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_0), d_1);
  n_1 = t;
  t = SSL_printnl(e_1, n_1);
  t = x_0;
  return(t);
}
ATerm Let_2_0 (ATerm k_73 (ATerm), ATerm l_73 (ATerm), ATerm t)
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
  t = k_73(t);
  u_1 = t;
  t = t_1;
  t = l_73(t);
  v_1 = t;
  k_0 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, u_1, v_1);
  c_0 = t;
  t = SSLsetAnnotations(c_0, q_1);
  return(t);
}
ATerm Scope_2_0 (ATerm u_73 (ATerm), ATerm v_73 (ATerm), ATerm t)
{
  ATerm b_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL,p_0 = NULL,q_0 = NULL;
  h_2 = t;
  if(match_cons(t, sym_Scope_2))
    {
      d_2 = ATgetArgument(t, 0);
      e_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_2);
  b_2 = t;
  t = d_2;
  t = u_73(t);
  f_2 = t;
  t = e_2;
  t = v_73(t);
  g_2 = t;
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, f_2, g_2);
  p_0 = t;
  t = SSLsetAnnotations(p_0, b_2);
  return(t);
}
ATerm BuildDefault_1_0 (ATerm x_70 (ATerm), ATerm t)
{
  ATerm o_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,r_0 = NULL,t_0 = NULL;
  s_2 = t;
  if(match_cons(t, sym_BuildDefault_1))
    {
      q_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_2);
  o_2 = t;
  t = q_2;
  t = x_70(t);
  r_2 = t;
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym_BuildDefault_1, r_2);
  r_0 = t;
  t = SSLsetAnnotations(r_0, o_2);
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm y_2 = NULL;
  y_2 = t;
  t = SSL_is_string(y_2);
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm z_2 = NULL;
  z_2 = t;
  t = SSL_is_int(z_2);
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm a_3 = NULL;
  a_3 = t;
  t = SSL_is_real(a_3);
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm c_3 = NULL;
  c_3 = t;
  t = SSL_is_string(c_3);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm e_3 = NULL;
  e_3 = t;
  t = SSL_is_string(e_3);
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = map_1_0(build_term_expression_0_0, t);
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = term_b_12;
  return(t);
}
ATerm build_term_expression_0_0 (ATerm t)
{
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1_0(o_5, t);
      ;
      LocalPopChoice(d_12);
    }
  else
    {
      t = c_12;
      {
        ATerm e_12 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Int_1_0(p_5, t);
            ;
            LocalPopChoice(f_12);
          }
        else
          {
            t = e_12;
            {
              ATerm g_12 = t;
              int i_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Real_1_0(q_5, t);
                  ;
                  LocalPopChoice(i_12);
                }
              else
                {
                  t = g_12;
                  {
                    ATerm j_12 = t;
                    int m_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Str_1_0(r_5, t);
                        ;
                        LocalPopChoice(m_12);
                      }
                    else
                      {
                        t = j_12;
                        {
                          ATerm o_12 = t;
                          int p_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Op_2_0(s_5, t_5, t);
                              ;
                              LocalPopChoice(p_12);
                            }
                          else
                            {
                              t = o_12;
                              {
                                ATerm r_12 = t;
                                int s_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildDefault_1_0(build_term_expression_0_0, t);
                                    ;
                                    LocalPopChoice(s_12);
                                  }
                                else
                                  {
                                    t = r_12;
                                    t = debug_1_0(u_5, t);
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
ATerm Build_1_0 (ATerm s_73 (ATerm), ATerm t)
{
  ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL,d_4 = NULL,v_0 = NULL,y_0 = NULL;
  d_4 = t;
  if(match_cons(t, sym_Build_1))
    {
      j_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_4);
  i_3 = t;
  t = j_3;
  t = s_73(t);
  k_3 = t;
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, k_3);
  v_0 = t;
  t = SSLsetAnnotations(v_0, i_3);
  return(t);
}
ATerm As_2_0 (ATerm r_70 (ATerm), ATerm s_70 (ATerm), ATerm t)
{
  ATerm v_5 = NULL,w_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL,m_6 = NULL,z_0 = NULL,a_1 = NULL;
  m_6 = t;
  if(match_cons(t, sym_As_2))
    {
      w_5 = ATgetArgument(t, 0);
      z_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_6);
  v_5 = t;
  t = w_5;
  t = r_70(t);
  a_6 = t;
  t = z_5;
  t = s_70(t);
  b_6 = t;
  a_1 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, a_6, b_6);
  z_0 = t;
  t = SSLsetAnnotations(z_0, v_5);
  return(t);
}
ATerm Op_2_0 (ATerm g_70 (ATerm), ATerm h_70 (ATerm), ATerm t)
{
  ATerm q_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL,w_6 = NULL,x_6 = NULL,b_1 = NULL,c_1 = NULL;
  x_6 = t;
  if(match_cons(t, sym_Op_2))
    {
      s_6 = ATgetArgument(t, 0);
      t_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_6);
  q_6 = t;
  t = s_6;
  t = g_70(t);
  u_6 = t;
  t = t_6;
  t = h_70(t);
  w_6 = t;
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, u_6, w_6);
  b_1 = t;
  t = SSLsetAnnotations(b_1, q_6);
  return(t);
}
ATerm Str_1_0 (ATerm e_70 (ATerm), ATerm t)
{
  ATerm o_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL,f_1 = NULL,g_1 = NULL;
  u_7 = t;
  if(match_cons(t, sym_Str_1))
    {
      s_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_7);
  o_7 = t;
  t = s_7;
  t = e_70(t);
  t_7 = t;
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym_Str_1, t_7);
  f_1 = t;
  t = SSLsetAnnotations(f_1, o_7);
  return(t);
}
ATerm Real_1_0 (ATerm d_70 (ATerm), ATerm t)
{
  ATerm o_8 = NULL,p_8 = NULL,s_8 = NULL,t_8 = NULL,h_1 = NULL,j_1 = NULL;
  t_8 = t;
  if(match_cons(t, sym_Real_1))
    {
      p_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_8);
  o_8 = t;
  t = p_8;
  t = d_70(t);
  s_8 = t;
  j_1 = t;
  t = (ATerm) ATmakeAppl(sym_Real_1, s_8);
  h_1 = t;
  t = SSLsetAnnotations(h_1, o_8);
  return(t);
}
ATerm Int_1_0 (ATerm c_70 (ATerm), ATerm t)
{
  ATerm x_8 = NULL,y_8 = NULL,k_9 = NULL,n_9 = NULL,k_1 = NULL,l_1 = NULL;
  n_9 = t;
  if(match_cons(t, sym_Int_1))
    {
      y_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_9);
  x_8 = t;
  t = y_8;
  t = c_70(t);
  k_9 = t;
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym_Int_1, k_9);
  k_1 = t;
  t = SSLsetAnnotations(k_1, x_8);
  return(t);
}
ATerm Var_1_0 (ATerm a_70 (ATerm), ATerm t)
{
  ATerm u_9 = NULL,y_9 = NULL,b_10 = NULL,g_10 = NULL,m_1 = NULL,o_1 = NULL;
  g_10 = t;
  if(match_cons(t, sym_Var_1))
    {
      y_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_10);
  u_9 = t;
  t = y_9;
  t = a_70(t);
  b_10 = t;
  o_1 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, b_10);
  m_1 = t;
  t = SSLsetAnnotations(m_1, u_9);
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm m_10 = NULL;
  m_10 = t;
  t = SSL_is_string(m_10);
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm n_10 = NULL;
  n_10 = t;
  t = SSL_is_int(n_10);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm q_10 = NULL;
  q_10 = t;
  t = SSL_is_real(q_10);
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm r_10 = NULL;
  r_10 = t;
  t = SSL_is_string(r_10);
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm s_10 = NULL;
  s_10 = t;
  t = SSL_is_string(s_10);
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = map_1_0(match_term_expression_0_0, t);
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = term_b_12;
  return(t);
}
ATerm match_term_expression_0_0 (ATerm t)
{
  ATerm t_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      ;
      LocalPopChoice(u_12);
    }
  else
    {
      t = t_12;
      {
        ATerm v_12 = t;
        int w_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1_0(x_5, t);
            ;
            LocalPopChoice(w_12);
          }
        else
          {
            t = v_12;
            {
              ATerm a_13 = t;
              int b_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1_0(y_5, t);
                  ;
                  LocalPopChoice(b_13);
                }
              else
                {
                  t = a_13;
                  {
                    ATerm c_13 = t;
                    int d_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1_0(c_6, t);
                        ;
                        LocalPopChoice(d_13);
                      }
                    else
                      {
                        t = c_13;
                        {
                          ATerm f_13 = t;
                          int h_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1_0(d_6, t);
                              ;
                              LocalPopChoice(h_13);
                            }
                          else
                            {
                              t = f_13;
                              {
                                ATerm i_13 = t;
                                int j_13 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Op_2_0(e_6, f_6, t);
                                    ;
                                    LocalPopChoice(j_13);
                                  }
                                else
                                  {
                                    t = i_13;
                                    {
                                      ATerm k_13 = t;
                                      int m_13 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = As_2_0(match_term_expression_0_0, match_term_expression_0_0, t);
                                          ;
                                          LocalPopChoice(m_13);
                                        }
                                      else
                                        {
                                          t = k_13;
                                          t = debug_1_0(g_6, t);
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
ATerm Match_1_0 (ATerm r_73 (ATerm), ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL,p_1 = NULL,s_1 = NULL;
  i_11 = t;
  if(match_cons(t, sym_Match_1))
    {
      g_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_11);
  f_11 = t;
  t = g_11;
  t = r_73(t);
  h_11 = t;
  s_1 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, h_11);
  p_1 = t;
  t = SSLsetAnnotations(p_1, f_11);
  return(t);
}
ATerm Thread_1_0 (ATerm y_74 (ATerm), ATerm t)
{
  ATerm n_11 = NULL,o_11 = NULL,r_11 = NULL,s_11 = NULL,w_1 = NULL,y_1 = NULL;
  s_11 = t;
  if(match_cons(t, sym_Thread_1))
    {
      o_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_11);
  n_11 = t;
  t = o_11;
  t = y_74(t);
  r_11 = t;
  y_1 = t;
  t = (ATerm) ATmakeAppl(sym_Thread_1, r_11);
  w_1 = t;
  t = SSLsetAnnotations(w_1, n_11);
  return(t);
}
ATerm All_1_0 (ATerm x_74 (ATerm), ATerm t)
{
  ATerm h_12 = NULL,k_12 = NULL,l_12 = NULL,n_12 = NULL,z_1 = NULL,a_2 = NULL;
  n_12 = t;
  if(match_cons(t, sym_All_1))
    {
      k_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_12);
  h_12 = t;
  t = k_12;
  t = x_74(t);
  l_12 = t;
  a_2 = t;
  t = (ATerm) ATmakeAppl(sym_All_1, l_12);
  z_1 = t;
  t = SSLsetAnnotations(z_1, h_12);
  return(t);
}
ATerm Some_1_0 (ATerm v_74 (ATerm), ATerm t)
{
  ATerm q_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,c_2 = NULL,i_2 = NULL;
  z_12 = t;
  if(match_cons(t, sym_Some_1))
    {
      x_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_12);
  q_12 = t;
  t = x_12;
  t = v_74(t);
  y_12 = t;
  i_2 = t;
  t = (ATerm) ATmakeAppl(sym_Some_1, y_12);
  c_2 = t;
  t = SSLsetAnnotations(c_2, q_12);
  return(t);
}
ATerm One_1_0 (ATerm w_74 (ATerm), ATerm t)
{
  ATerm e_13 = NULL,g_13 = NULL,l_13 = NULL,q_13 = NULL,j_2 = NULL,m_2 = NULL;
  q_13 = t;
  if(match_cons(t, sym_One_1))
    {
      g_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_13);
  e_13 = t;
  t = g_13;
  t = w_74(t);
  l_13 = t;
  m_2 = t;
  t = (ATerm) ATmakeAppl(sym_One_1, l_13);
  j_2 = t;
  t = SSLsetAnnotations(j_2, e_13);
  return(t);
}
ATerm Path_2_0 (ATerm t_74 (ATerm), ATerm u_74 (ATerm), ATerm t)
{
  ATerm v_13 = NULL,y_13 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,n_2 = NULL,t_2 = NULL;
  e_14 = t;
  if(match_cons(t, sym_Path_2))
    {
      y_13 = ATgetArgument(t, 0);
      b_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_14);
  v_13 = t;
  t = y_13;
  t = t_74(t);
  c_14 = t;
  t = b_14;
  t = u_74(t);
  d_14 = t;
  t_2 = t;
  t = (ATerm) ATmakeAppl(sym_Path_2, c_14, d_14);
  n_2 = t;
  t = SSLsetAnnotations(n_2, v_13);
  return(t);
}
ATerm Rec_2_0 (ATerm h_74 (ATerm), ATerm i_74 (ATerm), ATerm t)
{
  ATerm t_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL,c_15 = NULL,e_15 = NULL,u_2 = NULL,w_2 = NULL;
  e_15 = t;
  if(match_cons(t, sym_Rec_2))
    {
      w_14 = ATgetArgument(t, 0);
      x_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_15);
  t_14 = t;
  t = w_14;
  t = h_74(t);
  y_14 = t;
  t = x_14;
  t = i_74(t);
  c_15 = t;
  w_2 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, y_14, c_15);
  u_2 = t;
  t = SSLsetAnnotations(u_2, t_14);
  return(t);
}
ATerm PrimT_3_0 (ATerm q_74 (ATerm), ATerm r_74 (ATerm), ATerm s_74 (ATerm), ATerm t)
{
  ATerm u_15 = NULL,z_15 = NULL,b_16 = NULL,e_16 = NULL,f_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,x_2 = NULL,b_3 = NULL;
  k_16 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      z_15 = ATgetArgument(t, 0);
      b_16 = ATgetArgument(t, 1);
      e_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_16);
  u_15 = t;
  t = z_15;
  t = q_74(t);
  f_16 = t;
  t = b_16;
  t = r_74(t);
  i_16 = t;
  t = e_16;
  t = s_74(t);
  j_16 = t;
  b_3 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, f_16, i_16, j_16);
  x_2 = t;
  t = SSLsetAnnotations(x_2, u_15);
  return(t);
}
ATerm SVar_1_0 (ATerm j_73 (ATerm), ATerm t)
{
  ATerm q_16 = NULL,y_16 = NULL,f_17 = NULL,q_17 = NULL,d_3 = NULL,g_3 = NULL;
  q_17 = t;
  if(match_cons(t, sym_SVar_1))
    {
      y_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_17);
  q_16 = t;
  t = y_16;
  t = j_73(t);
  f_17 = t;
  g_3 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, f_17);
  d_3 = t;
  t = SSLsetAnnotations(d_3, q_16);
  return(t);
}
ATerm CallT_3_0 (ATerm o_73 (ATerm), ATerm p_73 (ATerm), ATerm q_73 (ATerm), ATerm t)
{
  ATerm t_18 = NULL,c_19 = NULL,l_19 = NULL,u_19 = NULL,b_20 = NULL,k_20 = NULL,r_20 = NULL,a_21 = NULL,h_3 = NULL,l_3 = NULL;
  a_21 = t;
  if(match_cons(t, sym_CallT_3))
    {
      c_19 = ATgetArgument(t, 0);
      l_19 = ATgetArgument(t, 1);
      u_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_21);
  t_18 = t;
  t = c_19;
  t = o_73(t);
  b_20 = t;
  t = l_19;
  t = p_73(t);
  k_20 = t;
  t = u_19;
  t = q_73(t);
  r_20 = t;
  l_3 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, b_20, k_20, r_20);
  h_3 = t;
  t = SSLsetAnnotations(h_3, t_18);
  return(t);
}
ATerm LGChoice_2_0 (ATerm c_74 (ATerm), ATerm d_74 (ATerm), ATerm t)
{
  ATerm d_22 = NULL,o_22 = NULL,v_22 = NULL,e_23 = NULL,l_23 = NULL,u_23 = NULL,m_3 = NULL,n_3 = NULL;
  u_23 = t;
  if(match_cons(t, sym_LGChoice_2))
    {
      o_22 = ATgetArgument(t, 0);
      v_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_23);
  d_22 = t;
  t = o_22;
  t = c_74(t);
  e_23 = t;
  t = v_22;
  t = d_74(t);
  l_23 = t;
  n_3 = t;
  t = (ATerm) ATmakeAppl(sym_LGChoice_2, e_23, l_23);
  m_3 = t;
  t = SSLsetAnnotations(m_3, d_22);
  return(t);
}
ATerm GChoice_2_0 (ATerm c_73 (ATerm), ATerm d_73 (ATerm), ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,o_3 = NULL,p_3 = NULL;
  o_24 = t;
  if(match_cons(t, sym_GChoice_2))
    {
      k_24 = ATgetArgument(t, 0);
      l_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_24);
  j_24 = t;
  t = k_24;
  t = c_73(t);
  m_24 = t;
  t = l_24;
  t = d_73(t);
  n_24 = t;
  p_3 = t;
  t = (ATerm) ATmakeAppl(sym_GChoice_2, m_24, n_24);
  o_3 = t;
  t = SSLsetAnnotations(o_3, j_24);
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm e_74 (ATerm), ATerm f_74 (ATerm), ATerm g_74 (ATerm), ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,r_3 = NULL,a_4 = NULL;
  y_24 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      s_24 = ATgetArgument(t, 0);
      t_24 = ATgetArgument(t, 1);
      u_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_24);
  r_24 = t;
  t = s_24;
  t = e_74(t);
  v_24 = t;
  t = t_24;
  t = f_74(t);
  w_24 = t;
  t = u_24;
  t = g_74(t);
  x_24 = t;
  a_4 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, v_24, w_24, x_24);
  r_3 = t;
  t = SSLsetAnnotations(r_3, r_24);
  return(t);
}
ATerm LChoice_2_0 (ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,f_4 = NULL,h_4 = NULL;
  g_25 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      c_25 = ATgetArgument(t, 0);
      d_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_25);
  b_25 = t;
  t = c_25;
  t = a_74(t);
  e_25 = t;
  t = d_25;
  t = b_74(t);
  f_25 = t;
  h_4 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, e_25, f_25);
  f_4 = t;
  t = SSLsetAnnotations(f_4, b_25);
  return(t);
}
ATerm Choice_2_0 (ATerm y_72 (ATerm), ATerm z_72 (ATerm), ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,i_4 = NULL,j_4 = NULL;
  o_25 = t;
  if(match_cons(t, sym_Choice_2))
    {
      k_25 = ATgetArgument(t, 0);
      l_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_25);
  j_25 = t;
  t = k_25;
  t = y_72(t);
  m_25 = t;
  t = l_25;
  t = z_72(t);
  n_25 = t;
  j_4 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, m_25, n_25);
  i_4 = t;
  t = SSLsetAnnotations(i_4, j_25);
  return(t);
}
ATerm Seq_2_0 (ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL,k_4 = NULL,l_4 = NULL;
  w_25 = t;
  if(match_cons(t, sym_Seq_2))
    {
      s_25 = ATgetArgument(t, 0);
      t_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_25);
  r_25 = t;
  t = s_25;
  t = y_73(t);
  u_25 = t;
  t = t_25;
  t = z_73(t);
  v_25 = t;
  l_4 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, u_25, v_25);
  k_4 = t;
  t = SSLsetAnnotations(k_4, r_25);
  return(t);
}
ATerm Not_1_0 (ATerm j_74 (ATerm), ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,m_4 = NULL,n_4 = NULL;
  c_26 = t;
  if(match_cons(t, sym_Not_1))
    {
      a_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_26);
  z_25 = t;
  t = a_26;
  t = j_74(t);
  b_26 = t;
  n_4 = t;
  t = (ATerm) ATmakeAppl(sym_Not_1, b_26);
  m_4 = t;
  t = SSLsetAnnotations(m_4, z_25);
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = SVar_1_0(k_6, t);
  return(t);
}
ATerm i_6 (ATerm t)
{
  t = map_1_0(strategy_expression_0_0, t);
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = map_1_0(build_term_expression_0_0, t);
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm g_26 = NULL;
  g_26 = t;
  t = SSL_is_string(g_26);
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm h_26 = NULL;
  h_26 = t;
  t = SSL_is_string(h_26);
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = map_1_0(strategy_expression_0_0, t);
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = map_1_0(build_term_expression_0_0, t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm i_26 = NULL;
  i_26 = t;
  t = SSL_is_string(i_26);
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm j_26 = NULL;
  j_26 = t;
  t = SSL_is_int(j_26);
  return(t);
}
ATerm v_6 (ATerm t)
{
  t = map_1_0(y_6, t);
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_26 = NULL;
      m_26 = t;
      t = SSL_is_string(m_26);
      ;
      LocalPopChoice(o_13);
    }
  else
    {
      t = n_13;
      t = map_1_0(z_6, t);
    }
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm s_0 = NULL;
  s_0 = t;
  t = SSL_is_int(s_0);
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = map_1_0(b_7, t);
  return(t);
}
ATerm b_7 (ATerm t)
{
  t = SDefT_4_0(c_7, d_7, e_7, strategy_expression_0_0, t);
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm o_26 = NULL;
  o_26 = t;
  t = SSL_is_string(o_26);
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = map_1_0(f_7, t);
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = map_1_0(h_7, t);
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = VarDec_2_0(g_7, type_expression_0_0, t);
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm u_0 = NULL;
  u_0 = t;
  t = SSL_is_string(u_0);
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = VarDec_2_0(i_7, type_expression_0_0, t);
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm w_0 = NULL;
  w_0 = t;
  t = SSL_is_string(w_0);
  return(t);
}
ATerm j_7 (ATerm t)
{
  t = term_p_13;
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm r_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
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
            if(!(match_cons(t, sym_Fail_0)))
              _fail(t);
            ;
            LocalPopChoice(u_13);
          }
        else
          {
            t = t_13;
            {
              ATerm w_13 = t;
              int x_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Not_1_0(strategy_expression_0_0, t);
                  ;
                  LocalPopChoice(x_13);
                }
              else
                {
                  t = w_13;
                  {
                    ATerm z_13 = t;
                    int a_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Seq_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                        ;
                        LocalPopChoice(a_14);
                      }
                    else
                      {
                        t = z_13;
                        {
                          ATerm f_14 = t;
                          int g_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Choice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
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
                                    t = LChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
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
                                          t = GuardedLChoice_3_0(strategy_expression_0_0, strategy_expression_0_0, strategy_expression_0_0, t);
                                          ;
                                          LocalPopChoice(k_14);
                                        }
                                      else
                                        {
                                          t = j_14;
                                          {
                                            ATerm l_14 = t;
                                            int m_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = GChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                                ;
                                                LocalPopChoice(m_14);
                                              }
                                            else
                                              {
                                                t = l_14;
                                                {
                                                  ATerm n_14 = t;
                                                  int o_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = LGChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
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
                                                            t = CallT_3_0(h_6, i_6, j_6, t);
                                                            ;
                                                            LocalPopChoice(q_14);
                                                          }
                                                        else
                                                          {
                                                            t = p_14;
                                                            {
                                                              ATerm r_14 = t;
                                                              int s_14 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = PrimT_3_0(l_6, n_6, o_6, t);
                                                                  ;
                                                                  LocalPopChoice(s_14);
                                                                }
                                                              else
                                                                {
                                                                  t = r_14;
                                                                  {
                                                                    ATerm u_14 = t;
                                                                    int v_14 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2_0(p_6, strategy_expression_0_0, t);
                                                                        ;
                                                                        LocalPopChoice(v_14);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = u_14;
                                                                        {
                                                                          ATerm z_14 = t;
                                                                          int a_15 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Path_2_0(r_6, strategy_expression_0_0, t);
                                                                              ;
                                                                              LocalPopChoice(a_15);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = z_14;
                                                                              {
                                                                                ATerm b_15 = t;
                                                                                int d_15 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = One_1_0(strategy_expression_0_0, t);
                                                                                    ;
                                                                                    LocalPopChoice(d_15);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = b_15;
                                                                                    {
                                                                                      ATerm f_15 = t;
                                                                                      int g_15 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = Some_1_0(strategy_expression_0_0, t);
                                                                                          ;
                                                                                          LocalPopChoice(g_15);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = f_15;
                                                                                          {
                                                                                            ATerm h_15 = t;
                                                                                            int i_15 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = All_1_0(strategy_expression_0_0, t);
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
                                                                                                      t = Thread_1_0(strategy_expression_0_0, t);
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
                                                                                                            t = Match_1_0(match_term_expression_0_0, t);
                                                                                                            ;
                                                                                                            LocalPopChoice(m_15);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = l_15;
                                                                                                            {
                                                                                                              ATerm n_15 = t;
                                                                                                              int o_15 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Build_1_0(build_term_expression_0_0, t);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(o_15);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = n_15;
                                                                                                                  {
                                                                                                                    ATerm p_15 = t;
                                                                                                                    int q_15 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Scope_2_0(v_6, strategy_expression_0_0, t);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(q_15);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = p_15;
                                                                                                                        {
                                                                                                                          ATerm r_15 = t;
                                                                                                                          int s_15 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = Let_2_0(a_7, strategy_expression_0_0, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(s_15);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = r_15;
                                                                                                                              t = debug_1_0(j_7, t);
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
ATerm FunType_2_0 (ATerm j_69 (ATerm), ATerm k_69 (ATerm), ATerm t)
{
  ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL,o_4 = NULL,p_4 = NULL;
  y_26 = t;
  if(match_cons(t, sym_FunType_2))
    {
      u_26 = ATgetArgument(t, 0);
      v_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_26);
  t_26 = t;
  t = u_26;
  t = j_69(t);
  w_26 = t;
  t = v_26;
  t = k_69(t);
  x_26 = t;
  p_4 = t;
  t = (ATerm) ATmakeAppl(sym_FunType_2, w_26, x_26);
  o_4 = t;
  t = SSLsetAnnotations(o_4, t_26);
  return(t);
}
ATerm SortVar_1_0 (ATerm q_69 (ATerm), ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,q_4 = NULL,r_4 = NULL;
  e_27 = t;
  if(match_cons(t, sym_SortVar_1))
    {
      c_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_27);
  b_27 = t;
  t = c_27;
  t = q_69(t);
  d_27 = t;
  r_4 = t;
  t = (ATerm) ATmakeAppl(sym_SortVar_1, d_27);
  q_4 = t;
  t = SSLsetAnnotations(q_4, b_27);
  return(t);
}
ATerm Sort_2_0 (ATerm s_69 (ATerm), ATerm t_69 (ATerm), ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,s_4 = NULL,t_4 = NULL;
  m_27 = t;
  if(match_cons(t, sym_Sort_2))
    {
      i_27 = ATgetArgument(t, 0);
      j_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_27);
  h_27 = t;
  t = i_27;
  t = s_69(t);
  k_27 = t;
  t = j_27;
  t = t_69(t);
  l_27 = t;
  t_4 = t;
  t = (ATerm) ATmakeAppl(sym_Sort_2, k_27, l_27);
  s_4 = t;
  t = SSLsetAnnotations(s_4, h_27);
  return(t);
}
ATerm ConstType_1_0 (ATerm i_69 (ATerm), ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,u_4 = NULL,v_4 = NULL;
  s_27 = t;
  if(match_cons(t, sym_ConstType_1))
    {
      q_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_27);
  p_27 = t;
  t = q_27;
  t = i_69(t);
  r_27 = t;
  v_4 = t;
  t = (ATerm) ATmakeAppl(sym_ConstType_1, r_27);
  u_4 = t;
  t = SSLsetAnnotations(u_4, p_27);
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm v_27 = NULL;
  v_27 = t;
  t = SSL_is_string(v_27);
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm w_27 = NULL;
  w_27 = t;
  t = SSL_is_string(w_27);
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = map_1_0(type_expression_0_0, t);
  return(t);
}
ATerm type_expression_0_0 (ATerm t)
{
  ATerm t_15 = t;
  int v_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_7 (ATerm t)
      {
        ATerm w_15 = t;
        int x_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_7 (ATerm t)
            {
              t = map_1_0(k_7, t);
              return(t);
            }
            t = Sort_2_0(l_7, m_7, t);
            ;
            LocalPopChoice(x_15);
          }
        else
          {
            t = w_15;
            t = SortVar_1_0(n_7, t);
          }
        return(t);
      }
      t = ConstType_1_0(k_7, t);
      ;
      LocalPopChoice(v_15);
    }
  else
    {
      t = t_15;
      t = FunType_2_0(p_7, type_expression_0_0, t);
    }
  return(t);
}
ATerm VarDec_2_0 (ATerm v_75 (ATerm), ATerm w_75 (ATerm), ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,w_4 = NULL,x_4 = NULL;
  d_28 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      z_27 = ATgetArgument(t, 0);
      a_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_28);
  y_27 = t;
  t = z_27;
  t = v_75(t);
  b_28 = t;
  t = a_28;
  t = w_75(t);
  c_28 = t;
  x_4 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, b_28, c_28);
  w_4 = t;
  t = SSLsetAnnotations(w_4, y_27);
  return(t);
}
ATerm SDefT_4_0 (ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm e_76 (ATerm), ATerm f_76 (ATerm), ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,y_4 = NULL,z_4 = NULL;
  p_28 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      h_28 = ATgetArgument(t, 0);
      i_28 = ATgetArgument(t, 1);
      j_28 = ATgetArgument(t, 2);
      k_28 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_28);
  g_28 = t;
  t = h_28;
  t = c_76(t);
  l_28 = t;
  t = i_28;
  t = d_76(t);
  m_28 = t;
  t = j_28;
  t = e_76(t);
  n_28 = t;
  t = k_28;
  t = f_76(t);
  o_28 = t;
  z_4 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, l_28, m_28, n_28, o_28);
  y_4 = t;
  t = SSLsetAnnotations(y_4, g_28);
  return(t);
}
ATerm SDef_3_0 (ATerm z_75 (ATerm), ATerm a_76 (ATerm), ATerm b_76 (ATerm), ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_5 = NULL,b_5 = NULL;
  z_28 = t;
  if(match_cons(t, sym_SDef_3))
    {
      t_28 = ATgetArgument(t, 0);
      u_28 = ATgetArgument(t, 1);
      v_28 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_28);
  s_28 = t;
  t = t_28;
  t = z_75(t);
  w_28 = t;
  t = u_28;
  t = a_76(t);
  x_28 = t;
  t = v_28;
  t = b_76(t);
  y_28 = t;
  b_5 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, w_28, x_28, y_28);
  a_5 = t;
  t = SSLsetAnnotations(a_5, s_28);
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm c_29 = NULL;
  c_29 = t;
  t = SSL_is_string(c_29);
  return(t);
}
ATerm r_7 (ATerm t)
{
  t = map_1_0(v_7, t);
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = VarDec_2_0(w_7, type_expression_0_0, t);
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm d_29 = NULL;
  d_29 = t;
  t = SSL_is_string(d_29);
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm e_29 = NULL;
  e_29 = t;
  t = SSL_is_string(e_29);
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = map_1_0(a_8, t);
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = map_1_0(c_8, t);
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = VarDec_2_0(b_8, type_expression_0_0, t);
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm f_29 = NULL;
  f_29 = t;
  t = SSL_is_string(f_29);
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = VarDec_2_0(d_8, type_expression_0_0, t);
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm g_29 = NULL;
  g_29 = t;
  t = SSL_is_string(g_29);
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = term_y_15;
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm a_16 = t;
  int c_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SDef_3_0(q_7, r_7, strategy_expression_0_0, t);
      ;
      LocalPopChoice(c_16);
    }
  else
    {
      t = a_16;
      {
        ATerm d_16 = t;
        int g_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(x_7, y_7, z_7, strategy_expression_0_0, t);
            ;
            LocalPopChoice(g_16);
          }
        else
          {
            t = d_16;
            t = debug_1_0(e_8, t);
          }
      }
    }
  return(t);
}
ATerm map_1_0 (ATerm e_90 (ATerm), ATerm t)
{
  ATerm h_29 (ATerm t)
  {
    ATerm h_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(l_16);
      }
    else
      {
        t = h_16;
        t = Cons_2_0(e_90, h_29, t);
      }
    return(t);
  }
  t = h_29(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm x_68 (ATerm), ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL,c_5 = NULL,d_5 = NULL;
  l_29 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      j_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_29);
  i_29 = t;
  t = j_29;
  t = x_68(t);
  k_29 = t;
  d_5 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, k_29);
  c_5 = t;
  t = SSLsetAnnotations(c_5, i_29);
  return(t);
}
ATerm Cons_2_0 (ATerm r_68 (ATerm), ATerm s_68 (ATerm), ATerm t)
{
  ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL,e_5 = NULL,f_5 = NULL;
  t_29 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_29 = ATgetFirst((ATermList) t);
      q_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_29);
  o_29 = t;
  t = p_29;
  t = r_68(t);
  r_29 = t;
  t = q_29;
  t = s_68(t);
  s_29 = t;
  f_5 = t;
  t = (ATerm) ATinsert(CheckATermList(s_29), r_29);
  e_5 = t;
  t = SSLsetAnnotations(e_5, o_29);
  return(t);
}
ATerm Specification_1_0 (ATerm c_69 (ATerm), ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL,g_5 = NULL,h_5 = NULL;
  z_29 = t;
  if(match_cons(t, sym_Specification_1))
    {
      x_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_29);
  w_29 = t;
  t = x_29;
  t = c_69(t);
  y_29 = t;
  h_5 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, y_29);
  g_5 = t;
  t = SSLsetAnnotations(g_5, w_29);
  return(t);
}
ATerm _2_0 (ATerm c_64 (ATerm), ATerm d_64 (ATerm), ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,i_5 = NULL,j_5 = NULL;
  h_30 = t;
  if(match_cons(t, sym__2))
    {
      d_30 = ATgetArgument(t, 0);
      e_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_30);
  c_30 = t;
  t = d_30;
  t = c_64(t);
  f_30 = t;
  t = e_30;
  t = d_64(t);
  g_30 = t;
  j_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_30, g_30);
  i_5 = t;
  t = SSLsetAnnotations(i_5, c_30);
  return(t);
}
ATerm t_3 (ATerm v_49, ATerm w_49, ATerm t)
{
  ATerm k_30 = NULL;
  t = SSL_fputc(v_49, w_49);
  k_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_30);
  return(t);
}
ATerm u_3 (ATerm j_53, ATerm k_53, ATerm t)
{
  ATerm l_30 = NULL;
  t = SSL_write_term_to_stream_text(j_53, k_53);
  l_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_30);
  return(t);
}
ATerm w_3 (ATerm v_102 (ATerm), ATerm d_426, ATerm n_53, ATerm t)
{
  ATerm m_30 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_426, term_m_16);
  t = open_stream_0_0(t);
  m_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_30, n_53);
  t = v_102(t);
  t = fclose_0_0(t);
  t = n_53;
  return(t);
}
ATerm v_3 (ATerm f_53, ATerm g_53, ATerm t)
{
  ATerm n_30 = NULL;
  t = SSL_write_term_to_stream_baf(f_53, g_53);
  n_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_30);
  return(t);
}
ATerm i_8 (ATerm t)
{
  t = fetch_1_0(k_8, t);
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL;
  if(match_cons(t, sym__2))
    {
      r_30 = ATgetArgument(t, 0);
      s_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_3(l_8, r_30, s_30, t);
  return(t);
}
ATerm k_8 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_16 = ATgetArgument(t, 0);
      if(match_cons(n_16, sym_Stream_1))
        {
          t_30 = ATgetArgument(n_16, 0);
        }
      else
        _fail(t);
      u_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_3(t_30, u_30, t);
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL;
  if(match_cons(t, sym__2))
    {
      v_30 = ATgetArgument(t, 0);
      w_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_3(n_8, v_30, w_30, t);
  return(t);
}
ATerm n_8 (ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_16 = ATgetArgument(t, 0);
      if(match_cons(o_16, sym_Stream_1))
        {
          y_30 = ATgetArgument(o_16, 0);
        }
      else
        _fail(t);
      z_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3(y_30, z_30, t);
  x_30 = t;
  t = term_p_16;
  a_31 = t;
  t = x_30;
  if(match_cons(t, sym_Stream_1))
    {
      b_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_p_16, x_30);
  t = t_3(a_31, b_31, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL;
  o_30 = t;
  {
    ATerm f_8 (ATerm t)
    {
      ATerm r_16 = t;
      int s_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_8 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((p_30 != NULL) && (p_30 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  p_30 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(g_8, t);
          ;
          LocalPopChoice(s_16);
        }
      else
        {
          t = r_16;
          t = term_t_16;
          if(((p_30 != NULL) && (p_30 != t)))
            _fail(t);
          else
            p_30 = t;
        }
      return(t);
    }
    t = _2_0(f_8, _id, t);
    t = o_30;
    {
      ATerm h_8 (ATerm t)
      {
        ATerm q_30 = NULL;
        q_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_30), q_30);
        return(t);
      }
      t = _2_0(_id, h_8, t);
      {
        ATerm u_16 = t;
        int v_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(i_8, j_8, t);
            ;
            LocalPopChoice(v_16);
          }
        else
          {
            t = u_16;
            t = _2_0(_id, m_8, t);
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
  ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL;
  c_31 = t;
  t = dtime_0_0(t);
  t = c_31;
  t = x_105(t);
  d_31 = t;
  t = dtime_0_0(t);
  e_31 = t;
  t = d_31;
  if(match_cons(t, sym__2))
    {
      f_31 = ATgetArgument(t, 0);
      g_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_31), (ATerm) ATmakeAppl(sym_Runtime_1, e_31)), g_31);
  return(t);
}
ATerm u_31 (ATerm o_31, ATerm t)
{
  t = SSL_fclose(o_31);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL;
  s_31 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_31 = ATgetArgument(t, 0);
      {
        ATerm w_16 = t;
        int x_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_31);
            ;
            LocalPopChoice(x_16);
          }
        else
          {
            t = w_16;
            t = u_31(s_31, t);
          }
      }
    }
  else
    {
      t = u_31(s_31, t);
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
  ATerm v_31 = NULL;
  t = SSL_fopen(x_49, y_49);
  v_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_31);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm w_31 = NULL;
  t = SSL_stdin_stream();
  w_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_31);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm x_31 = NULL;
  t = SSL_stdout_stream();
  x_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_31);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm y_31 = NULL;
  t = SSL_stderr_stream();
  y_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_31);
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm k_32 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      k_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_32;
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm n_32 = NULL;
  n_32 = t;
  t = SSL_is_string(n_32);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_16 = ATgetArgument(t, 0);
      ATerm a_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_17 = t;
    int c_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_32 = NULL,i_1 = NULL;
        f_32 = t;
        t = SSL_explode_term(f_32);
        if(match_cons(t, sym__2))
          {
            ATerm d_17 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_17) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm e_17 = ATgetArgument(t, 1);
              if(((ATgetType(e_17) == AT_LIST) && !(ATisEmpty(e_17))))
                {
                  i_1 = ATgetFirst((ATermList) e_17);
                  {
                    ATerm g_17 = (ATerm) ATgetNext((ATermList) e_17);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = i_1;
        if(match_cons(t, sym_stderr_0))
          {
            t = i_1;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = i_1;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = i_1;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(c_17);
      }
    else
      {
        t = b_17;
        {
          ATerm h_17 = t;
          int i_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_32 = NULL,h_32 = NULL;
              t = _2_0(q_8, _id, t);
              if(match_cons(t, sym__2))
                {
                  g_32 = ATgetArgument(t, 0);
                  h_32 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_3(g_32, h_32, t);
              ;
              LocalPopChoice(i_17);
            }
          else
            {
              t = h_17;
              {
                ATerm l_32 = NULL,m_32 = NULL;
                t = _2_0(r_8, _id, t);
                if(match_cons(t, sym__2))
                  {
                    l_32 = ATgetArgument(t, 0);
                    m_32 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = y_3(l_32, m_32, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm u_8 (ATerm t)
{
  t = term_j_17;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL;
  ATerm k_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_32 = NULL;
      s_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_32, term_m_17);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(l_17);
    }
  else
    {
      t = k_17;
      t = debug_1_0(u_8, t);
      _fail(t);
    }
  p_32 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_3(r_32, t);
  q_32 = t;
  t = p_32;
  t = fclose_0_0(t);
  t = q_32;
  return(t);
}
ATerm fetch_1_0 (ATerm o_90 (ATerm), ATerm t)
{
  ATerm u_32 (ATerm t)
  {
    ATerm n_17 = t;
    int o_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(o_90, _id, t);
        ;
        LocalPopChoice(o_17);
      }
    else
      {
        t = n_17;
        t = Cons_2_0(_id, u_32, t);
      }
    return(t);
  }
  t = u_32(t);
  return(t);
}
ATerm s_3 (ATerm l_44, ATerm m_44, ATerm t)
{
  t = SSL_strcat(l_44, m_44);
  return(t);
}
ATerm v_8 (ATerm t)
{
  ATerm p_17 = t;
  int r_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(r_17);
    }
  else
    {
      t = p_17;
    }
  return(t);
}
ATerm w_8 (ATerm t)
{
  t = term_s_17;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm t_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_33 = NULL;
      a_33 = t;
      t = SSL_is_string(a_33);
      ;
      LocalPopChoice(u_17);
    }
  else
    {
      t = t_17;
      {
        ATerm v_17 = t;
        int w_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(v_8, t);
            ;
            LocalPopChoice(w_17);
          }
        else
          {
            t = v_17;
            {
              ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL;
              e_33 = t;
              if(match_cons(t, sym_Path_1))
                {
                  f_33 = ATgetArgument(t, 0);
                  t = f_33;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      f_33 = ATgetArgument(t, 0);
                      t = f_33;
                      {
                        ATerm x_17 = t;
                        int y_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(y_17);
                          }
                        else
                          {
                            t = x_17;
                            t = debug_1_0(w_8, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm k_33 = NULL,l_33 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          f_33 = ATgetArgument(t, 0);
                          g_33 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = f_33;
                      t = eval_config_0_0(t);
                      k_33 = t;
                      t = g_33;
                      t = eval_config_0_0(t);
                      l_33 = t;
                      t = (ATerm) ATmakeAppl(sym__2, k_33, l_33);
                      t = s_3(k_33, l_33, t);
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
  ATerm o_33 = NULL,p_33 = NULL;
  o_33 = t;
  t = term_z_17;
  p_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_17, o_33);
  t = b_4(p_33, o_33, t);
  {
    ATerm a_18 = t;
    int b_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_33 = NULL,r_33 = NULL;
        t = eval_config_0_0(t);
        q_33 = t;
        t = term_z_17;
        r_33 = t;
        t = SSL_table_put(r_33, o_33, q_33);
        t = q_33;
        ;
        LocalPopChoice(b_18);
      }
    else
      {
        t = a_18;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm g_104 (ATerm), ATerm t)
{
  ATerm c_18 = t;
  int d_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_33 = NULL,u_33 = NULL;
      s_33 = t;
      t = term_e_18;
      t = get_config_0_0(t);
      u_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_33, term_f_18);
      t = geq_0_0(t);
      t = s_33;
      t = g_104(t);
      ;
      LocalPopChoice(d_18);
    }
  else
    {
      t = c_18;
    }
  return(t);
}
ATerm z_8 (ATerm t)
{
  ATerm w_33 = NULL;
  w_33 = t;
  if(match_string(t, "-k"))
    {
      t = w_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = w_33;
    }
  return(t);
}
ATerm a_9 (ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL;
  x_33 = t;
  t = SSL_string_to_int(x_33);
  y_33 = t;
  t = term_g_18;
  z_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_18, y_33);
  t = e_4(z_33, y_33, t);
  t = x_33;
  return(t);
}
ATerm b_9 (ATerm t)
{
  t = term_h_18;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_8, a_9, b_9, t);
  return(t);
}
ATerm c_9 (ATerm t)
{
  ATerm b_34 = NULL;
  b_34 = t;
  if(match_string(t, "-S"))
    {
      t = b_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_34;
    }
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm c_34 = NULL,d_34 = NULL;
  t = term_e_18;
  c_34 = t;
  t = term_i_18;
  d_34 = t;
  t = term_j_18;
  t = e_4(c_34, d_34, t);
  t = term_k_18;
  return(t);
}
ATerm e_9 (ATerm t)
{
  t = term_l_18;
  return(t);
}
ATerm f_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_9 (ATerm t)
{
  ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL;
  e_34 = t;
  t = SSL_string_to_int(e_34);
  f_34 = t;
  t = term_e_18;
  g_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_18, f_34);
  t = e_4(g_34, f_34, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_34);
  return(t);
}
ATerm h_9 (ATerm t)
{
  t = term_m_18;
  return(t);
}
ATerm i_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_9 (ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL;
  t = term_n_18;
  h_34 = t;
  t = term_f_3;
  i_34 = t;
  t = term_o_18;
  t = e_4(h_34, i_34, t);
  t = term_p_18;
  return(t);
}
ATerm l_9 (ATerm t)
{
  t = term_q_18;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_18 = t;
  int s_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_9, d_9, e_9, t);
      ;
      LocalPopChoice(s_18);
    }
  else
    {
      t = r_18;
      {
        ATerm u_18 = t;
        int v_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(f_9, g_9, h_9, t);
            ;
            LocalPopChoice(v_18);
          }
        else
          {
            t = u_18;
            t = Option_3_0(i_9, j_9, l_9, t);
          }
      }
    }
  return(t);
}
ATerm e_4 (ATerm m_54, ATerm n_54, ATerm t)
{
  ATerm j_34 = NULL;
  t = term_z_17;
  j_34 = t;
  t = SSL_table_put(j_34, m_54, n_54);
  t = (ATerm) ATmakeAppl(sym__3, term_z_17, m_54, n_54);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm m_34 = NULL,n_34 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL;
      t = term_f_3;
      t = d_0(t);
      o_34 = t;
      t = term_w_18;
      p_34 = t;
      t = term_x_18;
      q_34 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_18, term_x_18, o_34);
      t = c_4(p_34, q_34, o_34, t);
      _fail(t);
    }
  else
    {
      ATerm t_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_34 = ATgetFirst((ATermList) t);
          n_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_34;
      t = a_0(t);
      t = term_f_3;
      t = b_0(t);
      t_34 = t;
      t = (ATerm) ATinsert(CheckATermList(n_34), t_34);
    }
  return(t);
}
ATerm m_9 (ATerm t)
{
  ATerm v_34 = NULL;
  v_34 = t;
  if(match_string(t, "-o"))
    {
      t = v_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_34;
    }
  return(t);
}
ATerm o_9 (ATerm t)
{
  ATerm w_34 = NULL,x_34 = NULL;
  w_34 = t;
  t = term_y_18;
  x_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_18, w_34);
  t = e_4(x_34, w_34, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_34);
  return(t);
}
ATerm p_9 (ATerm t)
{
  t = term_z_18;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_9, o_9, p_9, t);
  return(t);
}
ATerm c_4 (ATerm k_59, ATerm l_59, ATerm j_59, ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL;
  z_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_59, l_59);
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_19 = ATgetArgument(t, 0);
            ATerm e_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_59, l_59);
        t = b_4(k_59, l_59, t);
        ;
        LocalPopChoice(b_19);
      }
    else
      {
        t = a_19;
        t = (ATerm) ATempty;
      }
    a_35 = t;
    t = (ATerm) ATinsert(CheckATermList(a_35), j_59);
    b_35 = t;
    t = SSL_table_put(k_59, l_59, b_35);
    t = z_34;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL,k_35 = NULL,l_35 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL;
      t = term_f_3;
      t = j_0(t);
      m_35 = t;
      t = term_w_18;
      n_35 = t;
      t = term_x_18;
      o_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_18, term_x_18, m_35);
      t = c_4(n_35, o_35, m_35, t);
      _fail(t);
    }
  else
    {
      ATerm s_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_35 = ATgetFirst((ATermList) t);
          j_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_35;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_35 = ATgetFirst((ATermList) t);
          l_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_35;
      t = h_0(t);
      t = k_35;
      t = i_0(t);
      s_35 = t;
      t = (ATerm) ATinsert(CheckATermList(l_35), s_35);
    }
  return(t);
}
ATerm q_9 (ATerm t)
{
  ATerm u_35 = NULL;
  u_35 = t;
  if(match_string(t, "-i"))
    {
      t = u_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = u_35;
    }
  return(t);
}
ATerm r_9 (ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL;
  v_35 = t;
  t = term_f_19;
  w_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_19, v_35);
  t = e_4(w_35, v_35, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, v_35);
  return(t);
}
ATerm s_9 (ATerm t)
{
  t = term_g_19;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_9, r_9, s_9, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_3;
  t = whoami_0_0(t);
  x_35 = t;
  t = term_e_11;
  y_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_h_19), x_35);
  z_35 = t;
  t = SSL_printnl(y_35, z_35);
  t = term_a_12;
  a_36 = t;
  t = SSL_exit(a_36);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_i_19;
  t = get_config_0_0(t);
  return(t);
}
ATerm z_3 (ATerm v_46, ATerm w_46, ATerm t)
{
  ATerm j_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_46, w_46);
      ;
      LocalPopChoice(k_19);
    }
  else
    {
      t = j_19;
      t = SSL_addr(v_46, w_46);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm t)
{
  ATerm m_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_96(t);
      ;
      LocalPopChoice(n_19);
    }
  else
    {
      t = m_19;
      {
        ATerm d_36 = NULL,e_36 = NULL,h_36 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_36 = ATgetFirst((ATermList) t);
            e_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = e_36;
        t = foldr_2_0(h_96, i_96, t);
        h_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_36, h_36);
        t = i_96(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm t_9 (ATerm t)
{
  t = term_i_18;
  return(t);
}
ATerm v_9 (ATerm t)
{
  ATerm p_2 = NULL,v_2 = NULL;
  if(match_cons(t, sym__2))
    {
      p_2 = ATgetArgument(t, 0);
      v_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3(p_2, v_2, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm k_36 = NULL,k_2 = NULL,l_2 = NULL;
  t = times_0_0(t);
  k_2 = t;
  t = SSL_explode_term(k_2);
  if(match_cons(t, sym__2))
    {
      ATerm o_19 = ATgetArgument(t, 0);
      l_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_2;
  t = foldr_2_0(t_9, v_9, t);
  k_36 = t;
  t = SSL_TicksToSeconds(k_36);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL;
  v_36 = t;
  if(match_cons(t, sym__2))
    {
      w_36 = ATgetArgument(t, 0);
      x_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_36;
        if((w_36 != t))
          {
            _fail(t);
          }
        t = v_36;
        ;
        LocalPopChoice(q_19);
      }
    else
      {
        t = p_19;
        t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
        {
          ATerm r_19 = t;
          int s_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_36, x_36);
              ;
              LocalPopChoice(s_19);
            }
          else
            {
              t = r_19;
              t = SSL_gtr(w_36, x_36);
            }
          t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_104 (ATerm), ATerm t)
{
  ATerm t_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_37 = NULL,c_37 = NULL;
      a_37 = t;
      t = term_e_18;
      t = get_config_0_0(t);
      c_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_37, term_a_12);
      t = geq_0_0(t);
      t = a_37;
      t = f_104(t);
      ;
      LocalPopChoice(v_19);
    }
  else
    {
      t = t_19;
    }
  return(t);
}
ATerm w_9 (ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL;
  t = run_time_0_0(t);
  e_37 = t;
  t = term_f_3;
  t = whoami_0_0(t);
  f_37 = t;
  t = term_e_11;
  g_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_19), e_37), term_w_19), f_37);
  h_37 = t;
  t = SSL_printnl(g_37, h_37);
  t = (ATerm) ATmakeAppl(sym__2, term_e_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_19), e_37), term_w_19), f_37));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm i_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_18;
  i_37 = t;
  t = SSL_exit(i_37);
  return(t);
}
ATerm x_9 (ATerm t)
{
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(z_19);
    }
  else
    {
      t = y_19;
      {
        ATerm a_20 = t;
        int c_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(c_20);
          }
        else
          {
            t = a_20;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm v_106 (ATerm), ATerm t)
{
  ATerm d_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_20);
    }
  else
    {
      t = d_20;
      t = fetch_1_0(x_9, t);
    }
  t = v_106(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm k_37 = NULL,l_37 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_37 = ATgetFirst((ATermList) t);
      l_37 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_37 = NULL,q_37 = NULL;
        t = l_37;
        t = g_0(t);
        p_37 = t;
        t = k_37;
        t = f_0(t);
        q_37 = t;
        t = l_37;
        {
          ATerm z_9 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(p_37), q_37);
            return(t);
          }
          t = reverse_acc_2_0(f_0, z_9, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_3;
      t = g_0(t);
    }
  return(t);
}
ATerm b_4 (ATerm b_61, ATerm c_61, ATerm t)
{
  t = SSL_table_get(b_61, c_61);
  return(t);
}
ATerm Program_1_0 (ATerm i_82 (ATerm), ATerm t)
{
  ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,k_5 = NULL,l_5 = NULL;
  u_37 = t;
  if(match_cons(t, sym_Program_1))
    {
      s_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_37);
  r_37 = t;
  t = s_37;
  t = i_82(t);
  t_37 = t;
  l_5 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_37);
  k_5 = t;
  t = SSLsetAnnotations(k_5, r_37);
  return(t);
}
ATerm a_10 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm c_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_10 (ATerm t)
{
  ATerm b_38 = NULL;
  b_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_38), term_g_20);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL;
  ATerm h_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_19;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_20);
    }
  else
    {
      t = h_20;
      t = fetch_1_0(a_10, t);
    }
  t = term_j_20;
  t = echo_0_0(t);
  t = term_w_18;
  z_37 = t;
  t = term_x_18;
  a_38 = t;
  t = term_l_20;
  t = b_4(z_37, a_38, t);
  t = reverse_acc_2_0(_id, c_10, t);
  t = map_1_0(d_10, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm j_82 (ATerm), ATerm t)
{
  ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL,m_5 = NULL,n_5 = NULL;
  f_38 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      d_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_38);
  c_38 = t;
  t = d_38;
  t = j_82(t);
  e_38 = t;
  n_5 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, e_38);
  m_5 = t;
  t = SSLsetAnnotations(m_5, c_38);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL;
  j_38 = t;
  {
    ATerm m_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_38;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm o_20 = ATgetFirst((ATermList) t);
                ATerm p_20 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_38;
          }
        ;
        LocalPopChoice(n_20);
      }
    else
      {
        t = m_20;
        t = (ATerm) ATinsert(ATempty, j_38);
      }
    k_38 = t;
    t = term_t_16;
    l_38 = t;
    t = SSL_printnl(l_38, k_38);
    t = j_38;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_i_19;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm e_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_10 (ATerm t)
{
  ATerm p_38 = NULL,q_38 = NULL;
  t = term_q_20;
  p_38 = t;
  t = term_f_3;
  q_38 = t;
  t = term_s_20;
  t = e_4(p_38, q_38, t);
  return(t);
}
ATerm h_10 (ATerm t)
{
  t = term_t_20;
  return(t);
}
ATerm i_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_10 (ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL;
  t = term_q_20;
  r_38 = t;
  t = term_f_3;
  s_38 = t;
  t = term_s_20;
  t = e_4(r_38, s_38, t);
  t = term_u_20;
  t_38 = t;
  t = term_f_3;
  u_38 = t;
  t = term_v_20;
  t = e_4(t_38, u_38, t);
  t = term_w_20;
  return(t);
}
ATerm k_10 (ATerm t)
{
  t = term_x_20;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_10, f_10, h_10, t);
      ;
      LocalPopChoice(z_20);
    }
  else
    {
      t = y_20;
      t = Option_3_0(i_10, j_10, k_10, t);
    }
  return(t);
}
ATerm l_10 (ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL;
  x_38 = t;
  t = term_i_19;
  y_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_19, x_38);
  t = e_4(y_38, x_38, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, x_38);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm y_108 (ATerm), ATerm t)
{
  ATerm w_38 = NULL;
  w_38 = t;
  {
    ATerm b_21 = t;
    int c_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_21;
        t = y_108(t);
        ;
        LocalPopChoice(c_21);
      }
    else
      {
        t = b_21;
      }
    t = w_38;
    {
      ATerm o_10 (ATerm t)
      {
        ATerm e_21 = t;
        int f_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_21 = t;
            int h_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(h_21);
              }
            else
              {
                t = g_21;
                t = y_108(t);
                t = Cons_2_0(_id, o_10, t);
              }
            ;
            LocalPopChoice(f_21);
          }
        else
          {
            t = e_21;
            {
              ATerm a_39 = NULL,b_39 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  a_39 = ATgetFirst((ATermList) t);
                  b_39 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(b_39), (ATerm) ATmakeAppl(sym_Undefined_1, a_39));
            }
          }
        return(t);
      }
      t = Cons_2_0(l_10, o_10, t);
    }
  }
  return(t);
}
ATerm t_10 (ATerm t)
{
  ATerm p_39 = NULL;
  p_39 = t;
  if(match_string(t, "--help"))
    {
      t = p_39;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_39;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_39;
        }
    }
  return(t);
}
ATerm u_10 (ATerm t)
{
  ATerm q_39 = NULL,r_39 = NULL;
  t = term_f_20;
  q_39 = t;
  t = term_f_3;
  r_39 = t;
  t = term_i_21;
  t = e_4(q_39, r_39, t);
  t = term_j_21;
  return(t);
}
ATerm v_10 (ATerm t)
{
  t = term_k_21;
  return(t);
}
ATerm w_10 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm x_108 (ATerm), ATerm t)
{
  ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL;
  i_39 = t;
  t = term_w_18;
  l_39 = t;
  t = term_x_18;
  m_39 = t;
  t = (ATerm) ATempty;
  n_39 = t;
  t = SSL_table_put(l_39, m_39, n_39);
  t = i_39;
  {
    ATerm p_10 (ATerm t)
    {
      ATerm l_21 = t;
      int m_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_108(t);
          ;
          LocalPopChoice(m_21);
        }
      else
        {
          t = l_21;
          {
            ATerm n_21 = t;
            int o_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_10, u_10, v_10, t);
                ;
                LocalPopChoice(o_21);
              }
            else
              {
                t = n_21;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_10, t);
    {
      ATerm p_21 = t;
      int q_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_39 = NULL;
          y_39 = t;
          {
            ATerm r_21 = t;
            int s_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_3 = NULL;
                t = y_39;
                {
                  ATerm t_21 = t;
                  int u_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_f_20;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(u_21);
                    }
                  else
                    {
                      t = t_21;
                      t = fetch_1_0(w_10, t);
                    }
                  t = y_39;
                  t = default_system_usage_0_0(t);
                  t = term_i_18;
                  q_3 = t;
                  t = SSL_exit(q_3);
                }
                ;
                LocalPopChoice(s_21);
              }
            else
              {
                t = r_21;
                {
                  ATerm g_4 = NULL;
                  t = term_q_20;
                  t = get_config_0_0(t);
                  t = y_39;
                  t = default_system_about_0_0(t);
                  t = term_i_18;
                  g_4 = t;
                  t = SSL_exit(g_4);
                }
              }
          }
          ;
          LocalPopChoice(q_21);
        }
      else
        {
          t = p_21;
          {
            ATerm v_21 = t;
            int w_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL;
                ATerm x_10 (ATerm t)
                {
                  ATerm y_10 (ATerm t)
                  {
                    if(((j_39 != NULL) && (j_39 != t)))
                      _fail(t);
                    else
                      j_39 = t;
                    return(t);
                  }
                  t = Undefined_1_0(y_10, t);
                  return(t);
                }
                t = fetch_1_0(x_10, t);
                t = term_e_11;
                z_39 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_39)), term_x_21);
                a_40 = t;
                t = SSL_printnl(z_39, a_40);
                t = (ATerm) ATmakeAppl(sym__2, term_e_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_39)), term_x_21));
                t = default_system_usage_0_0(t);
                t = term_a_12;
                b_40 = t;
                t = SSL_exit(b_40);
                ;
                LocalPopChoice(w_21);
              }
            else
              {
                t = v_21;
              }
          }
        }
      k_39 = t;
      t = term_w_18;
      o_39 = t;
      t = SSL_table_destroy(o_39);
      t = k_39;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm x_106 (ATerm), ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL;
  t = parse_options_1_0(x_106, t);
  e_40 = t;
  t = term_y_21;
  f_40 = t;
  t = SSL_table_create(f_40);
  t = term_y_21;
  g_40 = t;
  t = term_z_21;
  h_40 = t;
  t = SSL_table_put(g_40, h_40, e_40);
  t = e_40;
  t = z_106(t);
  {
    ATerm a_22 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(y_106, t);
        ;
        LocalPopChoice(b_22);
      }
    else
      {
        t = a_22;
        {
          ATerm c_22 = t;
          int e_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_107(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(e_22);
            }
          else
            {
              t = c_22;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm a_11 (ATerm t)
{
  t = if_verbose2_1_0(k_11, t);
  return(t);
}
ATerm c_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_11 (ATerm t)
{
  ATerm i_40 = NULL,j_40 = NULL;
  t = term_f_22;
  i_40 = t;
  t = term_f_3;
  j_40 = t;
  t = term_g_22;
  t = e_4(i_40, j_40, t);
  t = term_h_22;
  return(t);
}
ATerm j_11 (ATerm t)
{
  t = term_i_22;
  return(t);
}
ATerm k_11 (ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL;
  k_40 = t;
  t = term_i_19;
  t = get_config_0_0(t);
  l_40 = t;
  t = term_e_11;
  m_40 = t;
  t = (ATerm) ATinsert(ATempty, l_40);
  n_40 = t;
  t = SSL_printnl(m_40, n_40);
  t = k_40;
  return(t);
}
ATerm iowrap_3_0 (ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm i_106 (ATerm), ATerm t)
{
  ATerm z_10 (ATerm t)
  {
    ATerm j_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_106(t);
        ;
        LocalPopChoice(k_22);
      }
    else
      {
        t = j_22;
        {
          ATerm l_22 = t;
          int m_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(m_22);
            }
          else
            {
              t = l_22;
              {
                ATerm n_22 = t;
                int p_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(p_22);
                  }
                else
                  {
                    t = n_22;
                    {
                      ATerm q_22 = t;
                      int r_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(c_11, d_11, j_11, t);
                          ;
                          LocalPopChoice(r_22);
                        }
                      else
                        {
                          t = q_22;
                          {
                            ATerm s_22 = t;
                            int t_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(t_22);
                              }
                            else
                              {
                                t = s_22;
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
  ATerm b_11 (ATerm t)
  {
    ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL;
    o_40 = t;
    {
      ATerm u_22 = t;
      int w_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_11 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((p_40 != NULL) && (p_40 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  p_40 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(l_11, t);
          ;
          LocalPopChoice(w_22);
        }
      else
        {
          t = u_22;
          t = term_x_22;
          p_40 = t;
        }
      t = not_null(p_40);
      t = ReadFromFile_0_0(t);
      q_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_40, q_40);
      t = apply_strategy_1_0(g_106, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(z_10, i_106, a_11, b_11, t);
  return(t);
}
ATerm m_11 (ATerm t)
{
  t = _2_0(_id, p_11, t);
  return(t);
}
ATerm p_11 (ATerm t)
{
  ATerm y_22 = t;
  int z_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Specification_1_0(q_11, t);
      ;
      LocalPopChoice(z_22);
    }
  else
    {
      t = y_22;
      t = debug_1_0(x_11, t);
    }
  return(t);
}
ATerm q_11 (ATerm t)
{
  t = Cons_2_0(_id, t_11, t);
  return(t);
}
ATerm t_11 (ATerm t)
{
  t = Cons_2_0(u_11, v_11, t);
  return(t);
}
ATerm u_11 (ATerm t)
{
  t = Strategies_1_0(w_11, t);
  return(t);
}
ATerm v_11 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm w_11 (ATerm t)
{
  t = map_1_0(strategy_definition_0_0, t);
  return(t);
}
ATerm x_11 (ATerm t)
{
  t = term_a_23;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(m_11, _fail, default_usage_0_0, t);
  return(t);
}

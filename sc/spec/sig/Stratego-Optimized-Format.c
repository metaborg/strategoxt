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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
ATerm term_d_30;
ATerm term_s_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_e_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_y_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_b_24;
ATerm term_y_23;
ATerm term_w_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_o_22;
ATerm term_f_22;
ATerm term_y_19;
void init_constant_terms (void)
{
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-specification: ", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym__2, term_s_23, term_h_25);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_25);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym__2, term_o_25, term_u_22);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym__2, term_a_26, term_u_22);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym__2, term_s_27, term_t_27);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_u_22);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym__2, term_q_28, term_u_22);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym__2, term_e_27, term_u_22);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym__3, term_s_27, term_t_27, (ATerm) ATempty);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Let_2_0 (ATerm r_67 (ATerm), ATerm s_67 (ATerm), ATerm);
ATerm is_int_0_0 (ATerm);
ATerm Scope_2_0 (ATerm b_68 (ATerm), ATerm c_68 (ATerm), ATerm);
ATerm BuildDefault_1_0 (ATerm e_65 (ATerm), ATerm);
ATerm build_term_expression_0_0 (ATerm);
ATerm Build_1_0 (ATerm z_67 (ATerm), ATerm);
ATerm As_2_0 (ATerm y_64 (ATerm), ATerm z_64 (ATerm), ATerm);
ATerm Str_1_0 (ATerm l_64 (ATerm), ATerm);
ATerm is_real_0_0 (ATerm);
ATerm Real_1_0 (ATerm k_64 (ATerm), ATerm);
ATerm Int_1_0 (ATerm j_64 (ATerm), ATerm);
ATerm Wld_0_0 (ATerm);
ATerm match_term_expression_0_0 (ATerm);
ATerm Match_1_0 (ATerm y_67 (ATerm), ATerm);
ATerm Thread_1_0 (ATerm f_69 (ATerm), ATerm);
ATerm All_1_0 (ATerm e_69 (ATerm), ATerm);
ATerm Some_1_0 (ATerm c_69 (ATerm), ATerm);
ATerm One_1_0 (ATerm d_69 (ATerm), ATerm);
ATerm Path_2_0 (ATerm a_69 (ATerm), ATerm b_69 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm o_68 (ATerm), ATerm p_68 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm x_68 (ATerm), ATerm y_68 (ATerm), ATerm z_68 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm q_67 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm v_67 (ATerm), ATerm w_67 (ATerm), ATerm x_67 (ATerm), ATerm);
ATerm LGChoice_2_0 (ATerm j_68 (ATerm), ATerm k_68 (ATerm), ATerm);
ATerm GChoice_2_0 (ATerm j_67 (ATerm), ATerm k_67 (ATerm), ATerm);
ATerm GuardedLChoice_3_0 (ATerm l_68 (ATerm), ATerm m_68 (ATerm), ATerm n_68 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm h_68 (ATerm), ATerm i_68 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm f_67 (ATerm), ATerm g_67 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm f_68 (ATerm), ATerm g_68 (ATerm), ATerm);
ATerm Not_1_0 (ATerm q_68 (ATerm), ATerm);
ATerm Fail_0_0 (ATerm);
ATerm Id_0_0 (ATerm);
ATerm strategy_expression_0_0 (ATerm);
ATerm vardecs_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm j_70 (ATerm), ATerm k_70 (ATerm), ATerm l_70 (ATerm), ATerm m_70 (ATerm), ATerm);
ATerm FunType_2_0 (ATerm v_63 (ATerm), ATerm w_63 (ATerm), ATerm);
ATerm Var_1_0 (ATerm h_64 (ATerm), ATerm);
ATerm Op_2_0 (ATerm n_64 (ATerm), ATerm o_64 (ATerm), ATerm);
ATerm ConstType_1_0 (ATerm u_63 (ATerm), ATerm);
ATerm type_expression_0_0 (ATerm);
ATerm VarDec_2_0 (ATerm c_70 (ATerm), ATerm d_70 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm g_70 (ATerm), ATerm h_70 (ATerm), ATerm i_70 (ATerm), ATerm);
ATerm strategy_definition_0_0 (ATerm);
ATerm list_1_0 (ATerm o_84 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm j_63 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm o_63 (ATerm), ATerm);
ATerm stratego_specification_0_0 (ATerm);
ATerm _2_0 (ATerm c_61 (ATerm), ATerm d_61 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm b_85 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm b_98 (ATerm), ATerm);
ATerm fputc_0_0 (ATerm);
ATerm write_in_text_to_stream_0_0 (ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm x_96 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm z_99 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm debug_1_0 (ATerm j_96 (ATerm), ATerm);
ATerm fopen_0_0 (ATerm);
ATerm is_string_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm b_92 (ATerm), ATerm c_92 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm string_to_int_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm ticks_to_seconds_0_0 (ATerm);
ATerm add_0_0 (ATerm);
ATerm foldr_2_0 (ATerm m_90 (ATerm), ATerm n_90 (ATerm), ATerm);
ATerm crush_2_0 (ATerm f_94 (ATerm), ATerm g_94 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm a_98 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm need_help_1_0 (ATerm x_100 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm y_102 (ATerm), ATerm);
ATerm map_1_0 (ATerm l_84 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm x_102 (ATerm), ATerm);
ATerm Program_1_0 (ATerm p_76 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm q_76 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm v_84 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm x_101 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm a_77 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm c_103 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm Cons_2_0 (ATerm l_62 (ATerm), ATerm m_62 (ATerm), ATerm);
ATerm Nil_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm a_103 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm parse_options_1_0 (ATerm z_102 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm b_101 (ATerm), ATerm c_101 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm q_100 (ATerm), ATerm r_100 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm i_100 (ATerm), ATerm j_100 (ATerm), ATerm k_100 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm g_100 (ATerm), ATerm h_100 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm d_100 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm Let_2_0 (ATerm r_67 (ATerm), ATerm s_67 (ATerm), ATerm t)
{
  ATerm o_3 = NULL,m_3 = NULL,n_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL;
  if(((r_3 != NULL) && (r_3 != t)))
    _fail(t);
  else
    r_3 = t;
  if(match_cons(t, sym_Let_2))
    {
      if(((m_3 != NULL) && (m_3 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_3 = ATgetArgument(t, 0);
      if(((n_3 != NULL) && (n_3 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_12 = NULL;
    if(((u_12 != NULL) && (u_12 != t)))
      _fail(t);
    else
      u_12 = t;
    t = SSLgetAnnotations(not_null(r_3));
    if(((o_3 != NULL) && (o_3 != t)))
      _fail(t);
    else
      o_3 = t;
    t = not_null(u_12);
    t = not_null(m_3);
    t = r_67(t);
    if(((p_3 != NULL) && (p_3 != t)))
      _fail(t);
    else
      p_3 = t;
    t = not_null(n_3);
    t = s_67(t);
    if(((q_3 != NULL) && (q_3 != t)))
      _fail(t);
    else
      q_3 = t;
    {
      ATerm v_12 = NULL;
      if(((v_12 != NULL) && (v_12 != t)))
        _fail(t);
      else
        v_12 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(p_3), not_null(q_3)), not_null(o_3));
      if(((s_3 != NULL) && (s_3 != t)))
        _fail(t);
      else
        s_3 = t;
    }
  }
  return(t);
}
ATerm is_int_0_0 (ATerm t)
{
  ATerm r_43 = NULL;
  if(((r_43 != NULL) && (r_43 != t)))
    _fail(t);
  else
    r_43 = t;
  t = SSL_is_int(not_null(r_43));
  return(t);
}
ATerm Scope_2_0 (ATerm b_68 (ATerm), ATerm c_68 (ATerm), ATerm t)
{
  ATerm v_3 = NULL,t_3 = NULL,u_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL;
  if(((y_3 != NULL) && (y_3 != t)))
    _fail(t);
  else
    y_3 = t;
  if(match_cons(t, sym_Scope_2))
    {
      if(((t_3 != NULL) && (t_3 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_3 = ATgetArgument(t, 0);
      if(((u_3 != NULL) && (u_3 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_12 = NULL;
    if(((w_12 != NULL) && (w_12 != t)))
      _fail(t);
    else
      w_12 = t;
    t = SSLgetAnnotations(not_null(y_3));
    if(((v_3 != NULL) && (v_3 != t)))
      _fail(t);
    else
      v_3 = t;
    t = not_null(w_12);
    t = not_null(t_3);
    t = b_68(t);
    if(((w_3 != NULL) && (w_3 != t)))
      _fail(t);
    else
      w_3 = t;
    t = not_null(u_3);
    t = c_68(t);
    if(((x_3 != NULL) && (x_3 != t)))
      _fail(t);
    else
      x_3 = t;
    {
      ATerm x_12 = NULL;
      if(((x_12 != NULL) && (x_12 != t)))
        _fail(t);
      else
        x_12 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(w_3), not_null(x_3)), not_null(v_3));
      if(((z_3 != NULL) && (z_3 != t)))
        _fail(t);
      else
        z_3 = t;
    }
  }
  return(t);
}
ATerm BuildDefault_1_0 (ATerm e_65 (ATerm), ATerm t)
{
  ATerm b_4 = NULL,a_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL;
  if(((d_4 != NULL) && (d_4 != t)))
    _fail(t);
  else
    d_4 = t;
  if(match_cons(t, sym_BuildDefault_1))
    {
      if(((a_4 != NULL) && (a_4 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_12 = NULL;
    if(((y_12 != NULL) && (y_12 != t)))
      _fail(t);
    else
      y_12 = t;
    t = SSLgetAnnotations(not_null(d_4));
    if(((b_4 != NULL) && (b_4 != t)))
      _fail(t);
    else
      b_4 = t;
    t = not_null(y_12);
    t = not_null(a_4);
    t = e_65(t);
    if(((c_4 != NULL) && (c_4 != t)))
      _fail(t);
    else
      c_4 = t;
    {
      ATerm z_12 = NULL;
      if(((z_12 != NULL) && (z_12 != t)))
        _fail(t);
      else
        z_12 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(c_4)), not_null(b_4));
      if(((e_4 != NULL) && (e_4 != t)))
        _fail(t);
      else
        e_4 = t;
    }
  }
  return(t);
}
ATerm build_term_expression_0_0 (ATerm t)
{
  ATerm m_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1_0(is_string_0_0, t);
      ;
      LocalPopChoice(n_19);
    }
  else
    {
      t = m_19;
      {
        ATerm o_19 = t;
        int p_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Int_1_0(is_int_0_0, t);
            ;
            LocalPopChoice(p_19);
          }
        else
          {
            t = o_19;
            {
              ATerm q_19 = t;
              int r_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Real_1_0(is_real_0_0, t);
                  ;
                  LocalPopChoice(r_19);
                }
              else
                {
                  t = q_19;
                  {
                    ATerm s_19 = t;
                    int t_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Str_1_0(is_string_0_0, t);
                        ;
                        LocalPopChoice(t_19);
                      }
                    else
                      {
                        t = s_19;
                        {
                          ATerm u_19 = t;
                          int v_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm s_15 (ATerm t)
                              {
                                t = list_1_0(build_term_expression_0_0, t);
                                return(t);
                              }
                              t = Op_2_0(is_string_0_0, s_15, t);
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
                                    t = BuildDefault_1_0(build_term_expression_0_0, t);
                                    ;
                                    LocalPopChoice(x_19);
                                  }
                                else
                                  {
                                    t = w_19;
                                    {
                                      ATerm t_15 (ATerm t)
                                      {
                                        t = term_y_19;
                                        return(t);
                                      }
                                      t = debug_1_0(t_15, t);
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
ATerm Build_1_0 (ATerm z_67 (ATerm), ATerm t)
{
  ATerm g_4 = NULL,f_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL;
  if(((i_4 != NULL) && (i_4 != t)))
    _fail(t);
  else
    i_4 = t;
  if(match_cons(t, sym_Build_1))
    {
      if(((f_4 != NULL) && (f_4 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_13 = NULL;
    if(((a_13 != NULL) && (a_13 != t)))
      _fail(t);
    else
      a_13 = t;
    t = SSLgetAnnotations(not_null(i_4));
    if(((g_4 != NULL) && (g_4 != t)))
      _fail(t);
    else
      g_4 = t;
    t = not_null(a_13);
    t = not_null(f_4);
    t = z_67(t);
    if(((h_4 != NULL) && (h_4 != t)))
      _fail(t);
    else
      h_4 = t;
    {
      ATerm b_13 = NULL;
      if(((b_13 != NULL) && (b_13 != t)))
        _fail(t);
      else
        b_13 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(h_4)), not_null(g_4));
      if(((j_4 != NULL) && (j_4 != t)))
        _fail(t);
      else
        j_4 = t;
    }
  }
  return(t);
}
ATerm As_2_0 (ATerm y_64 (ATerm), ATerm z_64 (ATerm), ATerm t)
{
  ATerm m_4 = NULL,k_4 = NULL,l_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL;
  if(((p_4 != NULL) && (p_4 != t)))
    _fail(t);
  else
    p_4 = t;
  if(match_cons(t, sym_As_2))
    {
      if(((k_4 != NULL) && (k_4 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_4 = ATgetArgument(t, 0);
      if(((l_4 != NULL) && (l_4 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_13 = NULL;
    if(((c_13 != NULL) && (c_13 != t)))
      _fail(t);
    else
      c_13 = t;
    t = SSLgetAnnotations(not_null(p_4));
    if(((m_4 != NULL) && (m_4 != t)))
      _fail(t);
    else
      m_4 = t;
    t = not_null(c_13);
    t = not_null(k_4);
    t = y_64(t);
    if(((n_4 != NULL) && (n_4 != t)))
      _fail(t);
    else
      n_4 = t;
    t = not_null(l_4);
    t = z_64(t);
    if(((o_4 != NULL) && (o_4 != t)))
      _fail(t);
    else
      o_4 = t;
    {
      ATerm d_13 = NULL;
      if(((d_13 != NULL) && (d_13 != t)))
        _fail(t);
      else
        d_13 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(n_4), not_null(o_4)), not_null(m_4));
      if(((q_4 != NULL) && (q_4 != t)))
        _fail(t);
      else
        q_4 = t;
    }
  }
  return(t);
}
ATerm Str_1_0 (ATerm l_64 (ATerm), ATerm t)
{
  ATerm s_4 = NULL,r_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL;
  if(((u_4 != NULL) && (u_4 != t)))
    _fail(t);
  else
    u_4 = t;
  if(match_cons(t, sym_Str_1))
    {
      if(((r_4 != NULL) && (r_4 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm e_13 = NULL;
    if(((e_13 != NULL) && (e_13 != t)))
      _fail(t);
    else
      e_13 = t;
    t = SSLgetAnnotations(not_null(u_4));
    if(((s_4 != NULL) && (s_4 != t)))
      _fail(t);
    else
      s_4 = t;
    t = not_null(e_13);
    t = not_null(r_4);
    t = l_64(t);
    if(((t_4 != NULL) && (t_4 != t)))
      _fail(t);
    else
      t_4 = t;
    {
      ATerm f_13 = NULL;
      if(((f_13 != NULL) && (f_13 != t)))
        _fail(t);
      else
        f_13 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(t_4)), not_null(s_4));
      if(((v_4 != NULL) && (v_4 != t)))
        _fail(t);
      else
        v_4 = t;
    }
  }
  return(t);
}
ATerm is_real_0_0 (ATerm t)
{
  ATerm n_45 = NULL;
  if(((n_45 != NULL) && (n_45 != t)))
    _fail(t);
  else
    n_45 = t;
  t = SSL_is_real(not_null(n_45));
  return(t);
}
ATerm Real_1_0 (ATerm k_64 (ATerm), ATerm t)
{
  ATerm x_4 = NULL,w_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL;
  if(((z_4 != NULL) && (z_4 != t)))
    _fail(t);
  else
    z_4 = t;
  if(match_cons(t, sym_Real_1))
    {
      if(((w_4 != NULL) && (w_4 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_13 = NULL;
    if(((g_13 != NULL) && (g_13 != t)))
      _fail(t);
    else
      g_13 = t;
    t = SSLgetAnnotations(not_null(z_4));
    if(((x_4 != NULL) && (x_4 != t)))
      _fail(t);
    else
      x_4 = t;
    t = not_null(g_13);
    t = not_null(w_4);
    t = k_64(t);
    if(((y_4 != NULL) && (y_4 != t)))
      _fail(t);
    else
      y_4 = t;
    {
      ATerm h_13 = NULL;
      if(((h_13 != NULL) && (h_13 != t)))
        _fail(t);
      else
        h_13 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(y_4)), not_null(x_4));
      if(((a_5 != NULL) && (a_5 != t)))
        _fail(t);
      else
        a_5 = t;
    }
  }
  return(t);
}
ATerm Int_1_0 (ATerm j_64 (ATerm), ATerm t)
{
  ATerm c_5 = NULL,b_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL;
  if(((e_5 != NULL) && (e_5 != t)))
    _fail(t);
  else
    e_5 = t;
  if(match_cons(t, sym_Int_1))
    {
      if(((b_5 != NULL) && (b_5 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm i_13 = NULL;
    if(((i_13 != NULL) && (i_13 != t)))
      _fail(t);
    else
      i_13 = t;
    t = SSLgetAnnotations(not_null(e_5));
    if(((c_5 != NULL) && (c_5 != t)))
      _fail(t);
    else
      c_5 = t;
    t = not_null(i_13);
    t = not_null(b_5);
    t = j_64(t);
    if(((d_5 != NULL) && (d_5 != t)))
      _fail(t);
    else
      d_5 = t;
    {
      ATerm j_13 = NULL;
      if(((j_13 != NULL) && (j_13 != t)))
        _fail(t);
      else
        j_13 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(d_5)), not_null(c_5));
      if(((f_5 != NULL) && (f_5 != t)))
        _fail(t);
      else
        f_5 = t;
    }
  }
  return(t);
}
ATerm Wld_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm match_term_expression_0_0 (ATerm t)
{
  ATerm z_19 = t;
  int a_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0_0(t);
      ;
      LocalPopChoice(a_20);
    }
  else
    {
      t = z_19;
      {
        ATerm b_20 = t;
        int c_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1_0(is_string_0_0, t);
            ;
            LocalPopChoice(c_20);
          }
        else
          {
            t = b_20;
            {
              ATerm d_20 = t;
              int e_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1_0(is_int_0_0, t);
                  ;
                  LocalPopChoice(e_20);
                }
              else
                {
                  t = d_20;
                  {
                    ATerm f_20 = t;
                    int g_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1_0(is_real_0_0, t);
                        ;
                        LocalPopChoice(g_20);
                      }
                    else
                      {
                        t = f_20;
                        {
                          ATerm h_20 = t;
                          int i_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1_0(is_string_0_0, t);
                              ;
                              LocalPopChoice(i_20);
                            }
                          else
                            {
                              t = h_20;
                              {
                                ATerm j_20 = t;
                                int k_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm u_15 (ATerm t)
                                    {
                                      t = list_1_0(match_term_expression_0_0, t);
                                      return(t);
                                    }
                                    t = Op_2_0(is_string_0_0, u_15, t);
                                    ;
                                    LocalPopChoice(k_20);
                                  }
                                else
                                  {
                                    t = j_20;
                                    {
                                      ATerm l_20 = t;
                                      int m_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = As_2_0(match_term_expression_0_0, match_term_expression_0_0, t);
                                          ;
                                          LocalPopChoice(m_20);
                                        }
                                      else
                                        {
                                          t = l_20;
                                          {
                                            ATerm v_15 (ATerm t)
                                            {
                                              t = term_y_19;
                                              return(t);
                                            }
                                            t = debug_1_0(v_15, t);
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
ATerm Match_1_0 (ATerm y_67 (ATerm), ATerm t)
{
  ATerm h_5 = NULL,g_5 = NULL,i_5 = NULL,j_5 = NULL,k_5 = NULL;
  if(((j_5 != NULL) && (j_5 != t)))
    _fail(t);
  else
    j_5 = t;
  if(match_cons(t, sym_Match_1))
    {
      if(((g_5 != NULL) && (g_5 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_13 = NULL;
    if(((k_13 != NULL) && (k_13 != t)))
      _fail(t);
    else
      k_13 = t;
    t = SSLgetAnnotations(not_null(j_5));
    if(((h_5 != NULL) && (h_5 != t)))
      _fail(t);
    else
      h_5 = t;
    t = not_null(k_13);
    t = not_null(g_5);
    t = y_67(t);
    if(((i_5 != NULL) && (i_5 != t)))
      _fail(t);
    else
      i_5 = t;
    {
      ATerm l_13 = NULL;
      if(((l_13 != NULL) && (l_13 != t)))
        _fail(t);
      else
        l_13 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(i_5)), not_null(h_5));
      if(((k_5 != NULL) && (k_5 != t)))
        _fail(t);
      else
        k_5 = t;
    }
  }
  return(t);
}
ATerm Thread_1_0 (ATerm f_69 (ATerm), ATerm t)
{
  ATerm m_5 = NULL,l_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL;
  if(((o_5 != NULL) && (o_5 != t)))
    _fail(t);
  else
    o_5 = t;
  if(match_cons(t, sym_Thread_1))
    {
      if(((l_5 != NULL) && (l_5 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_13 = NULL;
    if(((m_13 != NULL) && (m_13 != t)))
      _fail(t);
    else
      m_13 = t;
    t = SSLgetAnnotations(not_null(o_5));
    if(((m_5 != NULL) && (m_5 != t)))
      _fail(t);
    else
      m_5 = t;
    t = not_null(m_13);
    t = not_null(l_5);
    t = f_69(t);
    if(((n_5 != NULL) && (n_5 != t)))
      _fail(t);
    else
      n_5 = t;
    {
      ATerm n_13 = NULL;
      if(((n_13 != NULL) && (n_13 != t)))
        _fail(t);
      else
        n_13 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, not_null(n_5)), not_null(m_5));
      if(((p_5 != NULL) && (p_5 != t)))
        _fail(t);
      else
        p_5 = t;
    }
  }
  return(t);
}
ATerm All_1_0 (ATerm e_69 (ATerm), ATerm t)
{
  ATerm r_5 = NULL,q_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL;
  if(((t_5 != NULL) && (t_5 != t)))
    _fail(t);
  else
    t_5 = t;
  if(match_cons(t, sym_All_1))
    {
      if(((q_5 != NULL) && (q_5 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm o_13 = NULL;
    if(((o_13 != NULL) && (o_13 != t)))
      _fail(t);
    else
      o_13 = t;
    t = SSLgetAnnotations(not_null(t_5));
    if(((r_5 != NULL) && (r_5 != t)))
      _fail(t);
    else
      r_5 = t;
    t = not_null(o_13);
    t = not_null(q_5);
    t = e_69(t);
    if(((s_5 != NULL) && (s_5 != t)))
      _fail(t);
    else
      s_5 = t;
    {
      ATerm p_13 = NULL;
      if(((p_13 != NULL) && (p_13 != t)))
        _fail(t);
      else
        p_13 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, not_null(s_5)), not_null(r_5));
      if(((u_5 != NULL) && (u_5 != t)))
        _fail(t);
      else
        u_5 = t;
    }
  }
  return(t);
}
ATerm Some_1_0 (ATerm c_69 (ATerm), ATerm t)
{
  ATerm w_5 = NULL,v_5 = NULL,x_5 = NULL,y_5 = NULL,z_5 = NULL;
  if(((y_5 != NULL) && (y_5 != t)))
    _fail(t);
  else
    y_5 = t;
  if(match_cons(t, sym_Some_1))
    {
      if(((v_5 != NULL) && (v_5 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_13 = NULL;
    if(((q_13 != NULL) && (q_13 != t)))
      _fail(t);
    else
      q_13 = t;
    t = SSLgetAnnotations(not_null(y_5));
    if(((w_5 != NULL) && (w_5 != t)))
      _fail(t);
    else
      w_5 = t;
    t = not_null(q_13);
    t = not_null(v_5);
    t = c_69(t);
    if(((x_5 != NULL) && (x_5 != t)))
      _fail(t);
    else
      x_5 = t;
    {
      ATerm r_13 = NULL;
      if(((r_13 != NULL) && (r_13 != t)))
        _fail(t);
      else
        r_13 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(x_5)), not_null(w_5));
      if(((z_5 != NULL) && (z_5 != t)))
        _fail(t);
      else
        z_5 = t;
    }
  }
  return(t);
}
ATerm One_1_0 (ATerm d_69 (ATerm), ATerm t)
{
  ATerm b_6 = NULL,a_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL;
  if(((d_6 != NULL) && (d_6 != t)))
    _fail(t);
  else
    d_6 = t;
  if(match_cons(t, sym_One_1))
    {
      if(((a_6 != NULL) && (a_6 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm s_13 = NULL;
    if(((s_13 != NULL) && (s_13 != t)))
      _fail(t);
    else
      s_13 = t;
    t = SSLgetAnnotations(not_null(d_6));
    if(((b_6 != NULL) && (b_6 != t)))
      _fail(t);
    else
      b_6 = t;
    t = not_null(s_13);
    t = not_null(a_6);
    t = d_69(t);
    if(((c_6 != NULL) && (c_6 != t)))
      _fail(t);
    else
      c_6 = t;
    {
      ATerm t_13 = NULL;
      if(((t_13 != NULL) && (t_13 != t)))
        _fail(t);
      else
        t_13 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_One_1, not_null(c_6)), not_null(b_6));
      if(((e_6 != NULL) && (e_6 != t)))
        _fail(t);
      else
        e_6 = t;
    }
  }
  return(t);
}
ATerm Path_2_0 (ATerm a_69 (ATerm), ATerm b_69 (ATerm), ATerm t)
{
  ATerm h_6 = NULL,f_6 = NULL,g_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL;
  if(((k_6 != NULL) && (k_6 != t)))
    _fail(t);
  else
    k_6 = t;
  if(match_cons(t, sym_Path_2))
    {
      if(((f_6 != NULL) && (f_6 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_6 = ATgetArgument(t, 0);
      if(((g_6 != NULL) && (g_6 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_13 = NULL;
    if(((u_13 != NULL) && (u_13 != t)))
      _fail(t);
    else
      u_13 = t;
    t = SSLgetAnnotations(not_null(k_6));
    if(((h_6 != NULL) && (h_6 != t)))
      _fail(t);
    else
      h_6 = t;
    t = not_null(u_13);
    t = not_null(f_6);
    t = a_69(t);
    if(((i_6 != NULL) && (i_6 != t)))
      _fail(t);
    else
      i_6 = t;
    t = not_null(g_6);
    t = b_69(t);
    if(((j_6 != NULL) && (j_6 != t)))
      _fail(t);
    else
      j_6 = t;
    {
      ATerm v_13 = NULL;
      if(((v_13 != NULL) && (v_13 != t)))
        _fail(t);
      else
        v_13 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Path_2, not_null(i_6), not_null(j_6)), not_null(h_6));
      if(((l_6 != NULL) && (l_6 != t)))
        _fail(t);
      else
        l_6 = t;
    }
  }
  return(t);
}
ATerm Rec_2_0 (ATerm o_68 (ATerm), ATerm p_68 (ATerm), ATerm t)
{
  ATerm o_6 = NULL,m_6 = NULL,n_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL;
  if(((r_6 != NULL) && (r_6 != t)))
    _fail(t);
  else
    r_6 = t;
  if(match_cons(t, sym_Rec_2))
    {
      if(((m_6 != NULL) && (m_6 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_6 = ATgetArgument(t, 0);
      if(((n_6 != NULL) && (n_6 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_13 = NULL;
    if(((w_13 != NULL) && (w_13 != t)))
      _fail(t);
    else
      w_13 = t;
    t = SSLgetAnnotations(not_null(r_6));
    if(((o_6 != NULL) && (o_6 != t)))
      _fail(t);
    else
      o_6 = t;
    t = not_null(w_13);
    t = not_null(m_6);
    t = o_68(t);
    if(((p_6 != NULL) && (p_6 != t)))
      _fail(t);
    else
      p_6 = t;
    t = not_null(n_6);
    t = p_68(t);
    if(((q_6 != NULL) && (q_6 != t)))
      _fail(t);
    else
      q_6 = t;
    {
      ATerm x_13 = NULL;
      if(((x_13 != NULL) && (x_13 != t)))
        _fail(t);
      else
        x_13 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(p_6), not_null(q_6)), not_null(o_6));
      if(((s_6 != NULL) && (s_6 != t)))
        _fail(t);
      else
        s_6 = t;
    }
  }
  return(t);
}
ATerm PrimT_3_0 (ATerm x_68 (ATerm), ATerm y_68 (ATerm), ATerm z_68 (ATerm), ATerm t)
{
  ATerm w_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL,x_6 = NULL,y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL;
  if(((a_7 != NULL) && (a_7 != t)))
    _fail(t);
  else
    a_7 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      if(((t_6 != NULL) && (t_6 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_6 = ATgetArgument(t, 0);
      if(((u_6 != NULL) && (u_6 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_6 = ATgetArgument(t, 1);
      if(((v_6 != NULL) && (v_6 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        v_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  {
    ATerm y_13 = NULL;
    if(((y_13 != NULL) && (y_13 != t)))
      _fail(t);
    else
      y_13 = t;
    t = SSLgetAnnotations(not_null(a_7));
    if(((w_6 != NULL) && (w_6 != t)))
      _fail(t);
    else
      w_6 = t;
    t = not_null(y_13);
    t = not_null(t_6);
    t = x_68(t);
    if(((x_6 != NULL) && (x_6 != t)))
      _fail(t);
    else
      x_6 = t;
    t = not_null(u_6);
    t = y_68(t);
    if(((y_6 != NULL) && (y_6 != t)))
      _fail(t);
    else
      y_6 = t;
    t = not_null(v_6);
    t = z_68(t);
    if(((z_6 != NULL) && (z_6 != t)))
      _fail(t);
    else
      z_6 = t;
    {
      ATerm z_13 = NULL;
      if(((z_13 != NULL) && (z_13 != t)))
        _fail(t);
      else
        z_13 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(x_6), not_null(y_6), not_null(z_6)), not_null(w_6));
      if(((b_7 != NULL) && (b_7 != t)))
        _fail(t);
      else
        b_7 = t;
    }
  }
  return(t);
}
ATerm SVar_1_0 (ATerm q_67 (ATerm), ATerm t)
{
  ATerm d_7 = NULL,c_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL;
  if(((f_7 != NULL) && (f_7 != t)))
    _fail(t);
  else
    f_7 = t;
  if(match_cons(t, sym_SVar_1))
    {
      if(((c_7 != NULL) && (c_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_14 = NULL;
    if(((a_14 != NULL) && (a_14 != t)))
      _fail(t);
    else
      a_14 = t;
    t = SSLgetAnnotations(not_null(f_7));
    if(((d_7 != NULL) && (d_7 != t)))
      _fail(t);
    else
      d_7 = t;
    t = not_null(a_14);
    t = not_null(c_7);
    t = q_67(t);
    if(((e_7 != NULL) && (e_7 != t)))
      _fail(t);
    else
      e_7 = t;
    {
      ATerm b_14 = NULL;
      if(((b_14 != NULL) && (b_14 != t)))
        _fail(t);
      else
        b_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(e_7)), not_null(d_7));
      if(((g_7 != NULL) && (g_7 != t)))
        _fail(t);
      else
        g_7 = t;
    }
  }
  return(t);
}
ATerm CallT_3_0 (ATerm v_67 (ATerm), ATerm w_67 (ATerm), ATerm x_67 (ATerm), ATerm t)
{
  ATerm k_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL,p_7 = NULL;
  if(((o_7 != NULL) && (o_7 != t)))
    _fail(t);
  else
    o_7 = t;
  if(match_cons(t, sym_CallT_3))
    {
      if(((h_7 != NULL) && (h_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_7 = ATgetArgument(t, 0);
      if(((i_7 != NULL) && (i_7 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_7 = ATgetArgument(t, 1);
      if(((j_7 != NULL) && (j_7 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        j_7 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  {
    ATerm c_14 = NULL;
    if(((c_14 != NULL) && (c_14 != t)))
      _fail(t);
    else
      c_14 = t;
    t = SSLgetAnnotations(not_null(o_7));
    if(((k_7 != NULL) && (k_7 != t)))
      _fail(t);
    else
      k_7 = t;
    t = not_null(c_14);
    t = not_null(h_7);
    t = v_67(t);
    if(((l_7 != NULL) && (l_7 != t)))
      _fail(t);
    else
      l_7 = t;
    t = not_null(i_7);
    t = w_67(t);
    if(((m_7 != NULL) && (m_7 != t)))
      _fail(t);
    else
      m_7 = t;
    t = not_null(j_7);
    t = x_67(t);
    if(((n_7 != NULL) && (n_7 != t)))
      _fail(t);
    else
      n_7 = t;
    {
      ATerm d_14 = NULL;
      if(((d_14 != NULL) && (d_14 != t)))
        _fail(t);
      else
        d_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, not_null(l_7), not_null(m_7), not_null(n_7)), not_null(k_7));
      if(((p_7 != NULL) && (p_7 != t)))
        _fail(t);
      else
        p_7 = t;
    }
  }
  return(t);
}
ATerm LGChoice_2_0 (ATerm j_68 (ATerm), ATerm k_68 (ATerm), ATerm t)
{
  ATerm s_7 = NULL,q_7 = NULL,r_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL;
  if(((v_7 != NULL) && (v_7 != t)))
    _fail(t);
  else
    v_7 = t;
  if(match_cons(t, sym_LGChoice_2))
    {
      if(((q_7 != NULL) && (q_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_7 = ATgetArgument(t, 0);
      if(((r_7 != NULL) && (r_7 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_14 = NULL;
    if(((e_14 != NULL) && (e_14 != t)))
      _fail(t);
    else
      e_14 = t;
    t = SSLgetAnnotations(not_null(v_7));
    if(((s_7 != NULL) && (s_7 != t)))
      _fail(t);
    else
      s_7 = t;
    t = not_null(e_14);
    t = not_null(q_7);
    t = j_68(t);
    if(((t_7 != NULL) && (t_7 != t)))
      _fail(t);
    else
      t_7 = t;
    t = not_null(r_7);
    t = k_68(t);
    if(((u_7 != NULL) && (u_7 != t)))
      _fail(t);
    else
      u_7 = t;
    {
      ATerm f_14 = NULL;
      if(((f_14 != NULL) && (f_14 != t)))
        _fail(t);
      else
        f_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, not_null(t_7), not_null(u_7)), not_null(s_7));
      if(((w_7 != NULL) && (w_7 != t)))
        _fail(t);
      else
        w_7 = t;
    }
  }
  return(t);
}
ATerm GChoice_2_0 (ATerm j_67 (ATerm), ATerm k_67 (ATerm), ATerm t)
{
  ATerm z_7 = NULL,x_7 = NULL,y_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL;
  if(((c_8 != NULL) && (c_8 != t)))
    _fail(t);
  else
    c_8 = t;
  if(match_cons(t, sym_GChoice_2))
    {
      if(((x_7 != NULL) && (x_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_7 = ATgetArgument(t, 0);
      if(((y_7 != NULL) && (y_7 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_14 = NULL;
    if(((g_14 != NULL) && (g_14 != t)))
      _fail(t);
    else
      g_14 = t;
    t = SSLgetAnnotations(not_null(c_8));
    if(((z_7 != NULL) && (z_7 != t)))
      _fail(t);
    else
      z_7 = t;
    t = not_null(g_14);
    t = not_null(x_7);
    t = j_67(t);
    if(((a_8 != NULL) && (a_8 != t)))
      _fail(t);
    else
      a_8 = t;
    t = not_null(y_7);
    t = k_67(t);
    if(((b_8 != NULL) && (b_8 != t)))
      _fail(t);
    else
      b_8 = t;
    {
      ATerm h_14 = NULL;
      if(((h_14 != NULL) && (h_14 != t)))
        _fail(t);
      else
        h_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, not_null(a_8), not_null(b_8)), not_null(z_7));
      if(((d_8 != NULL) && (d_8 != t)))
        _fail(t);
      else
        d_8 = t;
    }
  }
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm l_68 (ATerm), ATerm m_68 (ATerm), ATerm n_68 (ATerm), ATerm t)
{
  ATerm h_8 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL;
  if(((l_8 != NULL) && (l_8 != t)))
    _fail(t);
  else
    l_8 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      if(((e_8 != NULL) && (e_8 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_8 = ATgetArgument(t, 0);
      if(((f_8 != NULL) && (f_8 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_8 = ATgetArgument(t, 1);
      if(((g_8 != NULL) && (g_8 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        g_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  {
    ATerm i_14 = NULL;
    if(((i_14 != NULL) && (i_14 != t)))
      _fail(t);
    else
      i_14 = t;
    t = SSLgetAnnotations(not_null(l_8));
    if(((h_8 != NULL) && (h_8 != t)))
      _fail(t);
    else
      h_8 = t;
    t = not_null(i_14);
    t = not_null(e_8);
    t = l_68(t);
    if(((i_8 != NULL) && (i_8 != t)))
      _fail(t);
    else
      i_8 = t;
    t = not_null(f_8);
    t = m_68(t);
    if(((j_8 != NULL) && (j_8 != t)))
      _fail(t);
    else
      j_8 = t;
    t = not_null(g_8);
    t = n_68(t);
    if(((k_8 != NULL) && (k_8 != t)))
      _fail(t);
    else
      k_8 = t;
    {
      ATerm j_14 = NULL;
      if(((j_14 != NULL) && (j_14 != t)))
        _fail(t);
      else
        j_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(i_8), not_null(j_8), not_null(k_8)), not_null(h_8));
      if(((m_8 != NULL) && (m_8 != t)))
        _fail(t);
      else
        m_8 = t;
    }
  }
  return(t);
}
ATerm LChoice_2_0 (ATerm h_68 (ATerm), ATerm i_68 (ATerm), ATerm t)
{
  ATerm p_8 = NULL,n_8 = NULL,o_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL;
  if(((s_8 != NULL) && (s_8 != t)))
    _fail(t);
  else
    s_8 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      if(((n_8 != NULL) && (n_8 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_8 = ATgetArgument(t, 0);
      if(((o_8 != NULL) && (o_8 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_14 = NULL;
    if(((k_14 != NULL) && (k_14 != t)))
      _fail(t);
    else
      k_14 = t;
    t = SSLgetAnnotations(not_null(s_8));
    if(((p_8 != NULL) && (p_8 != t)))
      _fail(t);
    else
      p_8 = t;
    t = not_null(k_14);
    t = not_null(n_8);
    t = h_68(t);
    if(((q_8 != NULL) && (q_8 != t)))
      _fail(t);
    else
      q_8 = t;
    t = not_null(o_8);
    t = i_68(t);
    if(((r_8 != NULL) && (r_8 != t)))
      _fail(t);
    else
      r_8 = t;
    {
      ATerm l_14 = NULL;
      if(((l_14 != NULL) && (l_14 != t)))
        _fail(t);
      else
        l_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(q_8), not_null(r_8)), not_null(p_8));
      if(((t_8 != NULL) && (t_8 != t)))
        _fail(t);
      else
        t_8 = t;
    }
  }
  return(t);
}
ATerm Choice_2_0 (ATerm f_67 (ATerm), ATerm g_67 (ATerm), ATerm t)
{
  ATerm w_8 = NULL,u_8 = NULL,v_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL;
  if(((z_8 != NULL) && (z_8 != t)))
    _fail(t);
  else
    z_8 = t;
  if(match_cons(t, sym_Choice_2))
    {
      if(((u_8 != NULL) && (u_8 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_8 = ATgetArgument(t, 0);
      if(((v_8 != NULL) && (v_8 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_14 = NULL;
    if(((m_14 != NULL) && (m_14 != t)))
      _fail(t);
    else
      m_14 = t;
    t = SSLgetAnnotations(not_null(z_8));
    if(((w_8 != NULL) && (w_8 != t)))
      _fail(t);
    else
      w_8 = t;
    t = not_null(m_14);
    t = not_null(u_8);
    t = f_67(t);
    if(((x_8 != NULL) && (x_8 != t)))
      _fail(t);
    else
      x_8 = t;
    t = not_null(v_8);
    t = g_67(t);
    if(((y_8 != NULL) && (y_8 != t)))
      _fail(t);
    else
      y_8 = t;
    {
      ATerm n_14 = NULL;
      if(((n_14 != NULL) && (n_14 != t)))
        _fail(t);
      else
        n_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(x_8), not_null(y_8)), not_null(w_8));
      if(((a_9 != NULL) && (a_9 != t)))
        _fail(t);
      else
        a_9 = t;
    }
  }
  return(t);
}
ATerm Seq_2_0 (ATerm f_68 (ATerm), ATerm g_68 (ATerm), ATerm t)
{
  ATerm d_9 = NULL,b_9 = NULL,c_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL;
  if(((g_9 != NULL) && (g_9 != t)))
    _fail(t);
  else
    g_9 = t;
  if(match_cons(t, sym_Seq_2))
    {
      if(((b_9 != NULL) && (b_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_9 = ATgetArgument(t, 0);
      if(((c_9 != NULL) && (c_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_14 = NULL;
    if(((o_14 != NULL) && (o_14 != t)))
      _fail(t);
    else
      o_14 = t;
    t = SSLgetAnnotations(not_null(g_9));
    if(((d_9 != NULL) && (d_9 != t)))
      _fail(t);
    else
      d_9 = t;
    t = not_null(o_14);
    t = not_null(b_9);
    t = f_68(t);
    if(((e_9 != NULL) && (e_9 != t)))
      _fail(t);
    else
      e_9 = t;
    t = not_null(c_9);
    t = g_68(t);
    if(((f_9 != NULL) && (f_9 != t)))
      _fail(t);
    else
      f_9 = t;
    {
      ATerm p_14 = NULL;
      if(((p_14 != NULL) && (p_14 != t)))
        _fail(t);
      else
        p_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(e_9), not_null(f_9)), not_null(d_9));
      if(((h_9 != NULL) && (h_9 != t)))
        _fail(t);
      else
        h_9 = t;
    }
  }
  return(t);
}
ATerm Not_1_0 (ATerm q_68 (ATerm), ATerm t)
{
  ATerm j_9 = NULL,i_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL;
  if(((l_9 != NULL) && (l_9 != t)))
    _fail(t);
  else
    l_9 = t;
  if(match_cons(t, sym_Not_1))
    {
      if(((i_9 != NULL) && (i_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_14 = NULL;
    if(((q_14 != NULL) && (q_14 != t)))
      _fail(t);
    else
      q_14 = t;
    t = SSLgetAnnotations(not_null(l_9));
    if(((j_9 != NULL) && (j_9 != t)))
      _fail(t);
    else
      j_9 = t;
    t = not_null(q_14);
    t = not_null(i_9);
    t = q_68(t);
    if(((k_9 != NULL) && (k_9 != t)))
      _fail(t);
    else
      k_9 = t;
    {
      ATerm r_14 = NULL;
      if(((r_14 != NULL) && (r_14 != t)))
        _fail(t);
      else
        r_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, not_null(k_9)), not_null(j_9));
      if(((m_9 != NULL) && (m_9 != t)))
        _fail(t);
      else
        m_9 = t;
    }
  }
  return(t);
}
ATerm Fail_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm n_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0_0(t);
      ;
      LocalPopChoice(o_20);
    }
  else
    {
      t = n_20;
      {
        ATerm p_20 = t;
        int q_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fail_0_0(t);
            ;
            LocalPopChoice(q_20);
          }
        else
          {
            t = p_20;
            {
              ATerm r_20 = t;
              int s_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Not_1_0(strategy_expression_0_0, t);
                  ;
                  LocalPopChoice(s_20);
                }
              else
                {
                  t = r_20;
                  {
                    ATerm t_20 = t;
                    int u_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Seq_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                        ;
                        LocalPopChoice(u_20);
                      }
                    else
                      {
                        t = t_20;
                        {
                          ATerm v_20 = t;
                          int w_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Choice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                              ;
                              LocalPopChoice(w_20);
                            }
                          else
                            {
                              t = v_20;
                              {
                                ATerm x_20 = t;
                                int y_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = LChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                    ;
                                    LocalPopChoice(y_20);
                                  }
                                else
                                  {
                                    t = x_20;
                                    {
                                      ATerm z_20 = t;
                                      int a_21 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = GuardedLChoice_3_0(strategy_expression_0_0, strategy_expression_0_0, strategy_expression_0_0, t);
                                          ;
                                          LocalPopChoice(a_21);
                                        }
                                      else
                                        {
                                          t = z_20;
                                          {
                                            ATerm b_21 = t;
                                            int c_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = GChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                                ;
                                                LocalPopChoice(c_21);
                                              }
                                            else
                                              {
                                                t = b_21;
                                                {
                                                  ATerm d_21 = t;
                                                  int e_21 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = LGChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                                      ;
                                                      LocalPopChoice(e_21);
                                                    }
                                                  else
                                                    {
                                                      t = d_21;
                                                      {
                                                        ATerm f_21 = t;
                                                        int g_21 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm w_15 (ATerm t)
                                                            {
                                                              t = SVar_1_0(is_string_0_0, t);
                                                              return(t);
                                                            }
                                                            ATerm x_15 (ATerm t)
                                                            {
                                                              t = list_1_0(strategy_expression_0_0, t);
                                                              return(t);
                                                            }
                                                            ATerm y_15 (ATerm t)
                                                            {
                                                              t = list_1_0(build_term_expression_0_0, t);
                                                              return(t);
                                                            }
                                                            t = CallT_3_0(w_15, x_15, y_15, t);
                                                            ;
                                                            LocalPopChoice(g_21);
                                                          }
                                                        else
                                                          {
                                                            t = f_21;
                                                            {
                                                              ATerm h_21 = t;
                                                              int i_21 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm z_15 (ATerm t)
                                                                  {
                                                                    t = list_1_0(strategy_expression_0_0, t);
                                                                    return(t);
                                                                  }
                                                                  ATerm a_16 (ATerm t)
                                                                  {
                                                                    t = list_1_0(build_term_expression_0_0, t);
                                                                    return(t);
                                                                  }
                                                                  t = PrimT_3_0(is_string_0_0, z_15, a_16, t);
                                                                  ;
                                                                  LocalPopChoice(i_21);
                                                                }
                                                              else
                                                                {
                                                                  t = h_21;
                                                                  {
                                                                    ATerm j_21 = t;
                                                                    int k_21 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2_0(is_string_0_0, strategy_expression_0_0, t);
                                                                        ;
                                                                        LocalPopChoice(k_21);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = j_21;
                                                                        {
                                                                          ATerm l_21 = t;
                                                                          int m_21 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Path_2_0(is_int_0_0, strategy_expression_0_0, t);
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
                                                                                    t = One_1_0(strategy_expression_0_0, t);
                                                                                    ;
                                                                                    LocalPopChoice(o_21);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = n_21;
                                                                                    {
                                                                                      ATerm p_21 = t;
                                                                                      int q_21 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = Some_1_0(strategy_expression_0_0, t);
                                                                                          ;
                                                                                          LocalPopChoice(q_21);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = p_21;
                                                                                          {
                                                                                            ATerm r_21 = t;
                                                                                            int s_21 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = All_1_0(strategy_expression_0_0, t);
                                                                                                ;
                                                                                                LocalPopChoice(s_21);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = r_21;
                                                                                                {
                                                                                                  ATerm t_21 = t;
                                                                                                  int u_21 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = Thread_1_0(strategy_expression_0_0, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(u_21);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = t_21;
                                                                                                      {
                                                                                                        ATerm v_21 = t;
                                                                                                        int w_21 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Match_1_0(match_term_expression_0_0, t);
                                                                                                            ;
                                                                                                            LocalPopChoice(w_21);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = v_21;
                                                                                                            {
                                                                                                              ATerm x_21 = t;
                                                                                                              int y_21 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Build_1_0(build_term_expression_0_0, t);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(y_21);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = x_21;
                                                                                                                  {
                                                                                                                    ATerm z_21 = t;
                                                                                                                    int a_22 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        ATerm b_16 (ATerm t)
                                                                                                                        {
                                                                                                                          ATerm c_16 (ATerm t)
                                                                                                                          {
                                                                                                                            ATerm b_22 = t;
                                                                                                                            int c_22 = stack_ptr;
                                                                                                                            if((PushChoice() == 0))
                                                                                                                              {
                                                                                                                                t = is_string_0_0(t);
                                                                                                                                ;
                                                                                                                                LocalPopChoice(c_22);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                t = b_22;
                                                                                                                                t = list_1_0(is_int_0_0, t);
                                                                                                                              }
                                                                                                                            return(t);
                                                                                                                          }
                                                                                                                          t = list_1_0(c_16, t);
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Scope_2_0(b_16, strategy_expression_0_0, t);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(a_22);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = z_21;
                                                                                                                        {
                                                                                                                          ATerm d_22 = t;
                                                                                                                          int e_22 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm d_16 (ATerm t)
                                                                                                                              {
                                                                                                                                ATerm e_16 (ATerm t)
                                                                                                                                {
                                                                                                                                  t = SDefT_4_0(is_string_0_0, vardecs_0_0, vardecs_0_0, strategy_expression_0_0, t);
                                                                                                                                  return(t);
                                                                                                                                }
                                                                                                                                t = list_1_0(e_16, t);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Let_2_0(d_16, strategy_expression_0_0, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(e_22);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = d_22;
                                                                                                                              {
                                                                                                                                ATerm f_16 (ATerm t)
                                                                                                                                {
                                                                                                                                  t = term_f_22;
                                                                                                                                  return(t);
                                                                                                                                }
                                                                                                                                t = debug_1_0(f_16, t);
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
ATerm vardecs_0_0 (ATerm t)
{
  ATerm g_16 (ATerm t)
  {
    t = VarDec_2_0(is_string_0_0, type_expression_0_0, t);
    return(t);
  }
  t = list_1_0(g_16, t);
  return(t);
}
ATerm SDefT_4_0 (ATerm j_70 (ATerm), ATerm k_70 (ATerm), ATerm l_70 (ATerm), ATerm m_70 (ATerm), ATerm t)
{
  ATerm r_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL;
  if(((w_9 != NULL) && (w_9 != t)))
    _fail(t);
  else
    w_9 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      if(((n_9 != NULL) && (n_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_9 = ATgetArgument(t, 0);
      if(((o_9 != NULL) && (o_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_9 = ATgetArgument(t, 1);
      if(((p_9 != NULL) && (p_9 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        p_9 = ATgetArgument(t, 2);
      if(((q_9 != NULL) && (q_9 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        q_9 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  {
    ATerm s_14 = NULL;
    if(((s_14 != NULL) && (s_14 != t)))
      _fail(t);
    else
      s_14 = t;
    t = SSLgetAnnotations(not_null(w_9));
    if(((r_9 != NULL) && (r_9 != t)))
      _fail(t);
    else
      r_9 = t;
    t = not_null(s_14);
    t = not_null(n_9);
    t = j_70(t);
    if(((s_9 != NULL) && (s_9 != t)))
      _fail(t);
    else
      s_9 = t;
    t = not_null(o_9);
    t = k_70(t);
    if(((t_9 != NULL) && (t_9 != t)))
      _fail(t);
    else
      t_9 = t;
    t = not_null(p_9);
    t = l_70(t);
    if(((u_9 != NULL) && (u_9 != t)))
      _fail(t);
    else
      u_9 = t;
    t = not_null(q_9);
    t = m_70(t);
    if(((v_9 != NULL) && (v_9 != t)))
      _fail(t);
    else
      v_9 = t;
    {
      ATerm t_14 = NULL;
      if(((t_14 != NULL) && (t_14 != t)))
        _fail(t);
      else
        t_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(s_9), not_null(t_9), not_null(u_9), not_null(v_9)), not_null(r_9));
      if(((x_9 != NULL) && (x_9 != t)))
        _fail(t);
      else
        x_9 = t;
    }
  }
  return(t);
}
ATerm FunType_2_0 (ATerm v_63 (ATerm), ATerm w_63 (ATerm), ATerm t)
{
  ATerm a_10 = NULL,y_9 = NULL,z_9 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL;
  if(((d_10 != NULL) && (d_10 != t)))
    _fail(t);
  else
    d_10 = t;
  if(match_cons(t, sym_FunType_2))
    {
      if(((y_9 != NULL) && (y_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_9 = ATgetArgument(t, 0);
      if(((z_9 != NULL) && (z_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_14 = NULL;
    if(((u_14 != NULL) && (u_14 != t)))
      _fail(t);
    else
      u_14 = t;
    t = SSLgetAnnotations(not_null(d_10));
    if(((a_10 != NULL) && (a_10 != t)))
      _fail(t);
    else
      a_10 = t;
    t = not_null(u_14);
    t = not_null(y_9);
    t = v_63(t);
    if(((b_10 != NULL) && (b_10 != t)))
      _fail(t);
    else
      b_10 = t;
    t = not_null(z_9);
    t = w_63(t);
    if(((c_10 != NULL) && (c_10 != t)))
      _fail(t);
    else
      c_10 = t;
    {
      ATerm v_14 = NULL;
      if(((v_14 != NULL) && (v_14 != t)))
        _fail(t);
      else
        v_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FunType_2, not_null(b_10), not_null(c_10)), not_null(a_10));
      if(((e_10 != NULL) && (e_10 != t)))
        _fail(t);
      else
        e_10 = t;
    }
  }
  return(t);
}
ATerm Var_1_0 (ATerm h_64 (ATerm), ATerm t)
{
  ATerm g_10 = NULL,f_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL;
  if(((i_10 != NULL) && (i_10 != t)))
    _fail(t);
  else
    i_10 = t;
  if(match_cons(t, sym_Var_1))
    {
      if(((f_10 != NULL) && (f_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_14 = NULL;
    if(((w_14 != NULL) && (w_14 != t)))
      _fail(t);
    else
      w_14 = t;
    t = SSLgetAnnotations(not_null(i_10));
    if(((g_10 != NULL) && (g_10 != t)))
      _fail(t);
    else
      g_10 = t;
    t = not_null(w_14);
    t = not_null(f_10);
    t = h_64(t);
    if(((h_10 != NULL) && (h_10 != t)))
      _fail(t);
    else
      h_10 = t;
    {
      ATerm x_14 = NULL;
      if(((x_14 != NULL) && (x_14 != t)))
        _fail(t);
      else
        x_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(h_10)), not_null(g_10));
      if(((j_10 != NULL) && (j_10 != t)))
        _fail(t);
      else
        j_10 = t;
    }
  }
  return(t);
}
ATerm Op_2_0 (ATerm n_64 (ATerm), ATerm o_64 (ATerm), ATerm t)
{
  ATerm m_10 = NULL,k_10 = NULL,l_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL;
  if(((p_10 != NULL) && (p_10 != t)))
    _fail(t);
  else
    p_10 = t;
  if(match_cons(t, sym_Op_2))
    {
      if(((k_10 != NULL) && (k_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_10 = ATgetArgument(t, 0);
      if(((l_10 != NULL) && (l_10 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_14 = NULL;
    if(((y_14 != NULL) && (y_14 != t)))
      _fail(t);
    else
      y_14 = t;
    t = SSLgetAnnotations(not_null(p_10));
    if(((m_10 != NULL) && (m_10 != t)))
      _fail(t);
    else
      m_10 = t;
    t = not_null(y_14);
    t = not_null(k_10);
    t = n_64(t);
    if(((n_10 != NULL) && (n_10 != t)))
      _fail(t);
    else
      n_10 = t;
    t = not_null(l_10);
    t = o_64(t);
    if(((o_10 != NULL) && (o_10 != t)))
      _fail(t);
    else
      o_10 = t;
    {
      ATerm z_14 = NULL;
      if(((z_14 != NULL) && (z_14 != t)))
        _fail(t);
      else
        z_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(n_10), not_null(o_10)), not_null(m_10));
      if(((q_10 != NULL) && (q_10 != t)))
        _fail(t);
      else
        q_10 = t;
    }
  }
  return(t);
}
ATerm ConstType_1_0 (ATerm u_63 (ATerm), ATerm t)
{
  ATerm s_10 = NULL,r_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL;
  if(((u_10 != NULL) && (u_10 != t)))
    _fail(t);
  else
    u_10 = t;
  if(match_cons(t, sym_ConstType_1))
    {
      if(((r_10 != NULL) && (r_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_15 = NULL;
    if(((a_15 != NULL) && (a_15 != t)))
      _fail(t);
    else
      a_15 = t;
    t = SSLgetAnnotations(not_null(u_10));
    if(((s_10 != NULL) && (s_10 != t)))
      _fail(t);
    else
      s_10 = t;
    t = not_null(a_15);
    t = not_null(r_10);
    t = u_63(t);
    if(((t_10 != NULL) && (t_10 != t)))
      _fail(t);
    else
      t_10 = t;
    {
      ATerm b_15 = NULL;
      if(((b_15 != NULL) && (b_15 != t)))
        _fail(t);
      else
        b_15 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_ConstType_1, not_null(t_10)), not_null(s_10));
      if(((v_10 != NULL) && (v_10 != t)))
        _fail(t);
      else
        v_10 = t;
    }
  }
  return(t);
}
ATerm type_expression_0_0 (ATerm t)
{
  ATerm g_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_16 (ATerm t)
      {
        ATerm i_22 = t;
        int j_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_16 (ATerm t)
            {
              t = list_1_0(h_16, t);
              return(t);
            }
            t = Op_2_0(is_string_0_0, i_16, t);
            ;
            LocalPopChoice(j_22);
          }
        else
          {
            t = i_22;
            t = Var_1_0(is_string_0_0, t);
          }
        return(t);
      }
      t = ConstType_1_0(h_16, t);
      ;
      LocalPopChoice(h_22);
    }
  else
    {
      t = g_22;
      {
        ATerm j_16 (ATerm t)
        {
          t = list_1_0(type_expression_0_0, t);
          return(t);
        }
        t = FunType_2_0(j_16, type_expression_0_0, t);
      }
    }
  return(t);
}
ATerm VarDec_2_0 (ATerm c_70 (ATerm), ATerm d_70 (ATerm), ATerm t)
{
  ATerm y_10 = NULL,w_10 = NULL,x_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL;
  if(((b_11 != NULL) && (b_11 != t)))
    _fail(t);
  else
    b_11 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      if(((w_10 != NULL) && (w_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_10 = ATgetArgument(t, 0);
      if(((x_10 != NULL) && (x_10 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_15 = NULL;
    if(((c_15 != NULL) && (c_15 != t)))
      _fail(t);
    else
      c_15 = t;
    t = SSLgetAnnotations(not_null(b_11));
    if(((y_10 != NULL) && (y_10 != t)))
      _fail(t);
    else
      y_10 = t;
    t = not_null(c_15);
    t = not_null(w_10);
    t = c_70(t);
    if(((z_10 != NULL) && (z_10 != t)))
      _fail(t);
    else
      z_10 = t;
    t = not_null(x_10);
    t = d_70(t);
    if(((a_11 != NULL) && (a_11 != t)))
      _fail(t);
    else
      a_11 = t;
    {
      ATerm d_15 = NULL;
      if(((d_15 != NULL) && (d_15 != t)))
        _fail(t);
      else
        d_15 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(z_10), not_null(a_11)), not_null(y_10));
      if(((c_11 != NULL) && (c_11 != t)))
        _fail(t);
      else
        c_11 = t;
    }
  }
  return(t);
}
ATerm SDef_3_0 (ATerm g_70 (ATerm), ATerm h_70 (ATerm), ATerm i_70 (ATerm), ATerm t)
{
  ATerm g_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL;
  if(((k_11 != NULL) && (k_11 != t)))
    _fail(t);
  else
    k_11 = t;
  if(match_cons(t, sym_SDef_3))
    {
      if(((d_11 != NULL) && (d_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_11 = ATgetArgument(t, 0);
      if(((e_11 != NULL) && (e_11 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_11 = ATgetArgument(t, 1);
      if(((f_11 != NULL) && (f_11 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        f_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  {
    ATerm e_15 = NULL;
    if(((e_15 != NULL) && (e_15 != t)))
      _fail(t);
    else
      e_15 = t;
    t = SSLgetAnnotations(not_null(k_11));
    if(((g_11 != NULL) && (g_11 != t)))
      _fail(t);
    else
      g_11 = t;
    t = not_null(e_15);
    t = not_null(d_11);
    t = g_70(t);
    if(((h_11 != NULL) && (h_11 != t)))
      _fail(t);
    else
      h_11 = t;
    t = not_null(e_11);
    t = h_70(t);
    if(((i_11 != NULL) && (i_11 != t)))
      _fail(t);
    else
      i_11 = t;
    t = not_null(f_11);
    t = i_70(t);
    if(((j_11 != NULL) && (j_11 != t)))
      _fail(t);
    else
      j_11 = t;
    {
      ATerm f_15 = NULL;
      if(((f_15 != NULL) && (f_15 != t)))
        _fail(t);
      else
        f_15 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(h_11), not_null(i_11), not_null(j_11)), not_null(g_11));
      if(((l_11 != NULL) && (l_11 != t)))
        _fail(t);
      else
        l_11 = t;
    }
  }
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm k_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_16 (ATerm t)
      {
        ATerm l_16 (ATerm t)
        {
          t = VarDec_2_0(is_string_0_0, type_expression_0_0, t);
          return(t);
        }
        t = list_1_0(l_16, t);
        return(t);
      }
      t = SDef_3_0(is_string_0_0, k_16, strategy_expression_0_0, t);
      ;
      LocalPopChoice(l_22);
    }
  else
    {
      t = k_22;
      {
        ATerm m_22 = t;
        int n_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(is_string_0_0, vardecs_0_0, vardecs_0_0, strategy_expression_0_0, t);
            ;
            LocalPopChoice(n_22);
          }
        else
          {
            t = m_22;
            {
              ATerm m_16 (ATerm t)
              {
                t = term_o_22;
                return(t);
              }
              t = debug_1_0(m_16, t);
            }
          }
      }
    }
  return(t);
}
ATerm list_1_0 (ATerm o_84 (ATerm), ATerm t)
{
  ATerm p_84 (ATerm t)
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(q_22);
      }
    else
      {
        t = p_22;
        t = Cons_2_0(o_84, p_84, t);
      }
    return(t);
  }
  t = p_84(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm j_63 (ATerm), ATerm t)
{
  ATerm n_11 = NULL,m_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL;
  if(((p_11 != NULL) && (p_11 != t)))
    _fail(t);
  else
    p_11 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      if(((m_11 != NULL) && (m_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_15 = NULL;
    if(((g_15 != NULL) && (g_15 != t)))
      _fail(t);
    else
      g_15 = t;
    t = SSLgetAnnotations(not_null(p_11));
    if(((n_11 != NULL) && (n_11 != t)))
      _fail(t);
    else
      n_11 = t;
    t = not_null(g_15);
    t = not_null(m_11);
    t = j_63(t);
    if(((o_11 != NULL) && (o_11 != t)))
      _fail(t);
    else
      o_11 = t;
    {
      ATerm h_15 = NULL;
      if(((h_15 != NULL) && (h_15 != t)))
        _fail(t);
      else
        h_15 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(o_11)), not_null(n_11));
      if(((q_11 != NULL) && (q_11 != t)))
        _fail(t);
      else
        q_11 = t;
    }
  }
  return(t);
}
ATerm Specification_1_0 (ATerm o_63 (ATerm), ATerm t)
{
  ATerm s_11 = NULL,r_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL;
  if(((u_11 != NULL) && (u_11 != t)))
    _fail(t);
  else
    u_11 = t;
  if(match_cons(t, sym_Specification_1))
    {
      if(((r_11 != NULL) && (r_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm i_15 = NULL;
    if(((i_15 != NULL) && (i_15 != t)))
      _fail(t);
    else
      i_15 = t;
    t = SSLgetAnnotations(not_null(u_11));
    if(((s_11 != NULL) && (s_11 != t)))
      _fail(t);
    else
      s_11 = t;
    t = not_null(i_15);
    t = not_null(r_11);
    t = o_63(t);
    if(((t_11 != NULL) && (t_11 != t)))
      _fail(t);
    else
      t_11 = t;
    {
      ATerm j_15 = NULL;
      if(((j_15 != NULL) && (j_15 != t)))
        _fail(t);
      else
        j_15 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(t_11)), not_null(s_11));
      if(((v_11 != NULL) && (v_11 != t)))
        _fail(t);
      else
        v_11 = t;
    }
  }
  return(t);
}
ATerm stratego_specification_0_0 (ATerm t)
{
  ATerm r_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_16 (ATerm t)
      {
        ATerm o_16 (ATerm t)
        {
          ATerm p_16 (ATerm t)
          {
            ATerm q_16 (ATerm t)
            {
              t = list_1_0(strategy_definition_0_0, t);
              return(t);
            }
            t = Strategies_1_0(q_16, t);
            return(t);
          }
          t = Cons_2_0(p_16, Nil_0_0, t);
          return(t);
        }
        t = Cons_2_0(_id, o_16, t);
        return(t);
      }
      t = Specification_1_0(n_16, t);
      ;
      LocalPopChoice(s_22);
    }
  else
    {
      t = r_22;
      {
        ATerm r_16 (ATerm t)
        {
          t = term_t_22;
          return(t);
        }
        t = debug_1_0(r_16, t);
      }
    }
  return(t);
}
ATerm _2_0 (ATerm c_61 (ATerm), ATerm d_61 (ATerm), ATerm t)
{
  ATerm y_11 = NULL,w_11 = NULL,x_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL;
  if(((b_12 != NULL) && (b_12 != t)))
    _fail(t);
  else
    b_12 = t;
  if(match_cons(t, sym__2))
    {
      if(((w_11 != NULL) && (w_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_11 = ATgetArgument(t, 0);
      if(((x_11 != NULL) && (x_11 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_15 = NULL;
    if(((k_15 != NULL) && (k_15 != t)))
      _fail(t);
    else
      k_15 = t;
    t = SSLgetAnnotations(not_null(b_12));
    if(((y_11 != NULL) && (y_11 != t)))
      _fail(t);
    else
      y_11 = t;
    t = not_null(k_15);
    t = not_null(w_11);
    t = c_61(t);
    if(((z_11 != NULL) && (z_11 != t)))
      _fail(t);
    else
      z_11 = t;
    t = not_null(x_11);
    t = d_61(t);
    if(((a_12 != NULL) && (a_12 != t)))
      _fail(t);
    else
      a_12 = t;
    {
      ATerm l_15 = NULL;
      if(((l_15 != NULL) && (l_15 != t)))
        _fail(t);
      else
        l_15 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(z_11), not_null(a_12)), not_null(y_11));
      if(((c_12 != NULL) && (c_12 != t)))
        _fail(t);
      else
        c_12 = t;
    }
  }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL,f_457 = NULL;
  if(((c_0 != NULL) && (c_0 != t)))
    _fail(t);
  else
    c_0 = t;
  if(((e_0 != NULL) && (e_0 != t)))
    _fail(t);
  else
    e_0 = t;
  t = term_u_22;
  t = whoami_0_0(t);
  if(((f_457 != NULL) && (f_457 != t)))
    _fail(t);
  else
    f_457 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_22, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_22), not_null(f_457)), term_w_22));
  t = printnl_0_0(t);
  t = term_y_22;
  t = exit_0_0(t);
  t = not_null(c_0);
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm e_50 = NULL,f_50 = NULL,k_0 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((e_50 != NULL) && (e_50 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_50 = ATgetArgument(t, 0);
      if(((f_50 != NULL) && (f_50 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((k_0 != NULL) && (k_0 != t)))
    _fail(t);
  else
    k_0 = t;
  t = SSL_printnl(not_null(e_50), not_null(f_50));
  t = not_null(k_0);
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm s_41 = NULL;
  if(((s_41 != NULL) && (s_41 != t)))
    _fail(t);
  else
    s_41 = t;
  t = SSL_implode_string(not_null(s_41));
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm z_22 = t;
  int a_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(a_23);
    }
  else
    {
      t = z_22;
      {
        ATerm y_28 = NULL,z_28 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((y_28 != NULL) && (y_28 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              y_28 = ATgetFirst((ATermList) t);
            if(((z_28 != NULL) && (z_28 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              z_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(y_28);
        {
          ATerm s_16 (ATerm t)
          {
            t = not_null(z_28);
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(s_16, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm v_142 = NULL,l_0 = NULL,w_142 = NULL,x_28 = NULL;
  if(((v_142 != NULL) && (v_142 != t)))
    _fail(t);
  else
    v_142 = t;
  if(((l_0 != NULL) && (l_0 != t)))
    _fail(t);
  else
    l_0 = t;
  t = not_null(v_142);
  if(((w_142 != NULL) && (w_142 != t)))
    _fail(t);
  else
    w_142 = t;
  t = SSL_explode_term(not_null(w_142));
  if(match_cons(t, sym__2))
    {
      ATerm b_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      if(((x_28 != NULL) && (x_28 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(x_28);
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm b_85 (ATerm), ATerm t)
{
  ATerm c_85 (ATerm t)
  {
    ATerm c_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, c_85, t);
        ;
        LocalPopChoice(d_23);
      }
    else
      {
        t = c_23;
        t = Nil_0_0(t);
        t = b_85(t);
      }
    return(t);
  }
  t = c_85(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm v_28 = NULL,w_28 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((w_28 != NULL) && (w_28 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_28 = ATgetArgument(t, 0);
      if(((v_28 != NULL) && (v_28 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(w_28);
  {
    ATerm t_16 (ATerm t)
    {
      t = not_null(v_28);
      return(t);
    }
    t = at_end_1_0(t_16, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm e_23 = t;
  int f_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(f_23);
    }
  else
    {
      t = e_23;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm t_41 = NULL;
  if(((t_41 != NULL) && (t_41 != t)))
    _fail(t);
  else
    t_41 = t;
  t = SSL_explode_string(not_null(t_41));
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  t = _2_0(explode_string_0_0, explode_string_0_0, t);
  t = conc_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(h_23);
    }
  else
    {
      t = g_23;
      {
        ATerm i_23 = t;
        int j_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_16 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(u_16, t);
            ;
            LocalPopChoice(j_23);
          }
        else
          {
            t = i_23;
            {
              ATerm k_23 = t;
              int l_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_52 = NULL;
                  if(match_cons(t, sym_Path_1))
                    {
                      if(((a_52 != NULL) && (a_52 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        a_52 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(a_52);
                  ;
                  LocalPopChoice(l_23);
                }
              else
                {
                  t = k_23;
                  {
                    ATerm m_23 = t;
                    int n_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_51 = NULL;
                        if(match_cons(t, sym_Var_1))
                          {
                            if(((z_51 != NULL) && (z_51 != ATgetArgument(t, 0))))
                              _fail(ATgetArgument(t, 0));
                            else
                              z_51 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = not_null(z_51);
                        {
                          ATerm o_23 = t;
                          int p_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0_0(t);
                              ;
                              LocalPopChoice(p_23);
                            }
                          else
                            {
                              t = o_23;
                              {
                                ATerm v_16 (ATerm t)
                                {
                                  t = term_q_23;
                                  return(t);
                                }
                                t = debug_1_0(v_16, t);
                                _fail(t);
                              }
                            }
                        }
                        ;
                        LocalPopChoice(n_23);
                      }
                    else
                      {
                        t = m_23;
                        {
                          ATerm x_51 = NULL,y_51 = NULL,m_0 = NULL,m_427 = NULL,n_0 = NULL,y_427 = NULL;
                          if(match_cons(t, sym_Prefix_2))
                            {
                              if(((x_51 != NULL) && (x_51 != ATgetArgument(t, 0))))
                                _fail(ATgetArgument(t, 0));
                              else
                                x_51 = ATgetArgument(t, 0);
                              if(((y_51 != NULL) && (y_51 != ATgetArgument(t, 1))))
                                _fail(ATgetArgument(t, 1));
                              else
                                y_51 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          if(((m_0 != NULL) && (m_0 != t)))
                            _fail(t);
                          else
                            m_0 = t;
                          t = not_null(x_51);
                          t = eval_config_0_0(t);
                          if(((m_427 != NULL) && (m_427 != t)))
                            _fail(t);
                          else
                            m_427 = t;
                          t = not_null(m_0);
                          if(((n_0 != NULL) && (n_0 != t)))
                            _fail(t);
                          else
                            n_0 = t;
                          t = not_null(y_51);
                          t = eval_config_0_0(t);
                          if(((y_427 != NULL) && (y_427 != t)))
                            _fail(t);
                          else
                            y_427 = t;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(m_427), not_null(y_427));
                          t = conc_strings_0_0(t);
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
ATerm get_config_0_0 (ATerm t)
{
  ATerm w_51 = NULL;
  if(((w_51 != NULL) && (w_51 != t)))
    _fail(t);
  else
    w_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_23, not_null(w_51));
  t = table_get_0_0(t);
  {
    ATerm w_16 (ATerm t)
    {
      ATerm o_0 = NULL,p_0 = NULL,n_426 = NULL;
      t = eval_config_0_0(t);
      if(((o_0 != NULL) && (o_0 != t)))
        _fail(t);
      else
        o_0 = t;
      if(((p_0 != NULL) && (p_0 != t)))
        _fail(t);
      else
        p_0 = t;
      if(((n_426 != NULL) && (n_426 != t)))
        _fail(t);
      else
        n_426 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_23, not_null(w_51), not_null(n_426));
      t = table_put_0_0(t);
      t = not_null(o_0);
      return(t);
    }
    t = try_1_0(w_16, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm b_98 (ATerm), ATerm t)
{
  ATerm x_16 (ATerm t)
  {
    ATerm q_0 = NULL,r_0 = NULL,u_408 = NULL;
    if(((q_0 != NULL) && (q_0 != t)))
      _fail(t);
    else
      q_0 = t;
    if(((r_0 != NULL) && (r_0 != t)))
      _fail(t);
    else
      r_0 = t;
    t = term_s_23;
    t = get_config_0_0(t);
    if(((u_408 != NULL) && (u_408 != t)))
      _fail(t);
    else
      u_408 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_408), term_t_23);
    t = geq_0_0(t);
    t = not_null(q_0);
    t = b_98(t);
    return(t);
  }
  t = try_1_0(x_16, t);
  return(t);
}
ATerm fputc_0_0 (ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL,s_0 = NULL,s_349 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((w_46 != NULL) && (w_46 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_46 = ATgetArgument(t, 0);
      {
        ATerm u_23 = ATgetArgument(t, 1);
        if(match_cons(u_23, sym_Stream_1))
          {
            if(((x_46 != NULL) && (x_46 != ATgetArgument(u_23, 0))))
              _fail(ATgetArgument(u_23, 0));
            else
              x_46 = ATgetArgument(u_23, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_fputc(not_null(w_46), not_null(x_46));
  if(((s_0 != NULL) && (s_0 != t)))
    _fail(t);
  else
    s_0 = t;
  if(((s_349 != NULL) && (s_349 != t)))
    _fail(t);
  else
    s_349 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(s_349));
  return(t);
}
ATerm write_in_text_to_stream_0_0 (ATerm t)
{
  ATerm k_50 = NULL,l_50 = NULL,t_0 = NULL,g_392 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_23 = ATgetArgument(t, 0);
      if(match_cons(v_23, sym_Stream_1))
        {
          if(((k_50 != NULL) && (k_50 != ATgetArgument(v_23, 0))))
            _fail(ATgetArgument(v_23, 0));
          else
            k_50 = ATgetArgument(v_23, 0);
        }
      else
        _fail(t);
      if(((l_50 != NULL) && (l_50 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(not_null(k_50), not_null(l_50));
  if(((t_0 != NULL) && (t_0 != t)))
    _fail(t);
  else
    t_0 = t;
  if(((g_392 != NULL) && (g_392 != t)))
    _fail(t);
  else
    g_392 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(g_392));
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm y_16 (ATerm t)
  {
    ATerm u_0 = NULL,u_393 = NULL;
    t = write_in_text_to_stream_0_0(t);
    if(((u_0 != NULL) && (u_0 != t)))
      _fail(t);
    else
      u_0 = t;
    if(((u_393 != NULL) && (u_393 != t)))
      _fail(t);
    else
      u_393 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_w_23, not_null(u_393));
    t = fputc_0_0(t);
    return(t);
  }
  t = WriteToFile_1_0(y_16, t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm g_50 = NULL,h_50 = NULL,v_0 = NULL,a_391 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_23 = ATgetArgument(t, 0);
      if(match_cons(x_23, sym_Stream_1))
        {
          if(((g_50 != NULL) && (g_50 != ATgetArgument(x_23, 0))))
            _fail(ATgetArgument(x_23, 0));
          else
            g_50 = ATgetArgument(x_23, 0);
        }
      else
        _fail(t);
      if(((h_50 != NULL) && (h_50 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(not_null(g_50), not_null(h_50));
  if(((v_0 != NULL) && (v_0 != t)))
    _fail(t);
  else
    v_0 = t;
  if(((a_391 != NULL) && (a_391 != t)))
    _fail(t);
  else
    a_391 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_391));
  return(t);
}
ATerm WriteToFile_1_0 (ATerm x_96 (ATerm), ATerm t)
{
  ATerm f_394 = NULL,o_50 = NULL,w_0 = NULL,q_394 = NULL,x_0 = NULL,b_395 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((f_394 != NULL) && (f_394 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_394 = ATgetArgument(t, 0);
      if(((o_50 != NULL) && (o_50 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(f_394);
  if(((w_0 != NULL) && (w_0 != t)))
    _fail(t);
  else
    w_0 = t;
  if(((q_394 != NULL) && (q_394 != t)))
    _fail(t);
  else
    q_394 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(q_394), term_y_23);
  t = open_stream_0_0(t);
  if(((x_0 != NULL) && (x_0 != t)))
    _fail(t);
  else
    x_0 = t;
  if(((b_395 != NULL) && (b_395 != t)))
    _fail(t);
  else
    b_395 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(b_395), not_null(o_50));
  t = x_96(t);
  t = fclose_0_0(t);
  t = not_null(o_50);
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  t = WriteToFile_1_0(write_in_baf_to_stream_0_0, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm y_0 = NULL,j_53 = NULL;
  if(((y_0 != NULL) && (y_0 != t)))
    _fail(t);
  else
    y_0 = t;
  {
    ATerm z_16 (ATerm t)
    {
      ATerm z_23 = t;
      int a_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_17 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((j_53 != NULL) && (j_53 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  j_53 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(a_17, t);
          ;
          LocalPopChoice(a_24);
        }
      else
        {
          t = z_23;
          t = term_b_24;
          if(((j_53 != NULL) && (j_53 != t)))
            _fail(t);
          else
            j_53 = t;
        }
      return(t);
    }
    t = _2_0(z_16, _id, t);
    t = not_null(y_0);
    {
      ATerm b_17 (ATerm t)
      {
        ATerm c_17 (ATerm t)
        {
          t = not_null(j_53);
          return(t);
        }
        t = split_2_0(c_17, _id, t);
        return(t);
      }
      t = _2_0(_id, b_17, t);
      {
        ATerm c_24 = t;
        int d_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_17 (ATerm t)
            {
              ATerm e_17 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(e_17, t);
              return(t);
            }
            t = _2_0(d_17, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(d_24);
          }
        else
          {
            t = c_24;
            t = _2_0(_id, WriteToTextFile_0_0, t);
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
ATerm apply_strategy_1_0 (ATerm z_99 (ATerm), ATerm t)
{
  ATerm z_0 = NULL,a_1 = NULL,g_53 = NULL,h_53 = NULL,i_53 = NULL;
  if(((z_0 != NULL) && (z_0 != t)))
    _fail(t);
  else
    z_0 = t;
  t = dtime_0_0(t);
  t = not_null(z_0);
  t = z_99(t);
  if(((a_1 != NULL) && (a_1 != t)))
    _fail(t);
  else
    a_1 = t;
  t = dtime_0_0(t);
  if(((g_53 != NULL) && (g_53 != t)))
    _fail(t);
  else
    g_53 = t;
  t = not_null(a_1);
  if(match_cons(t, sym__2))
    {
      if(((h_53 != NULL) && (h_53 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_53 = ATgetArgument(t, 0);
      if(((i_53 != NULL) && (i_53 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_53)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(g_53))), not_null(i_53));
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_47 = NULL,b_47 = NULL;
  ATerm e_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Stream_1))
        {
          if(((a_47 != NULL) && (a_47 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            a_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_fclose(not_null(a_47));
      ;
      LocalPopChoice(f_24);
    }
  else
    {
      t = e_24;
      if(((b_47 != NULL) && (b_47 != t)))
        _fail(t);
      else
        b_47 = t;
      t = SSL_fclose(not_null(b_47));
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm m_50 = NULL;
  if(match_cons(t, sym_Stream_1))
    {
      if(((m_50 != NULL) && (m_50 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(not_null(m_50));
  return(t);
}
ATerm debug_1_0 (ATerm j_96 (ATerm), ATerm t)
{
  ATerm b_1 = NULL,c_1 = NULL,c_385 = NULL,d_1 = NULL,j_385 = NULL;
  if(((b_1 != NULL) && (b_1 != t)))
    _fail(t);
  else
    b_1 = t;
  if(((c_1 != NULL) && (c_1 != t)))
    _fail(t);
  else
    c_1 = t;
  t = j_96(t);
  if(((c_385 != NULL) && (c_385 != t)))
    _fail(t);
  else
    c_385 = t;
  t = not_null(c_1);
  if(((d_1 != NULL) && (d_1 != t)))
    _fail(t);
  else
    d_1 = t;
  if(((j_385 != NULL) && (j_385 != t)))
    _fail(t);
  else
    j_385 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_385)), not_null(c_385)));
  t = printnl_0_0(t);
  t = not_null(b_1);
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm y_46 = NULL,z_46 = NULL,e_1 = NULL,i_350 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((y_46 != NULL) && (y_46 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_46 = ATgetArgument(t, 0);
      if(((z_46 != NULL) && (z_46 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_fopen(not_null(y_46), not_null(z_46));
  if(((e_1 != NULL) && (e_1 != t)))
    _fail(t);
  else
    e_1 = t;
  if(((i_350 != NULL) && (i_350 != t)))
    _fail(t);
  else
    i_350 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_350));
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm r_41 = NULL;
  if(((r_41 != NULL) && (r_41 != t)))
    _fail(t);
  else
    r_41 = t;
  t = SSL_is_string(not_null(r_41));
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_1 = NULL,j_352 = NULL;
  t = SSL_stdin_stream();
  if(((f_1 != NULL) && (f_1 != t)))
    _fail(t);
  else
    f_1 = t;
  if(((j_352 != NULL) && (j_352 != t)))
    _fail(t);
  else
    j_352 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(j_352));
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_1 = NULL,u_352 = NULL;
  t = SSL_stdout_stream();
  if(((g_1 != NULL) && (g_1 != t)))
    _fail(t);
  else
    g_1 = t;
  if(((u_352 != NULL) && (u_352 != t)))
    _fail(t);
  else
    u_352 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(u_352));
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_1 = NULL,f_353 = NULL;
  t = SSL_stderr_stream();
  if(((h_1 != NULL) && (h_1 != t)))
    _fail(t);
  else
    h_1 = t;
  if(((f_353 != NULL) && (f_353 != t)))
    _fail(t);
  else
    f_353 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(f_353));
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm g_24 = t;
  int h_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_stderr_0)))
        _fail(t);
      t = stderr_stream_0_0(t);
      ;
      LocalPopChoice(h_24);
    }
  else
    {
      t = g_24;
      {
        ATerm i_24 = t;
        int j_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_stdout_0)))
              _fail(t);
            t = stdout_stream_0_0(t);
            ;
            LocalPopChoice(j_24);
          }
        else
          {
            t = i_24;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = stdin_stream_0_0(t);
          }
      }
    }
  return(t);
}
ATerm Fst_0_0 (ATerm t)
{
  ATerm p_224 = NULL,i_1 = NULL,q_224 = NULL,r_36 = NULL,s_36 = NULL;
  if(((p_224 != NULL) && (p_224 != t)))
    _fail(t);
  else
    p_224 = t;
  if(((i_1 != NULL) && (i_1 != t)))
    _fail(t);
  else
    i_1 = t;
  t = not_null(p_224);
  if(((q_224 != NULL) && (q_224 != t)))
    _fail(t);
  else
    q_224 = t;
  t = SSL_explode_term(not_null(q_224));
  if(match_cons(t, sym__2))
    {
      ATerm k_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_24 = ATgetArgument(t, 1);
        if(((ATgetType(l_24) == AT_LIST) && !(ATisEmpty(l_24))))
          {
            if(((s_36 != NULL) && (s_36 != ATgetFirst((ATermList) l_24))))
              _fail(ATgetFirst((ATermList) l_24));
            else
              s_36 = ATgetFirst((ATermList) l_24);
            if(((r_36 != NULL) && (r_36 != (ATerm) ATgetNext((ATermList) l_24))))
              _fail((ATerm) ATgetNext((ATermList) l_24));
            else
              r_36 = (ATerm) ATgetNext((ATermList) l_24);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(s_36);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_24 = ATgetArgument(t, 0);
      ATerm n_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_24 = t;
    int p_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Fst_0_0(t);
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(p_24);
      }
    else
      {
        t = o_24;
        {
          ATerm q_24 = t;
          int r_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_17 (ATerm t)
              {
                ATerm u_343 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    if(((u_343 != NULL) && (u_343 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      u_343 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = not_null(u_343);
                return(t);
              }
              t = _2_0(f_17, _id, t);
              t = fopen_0_0(t);
              ;
              LocalPopChoice(r_24);
            }
          else
            {
              t = q_24;
              t = _2_0(is_string_0_0, _id, t);
              t = fopen_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_1 = NULL,n_50 = NULL;
  ATerm s_24 = t;
  int t_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_1 = NULL,w_392 = NULL;
      if(((j_1 != NULL) && (j_1 != t)))
        _fail(t);
      else
        j_1 = t;
      if(((w_392 != NULL) && (w_392 != t)))
        _fail(t);
      else
        w_392 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_392), term_u_24);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(t_24);
    }
  else
    {
      t = s_24;
      {
        ATerm g_17 (ATerm t)
        {
          t = term_v_24;
          return(t);
        }
        t = debug_1_0(g_17, t);
        _fail(t);
      }
    }
  if(((k_1 != NULL) && (k_1 != t)))
    _fail(t);
  else
    k_1 = t;
  t = read_from_stream_0_0(t);
  if(((n_50 != NULL) && (n_50 != t)))
    _fail(t);
  else
    n_50 = t;
  t = not_null(k_1);
  t = fclose_0_0(t);
  t = not_null(n_50);
  return(t);
}
ATerm split_2_0 (ATerm b_92 (ATerm), ATerm c_92 (ATerm), ATerm t)
{
  ATerm l_1 = NULL,c_228 = NULL,m_1 = NULL,j_228 = NULL;
  if(((l_1 != NULL) && (l_1 != t)))
    _fail(t);
  else
    l_1 = t;
  t = b_92(t);
  if(((c_228 != NULL) && (c_228 != t)))
    _fail(t);
  else
    c_228 = t;
  t = not_null(l_1);
  if(((m_1 != NULL) && (m_1 != t)))
    _fail(t);
  else
    m_1 = t;
  t = c_92(t);
  if(((j_228 != NULL) && (j_228 != t)))
    _fail(t);
  else
    j_228 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(c_228), not_null(j_228));
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm n_1 = NULL,f_53 = NULL;
  if(((n_1 != NULL) && (n_1 != t)))
    _fail(t);
  else
    n_1 = t;
  {
    ATerm w_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_17 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              if(((f_53 != NULL) && (f_53 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                f_53 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(h_17, t);
        ;
        LocalPopChoice(x_24);
      }
    else
      {
        t = w_24;
        t = term_y_24;
        if(((f_53 != NULL) && (f_53 != t)))
          _fail(t);
        else
          f_53 = t;
      }
    t = not_null(n_1);
    {
      ATerm i_17 (ATerm t)
      {
        t = not_null(f_53);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, i_17, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm j_17 (ATerm t)
  {
    ATerm z_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-k", 0, ATtrue)))
          _fail(t);
        ;
        LocalPopChoice(a_25);
      }
    else
      {
        t = z_24;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
      }
    return(t);
  }
  ATerm k_17 (ATerm t)
  {
    ATerm o_1 = NULL,p_1 = NULL,q_460 = NULL;
    if(((o_1 != NULL) && (o_1 != t)))
      _fail(t);
    else
      o_1 = t;
    if(((p_1 != NULL) && (p_1 != t)))
      _fail(t);
    else
      p_1 = t;
    t = string_to_int_0_0(t);
    if(((q_460 != NULL) && (q_460 != t)))
      _fail(t);
    else
      q_460 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_b_25, not_null(q_460));
    t = set_config_0_0(t);
    t = not_null(o_1);
    return(t);
  }
  ATerm l_17 (ATerm t)
  {
    t = term_c_25;
    return(t);
  }
  t = ArgOption_3_0(j_17, k_17, l_17, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm n_43 = NULL;
  if(((n_43 != NULL) && (n_43 != t)))
    _fail(t);
  else
    n_43 = t;
  t = SSL_string_to_int(not_null(n_43));
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_17 (ATerm t)
      {
        ATerm f_25 = t;
        int g_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-S", 0, ATtrue)))
              _fail(t);
            ;
            LocalPopChoice(g_25);
          }
        else
          {
            t = f_25;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
          }
        return(t);
      }
      ATerm n_17 (ATerm t)
      {
        ATerm q_1 = NULL;
        if(((q_1 != NULL) && (q_1 != t)))
          _fail(t);
        else
          q_1 = t;
        t = term_i_25;
        t = set_config_0_0(t);
        t = term_j_25;
        return(t);
      }
      ATerm o_17 (ATerm t)
      {
        t = term_k_25;
        return(t);
      }
      t = Option_3_0(m_17, n_17, o_17, t);
      ;
      LocalPopChoice(e_25);
    }
  else
    {
      t = d_25;
      {
        ATerm l_25 = t;
        int m_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_17 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm q_17 (ATerm t)
            {
              ATerm r_1 = NULL,s_1 = NULL,v_465 = NULL,t_1 = NULL,g_466 = NULL;
              if(((r_1 != NULL) && (r_1 != t)))
                _fail(t);
              else
                r_1 = t;
              if(((s_1 != NULL) && (s_1 != t)))
                _fail(t);
              else
                s_1 = t;
              t = string_to_int_0_0(t);
              if(((v_465 != NULL) && (v_465 != t)))
                _fail(t);
              else
                v_465 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_s_23, not_null(v_465));
              t = set_config_0_0(t);
              t = not_null(r_1);
              if(((t_1 != NULL) && (t_1 != t)))
                _fail(t);
              else
                t_1 = t;
              if(((g_466 != NULL) && (g_466 != t)))
                _fail(t);
              else
                g_466 = t;
              t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(g_466));
              return(t);
            }
            ATerm r_17 (ATerm t)
            {
              t = term_n_25;
              return(t);
            }
            t = ArgOption_3_0(p_17, q_17, r_17, t);
            ;
            LocalPopChoice(m_25);
          }
        else
          {
            t = l_25;
            {
              ATerm s_17 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm t_17 (ATerm t)
              {
                ATerm u_1 = NULL;
                if(((u_1 != NULL) && (u_1 != t)))
                  _fail(t);
                else
                  u_1 = t;
                t = term_p_25;
                t = set_config_0_0(t);
                t = term_q_25;
                return(t);
              }
              ATerm u_17 (ATerm t)
              {
                t = term_r_25;
                return(t);
              }
              t = Option_3_0(s_17, t_17, u_17, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm s_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(t_25);
    }
  else
    {
      t = s_25;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm v_17 (ATerm t)
  {
    ATerm u_25 = t;
    int v_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-o", 0, ATtrue)))
          _fail(t);
        ;
        LocalPopChoice(v_25);
      }
    else
      {
        t = u_25;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
      }
    return(t);
  }
  ATerm w_17 (ATerm t)
  {
    ATerm v_1 = NULL,w_1 = NULL,d_463 = NULL,x_1 = NULL,o_463 = NULL;
    if(((v_1 != NULL) && (v_1 != t)))
      _fail(t);
    else
      v_1 = t;
    if(((w_1 != NULL) && (w_1 != t)))
      _fail(t);
    else
      w_1 = t;
    if(((d_463 != NULL) && (d_463 != t)))
      _fail(t);
    else
      d_463 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_w_25, not_null(d_463));
    t = set_config_0_0(t);
    t = not_null(v_1);
    if(((x_1 != NULL) && (x_1 != t)))
      _fail(t);
    else
      x_1 = t;
    if(((o_463 != NULL) && (o_463 != t)))
      _fail(t);
    else
      o_463 = t;
    t = (ATerm) ATmakeAppl(sym_Output_1, not_null(o_463));
    return(t);
  }
  ATerm x_17 (ATerm t)
  {
    t = term_x_25;
    return(t);
  }
  t = ArgOption_3_0(v_17, w_17, x_17, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm y_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(z_25);
    }
  else
    {
      t = y_25;
      {
        ATerm y_17 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm z_17 (ATerm t)
        {
          ATerm y_1 = NULL;
          if(((y_1 != NULL) && (y_1 != t)))
            _fail(t);
          else
            y_1 = t;
          t = term_b_26;
          t = set_config_0_0(t);
          t = term_c_26;
          return(t);
        }
        ATerm a_18 (ATerm t)
        {
          t = term_d_26;
          return(t);
        }
        t = Option_3_0(y_17, z_17, a_18, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm e_26 = t;
  int f_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("register-usage-info", 0, ATtrue)))
        _fail(t);
      t = register_usage_1_0(j_0, t);
      ;
      LocalPopChoice(f_26);
    }
  else
    {
      t = e_26;
      {
        ATerm z_55 = NULL,x_55 = NULL,y_55 = NULL,z_1 = NULL,a_2 = NULL,l_500 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((z_55 != NULL) && (z_55 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              z_55 = ATgetFirst((ATermList) t);
            {
              ATerm g_26 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(g_26) == AT_LIST) && !(ATisEmpty(g_26))))
                {
                  if(((x_55 != NULL) && (x_55 != ATgetFirst((ATermList) g_26))))
                    _fail(ATgetFirst((ATermList) g_26));
                  else
                    x_55 = ATgetFirst((ATermList) g_26);
                  if(((y_55 != NULL) && (y_55 != (ATerm) ATgetNext((ATermList) g_26))))
                    _fail((ATerm) ATgetNext((ATermList) g_26));
                  else
                    y_55 = (ATerm) ATgetNext((ATermList) g_26);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        if(((z_1 != NULL) && (z_1 != t)))
          _fail(t);
        else
          z_1 = t;
        t = not_null(z_55);
        t = h_0(t);
        t = not_null(z_1);
        if(((a_2 != NULL) && (a_2 != t)))
          _fail(t);
        else
          a_2 = t;
        t = not_null(x_55);
        t = i_0(t);
        if(((l_500 != NULL) && (l_500 != t)))
          _fail(t);
        else
          l_500 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(y_55)), not_null(l_500));
      }
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm b_18 (ATerm t)
  {
    ATerm h_26 = t;
    int i_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-i", 0, ATtrue)))
          _fail(t);
        ;
        LocalPopChoice(i_26);
      }
    else
      {
        t = h_26;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
      }
    return(t);
  }
  ATerm c_18 (ATerm t)
  {
    ATerm b_2 = NULL,c_2 = NULL,t_461 = NULL,d_2 = NULL,e_462 = NULL;
    if(((b_2 != NULL) && (b_2 != t)))
      _fail(t);
    else
      b_2 = t;
    if(((c_2 != NULL) && (c_2 != t)))
      _fail(t);
    else
      c_2 = t;
    if(((t_461 != NULL) && (t_461 != t)))
      _fail(t);
    else
      t_461 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_j_26, not_null(t_461));
    t = set_config_0_0(t);
    t = not_null(b_2);
    if(((d_2 != NULL) && (d_2 != t)))
      _fail(t);
    else
      d_2 = t;
    if(((e_462 != NULL) && (e_462 != t)))
      _fail(t);
    else
      e_462 = t;
    t = (ATerm) ATmakeAppl(sym_Input_1, not_null(e_462));
    return(t);
  }
  ATerm d_18 (ATerm t)
  {
    t = term_k_26;
    return(t);
  }
  t = ArgOption_3_0(b_18, c_18, d_18, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm l_26 = t;
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(m_26);
    }
  else
    {
      t = l_26;
      {
        ATerm n_26 = t;
        int o_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(o_26);
          }
        else
          {
            t = n_26;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_2 = NULL,m_458 = NULL;
  t = report_run_time_0_0(t);
  if(((e_2 != NULL) && (e_2 != t)))
    _fail(t);
  else
    e_2 = t;
  t = term_u_22;
  t = whoami_0_0(t);
  if(((m_458 != NULL) && (m_458 != t)))
    _fail(t);
  else
    m_458 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_22, (ATerm) ATinsert(ATinsert(ATempty, term_p_26), not_null(m_458)));
  t = printnl_0_0(t);
  t = term_y_22;
  t = exit_0_0(t);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_q_26;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm o_53 = NULL;
  if(((o_53 != NULL) && (o_53 != t)))
    _fail(t);
  else
    o_53 = t;
  t = SSL_TicksToSeconds(not_null(o_53));
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm s_43 = NULL,t_43 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((s_43 != NULL) && (s_43 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_43 = ATgetArgument(t, 0);
      if(((t_43 != NULL) && (t_43 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_26 = t;
    int s_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(not_null(s_43), not_null(t_43));
        ;
        LocalPopChoice(s_26);
      }
    else
      {
        t = r_26;
        t = SSL_addr(not_null(s_43), not_null(t_43));
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm m_90 (ATerm), ATerm n_90 (ATerm), ATerm t)
{
  ATerm t_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = m_90(t);
      ;
      LocalPopChoice(u_26);
    }
  else
    {
      t = t_26;
      {
        ATerm c_35 = NULL,d_35 = NULL,f_2 = NULL,g_204 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((c_35 != NULL) && (c_35 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              c_35 = ATgetFirst((ATermList) t);
            if(((d_35 != NULL) && (d_35 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              d_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        if(((f_2 != NULL) && (f_2 != t)))
          _fail(t);
        else
          f_2 = t;
        t = not_null(d_35);
        t = foldr_2_0(m_90, n_90, t);
        if(((g_204 != NULL) && (g_204 != t)))
          _fail(t);
        else
          g_204 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_35), not_null(g_204));
        t = n_90(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm f_94 (ATerm), ATerm g_94 (ATerm), ATerm t)
{
  ATerm f_295 = NULL,g_2 = NULL,g_295 = NULL,v_41 = NULL;
  if(((f_295 != NULL) && (f_295 != t)))
    _fail(t);
  else
    f_295 = t;
  if(((g_2 != NULL) && (g_2 != t)))
    _fail(t);
  else
    g_2 = t;
  t = not_null(f_295);
  if(((g_295 != NULL) && (g_295 != t)))
    _fail(t);
  else
    g_295 = t;
  t = SSL_explode_term(not_null(g_295));
  if(match_cons(t, sym__2))
    {
      ATerm v_26 = ATgetArgument(t, 0);
      if(((v_41 != NULL) && (v_41 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(v_41);
  t = foldr_2_0(f_94, g_94, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  t = times_0_0(t);
  {
    ATerm e_18 (ATerm t)
    {
      t = term_h_25;
      return(t);
    }
    t = crush_2_0(e_18, add_0_0, t);
    t = ticks_to_seconds_0_0(t);
  }
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL,h_2 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((s_44 != NULL) && (s_44 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_44 = ATgetArgument(t, 0);
      if(((t_44 != NULL) && (t_44 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((h_2 != NULL) && (h_2 != t)))
    _fail(t);
  else
    h_2 = t;
  {
    ATerm w_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(not_null(s_44), not_null(t_44));
        ;
        LocalPopChoice(x_26);
      }
    else
      {
        t = w_26;
        t = SSL_gtr(not_null(s_44), not_null(t_44));
      }
    t = not_null(h_2);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_44 = NULL;
  ATerm y_26 = t;
  int z_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym__2))
        {
          if(((y_44 != NULL) && (y_44 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            y_44 = ATgetArgument(t, 0);
          if(((y_44 != NULL) && (y_44 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            y_44 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      ;
      LocalPopChoice(z_26);
    }
  else
    {
      t = y_26;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_98 (ATerm), ATerm t)
{
  ATerm f_18 (ATerm t)
  {
    ATerm i_2 = NULL,j_2 = NULL,e_408 = NULL;
    if(((i_2 != NULL) && (i_2 != t)))
      _fail(t);
    else
      i_2 = t;
    if(((j_2 != NULL) && (j_2 != t)))
      _fail(t);
    else
      j_2 = t;
    t = term_s_23;
    t = get_config_0_0(t);
    if(((e_408 != NULL) && (e_408 != t)))
      _fail(t);
    else
      e_408 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_408), term_y_22);
    t = geq_0_0(t);
    t = not_null(i_2);
    t = a_98(t);
    return(t);
  }
  t = try_1_0(f_18, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm g_18 (ATerm t)
  {
    ATerm k_2 = NULL,f_459 = NULL,l_2 = NULL,n_459 = NULL;
    if(((k_2 != NULL) && (k_2 != t)))
      _fail(t);
    else
      k_2 = t;
    t = run_time_0_0(t);
    if(((f_459 != NULL) && (f_459 != t)))
      _fail(t);
    else
      f_459 = t;
    t = not_null(k_2);
    if(((l_2 != NULL) && (l_2 != t)))
      _fail(t);
    else
      l_2 = t;
    t = term_u_22;
    t = whoami_0_0(t);
    if(((n_459 != NULL) && (n_459 != t)))
      _fail(t);
    else
      n_459 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_v_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_27), not_null(f_459)), term_a_27), not_null(n_459)));
    t = printnl_0_0(t);
    return(t);
  }
  t = if_verbose1_1_0(g_18, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_h_25;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1_0 (ATerm x_100 (ATerm), ATerm t)
{
  ATerm c_27 = t;
  int d_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(d_27);
    }
  else
    {
      t = c_27;
      {
        ATerm h_18 (ATerm t)
        {
          ATerm f_27 = t;
          int g_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0_0(t);
              ;
              LocalPopChoice(g_27);
            }
          else
            {
              t = f_27;
              {
                ATerm h_27 = t;
                int i_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(i_27);
                  }
                else
                  {
                    t = h_27;
                    t = Version_0_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(h_18, t);
      }
    }
  t = x_100(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm w_57 = NULL;
  if(((w_57 != NULL) && (w_57 != t)))
    _fail(t);
  else
    w_57 = t;
  t = SSL_table_create(not_null(w_57));
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm k_53 = NULL,m_2 = NULL;
  if(((k_53 != NULL) && (k_53 != t)))
    _fail(t);
  else
    k_53 = t;
  if(((m_2 != NULL) && (m_2 != t)))
    _fail(t);
  else
    m_2 = t;
  t = term_j_27;
  t = table_create_0_0(t);
  t = (ATerm) ATmakeAppl(sym__3, term_j_27, term_k_27, not_null(k_53));
  t = table_put_0_0(t);
  t = not_null(m_2);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm x_57 = NULL;
  if(((x_57 != NULL) && (x_57 != t)))
    _fail(t);
  else
    x_57 = t;
  t = SSL_table_destroy(not_null(x_57));
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm p_52 = NULL;
  if(((p_52 != NULL) && (p_52 != t)))
    _fail(t);
  else
    p_52 = t;
  t = SSL_exit(not_null(p_52));
  return(t);
}
ATerm long_description_1_0 (ATerm y_102 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm map_1_0 (ATerm l_84 (ATerm), ATerm t)
{
  ATerm m_84 (ATerm t)
  {
    ATerm l_27 = t;
    int m_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(m_27);
      }
    else
      {
        t = l_27;
        t = Cons_2_0(l_84, m_84, t);
      }
    return(t);
  }
  t = m_84(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm n_27 = t;
  int o_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_29 = NULL,p_29 = NULL,n_2 = NULL,o_2 = NULL,b_152 = NULL,p_2 = NULL,j_152 = NULL,q_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((o_29 != NULL) && (o_29 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            o_29 = ATgetFirst((ATermList) t);
          if(((p_29 != NULL) && (p_29 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            p_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(p_29);
      if(((n_2 != NULL) && (n_2 != t)))
        _fail(t);
      else
        n_2 = t;
      if(((o_2 != NULL) && (o_2 != t)))
        _fail(t);
      else
        o_2 = t;
      t = g_0(t);
      if(((b_152 != NULL) && (b_152 != t)))
        _fail(t);
      else
        b_152 = t;
      t = not_null(o_2);
      if(((p_2 != NULL) && (p_2 != t)))
        _fail(t);
      else
        p_2 = t;
      t = not_null(o_29);
      t = f_0(t);
      if(((j_152 != NULL) && (j_152 != t)))
        _fail(t);
      else
        j_152 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(b_152)), not_null(j_152));
      if(((q_29 != NULL) && (q_29 != t)))
        _fail(t);
      else
        q_29 = t;
      t = not_null(n_2);
      {
        ATerm i_18 (ATerm t)
        {
          t = not_null(q_29);
          return(t);
        }
        t = reverse_acc_2_0(f_0, i_18, t);
      }
      ;
      LocalPopChoice(o_27);
    }
  else
    {
      t = n_27;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_22;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm j_18 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, j_18, t);
  return(t);
}
ATerm short_description_1_0 (ATerm x_102 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm p_76 (ATerm), ATerm t)
{
  ATerm e_12 = NULL,d_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL;
  if(((g_12 != NULL) && (g_12 != t)))
    _fail(t);
  else
    g_12 = t;
  if(match_cons(t, sym_Program_1))
    {
      if(((d_12 != NULL) && (d_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_15 = NULL;
    if(((m_15 != NULL) && (m_15 != t)))
      _fail(t);
    else
      m_15 = t;
    t = SSLgetAnnotations(not_null(g_12));
    if(((e_12 != NULL) && (e_12 != t)))
      _fail(t);
    else
      e_12 = t;
    t = not_null(m_15);
    t = not_null(d_12);
    t = p_76(t);
    if(((f_12 != NULL) && (f_12 != t)))
      _fail(t);
    else
      f_12 = t;
    {
      ATerm n_15 = NULL;
      if(((n_15 != NULL) && (n_15 != t)))
        _fail(t);
      else
        n_15 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(f_12)), not_null(e_12));
      if(((h_12 != NULL) && (h_12 != t)))
        _fail(t);
      else
        h_12 = t;
    }
  }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_56 = NULL;
  ATerm p_27 = t;
  int q_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_26;
      t = get_config_0_0(t);
      if(((l_56 != NULL) && (l_56 != t)))
        _fail(t);
      else
        l_56 = t;
      ;
      LocalPopChoice(q_27);
    }
  else
    {
      t = p_27;
      {
        ATerm k_18 (ATerm t)
        {
          ATerm l_18 (ATerm t)
          {
            if(((l_56 != NULL) && (l_56 != t)))
              _fail(t);
            else
              l_56 = t;
            return(t);
          }
          t = Program_1_0(l_18, t);
          return(t);
        }
        t = option_defined_1_0(k_18, t);
      }
    }
  {
    ATerm m_18 (ATerm t)
    {
      ATerm n_18 (ATerm t)
      {
        t = not_null(l_56);
        return(t);
      }
      t = short_description_1_0(n_18, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(m_18, t);
    t = term_r_27;
    t = echo_0_0(t);
    t = term_u_27;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    {
      ATerm o_18 (ATerm t)
      {
        ATerm q_2 = NULL,f_510 = NULL;
        if(((q_2 != NULL) && (q_2 != t)))
          _fail(t);
        else
          q_2 = t;
        if(((f_510 != NULL) && (f_510 != t)))
          _fail(t);
        else
          f_510 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_510)), term_v_27);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(o_18, t);
      {
        ATerm p_18 (ATerm t)
        {
          ATerm r_2 = NULL,q_510 = NULL;
          if(((r_2 != NULL) && (r_2 != t)))
            _fail(t);
          else
            r_2 = t;
          {
            ATerm q_18 (ATerm t)
            {
              t = not_null(l_56);
              return(t);
            }
            t = long_description_1_0(q_18, t);
            if(((q_510 != NULL) && (q_510 != t)))
              _fail(t);
            else
              q_510 = t;
            t = (ATerm) ATinsert(CheckATermList(not_null(q_510)), term_w_27);
            t = echo_0_0(t);
          }
          return(t);
        }
        t = try_1_0(p_18, t);
      }
    }
  }
  return(t);
}
ATerm override_system_usage_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  ATerm x_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(y_27);
    }
  else
    {
      t = x_27;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm Undefined_1_0 (ATerm q_76 (ATerm), ATerm t)
{
  ATerm j_12 = NULL,i_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL;
  if(((l_12 != NULL) && (l_12 != t)))
    _fail(t);
  else
    l_12 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      if(((i_12 != NULL) && (i_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm o_15 = NULL;
    if(((o_15 != NULL) && (o_15 != t)))
      _fail(t);
    else
      o_15 = t;
    t = SSLgetAnnotations(not_null(l_12));
    if(((j_12 != NULL) && (j_12 != t)))
      _fail(t);
    else
      j_12 = t;
    t = not_null(o_15);
    t = not_null(i_12);
    t = q_76(t);
    if(((k_12 != NULL) && (k_12 != t)))
      _fail(t);
    else
      k_12 = t;
    {
      ATerm p_15 = NULL;
      if(((p_15 != NULL) && (p_15 != t)))
        _fail(t);
      else
        p_15 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(k_12)), not_null(j_12));
      if(((m_12 != NULL) && (m_12 != t)))
        _fail(t);
      else
        m_12 = t;
    }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm v_84 (ATerm), ATerm t)
{
  ATerm w_84 (ATerm t)
  {
    ATerm z_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(v_84, _id, t);
        ;
        LocalPopChoice(a_28);
      }
    else
      {
        t = z_27;
        t = Cons_2_0(_id, w_84, t);
      }
    return(t);
  }
  t = w_84(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm x_101 (ATerm), ATerm t)
{
  t = fetch_1_0(x_101, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm b_28 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(c_28);
    }
  else
    {
      t = b_28;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm d_28 = ATgetFirst((ATermList) t);
          ATerm e_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL,d_382 = NULL;
  if(((s_2 != NULL) && (s_2 != t)))
    _fail(t);
  else
    s_2 = t;
  if(((t_2 != NULL) && (t_2 != t)))
    _fail(t);
  else
    t_2 = t;
  {
    ATerm f_28 = t;
    int g_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(g_28);
      }
    else
      {
        t = f_28;
        {
          ATerm u_2 = NULL,f_382 = NULL;
          if(((u_2 != NULL) && (u_2 != t)))
            _fail(t);
          else
            u_2 = t;
          if(((f_382 != NULL) && (f_382 != t)))
            _fail(t);
          else
            f_382 = t;
          t = (ATerm) ATinsert(ATempty, not_null(f_382));
        }
      }
    if(((d_382 != NULL) && (d_382 != t)))
      _fail(t);
    else
      d_382 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_b_24, not_null(d_382));
    t = printnl_0_0(t);
    t = not_null(s_2);
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_q_26;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm override_system_about_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  ATerm h_28 = t;
  int i_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(i_28);
    }
  else
    {
      t = h_28;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1_0 (ATerm a_77 (ATerm), ATerm t)
{
  ATerm j_28 = t;
  int k_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_77(t);
      ;
      LocalPopChoice(k_28);
    }
  else
    {
      t = j_28;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_18 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm s_18 (ATerm t)
      {
        t = term_o_28;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm t_18 (ATerm t)
      {
        t = term_p_28;
        return(t);
      }
      t = Option_3_0(r_18, s_18, t_18, t);
      ;
      LocalPopChoice(m_28);
    }
  else
    {
      t = l_28;
      {
        ATerm u_18 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm v_18 (ATerm t)
        {
          ATerm v_2 = NULL;
          if(((v_2 != NULL) && (v_2 != t)))
            _fail(t);
          else
            v_2 = t;
          t = term_o_28;
          t = set_config_0_0(t);
          t = term_r_28;
          t = set_config_0_0(t);
          t = term_s_28;
          return(t);
        }
        ATerm w_18 (ATerm t)
        {
          t = term_t_28;
          return(t);
        }
        t = Option_3_0(u_18, v_18, w_18, t);
      }
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm b_58 = NULL,c_58 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((b_58 != NULL) && (b_58 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_58 = ATgetArgument(t, 0);
      if(((c_58 != NULL) && (c_58 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get(not_null(b_58), not_null(c_58));
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm n_56 = NULL,o_56 = NULL,m_56 = NULL,w_2 = NULL,x_2 = NULL,l_513 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((n_56 != NULL) && (n_56 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_56 = ATgetArgument(t, 0);
      if(((o_56 != NULL) && (o_56 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_56 = ATgetArgument(t, 1);
      if(((m_56 != NULL) && (m_56 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        m_56 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((w_2 != NULL) && (w_2 != t)))
    _fail(t);
  else
    w_2 = t;
  if(((x_2 != NULL) && (x_2 != t)))
    _fail(t);
  else
    x_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(n_56), not_null(o_56));
  {
    ATerm u_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        ;
        LocalPopChoice(a_29);
      }
    else
      {
        t = u_28;
        t = (ATerm) ATempty;
      }
    if(((l_513 != NULL) && (l_513 != t)))
      _fail(t);
    else
      l_513 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(n_56), not_null(o_56), (ATerm) ATinsert(CheckATermList(not_null(l_513)), not_null(m_56)));
    t = table_put_0_0(t);
    t = not_null(w_2);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm c_103 (ATerm), ATerm t)
{
  ATerm y_2 = NULL,q_508 = NULL;
  if(((y_2 != NULL) && (y_2 != t)))
    _fail(t);
  else
    y_2 = t;
  t = term_u_22;
  t = c_103(t);
  if(((q_508 != NULL) && (q_508 != t)))
    _fail(t);
  else
    q_508 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_27, term_t_27, not_null(q_508));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm b_29 = t;
  int c_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("register-usage-info", 0, ATtrue)))
        _fail(t);
      t = register_usage_1_0(d_0, t);
      ;
      LocalPopChoice(c_29);
    }
  else
    {
      t = b_29;
      {
        ATerm w_55 = NULL,v_55 = NULL,z_2 = NULL,a_3 = NULL,d_499 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((w_55 != NULL) && (w_55 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              w_55 = ATgetFirst((ATermList) t);
            if(((v_55 != NULL) && (v_55 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              v_55 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        if(((z_2 != NULL) && (z_2 != t)))
          _fail(t);
        else
          z_2 = t;
        t = not_null(w_55);
        t = a_0(t);
        t = not_null(z_2);
        if(((a_3 != NULL) && (a_3 != t)))
          _fail(t);
        else
          a_3 = t;
        t = term_u_22;
        t = b_0(t);
        if(((d_499 != NULL) && (d_499 != t)))
          _fail(t);
        else
          d_499 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(v_55)), not_null(d_499));
      }
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm x_18 (ATerm t)
  {
    ATerm d_29 = t;
    int e_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
          _fail(t);
        ;
        LocalPopChoice(e_29);
      }
    else
      {
        t = d_29;
        {
          ATerm f_29 = t;
          int g_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-h", 0, ATtrue)))
                _fail(t);
              ;
              LocalPopChoice(g_29);
            }
          else
            {
              t = f_29;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                _fail(t);
            }
        }
      }
    return(t);
  }
  ATerm y_18 (ATerm t)
  {
    t = term_h_29;
    t = set_config_0_0(t);
    t = term_i_29;
    return(t);
  }
  ATerm z_18 (ATerm t)
  {
    t = term_j_29;
    return(t);
  }
  t = Option_3_0(x_18, y_18, z_18, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm i_56 = NULL,j_56 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((i_56 != NULL) && (i_56 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        i_56 = ATgetFirst((ATermList) t);
      if(((j_56 != NULL) && (j_56 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        j_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(j_56)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(i_56)));
  return(t);
}
ATerm Cons_2_0 (ATerm l_62 (ATerm), ATerm m_62 (ATerm), ATerm t)
{
  ATerm p_12 = NULL,n_12 = NULL,o_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL;
  if(((s_12 != NULL) && (s_12 != t)))
    _fail(t);
  else
    s_12 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((n_12 != NULL) && (n_12 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        n_12 = ATgetFirst((ATermList) t);
      if(((o_12 != NULL) && (o_12 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        o_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm q_15 = NULL;
    if(((q_15 != NULL) && (q_15 != t)))
      _fail(t);
    else
      q_15 = t;
    t = SSLgetAnnotations(not_null(s_12));
    if(((p_12 != NULL) && (p_12 != t)))
      _fail(t);
    else
      p_12 = t;
    t = not_null(q_15);
    t = not_null(n_12);
    t = l_62(t);
    if(((q_12 != NULL) && (q_12 != t)))
      _fail(t);
    else
      q_12 = t;
    t = not_null(o_12);
    t = m_62(t);
    if(((r_12 != NULL) && (r_12 != t)))
      _fail(t);
    else
      r_12 = t;
    {
      ATerm r_15 = NULL;
      if(((r_15 != NULL) && (r_15 != t)))
        _fail(t);
      else
        r_15 = t;
      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(r_12)), not_null(q_12)), not_null(p_12));
      if(((t_12 != NULL) && (t_12 != t)))
        _fail(t);
      else
        t_12 = t;
    }
  }
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm n_51 = NULL,o_51 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((n_51 != NULL) && (n_51 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_51 = ATgetArgument(t, 0);
      if(((o_51 != NULL) && (o_51 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_r_23, not_null(n_51), not_null(o_51));
  t = table_put_0_0(t);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm a_103 (ATerm), ATerm t)
{
  ATerm b_3 = NULL;
  if(((b_3 != NULL) && (b_3 != t)))
    _fail(t);
  else
    b_3 = t;
  {
    ATerm a_19 (ATerm t)
    {
      t = term_k_29;
      t = a_103(t);
      return(t);
    }
    t = try_1_0(a_19, t);
    t = not_null(b_3);
    {
      ATerm b_19 (ATerm t)
      {
        ATerm c_3 = NULL,d_3 = NULL,t_507 = NULL,e_3 = NULL,e_508 = NULL;
        if(((c_3 != NULL) && (c_3 != t)))
          _fail(t);
        else
          c_3 = t;
        if(((d_3 != NULL) && (d_3 != t)))
          _fail(t);
        else
          d_3 = t;
        if(((t_507 != NULL) && (t_507 != t)))
          _fail(t);
        else
          t_507 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_26, not_null(t_507));
        t = set_config_0_0(t);
        t = not_null(c_3);
        if(((e_3 != NULL) && (e_3 != t)))
          _fail(t);
        else
          e_3 = t;
        if(((e_508 != NULL) && (e_508 != t)))
          _fail(t);
        else
          e_508 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(e_508));
        return(t);
      }
      ATerm c_19 (ATerm t)
      {
        ATerm l_29 = t;
        int m_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_29 = t;
            int r_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0_0(t);
                ;
                LocalPopChoice(r_29);
              }
            else
              {
                t = n_29;
                t = a_103(t);
                t = Cons_2_0(_id, c_19, t);
              }
            ;
            LocalPopChoice(m_29);
          }
        else
          {
            t = l_29;
            t = UndefinedOption_0_0(t);
          }
        return(t);
      }
      t = Cons_2_0(b_19, c_19, t);
    }
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm f_3 = NULL,y_57 = NULL,z_57 = NULL,a_58 = NULL;
  if(((f_3 != NULL) && (f_3 != t)))
    _fail(t);
  else
    f_3 = t;
  if(match_cons(t, sym__3))
    {
      if(((y_57 != NULL) && (y_57 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_57 = ATgetArgument(t, 0);
      if(((z_57 != NULL) && (z_57 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_57 = ATgetArgument(t, 1);
      if(((a_58 != NULL) && (a_58 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        a_58 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_put(not_null(y_57), not_null(z_57), not_null(a_58));
  t = not_null(f_3);
  return(t);
}
ATerm parse_options_1_0 (ATerm z_102 (ATerm), ATerm t)
{
  ATerm g_3 = NULL,k_56 = NULL,j_3 = NULL;
  if(((g_3 != NULL) && (g_3 != t)))
    _fail(t);
  else
    g_3 = t;
  t = term_s_29;
  t = table_put_0_0(t);
  t = not_null(g_3);
  {
    ATerm d_19 (ATerm t)
    {
      ATerm t_29 = t;
      int u_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_102(t);
          ;
          LocalPopChoice(u_29);
        }
      else
        {
          t = t_29;
          {
            ATerm v_29 = t;
            int w_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(w_29);
              }
            else
              {
                t = v_29;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(d_19, t);
    {
      ATerm e_19 (ATerm t)
      {
        ATerm x_29 = t;
        int y_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_3 = NULL;
            if(((h_3 != NULL) && (h_3 != t)))
              _fail(t);
            else
              h_3 = t;
            {
              ATerm z_29 = t;
              int a_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_e_27;
                  t = get_config_0_0(t);
                  ;
                  LocalPopChoice(a_30);
                }
              else
                {
                  t = z_29;
                  t = option_defined_1_0(Help_0_0, t);
                }
              t = not_null(h_3);
              t = system_usage_0_0(t);
              t = term_h_25;
              t = exit_0_0(t);
            }
            ;
            LocalPopChoice(y_29);
          }
        else
          {
            t = x_29;
            {
              ATerm b_30 = t;
              int c_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_3 = NULL;
                  if(((i_3 != NULL) && (i_3 != t)))
                    _fail(t);
                  else
                    i_3 = t;
                  t = term_n_28;
                  t = get_config_0_0(t);
                  t = not_null(i_3);
                  t = system_about_0_0(t);
                  t = term_h_25;
                  t = exit_0_0(t);
                  ;
                  LocalPopChoice(c_30);
                }
              else
                {
                  t = b_30;
                  {
                    ATerm f_19 (ATerm t)
                    {
                      ATerm g_19 (ATerm t)
                      {
                        if(((k_56 != NULL) && (k_56 != t)))
                          _fail(t);
                        else
                          k_56 = t;
                        return(t);
                      }
                      t = Undefined_1_0(g_19, t);
                      return(t);
                    }
                    t = option_defined_1_0(f_19, t);
                    t = (ATerm) ATmakeAppl(sym__2, term_v_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_56)), term_d_30));
                    t = printnl_0_0(t);
                    t = system_usage_0_0(t);
                    t = term_y_22;
                    t = exit_0_0(t);
                  }
                }
            }
          }
        return(t);
      }
      t = try_1_0(e_19, t);
      if(((j_3 != NULL) && (j_3 != t)))
        _fail(t);
      else
        j_3 = t;
      t = term_s_27;
      t = table_destroy_0_0(t);
      t = not_null(j_3);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_100 (ATerm), ATerm a_101 (ATerm), ATerm b_101 (ATerm), ATerm c_101 (ATerm), ATerm t)
{
  t = parse_options_1_0(z_100, t);
  t = store_options_0_0(t);
  t = b_101(t);
  {
    ATerm e_30 = t;
    int f_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_101, t);
        ;
        LocalPopChoice(f_30);
      }
    else
      {
        t = e_30;
        {
          ATerm g_30 = t;
          int h_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_101(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(h_30);
            }
          else
            {
              t = g_30;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm o_100 (ATerm), ATerm p_100 (ATerm), ATerm q_100 (ATerm), ATerm r_100 (ATerm), ATerm t)
{
  ATerm h_19 (ATerm t)
  {
    ATerm i_30 = t;
    int j_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_100(t);
        ;
        LocalPopChoice(j_30);
      }
    else
      {
        t = i_30;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm i_19 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(o_100, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(h_19, q_100, r_100, i_19, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm i_100 (ATerm), ATerm j_100 (ATerm), ATerm k_100 (ATerm), ATerm t)
{
  ATerm j_19 (ATerm t)
  {
    ATerm k_19 (ATerm t)
    {
      ATerm k_3 = NULL,l_3 = NULL,l_456 = NULL;
      if(((k_3 != NULL) && (k_3 != t)))
        _fail(t);
      else
        k_3 = t;
      if(((l_3 != NULL) && (l_3 != t)))
        _fail(t);
      else
        l_3 = t;
      t = term_q_26;
      t = get_config_0_0(t);
      if(((l_456 != NULL) && (l_456 != t)))
        _fail(t);
      else
        l_456 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_v_22, (ATerm) ATinsert(ATempty, not_null(l_456)));
      t = printnl_0_0(t);
      t = not_null(k_3);
      return(t);
    }
    t = if_verbose2_1_0(k_19, t);
    return(t);
  }
  t = iowrap_4_0(i_100, j_100, k_100, j_19, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm g_100 (ATerm), ATerm h_100 (ATerm), ATerm t)
{
  t = iowrap_3_0(g_100, h_100, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm d_100 (ATerm), ATerm t)
{
  ATerm l_19 (ATerm t)
  {
    t = _2_0(_id, d_100, t);
    return(t);
  }
  t = iowrap_2_0(l_19, _fail, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_1_0(stratego_specification_0_0, t);
  return(t);
}

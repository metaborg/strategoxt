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
ATerm term_v_29;
ATerm term_k_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_p_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_e_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_y_24;
ATerm term_v_24;
ATerm term_s_24;
ATerm term_b_24;
ATerm term_y_23;
ATerm term_w_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_g_23;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_r_22;
ATerm term_k_22;
ATerm term_p_20;
ATerm term_m_19;
void init_constant_terms (void)
{
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Not a strategy-specification: ", 0, ATtrue));
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
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
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
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym__2, term_s_23, term_f_25);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_25);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym__2, term_k_25, term_u_22);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym__2, term_y_25, term_u_22);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
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
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym__2, term_t_27, term_u_27);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym__2, term_l_28, term_u_22);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym__2, term_o_28, term_u_22);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym__2, term_e_27, term_u_22);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(sym__3, term_t_27, term_u_27, (ATerm) ATempty);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Let_2_0 (ATerm a_73 (ATerm), ATerm b_73 (ATerm), ATerm);
ATerm is_int_0_0 (ATerm);
ATerm Scope_2_0 (ATerm k_73 (ATerm), ATerm l_73 (ATerm), ATerm);
ATerm BuildDefault_1_0 (ATerm n_70 (ATerm), ATerm);
ATerm s_15 (ATerm);
ATerm t_15 (ATerm);
ATerm build_term_expression_0_0 (ATerm);
ATerm Build_1_0 (ATerm i_73 (ATerm), ATerm);
ATerm As_2_0 (ATerm h_70 (ATerm), ATerm i_70 (ATerm), ATerm);
ATerm Str_1_0 (ATerm u_69 (ATerm), ATerm);
ATerm is_real_0_0 (ATerm);
ATerm Real_1_0 (ATerm t_69 (ATerm), ATerm);
ATerm Int_1_0 (ATerm s_69 (ATerm), ATerm);
ATerm Wld_0_0 (ATerm);
ATerm u_15 (ATerm);
ATerm v_15 (ATerm);
ATerm match_term_expression_0_0 (ATerm);
ATerm Match_1_0 (ATerm h_73 (ATerm), ATerm);
ATerm Thread_1_0 (ATerm o_74 (ATerm), ATerm);
ATerm All_1_0 (ATerm n_74 (ATerm), ATerm);
ATerm Some_1_0 (ATerm l_74 (ATerm), ATerm);
ATerm One_1_0 (ATerm m_74 (ATerm), ATerm);
ATerm Path_2_0 (ATerm j_74 (ATerm), ATerm k_74 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm g_74 (ATerm), ATerm h_74 (ATerm), ATerm i_74 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm z_72 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm e_73 (ATerm), ATerm f_73 (ATerm), ATerm g_73 (ATerm), ATerm);
ATerm LGChoice_2_0 (ATerm s_73 (ATerm), ATerm t_73 (ATerm), ATerm);
ATerm GChoice_2_0 (ATerm s_72 (ATerm), ATerm t_72 (ATerm), ATerm);
ATerm GuardedLChoice_3_0 (ATerm u_73 (ATerm), ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm q_73 (ATerm), ATerm r_73 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm o_72 (ATerm), ATerm p_72 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm o_73 (ATerm), ATerm p_73 (ATerm), ATerm);
ATerm Not_1_0 (ATerm z_73 (ATerm), ATerm);
ATerm Fail_0_0 (ATerm);
ATerm Id_0_0 (ATerm);
ATerm w_15 (ATerm);
ATerm x_15 (ATerm);
ATerm y_15 (ATerm);
ATerm z_15 (ATerm);
ATerm a_16 (ATerm);
ATerm c_16 (ATerm);
ATerm e_16 (ATerm);
ATerm f_16 (ATerm);
ATerm b_16 (ATerm);
ATerm d_16 (ATerm);
ATerm strategy_expression_0_0 (ATerm);
ATerm g_16 (ATerm);
ATerm vardecs_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm s_75 (ATerm), ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm v_75 (ATerm), ATerm);
ATerm FunType_2_0 (ATerm e_69 (ATerm), ATerm f_69 (ATerm), ATerm);
ATerm Var_1_0 (ATerm q_69 (ATerm), ATerm);
ATerm Op_2_0 (ATerm w_69 (ATerm), ATerm x_69 (ATerm), ATerm);
ATerm ConstType_1_0 (ATerm d_69 (ATerm), ATerm);
ATerm j_16 (ATerm);
ATerm type_expression_0_0 (ATerm);
ATerm VarDec_2_0 (ATerm l_75 (ATerm), ATerm m_75 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm p_75 (ATerm), ATerm q_75 (ATerm), ATerm r_75 (ATerm), ATerm);
ATerm l_16 (ATerm);
ATerm m_16 (ATerm);
ATerm k_16 (ATerm);
ATerm strategy_definition_0_0 (ATerm);
ATerm list_1_0 (ATerm y_89 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm s_68 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm x_68 (ATerm), ATerm);
ATerm q_16 (ATerm);
ATerm r_16 (ATerm);
ATerm p_16 (ATerm);
ATerm stratego_specification_0_0 (ATerm);
ATerm _2_0 (ATerm x_63 (ATerm), ATerm y_63 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm l_90 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm u_16 (ATerm);
ATerm v_16 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm o_103 (ATerm), ATerm);
ATerm fputc_0_0 (ATerm);
ATerm write_in_text_to_stream_0_0 (ATerm);
ATerm y_16 (ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm k_102 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm e_17 (ATerm);
ATerm d_17 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm m_105 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm debug_1_0 (ATerm w_101 (ATerm), ATerm);
ATerm fopen_0_0 (ATerm);
ATerm is_string_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm f_17 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm g_17 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm l_97 (ATerm), ATerm m_97 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm j_17 (ATerm);
ATerm k_17 (ATerm);
ATerm l_17 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm string_to_int_0_0 (ATerm);
ATerm m_17 (ATerm);
ATerm n_17 (ATerm);
ATerm o_17 (ATerm);
ATerm p_17 (ATerm);
ATerm q_17 (ATerm);
ATerm r_17 (ATerm);
ATerm s_17 (ATerm);
ATerm t_17 (ATerm);
ATerm u_17 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm v_17 (ATerm);
ATerm w_17 (ATerm);
ATerm x_17 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm y_17 (ATerm);
ATerm z_17 (ATerm);
ATerm a_18 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm b_18 (ATerm);
ATerm c_18 (ATerm);
ATerm d_18 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm ticks_to_seconds_0_0 (ATerm);
ATerm add_0_0 (ATerm);
ATerm foldr_2_0 (ATerm w_95 (ATerm), ATerm x_95 (ATerm), ATerm);
ATerm crush_2_0 (ATerm p_99 (ATerm), ATerm q_99 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm e_18 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm n_103 (ATerm), ATerm);
ATerm g_18 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm need_help_1_0 (ATerm k_106 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm l_108 (ATerm), ATerm);
ATerm map_1_0 (ATerm u_89 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm j_18 (ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm k_108 (ATerm), ATerm);
ATerm Program_1_0 (ATerm y_81 (ATerm), ATerm);
ATerm o_18 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm z_81 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm f_90 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm k_107 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm j_82 (ATerm), ATerm);
ATerm r_18 (ATerm);
ATerm s_18 (ATerm);
ATerm t_18 (ATerm);
ATerm u_18 (ATerm);
ATerm v_18 (ATerm);
ATerm w_18 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm p_108 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm x_18 (ATerm);
ATerm y_18 (ATerm);
ATerm z_18 (ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm Cons_2_0 (ATerm m_68 (ATerm), ATerm n_68 (ATerm), ATerm);
ATerm Nil_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm b_19 (ATerm);
ATerm parse_options_p__1_0 (ATerm n_108 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm parse_options_1_0 (ATerm m_108 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm m_106 (ATerm), ATerm n_106 (ATerm), ATerm o_106 (ATerm), ATerm p_106 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm b_106 (ATerm), ATerm c_106 (ATerm), ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm);
ATerm k_19 (ATerm);
ATerm j_19 (ATerm);
ATerm iowrap_3_0 (ATerm v_105 (ATerm), ATerm w_105 (ATerm), ATerm x_105 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm t_105 (ATerm), ATerm u_105 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm q_105 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm Let_2_0 (ATerm a_73 (ATerm), ATerm b_73 (ATerm), ATerm t)
{
  ATerm o_3 = NULL,m_3 = NULL,n_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,t_3 = NULL,s_3 = NULL,u_3 = NULL;
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
  if(((t_3 != NULL) && (t_3 != t)))
    _fail(t);
  else
    t_3 = t;
  t = SSLgetAnnotations(not_null(r_3));
  if(((o_3 != NULL) && (o_3 != t)))
    _fail(t);
  else
    o_3 = t;
  t = not_null(m_3);
  t = a_73(t);
  if(((p_3 != NULL) && (p_3 != t)))
    _fail(t);
  else
    p_3 = t;
  t = not_null(n_3);
  t = b_73(t);
  if(((q_3 != NULL) && (q_3 != t)))
    _fail(t);
  else
    q_3 = t;
  if(((u_3 != NULL) && (u_3 != t)))
    _fail(t);
  else
    u_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(p_3), not_null(q_3)), not_null(o_3));
  if(((s_3 != NULL) && (s_3 != t)))
    _fail(t);
  else
    s_3 = t;
  return(t);
}
ATerm is_int_0_0 (ATerm t)
{
  ATerm m_46 = NULL;
  if(((m_46 != NULL) && (m_46 != t)))
    _fail(t);
  else
    m_46 = t;
  t = SSL_is_int(not_null(m_46));
  return(t);
}
ATerm Scope_2_0 (ATerm k_73 (ATerm), ATerm l_73 (ATerm), ATerm t)
{
  ATerm x_3 = NULL,v_3 = NULL,w_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,c_4 = NULL,b_4 = NULL,d_4 = NULL;
  if(((a_4 != NULL) && (a_4 != t)))
    _fail(t);
  else
    a_4 = t;
  if(match_cons(t, sym_Scope_2))
    {
      if(((v_3 != NULL) && (v_3 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_3 = ATgetArgument(t, 0);
      if(((w_3 != NULL) && (w_3 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((c_4 != NULL) && (c_4 != t)))
    _fail(t);
  else
    c_4 = t;
  t = SSLgetAnnotations(not_null(a_4));
  if(((x_3 != NULL) && (x_3 != t)))
    _fail(t);
  else
    x_3 = t;
  t = not_null(v_3);
  t = k_73(t);
  if(((y_3 != NULL) && (y_3 != t)))
    _fail(t);
  else
    y_3 = t;
  t = not_null(w_3);
  t = l_73(t);
  if(((z_3 != NULL) && (z_3 != t)))
    _fail(t);
  else
    z_3 = t;
  if(((d_4 != NULL) && (d_4 != t)))
    _fail(t);
  else
    d_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(y_3), not_null(z_3)), not_null(x_3));
  if(((b_4 != NULL) && (b_4 != t)))
    _fail(t);
  else
    b_4 = t;
  return(t);
}
ATerm BuildDefault_1_0 (ATerm n_70 (ATerm), ATerm t)
{
  ATerm f_4 = NULL,e_4 = NULL,g_4 = NULL,h_4 = NULL,j_4 = NULL,i_4 = NULL,k_4 = NULL;
  if(((h_4 != NULL) && (h_4 != t)))
    _fail(t);
  else
    h_4 = t;
  if(match_cons(t, sym_BuildDefault_1))
    {
      if(((e_4 != NULL) && (e_4 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((j_4 != NULL) && (j_4 != t)))
    _fail(t);
  else
    j_4 = t;
  t = SSLgetAnnotations(not_null(h_4));
  if(((f_4 != NULL) && (f_4 != t)))
    _fail(t);
  else
    f_4 = t;
  t = not_null(e_4);
  t = n_70(t);
  if(((g_4 != NULL) && (g_4 != t)))
    _fail(t);
  else
    g_4 = t;
  if(((k_4 != NULL) && (k_4 != t)))
    _fail(t);
  else
    k_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(g_4)), not_null(f_4));
  if(((i_4 != NULL) && (i_4 != t)))
    _fail(t);
  else
    i_4 = t;
  return(t);
}
ATerm s_15 (ATerm t)
{
  t = list_1_0(build_term_expression_0_0, t);
  return(t);
}
ATerm t_15 (ATerm t)
{
  t = term_m_19;
  return(t);
}
ATerm build_term_expression_0_0 (ATerm t)
{
  ATerm n_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Var_1_0(is_string_0_0, t);
      ;
      LocalPopChoice(o_19);
    }
  else
    {
      t = n_19;
      {
        ATerm p_19 = t;
        int q_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Int_1_0(is_int_0_0, t);
            ;
            LocalPopChoice(q_19);
          }
        else
          {
            t = p_19;
            {
              ATerm r_19 = t;
              int s_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Real_1_0(is_real_0_0, t);
                  ;
                  LocalPopChoice(s_19);
                }
              else
                {
                  t = r_19;
                  {
                    ATerm t_19 = t;
                    int u_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Str_1_0(is_string_0_0, t);
                        ;
                        LocalPopChoice(u_19);
                      }
                    else
                      {
                        t = t_19;
                        {
                          ATerm v_19 = t;
                          int w_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Op_2_0(is_string_0_0, s_15, t);
                              ;
                              LocalPopChoice(w_19);
                            }
                          else
                            {
                              t = v_19;
                              {
                                ATerm x_19 = t;
                                int y_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildDefault_1_0(build_term_expression_0_0, t);
                                    ;
                                    LocalPopChoice(y_19);
                                  }
                                else
                                  {
                                    t = x_19;
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
  return(t);
}
ATerm Build_1_0 (ATerm i_73 (ATerm), ATerm t)
{
  ATerm m_4 = NULL,l_4 = NULL,n_4 = NULL,o_4 = NULL,q_4 = NULL,p_4 = NULL,r_4 = NULL;
  if(((o_4 != NULL) && (o_4 != t)))
    _fail(t);
  else
    o_4 = t;
  if(match_cons(t, sym_Build_1))
    {
      if(((l_4 != NULL) && (l_4 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((q_4 != NULL) && (q_4 != t)))
    _fail(t);
  else
    q_4 = t;
  t = SSLgetAnnotations(not_null(o_4));
  if(((m_4 != NULL) && (m_4 != t)))
    _fail(t);
  else
    m_4 = t;
  t = not_null(l_4);
  t = i_73(t);
  if(((n_4 != NULL) && (n_4 != t)))
    _fail(t);
  else
    n_4 = t;
  if(((r_4 != NULL) && (r_4 != t)))
    _fail(t);
  else
    r_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(n_4)), not_null(m_4));
  if(((p_4 != NULL) && (p_4 != t)))
    _fail(t);
  else
    p_4 = t;
  return(t);
}
ATerm As_2_0 (ATerm h_70 (ATerm), ATerm i_70 (ATerm), ATerm t)
{
  ATerm u_4 = NULL,s_4 = NULL,t_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL,z_4 = NULL,y_4 = NULL,a_5 = NULL;
  if(((x_4 != NULL) && (x_4 != t)))
    _fail(t);
  else
    x_4 = t;
  if(match_cons(t, sym_As_2))
    {
      if(((s_4 != NULL) && (s_4 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_4 = ATgetArgument(t, 0);
      if(((t_4 != NULL) && (t_4 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((z_4 != NULL) && (z_4 != t)))
    _fail(t);
  else
    z_4 = t;
  t = SSLgetAnnotations(not_null(x_4));
  if(((u_4 != NULL) && (u_4 != t)))
    _fail(t);
  else
    u_4 = t;
  t = not_null(s_4);
  t = h_70(t);
  if(((v_4 != NULL) && (v_4 != t)))
    _fail(t);
  else
    v_4 = t;
  t = not_null(t_4);
  t = i_70(t);
  if(((w_4 != NULL) && (w_4 != t)))
    _fail(t);
  else
    w_4 = t;
  if(((a_5 != NULL) && (a_5 != t)))
    _fail(t);
  else
    a_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(v_4), not_null(w_4)), not_null(u_4));
  if(((y_4 != NULL) && (y_4 != t)))
    _fail(t);
  else
    y_4 = t;
  return(t);
}
ATerm Str_1_0 (ATerm u_69 (ATerm), ATerm t)
{
  ATerm c_5 = NULL,b_5 = NULL,d_5 = NULL,e_5 = NULL,g_5 = NULL,f_5 = NULL,h_5 = NULL;
  if(((e_5 != NULL) && (e_5 != t)))
    _fail(t);
  else
    e_5 = t;
  if(match_cons(t, sym_Str_1))
    {
      if(((b_5 != NULL) && (b_5 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((g_5 != NULL) && (g_5 != t)))
    _fail(t);
  else
    g_5 = t;
  t = SSLgetAnnotations(not_null(e_5));
  if(((c_5 != NULL) && (c_5 != t)))
    _fail(t);
  else
    c_5 = t;
  t = not_null(b_5);
  t = u_69(t);
  if(((d_5 != NULL) && (d_5 != t)))
    _fail(t);
  else
    d_5 = t;
  if(((h_5 != NULL) && (h_5 != t)))
    _fail(t);
  else
    h_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(d_5)), not_null(c_5));
  if(((f_5 != NULL) && (f_5 != t)))
    _fail(t);
  else
    f_5 = t;
  return(t);
}
ATerm is_real_0_0 (ATerm t)
{
  ATerm i_48 = NULL;
  if(((i_48 != NULL) && (i_48 != t)))
    _fail(t);
  else
    i_48 = t;
  t = SSL_is_real(not_null(i_48));
  return(t);
}
ATerm Real_1_0 (ATerm t_69 (ATerm), ATerm t)
{
  ATerm j_5 = NULL,i_5 = NULL,k_5 = NULL,l_5 = NULL,n_5 = NULL,m_5 = NULL,o_5 = NULL;
  if(((l_5 != NULL) && (l_5 != t)))
    _fail(t);
  else
    l_5 = t;
  if(match_cons(t, sym_Real_1))
    {
      if(((i_5 != NULL) && (i_5 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((n_5 != NULL) && (n_5 != t)))
    _fail(t);
  else
    n_5 = t;
  t = SSLgetAnnotations(not_null(l_5));
  if(((j_5 != NULL) && (j_5 != t)))
    _fail(t);
  else
    j_5 = t;
  t = not_null(i_5);
  t = t_69(t);
  if(((k_5 != NULL) && (k_5 != t)))
    _fail(t);
  else
    k_5 = t;
  if(((o_5 != NULL) && (o_5 != t)))
    _fail(t);
  else
    o_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(k_5)), not_null(j_5));
  if(((m_5 != NULL) && (m_5 != t)))
    _fail(t);
  else
    m_5 = t;
  return(t);
}
ATerm Int_1_0 (ATerm s_69 (ATerm), ATerm t)
{
  ATerm q_5 = NULL,p_5 = NULL,r_5 = NULL,s_5 = NULL,u_5 = NULL,t_5 = NULL,v_5 = NULL;
  if(((s_5 != NULL) && (s_5 != t)))
    _fail(t);
  else
    s_5 = t;
  if(match_cons(t, sym_Int_1))
    {
      if(((p_5 != NULL) && (p_5 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((u_5 != NULL) && (u_5 != t)))
    _fail(t);
  else
    u_5 = t;
  t = SSLgetAnnotations(not_null(s_5));
  if(((q_5 != NULL) && (q_5 != t)))
    _fail(t);
  else
    q_5 = t;
  t = not_null(p_5);
  t = s_69(t);
  if(((r_5 != NULL) && (r_5 != t)))
    _fail(t);
  else
    r_5 = t;
  if(((v_5 != NULL) && (v_5 != t)))
    _fail(t);
  else
    v_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(r_5)), not_null(q_5));
  if(((t_5 != NULL) && (t_5 != t)))
    _fail(t);
  else
    t_5 = t;
  return(t);
}
ATerm Wld_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm u_15 (ATerm t)
{
  t = list_1_0(match_term_expression_0_0, t);
  return(t);
}
ATerm v_15 (ATerm t)
{
  t = term_m_19;
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
  return(t);
}
ATerm Match_1_0 (ATerm h_73 (ATerm), ATerm t)
{
  ATerm x_5 = NULL,w_5 = NULL,y_5 = NULL,z_5 = NULL,b_6 = NULL,a_6 = NULL,c_6 = NULL;
  if(((z_5 != NULL) && (z_5 != t)))
    _fail(t);
  else
    z_5 = t;
  if(match_cons(t, sym_Match_1))
    {
      if(((w_5 != NULL) && (w_5 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((b_6 != NULL) && (b_6 != t)))
    _fail(t);
  else
    b_6 = t;
  t = SSLgetAnnotations(not_null(z_5));
  if(((x_5 != NULL) && (x_5 != t)))
    _fail(t);
  else
    x_5 = t;
  t = not_null(w_5);
  t = h_73(t);
  if(((y_5 != NULL) && (y_5 != t)))
    _fail(t);
  else
    y_5 = t;
  if(((c_6 != NULL) && (c_6 != t)))
    _fail(t);
  else
    c_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(y_5)), not_null(x_5));
  if(((a_6 != NULL) && (a_6 != t)))
    _fail(t);
  else
    a_6 = t;
  return(t);
}
ATerm Thread_1_0 (ATerm o_74 (ATerm), ATerm t)
{
  ATerm e_6 = NULL,d_6 = NULL,f_6 = NULL,g_6 = NULL,i_6 = NULL,h_6 = NULL,j_6 = NULL;
  if(((g_6 != NULL) && (g_6 != t)))
    _fail(t);
  else
    g_6 = t;
  if(match_cons(t, sym_Thread_1))
    {
      if(((d_6 != NULL) && (d_6 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((i_6 != NULL) && (i_6 != t)))
    _fail(t);
  else
    i_6 = t;
  t = SSLgetAnnotations(not_null(g_6));
  if(((e_6 != NULL) && (e_6 != t)))
    _fail(t);
  else
    e_6 = t;
  t = not_null(d_6);
  t = o_74(t);
  if(((f_6 != NULL) && (f_6 != t)))
    _fail(t);
  else
    f_6 = t;
  if(((j_6 != NULL) && (j_6 != t)))
    _fail(t);
  else
    j_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, not_null(f_6)), not_null(e_6));
  if(((h_6 != NULL) && (h_6 != t)))
    _fail(t);
  else
    h_6 = t;
  return(t);
}
ATerm All_1_0 (ATerm n_74 (ATerm), ATerm t)
{
  ATerm l_6 = NULL,k_6 = NULL,m_6 = NULL,n_6 = NULL,p_6 = NULL,o_6 = NULL,q_6 = NULL;
  if(((n_6 != NULL) && (n_6 != t)))
    _fail(t);
  else
    n_6 = t;
  if(match_cons(t, sym_All_1))
    {
      if(((k_6 != NULL) && (k_6 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((p_6 != NULL) && (p_6 != t)))
    _fail(t);
  else
    p_6 = t;
  t = SSLgetAnnotations(not_null(n_6));
  if(((l_6 != NULL) && (l_6 != t)))
    _fail(t);
  else
    l_6 = t;
  t = not_null(k_6);
  t = n_74(t);
  if(((m_6 != NULL) && (m_6 != t)))
    _fail(t);
  else
    m_6 = t;
  if(((q_6 != NULL) && (q_6 != t)))
    _fail(t);
  else
    q_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, not_null(m_6)), not_null(l_6));
  if(((o_6 != NULL) && (o_6 != t)))
    _fail(t);
  else
    o_6 = t;
  return(t);
}
ATerm Some_1_0 (ATerm l_74 (ATerm), ATerm t)
{
  ATerm s_6 = NULL,r_6 = NULL,t_6 = NULL,u_6 = NULL,w_6 = NULL,v_6 = NULL,x_6 = NULL;
  if(((u_6 != NULL) && (u_6 != t)))
    _fail(t);
  else
    u_6 = t;
  if(match_cons(t, sym_Some_1))
    {
      if(((r_6 != NULL) && (r_6 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((w_6 != NULL) && (w_6 != t)))
    _fail(t);
  else
    w_6 = t;
  t = SSLgetAnnotations(not_null(u_6));
  if(((s_6 != NULL) && (s_6 != t)))
    _fail(t);
  else
    s_6 = t;
  t = not_null(r_6);
  t = l_74(t);
  if(((t_6 != NULL) && (t_6 != t)))
    _fail(t);
  else
    t_6 = t;
  if(((x_6 != NULL) && (x_6 != t)))
    _fail(t);
  else
    x_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(t_6)), not_null(s_6));
  if(((v_6 != NULL) && (v_6 != t)))
    _fail(t);
  else
    v_6 = t;
  return(t);
}
ATerm One_1_0 (ATerm m_74 (ATerm), ATerm t)
{
  ATerm z_6 = NULL,y_6 = NULL,a_7 = NULL,b_7 = NULL,d_7 = NULL,c_7 = NULL,e_7 = NULL;
  if(((b_7 != NULL) && (b_7 != t)))
    _fail(t);
  else
    b_7 = t;
  if(match_cons(t, sym_One_1))
    {
      if(((y_6 != NULL) && (y_6 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((d_7 != NULL) && (d_7 != t)))
    _fail(t);
  else
    d_7 = t;
  t = SSLgetAnnotations(not_null(b_7));
  if(((z_6 != NULL) && (z_6 != t)))
    _fail(t);
  else
    z_6 = t;
  t = not_null(y_6);
  t = m_74(t);
  if(((a_7 != NULL) && (a_7 != t)))
    _fail(t);
  else
    a_7 = t;
  if(((e_7 != NULL) && (e_7 != t)))
    _fail(t);
  else
    e_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_One_1, not_null(a_7)), not_null(z_6));
  if(((c_7 != NULL) && (c_7 != t)))
    _fail(t);
  else
    c_7 = t;
  return(t);
}
ATerm Path_2_0 (ATerm j_74 (ATerm), ATerm k_74 (ATerm), ATerm t)
{
  ATerm h_7 = NULL,f_7 = NULL,g_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL,m_7 = NULL,l_7 = NULL,n_7 = NULL;
  if(((k_7 != NULL) && (k_7 != t)))
    _fail(t);
  else
    k_7 = t;
  if(match_cons(t, sym_Path_2))
    {
      if(((f_7 != NULL) && (f_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_7 = ATgetArgument(t, 0);
      if(((g_7 != NULL) && (g_7 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((m_7 != NULL) && (m_7 != t)))
    _fail(t);
  else
    m_7 = t;
  t = SSLgetAnnotations(not_null(k_7));
  if(((h_7 != NULL) && (h_7 != t)))
    _fail(t);
  else
    h_7 = t;
  t = not_null(f_7);
  t = j_74(t);
  if(((i_7 != NULL) && (i_7 != t)))
    _fail(t);
  else
    i_7 = t;
  t = not_null(g_7);
  t = k_74(t);
  if(((j_7 != NULL) && (j_7 != t)))
    _fail(t);
  else
    j_7 = t;
  if(((n_7 != NULL) && (n_7 != t)))
    _fail(t);
  else
    n_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Path_2, not_null(i_7), not_null(j_7)), not_null(h_7));
  if(((l_7 != NULL) && (l_7 != t)))
    _fail(t);
  else
    l_7 = t;
  return(t);
}
ATerm Rec_2_0 (ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm t)
{
  ATerm q_7 = NULL,o_7 = NULL,p_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL,v_7 = NULL,u_7 = NULL,w_7 = NULL;
  if(((t_7 != NULL) && (t_7 != t)))
    _fail(t);
  else
    t_7 = t;
  if(match_cons(t, sym_Rec_2))
    {
      if(((o_7 != NULL) && (o_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_7 = ATgetArgument(t, 0);
      if(((p_7 != NULL) && (p_7 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((v_7 != NULL) && (v_7 != t)))
    _fail(t);
  else
    v_7 = t;
  t = SSLgetAnnotations(not_null(t_7));
  if(((q_7 != NULL) && (q_7 != t)))
    _fail(t);
  else
    q_7 = t;
  t = not_null(o_7);
  t = x_73(t);
  if(((r_7 != NULL) && (r_7 != t)))
    _fail(t);
  else
    r_7 = t;
  t = not_null(p_7);
  t = y_73(t);
  if(((s_7 != NULL) && (s_7 != t)))
    _fail(t);
  else
    s_7 = t;
  if(((w_7 != NULL) && (w_7 != t)))
    _fail(t);
  else
    w_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(r_7), not_null(s_7)), not_null(q_7));
  if(((u_7 != NULL) && (u_7 != t)))
    _fail(t);
  else
    u_7 = t;
  return(t);
}
ATerm PrimT_3_0 (ATerm g_74 (ATerm), ATerm h_74 (ATerm), ATerm i_74 (ATerm), ATerm t)
{
  ATerm a_8 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL,g_8 = NULL,f_8 = NULL,h_8 = NULL;
  if(((e_8 != NULL) && (e_8 != t)))
    _fail(t);
  else
    e_8 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      if(((x_7 != NULL) && (x_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_7 = ATgetArgument(t, 0);
      if(((y_7 != NULL) && (y_7 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_7 = ATgetArgument(t, 1);
      if(((z_7 != NULL) && (z_7 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        z_7 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((g_8 != NULL) && (g_8 != t)))
    _fail(t);
  else
    g_8 = t;
  t = SSLgetAnnotations(not_null(e_8));
  if(((a_8 != NULL) && (a_8 != t)))
    _fail(t);
  else
    a_8 = t;
  t = not_null(x_7);
  t = g_74(t);
  if(((b_8 != NULL) && (b_8 != t)))
    _fail(t);
  else
    b_8 = t;
  t = not_null(y_7);
  t = h_74(t);
  if(((c_8 != NULL) && (c_8 != t)))
    _fail(t);
  else
    c_8 = t;
  t = not_null(z_7);
  t = i_74(t);
  if(((d_8 != NULL) && (d_8 != t)))
    _fail(t);
  else
    d_8 = t;
  if(((h_8 != NULL) && (h_8 != t)))
    _fail(t);
  else
    h_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(b_8), not_null(c_8), not_null(d_8)), not_null(a_8));
  if(((f_8 != NULL) && (f_8 != t)))
    _fail(t);
  else
    f_8 = t;
  return(t);
}
ATerm SVar_1_0 (ATerm z_72 (ATerm), ATerm t)
{
  ATerm j_8 = NULL,i_8 = NULL,k_8 = NULL,l_8 = NULL,n_8 = NULL,m_8 = NULL,o_8 = NULL;
  if(((l_8 != NULL) && (l_8 != t)))
    _fail(t);
  else
    l_8 = t;
  if(match_cons(t, sym_SVar_1))
    {
      if(((i_8 != NULL) && (i_8 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((n_8 != NULL) && (n_8 != t)))
    _fail(t);
  else
    n_8 = t;
  t = SSLgetAnnotations(not_null(l_8));
  if(((j_8 != NULL) && (j_8 != t)))
    _fail(t);
  else
    j_8 = t;
  t = not_null(i_8);
  t = z_72(t);
  if(((k_8 != NULL) && (k_8 != t)))
    _fail(t);
  else
    k_8 = t;
  if(((o_8 != NULL) && (o_8 != t)))
    _fail(t);
  else
    o_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(k_8)), not_null(j_8));
  if(((m_8 != NULL) && (m_8 != t)))
    _fail(t);
  else
    m_8 = t;
  return(t);
}
ATerm CallT_3_0 (ATerm e_73 (ATerm), ATerm f_73 (ATerm), ATerm g_73 (ATerm), ATerm t)
{
  ATerm s_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL,y_8 = NULL,x_8 = NULL,z_8 = NULL;
  if(((w_8 != NULL) && (w_8 != t)))
    _fail(t);
  else
    w_8 = t;
  if(match_cons(t, sym_CallT_3))
    {
      if(((p_8 != NULL) && (p_8 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_8 = ATgetArgument(t, 0);
      if(((q_8 != NULL) && (q_8 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_8 = ATgetArgument(t, 1);
      if(((r_8 != NULL) && (r_8 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        r_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((y_8 != NULL) && (y_8 != t)))
    _fail(t);
  else
    y_8 = t;
  t = SSLgetAnnotations(not_null(w_8));
  if(((s_8 != NULL) && (s_8 != t)))
    _fail(t);
  else
    s_8 = t;
  t = not_null(p_8);
  t = e_73(t);
  if(((t_8 != NULL) && (t_8 != t)))
    _fail(t);
  else
    t_8 = t;
  t = not_null(q_8);
  t = f_73(t);
  if(((u_8 != NULL) && (u_8 != t)))
    _fail(t);
  else
    u_8 = t;
  t = not_null(r_8);
  t = g_73(t);
  if(((v_8 != NULL) && (v_8 != t)))
    _fail(t);
  else
    v_8 = t;
  if(((z_8 != NULL) && (z_8 != t)))
    _fail(t);
  else
    z_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, not_null(t_8), not_null(u_8), not_null(v_8)), not_null(s_8));
  if(((x_8 != NULL) && (x_8 != t)))
    _fail(t);
  else
    x_8 = t;
  return(t);
}
ATerm LGChoice_2_0 (ATerm s_73 (ATerm), ATerm t_73 (ATerm), ATerm t)
{
  ATerm c_9 = NULL,a_9 = NULL,b_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL,h_9 = NULL,g_9 = NULL,i_9 = NULL;
  if(((f_9 != NULL) && (f_9 != t)))
    _fail(t);
  else
    f_9 = t;
  if(match_cons(t, sym_LGChoice_2))
    {
      if(((a_9 != NULL) && (a_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_9 = ATgetArgument(t, 0);
      if(((b_9 != NULL) && (b_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((h_9 != NULL) && (h_9 != t)))
    _fail(t);
  else
    h_9 = t;
  t = SSLgetAnnotations(not_null(f_9));
  if(((c_9 != NULL) && (c_9 != t)))
    _fail(t);
  else
    c_9 = t;
  t = not_null(a_9);
  t = s_73(t);
  if(((d_9 != NULL) && (d_9 != t)))
    _fail(t);
  else
    d_9 = t;
  t = not_null(b_9);
  t = t_73(t);
  if(((e_9 != NULL) && (e_9 != t)))
    _fail(t);
  else
    e_9 = t;
  if(((i_9 != NULL) && (i_9 != t)))
    _fail(t);
  else
    i_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, not_null(d_9), not_null(e_9)), not_null(c_9));
  if(((g_9 != NULL) && (g_9 != t)))
    _fail(t);
  else
    g_9 = t;
  return(t);
}
ATerm GChoice_2_0 (ATerm s_72 (ATerm), ATerm t_72 (ATerm), ATerm t)
{
  ATerm l_9 = NULL,j_9 = NULL,k_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL,q_9 = NULL,p_9 = NULL,r_9 = NULL;
  if(((o_9 != NULL) && (o_9 != t)))
    _fail(t);
  else
    o_9 = t;
  if(match_cons(t, sym_GChoice_2))
    {
      if(((j_9 != NULL) && (j_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_9 = ATgetArgument(t, 0);
      if(((k_9 != NULL) && (k_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((q_9 != NULL) && (q_9 != t)))
    _fail(t);
  else
    q_9 = t;
  t = SSLgetAnnotations(not_null(o_9));
  if(((l_9 != NULL) && (l_9 != t)))
    _fail(t);
  else
    l_9 = t;
  t = not_null(j_9);
  t = s_72(t);
  if(((m_9 != NULL) && (m_9 != t)))
    _fail(t);
  else
    m_9 = t;
  t = not_null(k_9);
  t = t_72(t);
  if(((n_9 != NULL) && (n_9 != t)))
    _fail(t);
  else
    n_9 = t;
  if(((r_9 != NULL) && (r_9 != t)))
    _fail(t);
  else
    r_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, not_null(m_9), not_null(n_9)), not_null(l_9));
  if(((p_9 != NULL) && (p_9 != t)))
    _fail(t);
  else
    p_9 = t;
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm u_73 (ATerm), ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm t)
{
  ATerm v_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,b_10 = NULL,a_10 = NULL,c_10 = NULL;
  if(((z_9 != NULL) && (z_9 != t)))
    _fail(t);
  else
    z_9 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      if(((s_9 != NULL) && (s_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_9 = ATgetArgument(t, 0);
      if(((t_9 != NULL) && (t_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_9 = ATgetArgument(t, 1);
      if(((u_9 != NULL) && (u_9 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        u_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((b_10 != NULL) && (b_10 != t)))
    _fail(t);
  else
    b_10 = t;
  t = SSLgetAnnotations(not_null(z_9));
  if(((v_9 != NULL) && (v_9 != t)))
    _fail(t);
  else
    v_9 = t;
  t = not_null(s_9);
  t = u_73(t);
  if(((w_9 != NULL) && (w_9 != t)))
    _fail(t);
  else
    w_9 = t;
  t = not_null(t_9);
  t = v_73(t);
  if(((x_9 != NULL) && (x_9 != t)))
    _fail(t);
  else
    x_9 = t;
  t = not_null(u_9);
  t = w_73(t);
  if(((y_9 != NULL) && (y_9 != t)))
    _fail(t);
  else
    y_9 = t;
  if(((c_10 != NULL) && (c_10 != t)))
    _fail(t);
  else
    c_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(w_9), not_null(x_9), not_null(y_9)), not_null(v_9));
  if(((a_10 != NULL) && (a_10 != t)))
    _fail(t);
  else
    a_10 = t;
  return(t);
}
ATerm LChoice_2_0 (ATerm q_73 (ATerm), ATerm r_73 (ATerm), ATerm t)
{
  ATerm f_10 = NULL,d_10 = NULL,e_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,k_10 = NULL,j_10 = NULL,l_10 = NULL;
  if(((i_10 != NULL) && (i_10 != t)))
    _fail(t);
  else
    i_10 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      if(((d_10 != NULL) && (d_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_10 = ATgetArgument(t, 0);
      if(((e_10 != NULL) && (e_10 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((k_10 != NULL) && (k_10 != t)))
    _fail(t);
  else
    k_10 = t;
  t = SSLgetAnnotations(not_null(i_10));
  if(((f_10 != NULL) && (f_10 != t)))
    _fail(t);
  else
    f_10 = t;
  t = not_null(d_10);
  t = q_73(t);
  if(((g_10 != NULL) && (g_10 != t)))
    _fail(t);
  else
    g_10 = t;
  t = not_null(e_10);
  t = r_73(t);
  if(((h_10 != NULL) && (h_10 != t)))
    _fail(t);
  else
    h_10 = t;
  if(((l_10 != NULL) && (l_10 != t)))
    _fail(t);
  else
    l_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(g_10), not_null(h_10)), not_null(f_10));
  if(((j_10 != NULL) && (j_10 != t)))
    _fail(t);
  else
    j_10 = t;
  return(t);
}
ATerm Choice_2_0 (ATerm o_72 (ATerm), ATerm p_72 (ATerm), ATerm t)
{
  ATerm o_10 = NULL,m_10 = NULL,n_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,t_10 = NULL,s_10 = NULL,u_10 = NULL;
  if(((r_10 != NULL) && (r_10 != t)))
    _fail(t);
  else
    r_10 = t;
  if(match_cons(t, sym_Choice_2))
    {
      if(((m_10 != NULL) && (m_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_10 = ATgetArgument(t, 0);
      if(((n_10 != NULL) && (n_10 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((t_10 != NULL) && (t_10 != t)))
    _fail(t);
  else
    t_10 = t;
  t = SSLgetAnnotations(not_null(r_10));
  if(((o_10 != NULL) && (o_10 != t)))
    _fail(t);
  else
    o_10 = t;
  t = not_null(m_10);
  t = o_72(t);
  if(((p_10 != NULL) && (p_10 != t)))
    _fail(t);
  else
    p_10 = t;
  t = not_null(n_10);
  t = p_72(t);
  if(((q_10 != NULL) && (q_10 != t)))
    _fail(t);
  else
    q_10 = t;
  if(((u_10 != NULL) && (u_10 != t)))
    _fail(t);
  else
    u_10 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(p_10), not_null(q_10)), not_null(o_10));
  if(((s_10 != NULL) && (s_10 != t)))
    _fail(t);
  else
    s_10 = t;
  return(t);
}
ATerm Seq_2_0 (ATerm o_73 (ATerm), ATerm p_73 (ATerm), ATerm t)
{
  ATerm x_10 = NULL,v_10 = NULL,w_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,c_11 = NULL,b_11 = NULL,d_11 = NULL;
  if(((a_11 != NULL) && (a_11 != t)))
    _fail(t);
  else
    a_11 = t;
  if(match_cons(t, sym_Seq_2))
    {
      if(((v_10 != NULL) && (v_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_10 = ATgetArgument(t, 0);
      if(((w_10 != NULL) && (w_10 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((c_11 != NULL) && (c_11 != t)))
    _fail(t);
  else
    c_11 = t;
  t = SSLgetAnnotations(not_null(a_11));
  if(((x_10 != NULL) && (x_10 != t)))
    _fail(t);
  else
    x_10 = t;
  t = not_null(v_10);
  t = o_73(t);
  if(((y_10 != NULL) && (y_10 != t)))
    _fail(t);
  else
    y_10 = t;
  t = not_null(w_10);
  t = p_73(t);
  if(((z_10 != NULL) && (z_10 != t)))
    _fail(t);
  else
    z_10 = t;
  if(((d_11 != NULL) && (d_11 != t)))
    _fail(t);
  else
    d_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(y_10), not_null(z_10)), not_null(x_10));
  if(((b_11 != NULL) && (b_11 != t)))
    _fail(t);
  else
    b_11 = t;
  return(t);
}
ATerm Not_1_0 (ATerm z_73 (ATerm), ATerm t)
{
  ATerm f_11 = NULL,e_11 = NULL,g_11 = NULL,h_11 = NULL,j_11 = NULL,i_11 = NULL,k_11 = NULL;
  if(((h_11 != NULL) && (h_11 != t)))
    _fail(t);
  else
    h_11 = t;
  if(match_cons(t, sym_Not_1))
    {
      if(((e_11 != NULL) && (e_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((j_11 != NULL) && (j_11 != t)))
    _fail(t);
  else
    j_11 = t;
  t = SSLgetAnnotations(not_null(h_11));
  if(((f_11 != NULL) && (f_11 != t)))
    _fail(t);
  else
    f_11 = t;
  t = not_null(e_11);
  t = z_73(t);
  if(((g_11 != NULL) && (g_11 != t)))
    _fail(t);
  else
    g_11 = t;
  if(((k_11 != NULL) && (k_11 != t)))
    _fail(t);
  else
    k_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, not_null(g_11)), not_null(f_11));
  if(((i_11 != NULL) && (i_11 != t)))
    _fail(t);
  else
    i_11 = t;
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
ATerm c_16 (ATerm t)
{
  ATerm n_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(o_20);
    }
  else
    {
      t = n_20;
      t = list_1_0(is_int_0_0, t);
    }
  return(t);
}
ATerm e_16 (ATerm t)
{
  t = SDefT_4_0(is_string_0_0, vardecs_0_0, vardecs_0_0, strategy_expression_0_0, t);
  return(t);
}
ATerm f_16 (ATerm t)
{
  t = term_p_20;
  return(t);
}
ATerm b_16 (ATerm t)
{
  t = list_1_0(c_16, t);
  return(t);
}
ATerm d_16 (ATerm t)
{
  t = list_1_0(e_16, t);
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm q_20 = t;
  int r_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0_0(t);
      ;
      LocalPopChoice(r_20);
    }
  else
    {
      t = q_20;
      {
        ATerm s_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fail_0_0(t);
            ;
            LocalPopChoice(t_20);
          }
        else
          {
            t = s_20;
            {
              ATerm u_20 = t;
              int v_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Not_1_0(strategy_expression_0_0, t);
                  ;
                  LocalPopChoice(v_20);
                }
              else
                {
                  t = u_20;
                  {
                    ATerm w_20 = t;
                    int x_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Seq_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                        ;
                        LocalPopChoice(x_20);
                      }
                    else
                      {
                        t = w_20;
                        {
                          ATerm y_20 = t;
                          int z_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Choice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                              ;
                              LocalPopChoice(z_20);
                            }
                          else
                            {
                              t = y_20;
                              {
                                ATerm a_21 = t;
                                int b_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = LChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
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
                                          t = GuardedLChoice_3_0(strategy_expression_0_0, strategy_expression_0_0, strategy_expression_0_0, t);
                                          ;
                                          LocalPopChoice(d_21);
                                        }
                                      else
                                        {
                                          t = c_21;
                                          {
                                            ATerm e_21 = t;
                                            int f_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = GChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                                ;
                                                LocalPopChoice(f_21);
                                              }
                                            else
                                              {
                                                t = e_21;
                                                {
                                                  ATerm g_21 = t;
                                                  int h_21 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = LGChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                                      ;
                                                      LocalPopChoice(h_21);
                                                    }
                                                  else
                                                    {
                                                      t = g_21;
                                                      {
                                                        ATerm i_21 = t;
                                                        int j_21 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = CallT_3_0(w_15, x_15, y_15, t);
                                                            ;
                                                            LocalPopChoice(j_21);
                                                          }
                                                        else
                                                          {
                                                            t = i_21;
                                                            {
                                                              ATerm k_21 = t;
                                                              int l_21 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = PrimT_3_0(is_string_0_0, z_15, a_16, t);
                                                                  ;
                                                                  LocalPopChoice(l_21);
                                                                }
                                                              else
                                                                {
                                                                  t = k_21;
                                                                  {
                                                                    ATerm m_21 = t;
                                                                    int n_21 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2_0(is_string_0_0, strategy_expression_0_0, t);
                                                                        ;
                                                                        LocalPopChoice(n_21);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = m_21;
                                                                        {
                                                                          ATerm o_21 = t;
                                                                          int p_21 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Path_2_0(is_int_0_0, strategy_expression_0_0, t);
                                                                              ;
                                                                              LocalPopChoice(p_21);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = o_21;
                                                                              {
                                                                                ATerm q_21 = t;
                                                                                int r_21 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = One_1_0(strategy_expression_0_0, t);
                                                                                    ;
                                                                                    LocalPopChoice(r_21);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = q_21;
                                                                                    {
                                                                                      ATerm s_21 = t;
                                                                                      int t_21 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = Some_1_0(strategy_expression_0_0, t);
                                                                                          ;
                                                                                          LocalPopChoice(t_21);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = s_21;
                                                                                          {
                                                                                            ATerm u_21 = t;
                                                                                            int v_21 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = All_1_0(strategy_expression_0_0, t);
                                                                                                ;
                                                                                                LocalPopChoice(v_21);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = u_21;
                                                                                                {
                                                                                                  ATerm w_21 = t;
                                                                                                  int x_21 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = Thread_1_0(strategy_expression_0_0, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(x_21);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = w_21;
                                                                                                      {
                                                                                                        ATerm y_21 = t;
                                                                                                        int z_21 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Match_1_0(match_term_expression_0_0, t);
                                                                                                            ;
                                                                                                            LocalPopChoice(z_21);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = y_21;
                                                                                                            {
                                                                                                              ATerm a_22 = t;
                                                                                                              int b_22 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Build_1_0(build_term_expression_0_0, t);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(b_22);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = a_22;
                                                                                                                  {
                                                                                                                    ATerm c_22 = t;
                                                                                                                    int d_22 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Scope_2_0(b_16, strategy_expression_0_0, t);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(d_22);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = c_22;
                                                                                                                        {
                                                                                                                          ATerm e_22 = t;
                                                                                                                          int f_22 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = Let_2_0(d_16, strategy_expression_0_0, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(f_22);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = e_22;
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
  return(t);
}
ATerm g_16 (ATerm t)
{
  t = VarDec_2_0(is_string_0_0, type_expression_0_0, t);
  return(t);
}
ATerm vardecs_0_0 (ATerm t)
{
  t = list_1_0(g_16, t);
  return(t);
}
ATerm SDefT_4_0 (ATerm s_75 (ATerm), ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm v_75 (ATerm), ATerm t)
{
  ATerm p_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,w_11 = NULL,v_11 = NULL,x_11 = NULL;
  if(((u_11 != NULL) && (u_11 != t)))
    _fail(t);
  else
    u_11 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      if(((l_11 != NULL) && (l_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_11 = ATgetArgument(t, 0);
      if(((m_11 != NULL) && (m_11 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_11 = ATgetArgument(t, 1);
      if(((n_11 != NULL) && (n_11 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        n_11 = ATgetArgument(t, 2);
      if(((o_11 != NULL) && (o_11 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        o_11 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  if(((w_11 != NULL) && (w_11 != t)))
    _fail(t);
  else
    w_11 = t;
  t = SSLgetAnnotations(not_null(u_11));
  if(((p_11 != NULL) && (p_11 != t)))
    _fail(t);
  else
    p_11 = t;
  t = not_null(l_11);
  t = s_75(t);
  if(((q_11 != NULL) && (q_11 != t)))
    _fail(t);
  else
    q_11 = t;
  t = not_null(m_11);
  t = t_75(t);
  if(((r_11 != NULL) && (r_11 != t)))
    _fail(t);
  else
    r_11 = t;
  t = not_null(n_11);
  t = u_75(t);
  if(((s_11 != NULL) && (s_11 != t)))
    _fail(t);
  else
    s_11 = t;
  t = not_null(o_11);
  t = v_75(t);
  if(((t_11 != NULL) && (t_11 != t)))
    _fail(t);
  else
    t_11 = t;
  if(((x_11 != NULL) && (x_11 != t)))
    _fail(t);
  else
    x_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(q_11), not_null(r_11), not_null(s_11), not_null(t_11)), not_null(p_11));
  if(((v_11 != NULL) && (v_11 != t)))
    _fail(t);
  else
    v_11 = t;
  return(t);
}
ATerm FunType_2_0 (ATerm e_69 (ATerm), ATerm f_69 (ATerm), ATerm t)
{
  ATerm a_12 = NULL,y_11 = NULL,z_11 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,f_12 = NULL,e_12 = NULL,g_12 = NULL;
  if(((d_12 != NULL) && (d_12 != t)))
    _fail(t);
  else
    d_12 = t;
  if(match_cons(t, sym_FunType_2))
    {
      if(((y_11 != NULL) && (y_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_11 = ATgetArgument(t, 0);
      if(((z_11 != NULL) && (z_11 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((f_12 != NULL) && (f_12 != t)))
    _fail(t);
  else
    f_12 = t;
  t = SSLgetAnnotations(not_null(d_12));
  if(((a_12 != NULL) && (a_12 != t)))
    _fail(t);
  else
    a_12 = t;
  t = not_null(y_11);
  t = e_69(t);
  if(((b_12 != NULL) && (b_12 != t)))
    _fail(t);
  else
    b_12 = t;
  t = not_null(z_11);
  t = f_69(t);
  if(((c_12 != NULL) && (c_12 != t)))
    _fail(t);
  else
    c_12 = t;
  if(((g_12 != NULL) && (g_12 != t)))
    _fail(t);
  else
    g_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FunType_2, not_null(b_12), not_null(c_12)), not_null(a_12));
  if(((e_12 != NULL) && (e_12 != t)))
    _fail(t);
  else
    e_12 = t;
  return(t);
}
ATerm Var_1_0 (ATerm q_69 (ATerm), ATerm t)
{
  ATerm i_12 = NULL,h_12 = NULL,j_12 = NULL,k_12 = NULL,m_12 = NULL,l_12 = NULL,n_12 = NULL;
  if(((k_12 != NULL) && (k_12 != t)))
    _fail(t);
  else
    k_12 = t;
  if(match_cons(t, sym_Var_1))
    {
      if(((h_12 != NULL) && (h_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((m_12 != NULL) && (m_12 != t)))
    _fail(t);
  else
    m_12 = t;
  t = SSLgetAnnotations(not_null(k_12));
  if(((i_12 != NULL) && (i_12 != t)))
    _fail(t);
  else
    i_12 = t;
  t = not_null(h_12);
  t = q_69(t);
  if(((j_12 != NULL) && (j_12 != t)))
    _fail(t);
  else
    j_12 = t;
  if(((n_12 != NULL) && (n_12 != t)))
    _fail(t);
  else
    n_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(j_12)), not_null(i_12));
  if(((l_12 != NULL) && (l_12 != t)))
    _fail(t);
  else
    l_12 = t;
  return(t);
}
ATerm Op_2_0 (ATerm w_69 (ATerm), ATerm x_69 (ATerm), ATerm t)
{
  ATerm q_12 = NULL,o_12 = NULL,p_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,v_12 = NULL,u_12 = NULL,w_12 = NULL;
  if(((t_12 != NULL) && (t_12 != t)))
    _fail(t);
  else
    t_12 = t;
  if(match_cons(t, sym_Op_2))
    {
      if(((o_12 != NULL) && (o_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_12 = ATgetArgument(t, 0);
      if(((p_12 != NULL) && (p_12 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((v_12 != NULL) && (v_12 != t)))
    _fail(t);
  else
    v_12 = t;
  t = SSLgetAnnotations(not_null(t_12));
  if(((q_12 != NULL) && (q_12 != t)))
    _fail(t);
  else
    q_12 = t;
  t = not_null(o_12);
  t = w_69(t);
  if(((r_12 != NULL) && (r_12 != t)))
    _fail(t);
  else
    r_12 = t;
  t = not_null(p_12);
  t = x_69(t);
  if(((s_12 != NULL) && (s_12 != t)))
    _fail(t);
  else
    s_12 = t;
  if(((w_12 != NULL) && (w_12 != t)))
    _fail(t);
  else
    w_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(r_12), not_null(s_12)), not_null(q_12));
  if(((u_12 != NULL) && (u_12 != t)))
    _fail(t);
  else
    u_12 = t;
  return(t);
}
ATerm ConstType_1_0 (ATerm d_69 (ATerm), ATerm t)
{
  ATerm y_12 = NULL,x_12 = NULL,z_12 = NULL,a_13 = NULL,c_13 = NULL,b_13 = NULL,d_13 = NULL;
  if(((a_13 != NULL) && (a_13 != t)))
    _fail(t);
  else
    a_13 = t;
  if(match_cons(t, sym_ConstType_1))
    {
      if(((x_12 != NULL) && (x_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((c_13 != NULL) && (c_13 != t)))
    _fail(t);
  else
    c_13 = t;
  t = SSLgetAnnotations(not_null(a_13));
  if(((y_12 != NULL) && (y_12 != t)))
    _fail(t);
  else
    y_12 = t;
  t = not_null(x_12);
  t = d_69(t);
  if(((z_12 != NULL) && (z_12 != t)))
    _fail(t);
  else
    z_12 = t;
  if(((d_13 != NULL) && (d_13 != t)))
    _fail(t);
  else
    d_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_ConstType_1, not_null(z_12)), not_null(y_12));
  if(((b_13 != NULL) && (b_13 != t)))
    _fail(t);
  else
    b_13 = t;
  return(t);
}
ATerm j_16 (ATerm t)
{
  t = list_1_0(type_expression_0_0, t);
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
      t = FunType_2_0(j_16, type_expression_0_0, t);
    }
  return(t);
}
ATerm VarDec_2_0 (ATerm l_75 (ATerm), ATerm m_75 (ATerm), ATerm t)
{
  ATerm g_13 = NULL,e_13 = NULL,f_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,l_13 = NULL,k_13 = NULL,m_13 = NULL;
  if(((j_13 != NULL) && (j_13 != t)))
    _fail(t);
  else
    j_13 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      if(((e_13 != NULL) && (e_13 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_13 = ATgetArgument(t, 0);
      if(((f_13 != NULL) && (f_13 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((l_13 != NULL) && (l_13 != t)))
    _fail(t);
  else
    l_13 = t;
  t = SSLgetAnnotations(not_null(j_13));
  if(((g_13 != NULL) && (g_13 != t)))
    _fail(t);
  else
    g_13 = t;
  t = not_null(e_13);
  t = l_75(t);
  if(((h_13 != NULL) && (h_13 != t)))
    _fail(t);
  else
    h_13 = t;
  t = not_null(f_13);
  t = m_75(t);
  if(((i_13 != NULL) && (i_13 != t)))
    _fail(t);
  else
    i_13 = t;
  if(((m_13 != NULL) && (m_13 != t)))
    _fail(t);
  else
    m_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(h_13), not_null(i_13)), not_null(g_13));
  if(((k_13 != NULL) && (k_13 != t)))
    _fail(t);
  else
    k_13 = t;
  return(t);
}
ATerm SDef_3_0 (ATerm p_75 (ATerm), ATerm q_75 (ATerm), ATerm r_75 (ATerm), ATerm t)
{
  ATerm q_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,w_13 = NULL,v_13 = NULL,x_13 = NULL;
  if(((u_13 != NULL) && (u_13 != t)))
    _fail(t);
  else
    u_13 = t;
  if(match_cons(t, sym_SDef_3))
    {
      if(((n_13 != NULL) && (n_13 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_13 = ATgetArgument(t, 0);
      if(((o_13 != NULL) && (o_13 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_13 = ATgetArgument(t, 1);
      if(((p_13 != NULL) && (p_13 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        p_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((w_13 != NULL) && (w_13 != t)))
    _fail(t);
  else
    w_13 = t;
  t = SSLgetAnnotations(not_null(u_13));
  if(((q_13 != NULL) && (q_13 != t)))
    _fail(t);
  else
    q_13 = t;
  t = not_null(n_13);
  t = p_75(t);
  if(((r_13 != NULL) && (r_13 != t)))
    _fail(t);
  else
    r_13 = t;
  t = not_null(o_13);
  t = q_75(t);
  if(((s_13 != NULL) && (s_13 != t)))
    _fail(t);
  else
    s_13 = t;
  t = not_null(p_13);
  t = r_75(t);
  if(((t_13 != NULL) && (t_13 != t)))
    _fail(t);
  else
    t_13 = t;
  if(((x_13 != NULL) && (x_13 != t)))
    _fail(t);
  else
    x_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(r_13), not_null(s_13), not_null(t_13)), not_null(q_13));
  if(((v_13 != NULL) && (v_13 != t)))
    _fail(t);
  else
    v_13 = t;
  return(t);
}
ATerm l_16 (ATerm t)
{
  t = VarDec_2_0(is_string_0_0, type_expression_0_0, t);
  return(t);
}
ATerm m_16 (ATerm t)
{
  t = term_k_22;
  return(t);
}
ATerm k_16 (ATerm t)
{
  t = list_1_0(l_16, t);
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm l_22 = t;
  int m_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SDef_3_0(is_string_0_0, k_16, strategy_expression_0_0, t);
      ;
      LocalPopChoice(m_22);
    }
  else
    {
      t = l_22;
      {
        ATerm n_22 = t;
        int o_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(is_string_0_0, vardecs_0_0, vardecs_0_0, strategy_expression_0_0, t);
            ;
            LocalPopChoice(o_22);
          }
        else
          {
            t = n_22;
            t = debug_1_0(m_16, t);
          }
      }
    }
  return(t);
}
ATerm list_1_0 (ATerm y_89 (ATerm), ATerm t)
{
  ATerm z_89 (ATerm t)
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
        t = Cons_2_0(y_89, z_89, t);
      }
    return(t);
  }
  t = z_89(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm s_68 (ATerm), ATerm t)
{
  ATerm z_13 = NULL,y_13 = NULL,a_14 = NULL,b_14 = NULL,d_14 = NULL,c_14 = NULL,e_14 = NULL;
  if(((b_14 != NULL) && (b_14 != t)))
    _fail(t);
  else
    b_14 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      if(((y_13 != NULL) && (y_13 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((d_14 != NULL) && (d_14 != t)))
    _fail(t);
  else
    d_14 = t;
  t = SSLgetAnnotations(not_null(b_14));
  if(((z_13 != NULL) && (z_13 != t)))
    _fail(t);
  else
    z_13 = t;
  t = not_null(y_13);
  t = s_68(t);
  if(((a_14 != NULL) && (a_14 != t)))
    _fail(t);
  else
    a_14 = t;
  if(((e_14 != NULL) && (e_14 != t)))
    _fail(t);
  else
    e_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(a_14)), not_null(z_13));
  if(((c_14 != NULL) && (c_14 != t)))
    _fail(t);
  else
    c_14 = t;
  return(t);
}
ATerm Specification_1_0 (ATerm x_68 (ATerm), ATerm t)
{
  ATerm g_14 = NULL,f_14 = NULL,h_14 = NULL,i_14 = NULL,k_14 = NULL,j_14 = NULL,l_14 = NULL;
  if(((i_14 != NULL) && (i_14 != t)))
    _fail(t);
  else
    i_14 = t;
  if(match_cons(t, sym_Specification_1))
    {
      if(((f_14 != NULL) && (f_14 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((k_14 != NULL) && (k_14 != t)))
    _fail(t);
  else
    k_14 = t;
  t = SSLgetAnnotations(not_null(i_14));
  if(((g_14 != NULL) && (g_14 != t)))
    _fail(t);
  else
    g_14 = t;
  t = not_null(f_14);
  t = x_68(t);
  if(((h_14 != NULL) && (h_14 != t)))
    _fail(t);
  else
    h_14 = t;
  if(((l_14 != NULL) && (l_14 != t)))
    _fail(t);
  else
    l_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(h_14)), not_null(g_14));
  if(((j_14 != NULL) && (j_14 != t)))
    _fail(t);
  else
    j_14 = t;
  return(t);
}
ATerm q_16 (ATerm t)
{
  t = list_1_0(strategy_definition_0_0, t);
  return(t);
}
ATerm r_16 (ATerm t)
{
  t = term_r_22;
  return(t);
}
ATerm p_16 (ATerm t)
{
  t = Strategies_1_0(q_16, t);
  return(t);
}
ATerm stratego_specification_0_0 (ATerm t)
{
  ATerm s_22 = t;
  int t_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_16 (ATerm t)
      {
        ATerm o_16 (ATerm t)
        {
          t = Cons_2_0(p_16, Nil_0_0, t);
          return(t);
        }
        t = Cons_2_0(_id, o_16, t);
        return(t);
      }
      t = Specification_1_0(n_16, t);
      ;
      LocalPopChoice(t_22);
    }
  else
    {
      t = s_22;
      t = debug_1_0(r_16, t);
    }
  return(t);
}
ATerm _2_0 (ATerm x_63 (ATerm), ATerm y_63 (ATerm), ATerm t)
{
  ATerm o_14 = NULL,m_14 = NULL,n_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,t_14 = NULL,s_14 = NULL,u_14 = NULL;
  if(((r_14 != NULL) && (r_14 != t)))
    _fail(t);
  else
    r_14 = t;
  if(match_cons(t, sym__2))
    {
      if(((m_14 != NULL) && (m_14 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_14 = ATgetArgument(t, 0);
      if(((n_14 != NULL) && (n_14 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((t_14 != NULL) && (t_14 != t)))
    _fail(t);
  else
    t_14 = t;
  t = SSLgetAnnotations(not_null(r_14));
  if(((o_14 != NULL) && (o_14 != t)))
    _fail(t);
  else
    o_14 = t;
  t = not_null(m_14);
  t = x_63(t);
  if(((p_14 != NULL) && (p_14 != t)))
    _fail(t);
  else
    p_14 = t;
  t = not_null(n_14);
  t = y_63(t);
  if(((q_14 != NULL) && (q_14 != t)))
    _fail(t);
  else
    q_14 = t;
  if(((u_14 != NULL) && (u_14 != t)))
    _fail(t);
  else
    u_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(p_14), not_null(q_14)), not_null(o_14));
  if(((s_14 != NULL) && (s_14 != t)))
    _fail(t);
  else
    s_14 = t;
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,t_466 = NULL;
  if(((b_0 != NULL) && (b_0 != t)))
    _fail(t);
  else
    b_0 = t;
  if(((f_0 != NULL) && (f_0 != t)))
    _fail(t);
  else
    f_0 = t;
  t = term_u_22;
  t = whoami_0_0(t);
  if(((t_466 != NULL) && (t_466 != t)))
    _fail(t);
  else
    t_466 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_22, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_22), not_null(t_466)), term_w_22));
  t = printnl_0_0(t);
  t = term_y_22;
  t = exit_0_0(t);
  t = not_null(b_0);
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm z_52 = NULL,a_53 = NULL,k_0 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((z_52 != NULL) && (z_52 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_52 = ATgetArgument(t, 0);
      if(((a_53 != NULL) && (a_53 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((k_0 != NULL) && (k_0 != t)))
    _fail(t);
  else
    k_0 = t;
  t = SSL_printnl(not_null(z_52), not_null(a_53));
  t = not_null(k_0);
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm h_44 = NULL;
  if(((h_44 != NULL) && (h_44 != t)))
    _fail(t);
  else
    h_44 = t;
  t = SSL_implode_string(not_null(h_44));
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
        ATerm n_31 = NULL,o_31 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((n_31 != NULL) && (n_31 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              n_31 = ATgetFirst((ATermList) t);
            if(((o_31 != NULL) && (o_31 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              o_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(n_31);
        {
          ATerm s_16 (ATerm t)
          {
            t = not_null(o_31);
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
  ATerm i_148 = NULL,l_0 = NULL,j_148 = NULL,m_31 = NULL;
  if(((i_148 != NULL) && (i_148 != t)))
    _fail(t);
  else
    i_148 = t;
  if(((l_0 != NULL) && (l_0 != t)))
    _fail(t);
  else
    l_0 = t;
  t = not_null(i_148);
  if(((j_148 != NULL) && (j_148 != t)))
    _fail(t);
  else
    j_148 = t;
  t = SSL_explode_term(not_null(j_148));
  if(match_cons(t, sym__2))
    {
      ATerm b_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      if(((m_31 != NULL) && (m_31 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(m_31);
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm l_90 (ATerm), ATerm t)
{
  ATerm m_90 (ATerm t)
  {
    ATerm c_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, m_90, t);
        ;
        LocalPopChoice(d_23);
      }
    else
      {
        t = c_23;
        t = Nil_0_0(t);
        t = l_90(t);
      }
    return(t);
  }
  t = m_90(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((l_31 != NULL) && (l_31 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_31 = ATgetArgument(t, 0);
      if(((k_31 != NULL) && (k_31 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(l_31);
  {
    ATerm t_16 (ATerm t)
    {
      t = not_null(k_31);
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
  ATerm i_44 = NULL;
  if(((i_44 != NULL) && (i_44 != t)))
    _fail(t);
  else
    i_44 = t;
  t = SSL_explode_string(not_null(i_44));
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  t = _2_0(explode_string_0_0, explode_string_0_0, t);
  t = conc_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm u_16 (ATerm t)
{
  t = try_1_0(eval_config_0_0, t);
  return(t);
}
ATerm v_16 (ATerm t)
{
  t = term_g_23;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm h_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(i_23);
    }
  else
    {
      t = h_23;
      {
        ATerm j_23 = t;
        int k_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(u_16, t);
            ;
            LocalPopChoice(k_23);
          }
        else
          {
            t = j_23;
            {
              ATerm l_23 = t;
              int m_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_54 = NULL;
                  if(match_cons(t, sym_Path_1))
                    {
                      if(((v_54 != NULL) && (v_54 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        v_54 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(v_54);
                  ;
                  LocalPopChoice(m_23);
                }
              else
                {
                  t = l_23;
                  {
                    ATerm n_23 = t;
                    int o_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm u_54 = NULL;
                        if(match_cons(t, sym_Var_1))
                          {
                            if(((u_54 != NULL) && (u_54 != ATgetArgument(t, 0))))
                              _fail(ATgetArgument(t, 0));
                            else
                              u_54 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = not_null(u_54);
                        {
                          ATerm p_23 = t;
                          int q_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0_0(t);
                              ;
                              LocalPopChoice(q_23);
                            }
                          else
                            {
                              t = p_23;
                              t = debug_1_0(v_16, t);
                              _fail(t);
                            }
                        }
                        ;
                        LocalPopChoice(o_23);
                      }
                    else
                      {
                        t = n_23;
                        {
                          ATerm s_54 = NULL,t_54 = NULL,m_0 = NULL,a_437 = NULL,n_0 = NULL,m_437 = NULL;
                          if(match_cons(t, sym_Prefix_2))
                            {
                              if(((s_54 != NULL) && (s_54 != ATgetArgument(t, 0))))
                                _fail(ATgetArgument(t, 0));
                              else
                                s_54 = ATgetArgument(t, 0);
                              if(((t_54 != NULL) && (t_54 != ATgetArgument(t, 1))))
                                _fail(ATgetArgument(t, 1));
                              else
                                t_54 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          if(((m_0 != NULL) && (m_0 != t)))
                            _fail(t);
                          else
                            m_0 = t;
                          t = not_null(s_54);
                          t = eval_config_0_0(t);
                          if(((a_437 != NULL) && (a_437 != t)))
                            _fail(t);
                          else
                            a_437 = t;
                          t = not_null(m_0);
                          if(((n_0 != NULL) && (n_0 != t)))
                            _fail(t);
                          else
                            n_0 = t;
                          t = not_null(t_54);
                          t = eval_config_0_0(t);
                          if(((m_437 != NULL) && (m_437 != t)))
                            _fail(t);
                          else
                            m_437 = t;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(a_437), not_null(m_437));
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
  ATerm r_54 = NULL;
  if(((r_54 != NULL) && (r_54 != t)))
    _fail(t);
  else
    r_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_23, not_null(r_54));
  t = table_get_0_0(t);
  {
    ATerm w_16 (ATerm t)
    {
      ATerm o_0 = NULL,p_0 = NULL,b_436 = NULL;
      t = eval_config_0_0(t);
      if(((o_0 != NULL) && (o_0 != t)))
        _fail(t);
      else
        o_0 = t;
      if(((p_0 != NULL) && (p_0 != t)))
        _fail(t);
      else
        p_0 = t;
      if(((b_436 != NULL) && (b_436 != t)))
        _fail(t);
      else
        b_436 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_23, not_null(r_54), not_null(b_436));
      t = table_put_0_0(t);
      t = not_null(o_0);
      return(t);
    }
    t = try_1_0(w_16, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm o_103 (ATerm), ATerm t)
{
  ATerm x_16 (ATerm t)
  {
    ATerm q_0 = NULL,r_0 = NULL,i_418 = NULL;
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
    if(((i_418 != NULL) && (i_418 != t)))
      _fail(t);
    else
      i_418 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_418), term_t_23);
    t = geq_0_0(t);
    t = not_null(q_0);
    t = o_103(t);
    return(t);
  }
  t = try_1_0(x_16, t);
  return(t);
}
ATerm fputc_0_0 (ATerm t)
{
  ATerm r_49 = NULL,s_49 = NULL,s_0 = NULL,g_359 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((r_49 != NULL) && (r_49 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_49 = ATgetArgument(t, 0);
      {
        ATerm u_23 = ATgetArgument(t, 1);
        if(match_cons(u_23, sym_Stream_1))
          {
            if(((s_49 != NULL) && (s_49 != ATgetArgument(u_23, 0))))
              _fail(ATgetArgument(u_23, 0));
            else
              s_49 = ATgetArgument(u_23, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_fputc(not_null(r_49), not_null(s_49));
  if(((s_0 != NULL) && (s_0 != t)))
    _fail(t);
  else
    s_0 = t;
  if(((g_359 != NULL) && (g_359 != t)))
    _fail(t);
  else
    g_359 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(g_359));
  return(t);
}
ATerm write_in_text_to_stream_0_0 (ATerm t)
{
  ATerm f_53 = NULL,g_53 = NULL,t_0 = NULL,u_401 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_23 = ATgetArgument(t, 0);
      if(match_cons(v_23, sym_Stream_1))
        {
          if(((f_53 != NULL) && (f_53 != ATgetArgument(v_23, 0))))
            _fail(ATgetArgument(v_23, 0));
          else
            f_53 = ATgetArgument(v_23, 0);
        }
      else
        _fail(t);
      if(((g_53 != NULL) && (g_53 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(not_null(f_53), not_null(g_53));
  if(((t_0 != NULL) && (t_0 != t)))
    _fail(t);
  else
    t_0 = t;
  if(((u_401 != NULL) && (u_401 != t)))
    _fail(t);
  else
    u_401 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(u_401));
  return(t);
}
ATerm y_16 (ATerm t)
{
  ATerm u_0 = NULL,i_403 = NULL;
  t = write_in_text_to_stream_0_0(t);
  if(((u_0 != NULL) && (u_0 != t)))
    _fail(t);
  else
    u_0 = t;
  if(((i_403 != NULL) && (i_403 != t)))
    _fail(t);
  else
    i_403 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_23, not_null(i_403));
  t = fputc_0_0(t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  t = WriteToFile_1_0(y_16, t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm b_53 = NULL,c_53 = NULL,v_0 = NULL,o_400 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_23 = ATgetArgument(t, 0);
      if(match_cons(x_23, sym_Stream_1))
        {
          if(((b_53 != NULL) && (b_53 != ATgetArgument(x_23, 0))))
            _fail(ATgetArgument(x_23, 0));
          else
            b_53 = ATgetArgument(x_23, 0);
        }
      else
        _fail(t);
      if(((c_53 != NULL) && (c_53 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(not_null(b_53), not_null(c_53));
  if(((v_0 != NULL) && (v_0 != t)))
    _fail(t);
  else
    v_0 = t;
  if(((o_400 != NULL) && (o_400 != t)))
    _fail(t);
  else
    o_400 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_400));
  return(t);
}
ATerm WriteToFile_1_0 (ATerm k_102 (ATerm), ATerm t)
{
  ATerm t_403 = NULL,j_53 = NULL,w_0 = NULL,e_404 = NULL,x_0 = NULL,p_404 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((t_403 != NULL) && (t_403 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_403 = ATgetArgument(t, 0);
      if(((j_53 != NULL) && (j_53 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(t_403);
  if(((w_0 != NULL) && (w_0 != t)))
    _fail(t);
  else
    w_0 = t;
  if(((e_404 != NULL) && (e_404 != t)))
    _fail(t);
  else
    e_404 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_404), term_y_23);
  t = open_stream_0_0(t);
  if(((x_0 != NULL) && (x_0 != t)))
    _fail(t);
  else
    x_0 = t;
  if(((p_404 != NULL) && (p_404 != t)))
    _fail(t);
  else
    p_404 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(p_404), not_null(j_53));
  t = k_102(t);
  t = fclose_0_0(t);
  t = not_null(j_53);
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  t = WriteToFile_1_0(write_in_baf_to_stream_0_0, t);
  return(t);
}
ATerm e_17 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm d_17 (ATerm t)
{
  t = option_defined_1_0(e_17, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm y_0 = NULL,e_56 = NULL;
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
                if(((e_56 != NULL) && (e_56 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  e_56 = ATgetArgument(t, 0);
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
          if(((e_56 != NULL) && (e_56 != t)))
            _fail(t);
          else
            e_56 = t;
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
          t = not_null(e_56);
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
ATerm apply_strategy_1_0 (ATerm m_105 (ATerm), ATerm t)
{
  ATerm z_0 = NULL,a_1 = NULL,b_56 = NULL,c_56 = NULL,d_56 = NULL;
  if(((z_0 != NULL) && (z_0 != t)))
    _fail(t);
  else
    z_0 = t;
  t = dtime_0_0(t);
  t = not_null(z_0);
  t = m_105(t);
  if(((a_1 != NULL) && (a_1 != t)))
    _fail(t);
  else
    a_1 = t;
  t = dtime_0_0(t);
  if(((b_56 != NULL) && (b_56 != t)))
    _fail(t);
  else
    b_56 = t;
  t = not_null(a_1);
  if(match_cons(t, sym__2))
    {
      if(((c_56 != NULL) && (c_56 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_56 = ATgetArgument(t, 0);
      if(((d_56 != NULL) && (d_56 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(c_56)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(b_56))), not_null(d_56));
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_49 = NULL,w_49 = NULL;
  ATerm e_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Stream_1))
        {
          if(((v_49 != NULL) && (v_49 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            v_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_fclose(not_null(v_49));
      ;
      LocalPopChoice(f_24);
    }
  else
    {
      t = e_24;
      if(((w_49 != NULL) && (w_49 != t)))
        _fail(t);
      else
        w_49 = t;
      t = SSL_fclose(not_null(w_49));
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm h_53 = NULL;
  if(match_cons(t, sym_Stream_1))
    {
      if(((h_53 != NULL) && (h_53 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(not_null(h_53));
  return(t);
}
ATerm debug_1_0 (ATerm w_101 (ATerm), ATerm t)
{
  ATerm b_1 = NULL,c_1 = NULL,q_394 = NULL,d_1 = NULL,x_394 = NULL;
  if(((b_1 != NULL) && (b_1 != t)))
    _fail(t);
  else
    b_1 = t;
  if(((c_1 != NULL) && (c_1 != t)))
    _fail(t);
  else
    c_1 = t;
  t = w_101(t);
  if(((q_394 != NULL) && (q_394 != t)))
    _fail(t);
  else
    q_394 = t;
  t = not_null(c_1);
  if(((d_1 != NULL) && (d_1 != t)))
    _fail(t);
  else
    d_1 = t;
  if(((x_394 != NULL) && (x_394 != t)))
    _fail(t);
  else
    x_394 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_394)), not_null(q_394)));
  t = printnl_0_0(t);
  t = not_null(b_1);
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm t_49 = NULL,u_49 = NULL,e_1 = NULL,w_359 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((t_49 != NULL) && (t_49 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_49 = ATgetArgument(t, 0);
      if(((u_49 != NULL) && (u_49 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_fopen(not_null(t_49), not_null(u_49));
  if(((e_1 != NULL) && (e_1 != t)))
    _fail(t);
  else
    e_1 = t;
  if(((w_359 != NULL) && (w_359 != t)))
    _fail(t);
  else
    w_359 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_359));
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm g_44 = NULL;
  if(((g_44 != NULL) && (g_44 != t)))
    _fail(t);
  else
    g_44 = t;
  t = SSL_is_string(not_null(g_44));
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_1 = NULL,x_361 = NULL;
  t = SSL_stdin_stream();
  if(((f_1 != NULL) && (f_1 != t)))
    _fail(t);
  else
    f_1 = t;
  if(((x_361 != NULL) && (x_361 != t)))
    _fail(t);
  else
    x_361 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(x_361));
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_1 = NULL,i_362 = NULL;
  t = SSL_stdout_stream();
  if(((g_1 != NULL) && (g_1 != t)))
    _fail(t);
  else
    g_1 = t;
  if(((i_362 != NULL) && (i_362 != t)))
    _fail(t);
  else
    i_362 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(i_362));
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_1 = NULL,t_362 = NULL;
  t = SSL_stderr_stream();
  if(((h_1 != NULL) && (h_1 != t)))
    _fail(t);
  else
    h_1 = t;
  if(((t_362 != NULL) && (t_362 != t)))
    _fail(t);
  else
    t_362 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(t_362));
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
  ATerm c_230 = NULL,i_1 = NULL,d_230 = NULL,g_39 = NULL,h_39 = NULL;
  if(((c_230 != NULL) && (c_230 != t)))
    _fail(t);
  else
    c_230 = t;
  if(((i_1 != NULL) && (i_1 != t)))
    _fail(t);
  else
    i_1 = t;
  t = not_null(c_230);
  if(((d_230 != NULL) && (d_230 != t)))
    _fail(t);
  else
    d_230 = t;
  t = SSL_explode_term(not_null(d_230));
  if(match_cons(t, sym__2))
    {
      ATerm k_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_24 = ATgetArgument(t, 1);
        if(((ATgetType(l_24) == AT_LIST) && !(ATisEmpty(l_24))))
          {
            if(((h_39 != NULL) && (h_39 != ATgetFirst((ATermList) l_24))))
              _fail(ATgetFirst((ATermList) l_24));
            else
              h_39 = ATgetFirst((ATermList) l_24);
            if(((g_39 != NULL) && (g_39 != (ATerm) ATgetNext((ATermList) l_24))))
              _fail((ATerm) ATgetNext((ATermList) l_24));
            else
              g_39 = (ATerm) ATgetNext((ATermList) l_24);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(h_39);
  return(t);
}
ATerm f_17 (ATerm t)
{
  ATerm i_353 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      if(((i_353 != NULL) && (i_353 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_353 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(i_353);
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
ATerm g_17 (ATerm t)
{
  t = term_s_24;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_1 = NULL,i_53 = NULL;
  ATerm t_24 = t;
  int u_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_1 = NULL,k_402 = NULL;
      if(((j_1 != NULL) && (j_1 != t)))
        _fail(t);
      else
        j_1 = t;
      if(((k_402 != NULL) && (k_402 != t)))
        _fail(t);
      else
        k_402 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_402), term_v_24);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(u_24);
    }
  else
    {
      t = t_24;
      t = debug_1_0(g_17, t);
      _fail(t);
    }
  if(((k_1 != NULL) && (k_1 != t)))
    _fail(t);
  else
    k_1 = t;
  t = read_from_stream_0_0(t);
  if(((i_53 != NULL) && (i_53 != t)))
    _fail(t);
  else
    i_53 = t;
  t = not_null(k_1);
  t = fclose_0_0(t);
  t = not_null(i_53);
  return(t);
}
ATerm split_2_0 (ATerm l_97 (ATerm), ATerm m_97 (ATerm), ATerm t)
{
  ATerm l_1 = NULL,p_233 = NULL,m_1 = NULL,w_233 = NULL;
  if(((l_1 != NULL) && (l_1 != t)))
    _fail(t);
  else
    l_1 = t;
  t = l_97(t);
  if(((p_233 != NULL) && (p_233 != t)))
    _fail(t);
  else
    p_233 = t;
  t = not_null(l_1);
  if(((m_1 != NULL) && (m_1 != t)))
    _fail(t);
  else
    m_1 = t;
  t = m_97(t);
  if(((w_233 != NULL) && (w_233 != t)))
    _fail(t);
  else
    w_233 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(p_233), not_null(w_233));
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm n_1 = NULL,a_56 = NULL;
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
              if(((a_56 != NULL) && (a_56 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                a_56 = ATgetArgument(t, 0);
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
        if(((a_56 != NULL) && (a_56 != t)))
          _fail(t);
        else
          a_56 = t;
      }
    t = not_null(n_1);
    {
      ATerm i_17 (ATerm t)
      {
        t = not_null(a_56);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, i_17, t);
    }
  }
  return(t);
}
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
  ATerm o_1 = NULL,p_1 = NULL,e_470 = NULL;
  if(((o_1 != NULL) && (o_1 != t)))
    _fail(t);
  else
    o_1 = t;
  if(((p_1 != NULL) && (p_1 != t)))
    _fail(t);
  else
    p_1 = t;
  t = string_to_int_0_0(t);
  if(((e_470 != NULL) && (e_470 != t)))
    _fail(t);
  else
    e_470 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_25, not_null(e_470));
  t = set_config_0_0(t);
  t = not_null(o_1);
  return(t);
}
ATerm l_17 (ATerm t)
{
  t = term_c_25;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_17, k_17, l_17, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm i_46 = NULL;
  if(((i_46 != NULL) && (i_46 != t)))
    _fail(t);
  else
    i_46 = t;
  t = SSL_string_to_int(not_null(i_46));
  return(t);
}
ATerm m_17 (ATerm t)
{
  ATerm d_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-S", 0, ATtrue)))
        _fail(t);
      ;
      LocalPopChoice(e_25);
    }
  else
    {
      t = d_25;
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
  t = term_g_25;
  t = set_config_0_0(t);
  t = term_h_25;
  return(t);
}
ATerm o_17 (ATerm t)
{
  t = term_i_25;
  return(t);
}
ATerm p_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_17 (ATerm t)
{
  ATerm r_1 = NULL,s_1 = NULL,j_475 = NULL,t_1 = NULL,u_475 = NULL;
  if(((r_1 != NULL) && (r_1 != t)))
    _fail(t);
  else
    r_1 = t;
  if(((s_1 != NULL) && (s_1 != t)))
    _fail(t);
  else
    s_1 = t;
  t = string_to_int_0_0(t);
  if(((j_475 != NULL) && (j_475 != t)))
    _fail(t);
  else
    j_475 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_23, not_null(j_475));
  t = set_config_0_0(t);
  t = not_null(r_1);
  if(((t_1 != NULL) && (t_1 != t)))
    _fail(t);
  else
    t_1 = t;
  if(((u_475 != NULL) && (u_475 != t)))
    _fail(t);
  else
    u_475 = t;
  t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(u_475));
  return(t);
}
ATerm r_17 (ATerm t)
{
  t = term_j_25;
  return(t);
}
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
  t = term_l_25;
  t = set_config_0_0(t);
  t = term_m_25;
  return(t);
}
ATerm u_17 (ATerm t)
{
  t = term_n_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_17, n_17, o_17, t);
      ;
      LocalPopChoice(p_25);
    }
  else
    {
      t = o_25;
      {
        ATerm q_25 = t;
        int r_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_17, q_17, r_17, t);
            ;
            LocalPopChoice(r_25);
          }
        else
          {
            t = q_25;
            t = Option_3_0(s_17, t_17, u_17, t);
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
  ATerm v_1 = NULL,w_1 = NULL,r_472 = NULL,x_1 = NULL,c_473 = NULL;
  if(((v_1 != NULL) && (v_1 != t)))
    _fail(t);
  else
    v_1 = t;
  if(((w_1 != NULL) && (w_1 != t)))
    _fail(t);
  else
    w_1 = t;
  if(((r_472 != NULL) && (r_472 != t)))
    _fail(t);
  else
    r_472 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_25, not_null(r_472));
  t = set_config_0_0(t);
  t = not_null(v_1);
  if(((x_1 != NULL) && (x_1 != t)))
    _fail(t);
  else
    x_1 = t;
  if(((c_473 != NULL) && (c_473 != t)))
    _fail(t);
  else
    c_473 = t;
  t = (ATerm) ATmakeAppl(sym_Output_1, not_null(c_473));
  return(t);
}
ATerm x_17 (ATerm t)
{
  t = term_x_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_17, w_17, x_17, t);
  return(t);
}
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
  t = term_z_25;
  t = set_config_0_0(t);
  t = term_a_26;
  return(t);
}
ATerm a_18 (ATerm t)
{
  t = term_b_26;
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(d_26);
    }
  else
    {
      t = c_26;
      t = Option_3_0(y_17, z_17, a_18, t);
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
        ATerm u_58 = NULL,s_58 = NULL,t_58 = NULL,z_1 = NULL,a_2 = NULL,z_509 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((u_58 != NULL) && (u_58 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              u_58 = ATgetFirst((ATermList) t);
            {
              ATerm g_26 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(g_26) == AT_LIST) && !(ATisEmpty(g_26))))
                {
                  if(((s_58 != NULL) && (s_58 != ATgetFirst((ATermList) g_26))))
                    _fail(ATgetFirst((ATermList) g_26));
                  else
                    s_58 = ATgetFirst((ATermList) g_26);
                  if(((t_58 != NULL) && (t_58 != (ATerm) ATgetNext((ATermList) g_26))))
                    _fail((ATerm) ATgetNext((ATermList) g_26));
                  else
                    t_58 = (ATerm) ATgetNext((ATermList) g_26);
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
        t = not_null(u_58);
        t = h_0(t);
        t = not_null(z_1);
        if(((a_2 != NULL) && (a_2 != t)))
          _fail(t);
        else
          a_2 = t;
        t = not_null(s_58);
        t = i_0(t);
        if(((z_509 != NULL) && (z_509 != t)))
          _fail(t);
        else
          z_509 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(t_58)), not_null(z_509));
      }
    }
  return(t);
}
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
  ATerm b_2 = NULL,c_2 = NULL,h_471 = NULL,d_2 = NULL,s_471 = NULL;
  if(((b_2 != NULL) && (b_2 != t)))
    _fail(t);
  else
    b_2 = t;
  if(((c_2 != NULL) && (c_2 != t)))
    _fail(t);
  else
    c_2 = t;
  if(((h_471 != NULL) && (h_471 != t)))
    _fail(t);
  else
    h_471 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_26, not_null(h_471));
  t = set_config_0_0(t);
  t = not_null(b_2);
  if(((d_2 != NULL) && (d_2 != t)))
    _fail(t);
  else
    d_2 = t;
  if(((s_471 != NULL) && (s_471 != t)))
    _fail(t);
  else
    s_471 = t;
  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(s_471));
  return(t);
}
ATerm d_18 (ATerm t)
{
  t = term_k_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
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
  ATerm e_2 = NULL,a_468 = NULL;
  t = report_run_time_0_0(t);
  if(((e_2 != NULL) && (e_2 != t)))
    _fail(t);
  else
    e_2 = t;
  t = term_u_22;
  t = whoami_0_0(t);
  if(((a_468 != NULL) && (a_468 != t)))
    _fail(t);
  else
    a_468 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_22, (ATerm) ATinsert(ATinsert(ATempty, term_p_26), not_null(a_468)));
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
  ATerm j_56 = NULL;
  if(((j_56 != NULL) && (j_56 != t)))
    _fail(t);
  else
    j_56 = t;
  t = SSL_TicksToSeconds(not_null(j_56));
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm n_46 = NULL,o_46 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((n_46 != NULL) && (n_46 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_46 = ATgetArgument(t, 0);
      if(((o_46 != NULL) && (o_46 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_26 = t;
    int s_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(not_null(n_46), not_null(o_46));
        ;
        LocalPopChoice(s_26);
      }
    else
      {
        t = r_26;
        t = SSL_addr(not_null(n_46), not_null(o_46));
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm w_95 (ATerm), ATerm x_95 (ATerm), ATerm t)
{
  ATerm t_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = w_95(t);
      ;
      LocalPopChoice(u_26);
    }
  else
    {
      t = t_26;
      {
        ATerm r_37 = NULL,s_37 = NULL,f_2 = NULL,t_209 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((r_37 != NULL) && (r_37 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              r_37 = ATgetFirst((ATermList) t);
            if(((s_37 != NULL) && (s_37 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              s_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        if(((f_2 != NULL) && (f_2 != t)))
          _fail(t);
        else
          f_2 = t;
        t = not_null(s_37);
        t = foldr_2_0(w_95, x_95, t);
        if(((t_209 != NULL) && (t_209 != t)))
          _fail(t);
        else
          t_209 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_37), not_null(t_209));
        t = x_95(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm p_99 (ATerm), ATerm q_99 (ATerm), ATerm t)
{
  ATerm s_300 = NULL,g_2 = NULL,t_300 = NULL,k_44 = NULL;
  if(((s_300 != NULL) && (s_300 != t)))
    _fail(t);
  else
    s_300 = t;
  if(((g_2 != NULL) && (g_2 != t)))
    _fail(t);
  else
    g_2 = t;
  t = not_null(s_300);
  if(((t_300 != NULL) && (t_300 != t)))
    _fail(t);
  else
    t_300 = t;
  t = SSL_explode_term(not_null(t_300));
  if(match_cons(t, sym__2))
    {
      ATerm v_26 = ATgetArgument(t, 0);
      if(((k_44 != NULL) && (k_44 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(k_44);
  t = foldr_2_0(p_99, q_99, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm e_18 (ATerm t)
{
  t = term_f_25;
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  t = times_0_0(t);
  t = crush_2_0(e_18, add_0_0, t);
  t = ticks_to_seconds_0_0(t);
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm n_47 = NULL,o_47 = NULL,h_2 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((n_47 != NULL) && (n_47 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_47 = ATgetArgument(t, 0);
      if(((o_47 != NULL) && (o_47 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_47 = ATgetArgument(t, 1);
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
        t = SSL_gti(not_null(n_47), not_null(o_47));
        ;
        LocalPopChoice(x_26);
      }
    else
      {
        t = w_26;
        t = SSL_gtr(not_null(n_47), not_null(o_47));
      }
    t = not_null(h_2);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_47 = NULL;
  ATerm y_26 = t;
  int z_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym__2))
        {
          if(((t_47 != NULL) && (t_47 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            t_47 = ATgetArgument(t, 0);
          if(((t_47 != NULL) && (t_47 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            t_47 = ATgetArgument(t, 1);
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
ATerm if_verbose1_1_0 (ATerm n_103 (ATerm), ATerm t)
{
  ATerm f_18 (ATerm t)
  {
    ATerm i_2 = NULL,j_2 = NULL,s_417 = NULL;
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
    if(((s_417 != NULL) && (s_417 != t)))
      _fail(t);
    else
      s_417 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_417), term_y_22);
    t = geq_0_0(t);
    t = not_null(i_2);
    t = n_103(t);
    return(t);
  }
  t = try_1_0(f_18, t);
  return(t);
}
ATerm g_18 (ATerm t)
{
  ATerm k_2 = NULL,t_468 = NULL,l_2 = NULL,b_469 = NULL;
  if(((k_2 != NULL) && (k_2 != t)))
    _fail(t);
  else
    k_2 = t;
  t = run_time_0_0(t);
  if(((t_468 != NULL) && (t_468 != t)))
    _fail(t);
  else
    t_468 = t;
  t = not_null(k_2);
  if(((l_2 != NULL) && (l_2 != t)))
    _fail(t);
  else
    l_2 = t;
  t = term_u_22;
  t = whoami_0_0(t);
  if(((b_469 != NULL) && (b_469 != t)))
    _fail(t);
  else
    b_469 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_27), not_null(t_468)), term_a_27), not_null(b_469)));
  t = printnl_0_0(t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_18, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_f_25;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1_0 (ATerm k_106 (ATerm), ATerm t)
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
  t = k_106(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm r_60 = NULL;
  if(((r_60 != NULL) && (r_60 != t)))
    _fail(t);
  else
    r_60 = t;
  t = SSL_table_create(not_null(r_60));
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm f_56 = NULL,m_2 = NULL;
  if(((f_56 != NULL) && (f_56 != t)))
    _fail(t);
  else
    f_56 = t;
  if(((m_2 != NULL) && (m_2 != t)))
    _fail(t);
  else
    m_2 = t;
  t = term_j_27;
  t = table_create_0_0(t);
  t = (ATerm) ATmakeAppl(sym__3, term_j_27, term_k_27, not_null(f_56));
  t = table_put_0_0(t);
  t = not_null(m_2);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm s_60 = NULL;
  if(((s_60 != NULL) && (s_60 != t)))
    _fail(t);
  else
    s_60 = t;
  t = SSL_table_destroy(not_null(s_60));
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm k_55 = NULL;
  if(((k_55 != NULL) && (k_55 != t)))
    _fail(t);
  else
    k_55 = t;
  t = SSL_exit(not_null(k_55));
  return(t);
}
ATerm long_description_1_0 (ATerm l_108 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm map_1_0 (ATerm u_89 (ATerm), ATerm t)
{
  ATerm v_89 (ATerm t)
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
        t = Cons_2_0(u_89, v_89, t);
      }
    return(t);
  }
  t = v_89(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm n_27 = t;
  int o_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_32 = NULL,e_32 = NULL,n_2 = NULL,o_2 = NULL,o_157 = NULL,p_2 = NULL,w_157 = NULL,f_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((d_32 != NULL) && (d_32 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            d_32 = ATgetFirst((ATermList) t);
          if(((e_32 != NULL) && (e_32 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            e_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(e_32);
      if(((n_2 != NULL) && (n_2 != t)))
        _fail(t);
      else
        n_2 = t;
      if(((o_2 != NULL) && (o_2 != t)))
        _fail(t);
      else
        o_2 = t;
      t = g_0(t);
      if(((o_157 != NULL) && (o_157 != t)))
        _fail(t);
      else
        o_157 = t;
      t = not_null(o_2);
      if(((p_2 != NULL) && (p_2 != t)))
        _fail(t);
      else
        p_2 = t;
      t = not_null(d_32);
      t = e_0(t);
      if(((w_157 != NULL) && (w_157 != t)))
        _fail(t);
      else
        w_157 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(o_157)), not_null(w_157));
      if(((f_32 != NULL) && (f_32 != t)))
        _fail(t);
      else
        f_32 = t;
      t = not_null(n_2);
      {
        ATerm i_18 (ATerm t)
        {
          t = not_null(f_32);
          return(t);
        }
        t = reverse_acc_2_0(e_0, i_18, t);
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
ATerm j_18 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  t = reverse_acc_2_0(_id, j_18, t);
  return(t);
}
ATerm short_description_1_0 (ATerm k_108 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm y_81 (ATerm), ATerm t)
{
  ATerm w_14 = NULL,v_14 = NULL,x_14 = NULL,y_14 = NULL,a_15 = NULL,z_14 = NULL,b_15 = NULL;
  if(((y_14 != NULL) && (y_14 != t)))
    _fail(t);
  else
    y_14 = t;
  if(match_cons(t, sym_Program_1))
    {
      if(((v_14 != NULL) && (v_14 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((a_15 != NULL) && (a_15 != t)))
    _fail(t);
  else
    a_15 = t;
  t = SSLgetAnnotations(not_null(y_14));
  if(((w_14 != NULL) && (w_14 != t)))
    _fail(t);
  else
    w_14 = t;
  t = not_null(v_14);
  t = y_81(t);
  if(((x_14 != NULL) && (x_14 != t)))
    _fail(t);
  else
    x_14 = t;
  if(((b_15 != NULL) && (b_15 != t)))
    _fail(t);
  else
    b_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(x_14)), not_null(w_14));
  if(((z_14 != NULL) && (z_14 != t)))
    _fail(t);
  else
    z_14 = t;
  return(t);
}
ATerm o_18 (ATerm t)
{
  ATerm q_2 = NULL,t_519 = NULL;
  if(((q_2 != NULL) && (q_2 != t)))
    _fail(t);
  else
    q_2 = t;
  if(((t_519 != NULL) && (t_519 != t)))
    _fail(t);
  else
    t_519 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_519)), term_p_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_59 = NULL;
  ATerm q_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_26;
      t = get_config_0_0(t);
      if(((g_59 != NULL) && (g_59 != t)))
        _fail(t);
      else
        g_59 = t;
      ;
      LocalPopChoice(r_27);
    }
  else
    {
      t = q_27;
      {
        ATerm k_18 (ATerm t)
        {
          ATerm l_18 (ATerm t)
          {
            if(((g_59 != NULL) && (g_59 != t)))
              _fail(t);
            else
              g_59 = t;
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
        t = not_null(g_59);
        return(t);
      }
      t = short_description_1_0(n_18, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(m_18, t);
    t = term_s_27;
    t = echo_0_0(t);
    t = term_v_27;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    t = map_1_0(o_18, t);
    {
      ATerm p_18 (ATerm t)
      {
        ATerm r_2 = NULL,e_520 = NULL;
        if(((r_2 != NULL) && (r_2 != t)))
          _fail(t);
        else
          r_2 = t;
        {
          ATerm q_18 (ATerm t)
          {
            t = not_null(g_59);
            return(t);
          }
          t = long_description_1_0(q_18, t);
          if(((e_520 != NULL) && (e_520 != t)))
            _fail(t);
          else
            e_520 = t;
          t = (ATerm) ATinsert(CheckATermList(not_null(e_520)), term_w_27);
          t = echo_0_0(t);
        }
        return(t);
      }
      t = try_1_0(p_18, t);
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
ATerm Undefined_1_0 (ATerm z_81 (ATerm), ATerm t)
{
  ATerm d_15 = NULL,c_15 = NULL,e_15 = NULL,f_15 = NULL,h_15 = NULL,g_15 = NULL,i_15 = NULL;
  if(((f_15 != NULL) && (f_15 != t)))
    _fail(t);
  else
    f_15 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      if(((c_15 != NULL) && (c_15 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((h_15 != NULL) && (h_15 != t)))
    _fail(t);
  else
    h_15 = t;
  t = SSLgetAnnotations(not_null(f_15));
  if(((d_15 != NULL) && (d_15 != t)))
    _fail(t);
  else
    d_15 = t;
  t = not_null(c_15);
  t = z_81(t);
  if(((e_15 != NULL) && (e_15 != t)))
    _fail(t);
  else
    e_15 = t;
  if(((i_15 != NULL) && (i_15 != t)))
    _fail(t);
  else
    i_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(e_15)), not_null(d_15));
  if(((g_15 != NULL) && (g_15 != t)))
    _fail(t);
  else
    g_15 = t;
  return(t);
}
ATerm fetch_1_0 (ATerm f_90 (ATerm), ATerm t)
{
  ATerm g_90 (ATerm t)
  {
    ATerm z_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(f_90, _id, t);
        ;
        LocalPopChoice(a_28);
      }
    else
      {
        t = z_27;
        t = Cons_2_0(_id, g_90, t);
      }
    return(t);
  }
  t = g_90(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm k_107 (ATerm), ATerm t)
{
  t = fetch_1_0(k_107, t);
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
  ATerm s_2 = NULL,t_2 = NULL,r_391 = NULL;
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
          ATerm u_2 = NULL,t_391 = NULL;
          if(((u_2 != NULL) && (u_2 != t)))
            _fail(t);
          else
            u_2 = t;
          if(((t_391 != NULL) && (t_391 != t)))
            _fail(t);
          else
            t_391 = t;
          t = (ATerm) ATinsert(ATempty, not_null(t_391));
        }
      }
    if(((r_391 != NULL) && (r_391 != t)))
      _fail(t);
    else
      r_391 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_b_24, not_null(r_391));
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
ATerm try_1_0 (ATerm j_82 (ATerm), ATerm t)
{
  ATerm j_28 = t;
  int k_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_82(t);
      ;
      LocalPopChoice(k_28);
    }
  else
    {
      t = j_28;
    }
  return(t);
}
ATerm r_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_18 (ATerm t)
{
  t = term_m_28;
  t = set_config_0_0(t);
  return(t);
}
ATerm t_18 (ATerm t)
{
  t = term_n_28;
  return(t);
}
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
  t = term_m_28;
  t = set_config_0_0(t);
  t = term_p_28;
  t = set_config_0_0(t);
  t = term_q_28;
  return(t);
}
ATerm w_18 (ATerm t)
{
  t = term_r_28;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm s_28 = t;
  int t_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_18, s_18, t_18, t);
      ;
      LocalPopChoice(t_28);
    }
  else
    {
      t = s_28;
      t = Option_3_0(u_18, v_18, w_18, t);
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm w_60 = NULL,x_60 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((w_60 != NULL) && (w_60 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_60 = ATgetArgument(t, 0);
      if(((x_60 != NULL) && (x_60 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get(not_null(w_60), not_null(x_60));
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm i_59 = NULL,j_59 = NULL,h_59 = NULL,w_2 = NULL,x_2 = NULL,z_522 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((i_59 != NULL) && (i_59 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_59 = ATgetArgument(t, 0);
      if(((j_59 != NULL) && (j_59 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_59 = ATgetArgument(t, 1);
      if(((h_59 != NULL) && (h_59 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        h_59 = ATgetArgument(t, 2);
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
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_59), not_null(j_59));
  {
    ATerm u_28 = t;
    int v_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        ;
        LocalPopChoice(v_28);
      }
    else
      {
        t = u_28;
        t = (ATerm) ATempty;
      }
    if(((z_522 != NULL) && (z_522 != t)))
      _fail(t);
    else
      z_522 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(i_59), not_null(j_59), (ATerm) ATinsert(CheckATermList(not_null(z_522)), not_null(h_59)));
    t = table_put_0_0(t);
    t = not_null(w_2);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm p_108 (ATerm), ATerm t)
{
  ATerm y_2 = NULL,e_518 = NULL;
  if(((y_2 != NULL) && (y_2 != t)))
    _fail(t);
  else
    y_2 = t;
  t = term_u_22;
  t = p_108(t);
  if(((e_518 != NULL) && (e_518 != t)))
    _fail(t);
  else
    e_518 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_27, term_u_27, not_null(e_518));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm w_28 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("register-usage-info", 0, ATtrue)))
        _fail(t);
      t = register_usage_1_0(d_0, t);
      ;
      LocalPopChoice(x_28);
    }
  else
    {
      t = w_28;
      {
        ATerm r_58 = NULL,q_58 = NULL,z_2 = NULL,a_3 = NULL,r_508 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((r_58 != NULL) && (r_58 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              r_58 = ATgetFirst((ATermList) t);
            if(((q_58 != NULL) && (q_58 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              q_58 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        if(((z_2 != NULL) && (z_2 != t)))
          _fail(t);
        else
          z_2 = t;
        t = not_null(r_58);
        t = a_0(t);
        t = not_null(z_2);
        if(((a_3 != NULL) && (a_3 != t)))
          _fail(t);
        else
          a_3 = t;
        t = term_u_22;
        t = c_0(t);
        if(((r_508 != NULL) && (r_508 != t)))
          _fail(t);
        else
          r_508 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(q_58)), not_null(r_508));
      }
    }
  return(t);
}
ATerm x_18 (ATerm t)
{
  ATerm y_28 = t;
  int z_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
        _fail(t);
      ;
      LocalPopChoice(z_28);
    }
  else
    {
      t = y_28;
      {
        ATerm a_29 = t;
        int b_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-h", 0, ATtrue)))
              _fail(t);
            ;
            LocalPopChoice(b_29);
          }
        else
          {
            t = a_29;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm y_18 (ATerm t)
{
  t = term_c_29;
  t = set_config_0_0(t);
  t = term_d_29;
  return(t);
}
ATerm z_18 (ATerm t)
{
  t = term_e_29;
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  t = Option_3_0(x_18, y_18, z_18, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm d_59 = NULL,e_59 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((d_59 != NULL) && (d_59 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        d_59 = ATgetFirst((ATermList) t);
      if(((e_59 != NULL) && (e_59 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        e_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(e_59)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(d_59)));
  return(t);
}
ATerm Cons_2_0 (ATerm m_68 (ATerm), ATerm n_68 (ATerm), ATerm t)
{
  ATerm l_15 = NULL,j_15 = NULL,k_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,q_15 = NULL,p_15 = NULL,r_15 = NULL;
  if(((o_15 != NULL) && (o_15 != t)))
    _fail(t);
  else
    o_15 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((j_15 != NULL) && (j_15 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        j_15 = ATgetFirst((ATermList) t);
      if(((k_15 != NULL) && (k_15 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        k_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((q_15 != NULL) && (q_15 != t)))
    _fail(t);
  else
    q_15 = t;
  t = SSLgetAnnotations(not_null(o_15));
  if(((l_15 != NULL) && (l_15 != t)))
    _fail(t);
  else
    l_15 = t;
  t = not_null(j_15);
  t = m_68(t);
  if(((m_15 != NULL) && (m_15 != t)))
    _fail(t);
  else
    m_15 = t;
  t = not_null(k_15);
  t = n_68(t);
  if(((n_15 != NULL) && (n_15 != t)))
    _fail(t);
  else
    n_15 = t;
  if(((r_15 != NULL) && (r_15 != t)))
    _fail(t);
  else
    r_15 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(n_15)), not_null(m_15)), not_null(l_15));
  if(((p_15 != NULL) && (p_15 != t)))
    _fail(t);
  else
    p_15 = t;
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
  ATerm i_54 = NULL,j_54 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((i_54 != NULL) && (i_54 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_54 = ATgetArgument(t, 0);
      if(((j_54 != NULL) && (j_54 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_r_23, not_null(i_54), not_null(j_54));
  t = table_put_0_0(t);
  return(t);
}
ATerm b_19 (ATerm t)
{
  ATerm c_3 = NULL,d_3 = NULL,h_517 = NULL,e_3 = NULL,s_517 = NULL;
  if(((c_3 != NULL) && (c_3 != t)))
    _fail(t);
  else
    c_3 = t;
  if(((d_3 != NULL) && (d_3 != t)))
    _fail(t);
  else
    d_3 = t;
  if(((h_517 != NULL) && (h_517 != t)))
    _fail(t);
  else
    h_517 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_26, not_null(h_517));
  t = set_config_0_0(t);
  t = not_null(c_3);
  if(((e_3 != NULL) && (e_3 != t)))
    _fail(t);
  else
    e_3 = t;
  if(((s_517 != NULL) && (s_517 != t)))
    _fail(t);
  else
    s_517 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, not_null(s_517));
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_108 (ATerm), ATerm t)
{
  ATerm b_3 = NULL;
  if(((b_3 != NULL) && (b_3 != t)))
    _fail(t);
  else
    b_3 = t;
  {
    ATerm a_19 (ATerm t)
    {
      t = term_f_29;
      t = n_108(t);
      return(t);
    }
    t = try_1_0(a_19, t);
    t = not_null(b_3);
    {
      ATerm c_19 (ATerm t)
      {
        ATerm g_29 = t;
        int h_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_29 = t;
            int j_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0_0(t);
                ;
                LocalPopChoice(j_29);
              }
            else
              {
                t = i_29;
                t = n_108(t);
                t = Cons_2_0(_id, c_19, t);
              }
            ;
            LocalPopChoice(h_29);
          }
        else
          {
            t = g_29;
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
  ATerm f_3 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL;
  if(((f_3 != NULL) && (f_3 != t)))
    _fail(t);
  else
    f_3 = t;
  if(match_cons(t, sym__3))
    {
      if(((t_60 != NULL) && (t_60 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_60 = ATgetArgument(t, 0);
      if(((u_60 != NULL) && (u_60 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_60 = ATgetArgument(t, 1);
      if(((v_60 != NULL) && (v_60 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        v_60 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_put(not_null(t_60), not_null(u_60), not_null(v_60));
  t = not_null(f_3);
  return(t);
}
ATerm parse_options_1_0 (ATerm m_108 (ATerm), ATerm t)
{
  ATerm g_3 = NULL,f_59 = NULL,j_3 = NULL;
  if(((g_3 != NULL) && (g_3 != t)))
    _fail(t);
  else
    g_3 = t;
  t = term_k_29;
  t = table_put_0_0(t);
  t = not_null(g_3);
  {
    ATerm d_19 (ATerm t)
    {
      ATerm l_29 = t;
      int m_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_108(t);
          ;
          LocalPopChoice(m_29);
        }
      else
        {
          t = l_29;
          {
            ATerm n_29 = t;
            int o_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(o_29);
              }
            else
              {
                t = n_29;
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
        ATerm p_29 = t;
        int q_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_3 = NULL;
            if(((h_3 != NULL) && (h_3 != t)))
              _fail(t);
            else
              h_3 = t;
            {
              ATerm r_29 = t;
              int s_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_e_27;
                  t = get_config_0_0(t);
                  ;
                  LocalPopChoice(s_29);
                }
              else
                {
                  t = r_29;
                  t = option_defined_1_0(Help_0_0, t);
                }
              t = not_null(h_3);
              t = system_usage_0_0(t);
              t = term_f_25;
              t = exit_0_0(t);
            }
            ;
            LocalPopChoice(q_29);
          }
        else
          {
            t = p_29;
            {
              ATerm t_29 = t;
              int u_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_3 = NULL;
                  if(((i_3 != NULL) && (i_3 != t)))
                    _fail(t);
                  else
                    i_3 = t;
                  t = term_l_28;
                  t = get_config_0_0(t);
                  t = not_null(i_3);
                  t = system_about_0_0(t);
                  t = term_f_25;
                  t = exit_0_0(t);
                  ;
                  LocalPopChoice(u_29);
                }
              else
                {
                  t = t_29;
                  {
                    ATerm f_19 (ATerm t)
                    {
                      ATerm g_19 (ATerm t)
                      {
                        if(((f_59 != NULL) && (f_59 != t)))
                          _fail(t);
                        else
                          f_59 = t;
                        return(t);
                      }
                      t = Undefined_1_0(g_19, t);
                      return(t);
                    }
                    t = option_defined_1_0(f_19, t);
                    t = (ATerm) ATmakeAppl(sym__2, term_v_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_59)), term_v_29));
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
      t = term_t_27;
      t = table_destroy_0_0(t);
      t = not_null(j_3);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_106 (ATerm), ATerm n_106 (ATerm), ATerm o_106 (ATerm), ATerm p_106 (ATerm), ATerm t)
{
  t = parse_options_1_0(m_106, t);
  t = store_options_0_0(t);
  t = o_106(t);
  {
    ATerm w_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_106, t);
        ;
        LocalPopChoice(x_29);
      }
    else
      {
        t = w_29;
        {
          ATerm y_29 = t;
          int z_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_106(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(z_29);
            }
          else
            {
              t = y_29;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm b_106 (ATerm), ATerm c_106 (ATerm), ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm t)
{
  ATerm h_19 (ATerm t)
  {
    ATerm a_30 = t;
    int b_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_106(t);
        ;
        LocalPopChoice(b_30);
      }
    else
      {
        t = a_30;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm i_19 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(b_106, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(h_19, d_106, e_106, i_19, t);
  return(t);
}
ATerm k_19 (ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL,z_465 = NULL;
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
  if(((z_465 != NULL) && (z_465 != t)))
    _fail(t);
  else
    z_465 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_22, (ATerm) ATinsert(ATempty, not_null(z_465)));
  t = printnl_0_0(t);
  t = not_null(k_3);
  return(t);
}
ATerm j_19 (ATerm t)
{
  t = if_verbose2_1_0(k_19, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm v_105 (ATerm), ATerm w_105 (ATerm), ATerm x_105 (ATerm), ATerm t)
{
  t = iowrap_4_0(v_105, w_105, x_105, j_19, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm t_105 (ATerm), ATerm u_105 (ATerm), ATerm t)
{
  t = iowrap_3_0(t_105, u_105, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm q_105 (ATerm), ATerm t)
{
  ATerm l_19 (ATerm t)
  {
    t = _2_0(_id, q_105, t);
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

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
ATerm term_o_31;
ATerm term_d_31;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_u_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_j_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_m_25;
ATerm term_j_25;
ATerm term_h_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_z_23;
ATerm term_u_23;
ATerm term_v_21;
ATerm term_e_21;
void init_constant_terms (void)
{
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("not a match-term-expression: ", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym__2, term_d_25, term_s_26);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_26);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym__2, term_z_26, term_f_24);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym__2, term_l_27, term_f_24);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym__2, term_l_29, term_m_29);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym__2, term_g_30, term_f_24);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym__2, term_j_30, term_f_24);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym__2, term_u_28, term_f_24);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym__3, term_l_29, term_m_29, (ATerm) ATempty);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Let_2_0 (ATerm l_66 (ATerm), ATerm m_66 (ATerm), ATerm);
ATerm term_expression_0_0 (ATerm);
ATerm SVar_1_0 (ATerm k_66 (ATerm), ATerm);
ATerm Call_2_0 (ATerm n_66 (ATerm), ATerm o_66 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm r_67 (ATerm), ATerm s_67 (ATerm), ATerm t_67 (ATerm), ATerm);
ATerm Where_1_0 (ATerm l_67 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm v_66 (ATerm), ATerm w_66 (ATerm), ATerm);
ATerm Build_1_0 (ATerm t_66 (ATerm), ATerm);
ATerm Op_2_0 (ATerm h_63 (ATerm), ATerm i_63 (ATerm), ATerm);
ATerm Var_1_0 (ATerm b_63 (ATerm), ATerm);
ATerm As_2_0 (ATerm s_63 (ATerm), ATerm t_63 (ATerm), ATerm);
ATerm BuildDefault_1_0 (ATerm y_63 (ATerm), ATerm);
ATerm Str_1_0 (ATerm f_63 (ATerm), ATerm);
ATerm is_real_0_0 (ATerm);
ATerm Real_1_0 (ATerm e_63 (ATerm), ATerm);
ATerm Int_1_0 (ATerm d_63 (ATerm), ATerm);
ATerm Wld_0_0 (ATerm);
ATerm match_term_exp_0_0 (ATerm);
ATerm Match_1_0 (ATerm s_66 (ATerm), ATerm);
ATerm Thread_1_0 (ATerm z_67 (ATerm), ATerm);
ATerm All_1_0 (ATerm y_67 (ATerm), ATerm);
ATerm Some_1_0 (ATerm w_67 (ATerm), ATerm);
ATerm One_1_0 (ATerm x_67 (ATerm), ATerm);
ATerm Cong_2_0 (ATerm z_61 (ATerm), ATerm a_62 (ATerm), ATerm);
ATerm is_int_0_0 (ATerm);
ATerm Path_2_0 (ATerm u_67 (ATerm), ATerm v_67 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm i_67 (ATerm), ATerm j_67 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm p_66 (ATerm), ATerm q_66 (ATerm), ATerm r_66 (ATerm), ATerm);
ATerm LGChoice_2_0 (ATerm d_67 (ATerm), ATerm e_67 (ATerm), ATerm);
ATerm GChoice_2_0 (ATerm d_66 (ATerm), ATerm e_66 (ATerm), ATerm);
ATerm GuardedLChoice_3_0 (ATerm f_67 (ATerm), ATerm g_67 (ATerm), ATerm h_67 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm b_67 (ATerm), ATerm c_67 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm z_65 (ATerm), ATerm a_66 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm z_66 (ATerm), ATerm a_67 (ATerm), ATerm);
ATerm Test_1_0 (ATerm m_67 (ATerm), ATerm);
ATerm Not_1_0 (ATerm k_67 (ATerm), ATerm);
ATerm Fail_0_0 (ATerm);
ATerm Id_0_0 (ATerm);
ATerm strategy_expression_0_0 (ATerm);
ATerm VarDec_2_0 (ATerm w_68 (ATerm), ATerm x_68 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm d_69 (ATerm), ATerm e_69 (ATerm), ATerm f_69 (ATerm), ATerm g_69 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm a_69 (ATerm), ATerm b_69 (ATerm), ATerm c_69 (ATerm), ATerm);
ATerm strategy_definition_0_0 (ATerm);
ATerm list_1_0 (ATerm h_83 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm d_62 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm i_62 (ATerm), ATerm);
ATerm stratego_specification_0_0 (ATerm);
ATerm _2_0 (ATerm m_60 (ATerm), ATerm n_60 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm u_83 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm u_96 (ATerm), ATerm);
ATerm fputc_0_0 (ATerm);
ATerm write_in_text_to_stream_0_0 (ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm q_95 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm s_98 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm debug_1_0 (ATerm c_95 (ATerm), ATerm);
ATerm fopen_0_0 (ATerm);
ATerm is_string_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm u_90 (ATerm), ATerm v_90 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm f_89 (ATerm), ATerm g_89 (ATerm), ATerm);
ATerm crush_2_0 (ATerm y_92 (ATerm), ATerm z_92 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm t_96 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm need_help_1_0 (ATerm q_99 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm r_101 (ATerm), ATerm);
ATerm map_1_0 (ATerm e_83 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm q_101 (ATerm), ATerm);
ATerm Program_1_0 (ATerm r_74 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm s_74 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm o_83 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm q_100 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm t_75 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm v_101 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm Cons_2_0 (ATerm v_61 (ATerm), ATerm w_61 (ATerm), ATerm);
ATerm Nil_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm t_101 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm parse_options_1_0 (ATerm s_101 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm s_99 (ATerm), ATerm t_99 (ATerm), ATerm u_99 (ATerm), ATerm v_99 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm h_99 (ATerm), ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm k_99 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm b_99 (ATerm), ATerm c_99 (ATerm), ATerm d_99 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm z_98 (ATerm), ATerm a_99 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm w_98 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm Let_2_0 (ATerm l_66 (ATerm), ATerm m_66 (ATerm), ATerm t)
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
    ATerm g_13 = NULL;
    if(((g_13 != NULL) && (g_13 != t)))
      _fail(t);
    else
      g_13 = t;
    t = SSLgetAnnotations(not_null(r_3));
    if(((o_3 != NULL) && (o_3 != t)))
      _fail(t);
    else
      o_3 = t;
    t = not_null(g_13);
    t = not_null(m_3);
    t = l_66(t);
    if(((p_3 != NULL) && (p_3 != t)))
      _fail(t);
    else
      p_3 = t;
    t = not_null(n_3);
    t = m_66(t);
    if(((q_3 != NULL) && (q_3 != t)))
      _fail(t);
    else
      q_3 = t;
    {
      ATerm h_13 = NULL;
      if(((h_13 != NULL) && (h_13 != t)))
        _fail(t);
      else
        h_13 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(p_3), not_null(q_3)), not_null(o_3));
      if(((s_3 != NULL) && (s_3 != t)))
        _fail(t);
      else
        s_3 = t;
    }
  }
  return(t);
}
ATerm term_expression_0_0 (ATerm t)
{
  ATerm o_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0_0(t);
      ;
      LocalPopChoice(p_20);
    }
  else
    {
      t = o_20;
      {
        ATerm q_20 = t;
        int r_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1_0(is_string_0_0, t);
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
                  t = Int_1_0(is_int_0_0, t);
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
                        t = Real_1_0(is_real_0_0, t);
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
                              t = Str_1_0(is_string_0_0, t);
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
                                    t = BuildDefault_1_0(term_expression_0_0, t);
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
                                          ATerm i_16 (ATerm t)
                                          {
                                            t = Var_1_0(is_string_0_0, t);
                                            return(t);
                                          }
                                          t = As_2_0(i_16, term_expression_0_0, t);
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
                                                ATerm j_16 (ATerm t)
                                                {
                                                  t = list_1_0(term_expression_0_0, t);
                                                  return(t);
                                                }
                                                t = Op_2_0(is_string_0_0, j_16, t);
                                                ;
                                                LocalPopChoice(d_21);
                                              }
                                            else
                                              {
                                                t = c_21;
                                                {
                                                  ATerm k_16 (ATerm t)
                                                  {
                                                    t = term_e_21;
                                                    return(t);
                                                  }
                                                  t = debug_1_0(k_16, t);
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
ATerm SVar_1_0 (ATerm k_66 (ATerm), ATerm t)
{
  ATerm u_3 = NULL,t_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL;
  if(((w_3 != NULL) && (w_3 != t)))
    _fail(t);
  else
    w_3 = t;
  if(match_cons(t, sym_SVar_1))
    {
      if(((t_3 != NULL) && (t_3 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm i_13 = NULL;
    if(((i_13 != NULL) && (i_13 != t)))
      _fail(t);
    else
      i_13 = t;
    t = SSLgetAnnotations(not_null(w_3));
    if(((u_3 != NULL) && (u_3 != t)))
      _fail(t);
    else
      u_3 = t;
    t = not_null(i_13);
    t = not_null(t_3);
    t = k_66(t);
    if(((v_3 != NULL) && (v_3 != t)))
      _fail(t);
    else
      v_3 = t;
    {
      ATerm j_13 = NULL;
      if(((j_13 != NULL) && (j_13 != t)))
        _fail(t);
      else
        j_13 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(v_3)), not_null(u_3));
      if(((x_3 != NULL) && (x_3 != t)))
        _fail(t);
      else
        x_3 = t;
    }
  }
  return(t);
}
ATerm Call_2_0 (ATerm n_66 (ATerm), ATerm o_66 (ATerm), ATerm t)
{
  ATerm a_4 = NULL,y_3 = NULL,z_3 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL;
  if(((d_4 != NULL) && (d_4 != t)))
    _fail(t);
  else
    d_4 = t;
  if(match_cons(t, sym_Call_2))
    {
      if(((y_3 != NULL) && (y_3 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_3 = ATgetArgument(t, 0);
      if(((z_3 != NULL) && (z_3 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_13 = NULL;
    if(((k_13 != NULL) && (k_13 != t)))
      _fail(t);
    else
      k_13 = t;
    t = SSLgetAnnotations(not_null(d_4));
    if(((a_4 != NULL) && (a_4 != t)))
      _fail(t);
    else
      a_4 = t;
    t = not_null(k_13);
    t = not_null(y_3);
    t = n_66(t);
    if(((b_4 != NULL) && (b_4 != t)))
      _fail(t);
    else
      b_4 = t;
    t = not_null(z_3);
    t = o_66(t);
    if(((c_4 != NULL) && (c_4 != t)))
      _fail(t);
    else
      c_4 = t;
    {
      ATerm l_13 = NULL;
      if(((l_13 != NULL) && (l_13 != t)))
        _fail(t);
      else
        l_13 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(b_4), not_null(c_4)), not_null(a_4));
      if(((e_4 != NULL) && (e_4 != t)))
        _fail(t);
      else
        e_4 = t;
    }
  }
  return(t);
}
ATerm PrimT_3_0 (ATerm r_67 (ATerm), ATerm s_67 (ATerm), ATerm t_67 (ATerm), ATerm t)
{
  ATerm i_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL;
  if(((m_4 != NULL) && (m_4 != t)))
    _fail(t);
  else
    m_4 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      if(((f_4 != NULL) && (f_4 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_4 = ATgetArgument(t, 0);
      if(((g_4 != NULL) && (g_4 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_4 = ATgetArgument(t, 1);
      if(((h_4 != NULL) && (h_4 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        h_4 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  {
    ATerm m_13 = NULL;
    if(((m_13 != NULL) && (m_13 != t)))
      _fail(t);
    else
      m_13 = t;
    t = SSLgetAnnotations(not_null(m_4));
    if(((i_4 != NULL) && (i_4 != t)))
      _fail(t);
    else
      i_4 = t;
    t = not_null(m_13);
    t = not_null(f_4);
    t = r_67(t);
    if(((j_4 != NULL) && (j_4 != t)))
      _fail(t);
    else
      j_4 = t;
    t = not_null(g_4);
    t = s_67(t);
    if(((k_4 != NULL) && (k_4 != t)))
      _fail(t);
    else
      k_4 = t;
    t = not_null(h_4);
    t = t_67(t);
    if(((l_4 != NULL) && (l_4 != t)))
      _fail(t);
    else
      l_4 = t;
    {
      ATerm n_13 = NULL;
      if(((n_13 != NULL) && (n_13 != t)))
        _fail(t);
      else
        n_13 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, not_null(j_4), not_null(k_4), not_null(l_4)), not_null(i_4));
      if(((n_4 != NULL) && (n_4 != t)))
        _fail(t);
      else
        n_4 = t;
    }
  }
  return(t);
}
ATerm Where_1_0 (ATerm l_67 (ATerm), ATerm t)
{
  ATerm p_4 = NULL,o_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL;
  if(((r_4 != NULL) && (r_4 != t)))
    _fail(t);
  else
    r_4 = t;
  if(match_cons(t, sym_Where_1))
    {
      if(((o_4 != NULL) && (o_4 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm o_13 = NULL;
    if(((o_13 != NULL) && (o_13 != t)))
      _fail(t);
    else
      o_13 = t;
    t = SSLgetAnnotations(not_null(r_4));
    if(((p_4 != NULL) && (p_4 != t)))
      _fail(t);
    else
      p_4 = t;
    t = not_null(o_13);
    t = not_null(o_4);
    t = l_67(t);
    if(((q_4 != NULL) && (q_4 != t)))
      _fail(t);
    else
      q_4 = t;
    {
      ATerm p_13 = NULL;
      if(((p_13 != NULL) && (p_13 != t)))
        _fail(t);
      else
        p_13 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Where_1, not_null(q_4)), not_null(p_4));
      if(((s_4 != NULL) && (s_4 != t)))
        _fail(t);
      else
        s_4 = t;
    }
  }
  return(t);
}
ATerm Scope_2_0 (ATerm v_66 (ATerm), ATerm w_66 (ATerm), ATerm t)
{
  ATerm v_4 = NULL,t_4 = NULL,u_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL;
  if(((y_4 != NULL) && (y_4 != t)))
    _fail(t);
  else
    y_4 = t;
  if(match_cons(t, sym_Scope_2))
    {
      if(((t_4 != NULL) && (t_4 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_4 = ATgetArgument(t, 0);
      if(((u_4 != NULL) && (u_4 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_13 = NULL;
    if(((q_13 != NULL) && (q_13 != t)))
      _fail(t);
    else
      q_13 = t;
    t = SSLgetAnnotations(not_null(y_4));
    if(((v_4 != NULL) && (v_4 != t)))
      _fail(t);
    else
      v_4 = t;
    t = not_null(q_13);
    t = not_null(t_4);
    t = v_66(t);
    if(((w_4 != NULL) && (w_4 != t)))
      _fail(t);
    else
      w_4 = t;
    t = not_null(u_4);
    t = w_66(t);
    if(((x_4 != NULL) && (x_4 != t)))
      _fail(t);
    else
      x_4 = t;
    {
      ATerm r_13 = NULL;
      if(((r_13 != NULL) && (r_13 != t)))
        _fail(t);
      else
        r_13 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(w_4), not_null(x_4)), not_null(v_4));
      if(((z_4 != NULL) && (z_4 != t)))
        _fail(t);
      else
        z_4 = t;
    }
  }
  return(t);
}
ATerm Build_1_0 (ATerm t_66 (ATerm), ATerm t)
{
  ATerm b_5 = NULL,a_5 = NULL,c_5 = NULL,d_5 = NULL,e_5 = NULL;
  if(((d_5 != NULL) && (d_5 != t)))
    _fail(t);
  else
    d_5 = t;
  if(match_cons(t, sym_Build_1))
    {
      if(((a_5 != NULL) && (a_5 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm s_13 = NULL;
    if(((s_13 != NULL) && (s_13 != t)))
      _fail(t);
    else
      s_13 = t;
    t = SSLgetAnnotations(not_null(d_5));
    if(((b_5 != NULL) && (b_5 != t)))
      _fail(t);
    else
      b_5 = t;
    t = not_null(s_13);
    t = not_null(a_5);
    t = t_66(t);
    if(((c_5 != NULL) && (c_5 != t)))
      _fail(t);
    else
      c_5 = t;
    {
      ATerm t_13 = NULL;
      if(((t_13 != NULL) && (t_13 != t)))
        _fail(t);
      else
        t_13 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(c_5)), not_null(b_5));
      if(((e_5 != NULL) && (e_5 != t)))
        _fail(t);
      else
        e_5 = t;
    }
  }
  return(t);
}
ATerm Op_2_0 (ATerm h_63 (ATerm), ATerm i_63 (ATerm), ATerm t)
{
  ATerm h_5 = NULL,f_5 = NULL,g_5 = NULL,i_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL;
  if(((k_5 != NULL) && (k_5 != t)))
    _fail(t);
  else
    k_5 = t;
  if(match_cons(t, sym_Op_2))
    {
      if(((f_5 != NULL) && (f_5 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_5 = ATgetArgument(t, 0);
      if(((g_5 != NULL) && (g_5 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_13 = NULL;
    if(((u_13 != NULL) && (u_13 != t)))
      _fail(t);
    else
      u_13 = t;
    t = SSLgetAnnotations(not_null(k_5));
    if(((h_5 != NULL) && (h_5 != t)))
      _fail(t);
    else
      h_5 = t;
    t = not_null(u_13);
    t = not_null(f_5);
    t = h_63(t);
    if(((i_5 != NULL) && (i_5 != t)))
      _fail(t);
    else
      i_5 = t;
    t = not_null(g_5);
    t = i_63(t);
    if(((j_5 != NULL) && (j_5 != t)))
      _fail(t);
    else
      j_5 = t;
    {
      ATerm v_13 = NULL;
      if(((v_13 != NULL) && (v_13 != t)))
        _fail(t);
      else
        v_13 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(i_5), not_null(j_5)), not_null(h_5));
      if(((l_5 != NULL) && (l_5 != t)))
        _fail(t);
      else
        l_5 = t;
    }
  }
  return(t);
}
ATerm Var_1_0 (ATerm b_63 (ATerm), ATerm t)
{
  ATerm n_5 = NULL,m_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL;
  if(((p_5 != NULL) && (p_5 != t)))
    _fail(t);
  else
    p_5 = t;
  if(match_cons(t, sym_Var_1))
    {
      if(((m_5 != NULL) && (m_5 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_13 = NULL;
    if(((w_13 != NULL) && (w_13 != t)))
      _fail(t);
    else
      w_13 = t;
    t = SSLgetAnnotations(not_null(p_5));
    if(((n_5 != NULL) && (n_5 != t)))
      _fail(t);
    else
      n_5 = t;
    t = not_null(w_13);
    t = not_null(m_5);
    t = b_63(t);
    if(((o_5 != NULL) && (o_5 != t)))
      _fail(t);
    else
      o_5 = t;
    {
      ATerm x_13 = NULL;
      if(((x_13 != NULL) && (x_13 != t)))
        _fail(t);
      else
        x_13 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(o_5)), not_null(n_5));
      if(((q_5 != NULL) && (q_5 != t)))
        _fail(t);
      else
        q_5 = t;
    }
  }
  return(t);
}
ATerm As_2_0 (ATerm s_63 (ATerm), ATerm t_63 (ATerm), ATerm t)
{
  ATerm t_5 = NULL,r_5 = NULL,s_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL;
  if(((w_5 != NULL) && (w_5 != t)))
    _fail(t);
  else
    w_5 = t;
  if(match_cons(t, sym_As_2))
    {
      if(((r_5 != NULL) && (r_5 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_5 = ATgetArgument(t, 0);
      if(((s_5 != NULL) && (s_5 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_13 = NULL;
    if(((y_13 != NULL) && (y_13 != t)))
      _fail(t);
    else
      y_13 = t;
    t = SSLgetAnnotations(not_null(w_5));
    if(((t_5 != NULL) && (t_5 != t)))
      _fail(t);
    else
      t_5 = t;
    t = not_null(y_13);
    t = not_null(r_5);
    t = s_63(t);
    if(((u_5 != NULL) && (u_5 != t)))
      _fail(t);
    else
      u_5 = t;
    t = not_null(s_5);
    t = t_63(t);
    if(((v_5 != NULL) && (v_5 != t)))
      _fail(t);
    else
      v_5 = t;
    {
      ATerm z_13 = NULL;
      if(((z_13 != NULL) && (z_13 != t)))
        _fail(t);
      else
        z_13 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(u_5), not_null(v_5)), not_null(t_5));
      if(((x_5 != NULL) && (x_5 != t)))
        _fail(t);
      else
        x_5 = t;
    }
  }
  return(t);
}
ATerm BuildDefault_1_0 (ATerm y_63 (ATerm), ATerm t)
{
  ATerm z_5 = NULL,y_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL;
  if(((b_6 != NULL) && (b_6 != t)))
    _fail(t);
  else
    b_6 = t;
  if(match_cons(t, sym_BuildDefault_1))
    {
      if(((y_5 != NULL) && (y_5 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_14 = NULL;
    if(((a_14 != NULL) && (a_14 != t)))
      _fail(t);
    else
      a_14 = t;
    t = SSLgetAnnotations(not_null(b_6));
    if(((z_5 != NULL) && (z_5 != t)))
      _fail(t);
    else
      z_5 = t;
    t = not_null(a_14);
    t = not_null(y_5);
    t = y_63(t);
    if(((a_6 != NULL) && (a_6 != t)))
      _fail(t);
    else
      a_6 = t;
    {
      ATerm b_14 = NULL;
      if(((b_14 != NULL) && (b_14 != t)))
        _fail(t);
      else
        b_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(a_6)), not_null(z_5));
      if(((c_6 != NULL) && (c_6 != t)))
        _fail(t);
      else
        c_6 = t;
    }
  }
  return(t);
}
ATerm Str_1_0 (ATerm f_63 (ATerm), ATerm t)
{
  ATerm e_6 = NULL,d_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL;
  if(((g_6 != NULL) && (g_6 != t)))
    _fail(t);
  else
    g_6 = t;
  if(match_cons(t, sym_Str_1))
    {
      if(((d_6 != NULL) && (d_6 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_14 = NULL;
    if(((c_14 != NULL) && (c_14 != t)))
      _fail(t);
    else
      c_14 = t;
    t = SSLgetAnnotations(not_null(g_6));
    if(((e_6 != NULL) && (e_6 != t)))
      _fail(t);
    else
      e_6 = t;
    t = not_null(c_14);
    t = not_null(d_6);
    t = f_63(t);
    if(((f_6 != NULL) && (f_6 != t)))
      _fail(t);
    else
      f_6 = t;
    {
      ATerm d_14 = NULL;
      if(((d_14 != NULL) && (d_14 != t)))
        _fail(t);
      else
        d_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(f_6)), not_null(e_6));
      if(((h_6 != NULL) && (h_6 != t)))
        _fail(t);
      else
        h_6 = t;
    }
  }
  return(t);
}
ATerm is_real_0_0 (ATerm t)
{
  ATerm x_44 = NULL;
  if(((x_44 != NULL) && (x_44 != t)))
    _fail(t);
  else
    x_44 = t;
  t = SSL_is_real(not_null(x_44));
  return(t);
}
ATerm Real_1_0 (ATerm e_63 (ATerm), ATerm t)
{
  ATerm j_6 = NULL,i_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL;
  if(((l_6 != NULL) && (l_6 != t)))
    _fail(t);
  else
    l_6 = t;
  if(match_cons(t, sym_Real_1))
    {
      if(((i_6 != NULL) && (i_6 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm e_14 = NULL;
    if(((e_14 != NULL) && (e_14 != t)))
      _fail(t);
    else
      e_14 = t;
    t = SSLgetAnnotations(not_null(l_6));
    if(((j_6 != NULL) && (j_6 != t)))
      _fail(t);
    else
      j_6 = t;
    t = not_null(e_14);
    t = not_null(i_6);
    t = e_63(t);
    if(((k_6 != NULL) && (k_6 != t)))
      _fail(t);
    else
      k_6 = t;
    {
      ATerm f_14 = NULL;
      if(((f_14 != NULL) && (f_14 != t)))
        _fail(t);
      else
        f_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(k_6)), not_null(j_6));
      if(((m_6 != NULL) && (m_6 != t)))
        _fail(t);
      else
        m_6 = t;
    }
  }
  return(t);
}
ATerm Int_1_0 (ATerm d_63 (ATerm), ATerm t)
{
  ATerm o_6 = NULL,n_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL;
  if(((q_6 != NULL) && (q_6 != t)))
    _fail(t);
  else
    q_6 = t;
  if(match_cons(t, sym_Int_1))
    {
      if(((n_6 != NULL) && (n_6 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_14 = NULL;
    if(((g_14 != NULL) && (g_14 != t)))
      _fail(t);
    else
      g_14 = t;
    t = SSLgetAnnotations(not_null(q_6));
    if(((o_6 != NULL) && (o_6 != t)))
      _fail(t);
    else
      o_6 = t;
    t = not_null(g_14);
    t = not_null(n_6);
    t = d_63(t);
    if(((p_6 != NULL) && (p_6 != t)))
      _fail(t);
    else
      p_6 = t;
    {
      ATerm h_14 = NULL;
      if(((h_14 != NULL) && (h_14 != t)))
        _fail(t);
      else
        h_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(p_6)), not_null(o_6));
      if(((r_6 != NULL) && (r_6 != t)))
        _fail(t);
      else
        r_6 = t;
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
ATerm match_term_exp_0_0 (ATerm t)
{
  ATerm f_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0_0(t);
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
            t = Var_1_0(is_string_0_0, t);
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
                  t = Int_1_0(is_int_0_0, t);
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
                        t = Real_1_0(is_real_0_0, t);
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
                              t = Str_1_0(is_string_0_0, t);
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
                                    t = BuildDefault_1_0(match_term_exp_0_0, t);
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
                                          ATerm l_16 (ATerm t)
                                          {
                                            t = Var_1_0(is_string_0_0, t);
                                            return(t);
                                          }
                                          t = As_2_0(l_16, match_term_exp_0_0, t);
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
                                                ATerm m_16 (ATerm t)
                                                {
                                                  t = list_1_0(match_term_exp_0_0, t);
                                                  return(t);
                                                }
                                                t = Op_2_0(is_string_0_0, m_16, t);
                                                ;
                                                LocalPopChoice(u_21);
                                              }
                                            else
                                              {
                                                t = t_21;
                                                {
                                                  ATerm n_16 (ATerm t)
                                                  {
                                                    t = term_v_21;
                                                    return(t);
                                                  }
                                                  t = debug_1_0(n_16, t);
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
ATerm Match_1_0 (ATerm s_66 (ATerm), ATerm t)
{
  ATerm t_6 = NULL,s_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL;
  if(((v_6 != NULL) && (v_6 != t)))
    _fail(t);
  else
    v_6 = t;
  if(match_cons(t, sym_Match_1))
    {
      if(((s_6 != NULL) && (s_6 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm i_14 = NULL;
    if(((i_14 != NULL) && (i_14 != t)))
      _fail(t);
    else
      i_14 = t;
    t = SSLgetAnnotations(not_null(v_6));
    if(((t_6 != NULL) && (t_6 != t)))
      _fail(t);
    else
      t_6 = t;
    t = not_null(i_14);
    t = not_null(s_6);
    t = s_66(t);
    if(((u_6 != NULL) && (u_6 != t)))
      _fail(t);
    else
      u_6 = t;
    {
      ATerm j_14 = NULL;
      if(((j_14 != NULL) && (j_14 != t)))
        _fail(t);
      else
        j_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(u_6)), not_null(t_6));
      if(((w_6 != NULL) && (w_6 != t)))
        _fail(t);
      else
        w_6 = t;
    }
  }
  return(t);
}
ATerm Thread_1_0 (ATerm z_67 (ATerm), ATerm t)
{
  ATerm y_6 = NULL,x_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL;
  if(((a_7 != NULL) && (a_7 != t)))
    _fail(t);
  else
    a_7 = t;
  if(match_cons(t, sym_Thread_1))
    {
      if(((x_6 != NULL) && (x_6 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_14 = NULL;
    if(((k_14 != NULL) && (k_14 != t)))
      _fail(t);
    else
      k_14 = t;
    t = SSLgetAnnotations(not_null(a_7));
    if(((y_6 != NULL) && (y_6 != t)))
      _fail(t);
    else
      y_6 = t;
    t = not_null(k_14);
    t = not_null(x_6);
    t = z_67(t);
    if(((z_6 != NULL) && (z_6 != t)))
      _fail(t);
    else
      z_6 = t;
    {
      ATerm l_14 = NULL;
      if(((l_14 != NULL) && (l_14 != t)))
        _fail(t);
      else
        l_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, not_null(z_6)), not_null(y_6));
      if(((b_7 != NULL) && (b_7 != t)))
        _fail(t);
      else
        b_7 = t;
    }
  }
  return(t);
}
ATerm All_1_0 (ATerm y_67 (ATerm), ATerm t)
{
  ATerm d_7 = NULL,c_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL;
  if(((f_7 != NULL) && (f_7 != t)))
    _fail(t);
  else
    f_7 = t;
  if(match_cons(t, sym_All_1))
    {
      if(((c_7 != NULL) && (c_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_14 = NULL;
    if(((m_14 != NULL) && (m_14 != t)))
      _fail(t);
    else
      m_14 = t;
    t = SSLgetAnnotations(not_null(f_7));
    if(((d_7 != NULL) && (d_7 != t)))
      _fail(t);
    else
      d_7 = t;
    t = not_null(m_14);
    t = not_null(c_7);
    t = y_67(t);
    if(((e_7 != NULL) && (e_7 != t)))
      _fail(t);
    else
      e_7 = t;
    {
      ATerm n_14 = NULL;
      if(((n_14 != NULL) && (n_14 != t)))
        _fail(t);
      else
        n_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, not_null(e_7)), not_null(d_7));
      if(((g_7 != NULL) && (g_7 != t)))
        _fail(t);
      else
        g_7 = t;
    }
  }
  return(t);
}
ATerm Some_1_0 (ATerm w_67 (ATerm), ATerm t)
{
  ATerm i_7 = NULL,h_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL;
  if(((k_7 != NULL) && (k_7 != t)))
    _fail(t);
  else
    k_7 = t;
  if(match_cons(t, sym_Some_1))
    {
      if(((h_7 != NULL) && (h_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm o_14 = NULL;
    if(((o_14 != NULL) && (o_14 != t)))
      _fail(t);
    else
      o_14 = t;
    t = SSLgetAnnotations(not_null(k_7));
    if(((i_7 != NULL) && (i_7 != t)))
      _fail(t);
    else
      i_7 = t;
    t = not_null(o_14);
    t = not_null(h_7);
    t = w_67(t);
    if(((j_7 != NULL) && (j_7 != t)))
      _fail(t);
    else
      j_7 = t;
    {
      ATerm p_14 = NULL;
      if(((p_14 != NULL) && (p_14 != t)))
        _fail(t);
      else
        p_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(j_7)), not_null(i_7));
      if(((l_7 != NULL) && (l_7 != t)))
        _fail(t);
      else
        l_7 = t;
    }
  }
  return(t);
}
ATerm One_1_0 (ATerm x_67 (ATerm), ATerm t)
{
  ATerm n_7 = NULL,m_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL;
  if(((p_7 != NULL) && (p_7 != t)))
    _fail(t);
  else
    p_7 = t;
  if(match_cons(t, sym_One_1))
    {
      if(((m_7 != NULL) && (m_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_14 = NULL;
    if(((q_14 != NULL) && (q_14 != t)))
      _fail(t);
    else
      q_14 = t;
    t = SSLgetAnnotations(not_null(p_7));
    if(((n_7 != NULL) && (n_7 != t)))
      _fail(t);
    else
      n_7 = t;
    t = not_null(q_14);
    t = not_null(m_7);
    t = x_67(t);
    if(((o_7 != NULL) && (o_7 != t)))
      _fail(t);
    else
      o_7 = t;
    {
      ATerm r_14 = NULL;
      if(((r_14 != NULL) && (r_14 != t)))
        _fail(t);
      else
        r_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_One_1, not_null(o_7)), not_null(n_7));
      if(((q_7 != NULL) && (q_7 != t)))
        _fail(t);
      else
        q_7 = t;
    }
  }
  return(t);
}
ATerm Cong_2_0 (ATerm z_61 (ATerm), ATerm a_62 (ATerm), ATerm t)
{
  ATerm t_7 = NULL,r_7 = NULL,s_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL;
  if(((w_7 != NULL) && (w_7 != t)))
    _fail(t);
  else
    w_7 = t;
  if(match_cons(t, sym_Cong_2))
    {
      if(((r_7 != NULL) && (r_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_7 = ATgetArgument(t, 0);
      if(((s_7 != NULL) && (s_7 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_14 = NULL;
    if(((s_14 != NULL) && (s_14 != t)))
      _fail(t);
    else
      s_14 = t;
    t = SSLgetAnnotations(not_null(w_7));
    if(((t_7 != NULL) && (t_7 != t)))
      _fail(t);
    else
      t_7 = t;
    t = not_null(s_14);
    t = not_null(r_7);
    t = z_61(t);
    if(((u_7 != NULL) && (u_7 != t)))
      _fail(t);
    else
      u_7 = t;
    t = not_null(s_7);
    t = a_62(t);
    if(((v_7 != NULL) && (v_7 != t)))
      _fail(t);
    else
      v_7 = t;
    {
      ATerm t_14 = NULL;
      if(((t_14 != NULL) && (t_14 != t)))
        _fail(t);
      else
        t_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(u_7), not_null(v_7)), not_null(t_7));
      if(((x_7 != NULL) && (x_7 != t)))
        _fail(t);
      else
        x_7 = t;
    }
  }
  return(t);
}
ATerm is_int_0_0 (ATerm t)
{
  ATerm b_43 = NULL;
  if(((b_43 != NULL) && (b_43 != t)))
    _fail(t);
  else
    b_43 = t;
  t = SSL_is_int(not_null(b_43));
  return(t);
}
ATerm Path_2_0 (ATerm u_67 (ATerm), ATerm v_67 (ATerm), ATerm t)
{
  ATerm a_8 = NULL,y_7 = NULL,z_7 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL;
  if(((d_8 != NULL) && (d_8 != t)))
    _fail(t);
  else
    d_8 = t;
  if(match_cons(t, sym_Path_2))
    {
      if(((y_7 != NULL) && (y_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_7 = ATgetArgument(t, 0);
      if(((z_7 != NULL) && (z_7 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_14 = NULL;
    if(((u_14 != NULL) && (u_14 != t)))
      _fail(t);
    else
      u_14 = t;
    t = SSLgetAnnotations(not_null(d_8));
    if(((a_8 != NULL) && (a_8 != t)))
      _fail(t);
    else
      a_8 = t;
    t = not_null(u_14);
    t = not_null(y_7);
    t = u_67(t);
    if(((b_8 != NULL) && (b_8 != t)))
      _fail(t);
    else
      b_8 = t;
    t = not_null(z_7);
    t = v_67(t);
    if(((c_8 != NULL) && (c_8 != t)))
      _fail(t);
    else
      c_8 = t;
    {
      ATerm v_14 = NULL;
      if(((v_14 != NULL) && (v_14 != t)))
        _fail(t);
      else
        v_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Path_2, not_null(b_8), not_null(c_8)), not_null(a_8));
      if(((e_8 != NULL) && (e_8 != t)))
        _fail(t);
      else
        e_8 = t;
    }
  }
  return(t);
}
ATerm Rec_2_0 (ATerm i_67 (ATerm), ATerm j_67 (ATerm), ATerm t)
{
  ATerm h_8 = NULL,f_8 = NULL,g_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL;
  if(((k_8 != NULL) && (k_8 != t)))
    _fail(t);
  else
    k_8 = t;
  if(match_cons(t, sym_Rec_2))
    {
      if(((f_8 != NULL) && (f_8 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_8 = ATgetArgument(t, 0);
      if(((g_8 != NULL) && (g_8 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_14 = NULL;
    if(((w_14 != NULL) && (w_14 != t)))
      _fail(t);
    else
      w_14 = t;
    t = SSLgetAnnotations(not_null(k_8));
    if(((h_8 != NULL) && (h_8 != t)))
      _fail(t);
    else
      h_8 = t;
    t = not_null(w_14);
    t = not_null(f_8);
    t = i_67(t);
    if(((i_8 != NULL) && (i_8 != t)))
      _fail(t);
    else
      i_8 = t;
    t = not_null(g_8);
    t = j_67(t);
    if(((j_8 != NULL) && (j_8 != t)))
      _fail(t);
    else
      j_8 = t;
    {
      ATerm x_14 = NULL;
      if(((x_14 != NULL) && (x_14 != t)))
        _fail(t);
      else
        x_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(i_8), not_null(j_8)), not_null(h_8));
      if(((l_8 != NULL) && (l_8 != t)))
        _fail(t);
      else
        l_8 = t;
    }
  }
  return(t);
}
ATerm CallT_3_0 (ATerm p_66 (ATerm), ATerm q_66 (ATerm), ATerm r_66 (ATerm), ATerm t)
{
  ATerm p_8 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL;
  if(((t_8 != NULL) && (t_8 != t)))
    _fail(t);
  else
    t_8 = t;
  if(match_cons(t, sym_CallT_3))
    {
      if(((m_8 != NULL) && (m_8 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_8 = ATgetArgument(t, 0);
      if(((n_8 != NULL) && (n_8 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_8 = ATgetArgument(t, 1);
      if(((o_8 != NULL) && (o_8 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        o_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  {
    ATerm y_14 = NULL;
    if(((y_14 != NULL) && (y_14 != t)))
      _fail(t);
    else
      y_14 = t;
    t = SSLgetAnnotations(not_null(t_8));
    if(((p_8 != NULL) && (p_8 != t)))
      _fail(t);
    else
      p_8 = t;
    t = not_null(y_14);
    t = not_null(m_8);
    t = p_66(t);
    if(((q_8 != NULL) && (q_8 != t)))
      _fail(t);
    else
      q_8 = t;
    t = not_null(n_8);
    t = q_66(t);
    if(((r_8 != NULL) && (r_8 != t)))
      _fail(t);
    else
      r_8 = t;
    t = not_null(o_8);
    t = r_66(t);
    if(((s_8 != NULL) && (s_8 != t)))
      _fail(t);
    else
      s_8 = t;
    {
      ATerm z_14 = NULL;
      if(((z_14 != NULL) && (z_14 != t)))
        _fail(t);
      else
        z_14 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, not_null(q_8), not_null(r_8), not_null(s_8)), not_null(p_8));
      if(((u_8 != NULL) && (u_8 != t)))
        _fail(t);
      else
        u_8 = t;
    }
  }
  return(t);
}
ATerm LGChoice_2_0 (ATerm d_67 (ATerm), ATerm e_67 (ATerm), ATerm t)
{
  ATerm x_8 = NULL,v_8 = NULL,w_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL;
  if(((a_9 != NULL) && (a_9 != t)))
    _fail(t);
  else
    a_9 = t;
  if(match_cons(t, sym_LGChoice_2))
    {
      if(((v_8 != NULL) && (v_8 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_8 = ATgetArgument(t, 0);
      if(((w_8 != NULL) && (w_8 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_15 = NULL;
    if(((a_15 != NULL) && (a_15 != t)))
      _fail(t);
    else
      a_15 = t;
    t = SSLgetAnnotations(not_null(a_9));
    if(((x_8 != NULL) && (x_8 != t)))
      _fail(t);
    else
      x_8 = t;
    t = not_null(a_15);
    t = not_null(v_8);
    t = d_67(t);
    if(((y_8 != NULL) && (y_8 != t)))
      _fail(t);
    else
      y_8 = t;
    t = not_null(w_8);
    t = e_67(t);
    if(((z_8 != NULL) && (z_8 != t)))
      _fail(t);
    else
      z_8 = t;
    {
      ATerm b_15 = NULL;
      if(((b_15 != NULL) && (b_15 != t)))
        _fail(t);
      else
        b_15 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, not_null(y_8), not_null(z_8)), not_null(x_8));
      if(((b_9 != NULL) && (b_9 != t)))
        _fail(t);
      else
        b_9 = t;
    }
  }
  return(t);
}
ATerm GChoice_2_0 (ATerm d_66 (ATerm), ATerm e_66 (ATerm), ATerm t)
{
  ATerm e_9 = NULL,c_9 = NULL,d_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL;
  if(((h_9 != NULL) && (h_9 != t)))
    _fail(t);
  else
    h_9 = t;
  if(match_cons(t, sym_GChoice_2))
    {
      if(((c_9 != NULL) && (c_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_9 = ATgetArgument(t, 0);
      if(((d_9 != NULL) && (d_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_15 = NULL;
    if(((c_15 != NULL) && (c_15 != t)))
      _fail(t);
    else
      c_15 = t;
    t = SSLgetAnnotations(not_null(h_9));
    if(((e_9 != NULL) && (e_9 != t)))
      _fail(t);
    else
      e_9 = t;
    t = not_null(c_15);
    t = not_null(c_9);
    t = d_66(t);
    if(((f_9 != NULL) && (f_9 != t)))
      _fail(t);
    else
      f_9 = t;
    t = not_null(d_9);
    t = e_66(t);
    if(((g_9 != NULL) && (g_9 != t)))
      _fail(t);
    else
      g_9 = t;
    {
      ATerm d_15 = NULL;
      if(((d_15 != NULL) && (d_15 != t)))
        _fail(t);
      else
        d_15 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, not_null(f_9), not_null(g_9)), not_null(e_9));
      if(((i_9 != NULL) && (i_9 != t)))
        _fail(t);
      else
        i_9 = t;
    }
  }
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm f_67 (ATerm), ATerm g_67 (ATerm), ATerm h_67 (ATerm), ATerm t)
{
  ATerm m_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL;
  if(((q_9 != NULL) && (q_9 != t)))
    _fail(t);
  else
    q_9 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      if(((j_9 != NULL) && (j_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_9 = ATgetArgument(t, 0);
      if(((k_9 != NULL) && (k_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_9 = ATgetArgument(t, 1);
      if(((l_9 != NULL) && (l_9 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        l_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  {
    ATerm e_15 = NULL;
    if(((e_15 != NULL) && (e_15 != t)))
      _fail(t);
    else
      e_15 = t;
    t = SSLgetAnnotations(not_null(q_9));
    if(((m_9 != NULL) && (m_9 != t)))
      _fail(t);
    else
      m_9 = t;
    t = not_null(e_15);
    t = not_null(j_9);
    t = f_67(t);
    if(((n_9 != NULL) && (n_9 != t)))
      _fail(t);
    else
      n_9 = t;
    t = not_null(k_9);
    t = g_67(t);
    if(((o_9 != NULL) && (o_9 != t)))
      _fail(t);
    else
      o_9 = t;
    t = not_null(l_9);
    t = h_67(t);
    if(((p_9 != NULL) && (p_9 != t)))
      _fail(t);
    else
      p_9 = t;
    {
      ATerm f_15 = NULL;
      if(((f_15 != NULL) && (f_15 != t)))
        _fail(t);
      else
        f_15 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(n_9), not_null(o_9), not_null(p_9)), not_null(m_9));
      if(((r_9 != NULL) && (r_9 != t)))
        _fail(t);
      else
        r_9 = t;
    }
  }
  return(t);
}
ATerm LChoice_2_0 (ATerm b_67 (ATerm), ATerm c_67 (ATerm), ATerm t)
{
  ATerm u_9 = NULL,s_9 = NULL,t_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL;
  if(((x_9 != NULL) && (x_9 != t)))
    _fail(t);
  else
    x_9 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      if(((s_9 != NULL) && (s_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_9 = ATgetArgument(t, 0);
      if(((t_9 != NULL) && (t_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_15 = NULL;
    if(((g_15 != NULL) && (g_15 != t)))
      _fail(t);
    else
      g_15 = t;
    t = SSLgetAnnotations(not_null(x_9));
    if(((u_9 != NULL) && (u_9 != t)))
      _fail(t);
    else
      u_9 = t;
    t = not_null(g_15);
    t = not_null(s_9);
    t = b_67(t);
    if(((v_9 != NULL) && (v_9 != t)))
      _fail(t);
    else
      v_9 = t;
    t = not_null(t_9);
    t = c_67(t);
    if(((w_9 != NULL) && (w_9 != t)))
      _fail(t);
    else
      w_9 = t;
    {
      ATerm h_15 = NULL;
      if(((h_15 != NULL) && (h_15 != t)))
        _fail(t);
      else
        h_15 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(v_9), not_null(w_9)), not_null(u_9));
      if(((y_9 != NULL) && (y_9 != t)))
        _fail(t);
      else
        y_9 = t;
    }
  }
  return(t);
}
ATerm Choice_2_0 (ATerm z_65 (ATerm), ATerm a_66 (ATerm), ATerm t)
{
  ATerm b_10 = NULL,z_9 = NULL,a_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL;
  if(((e_10 != NULL) && (e_10 != t)))
    _fail(t);
  else
    e_10 = t;
  if(match_cons(t, sym_Choice_2))
    {
      if(((z_9 != NULL) && (z_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_9 = ATgetArgument(t, 0);
      if(((a_10 != NULL) && (a_10 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_15 = NULL;
    if(((i_15 != NULL) && (i_15 != t)))
      _fail(t);
    else
      i_15 = t;
    t = SSLgetAnnotations(not_null(e_10));
    if(((b_10 != NULL) && (b_10 != t)))
      _fail(t);
    else
      b_10 = t;
    t = not_null(i_15);
    t = not_null(z_9);
    t = z_65(t);
    if(((c_10 != NULL) && (c_10 != t)))
      _fail(t);
    else
      c_10 = t;
    t = not_null(a_10);
    t = a_66(t);
    if(((d_10 != NULL) && (d_10 != t)))
      _fail(t);
    else
      d_10 = t;
    {
      ATerm j_15 = NULL;
      if(((j_15 != NULL) && (j_15 != t)))
        _fail(t);
      else
        j_15 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(c_10), not_null(d_10)), not_null(b_10));
      if(((f_10 != NULL) && (f_10 != t)))
        _fail(t);
      else
        f_10 = t;
    }
  }
  return(t);
}
ATerm Seq_2_0 (ATerm z_66 (ATerm), ATerm a_67 (ATerm), ATerm t)
{
  ATerm i_10 = NULL,g_10 = NULL,h_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL;
  if(((l_10 != NULL) && (l_10 != t)))
    _fail(t);
  else
    l_10 = t;
  if(match_cons(t, sym_Seq_2))
    {
      if(((g_10 != NULL) && (g_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_10 = ATgetArgument(t, 0);
      if(((h_10 != NULL) && (h_10 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_15 = NULL;
    if(((k_15 != NULL) && (k_15 != t)))
      _fail(t);
    else
      k_15 = t;
    t = SSLgetAnnotations(not_null(l_10));
    if(((i_10 != NULL) && (i_10 != t)))
      _fail(t);
    else
      i_10 = t;
    t = not_null(k_15);
    t = not_null(g_10);
    t = z_66(t);
    if(((j_10 != NULL) && (j_10 != t)))
      _fail(t);
    else
      j_10 = t;
    t = not_null(h_10);
    t = a_67(t);
    if(((k_10 != NULL) && (k_10 != t)))
      _fail(t);
    else
      k_10 = t;
    {
      ATerm l_15 = NULL;
      if(((l_15 != NULL) && (l_15 != t)))
        _fail(t);
      else
        l_15 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(j_10), not_null(k_10)), not_null(i_10));
      if(((m_10 != NULL) && (m_10 != t)))
        _fail(t);
      else
        m_10 = t;
    }
  }
  return(t);
}
ATerm Test_1_0 (ATerm m_67 (ATerm), ATerm t)
{
  ATerm o_10 = NULL,n_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL;
  if(((q_10 != NULL) && (q_10 != t)))
    _fail(t);
  else
    q_10 = t;
  if(match_cons(t, sym_Test_1))
    {
      if(((n_10 != NULL) && (n_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_15 = NULL;
    if(((m_15 != NULL) && (m_15 != t)))
      _fail(t);
    else
      m_15 = t;
    t = SSLgetAnnotations(not_null(q_10));
    if(((o_10 != NULL) && (o_10 != t)))
      _fail(t);
    else
      o_10 = t;
    t = not_null(m_15);
    t = not_null(n_10);
    t = m_67(t);
    if(((p_10 != NULL) && (p_10 != t)))
      _fail(t);
    else
      p_10 = t;
    {
      ATerm n_15 = NULL;
      if(((n_15 != NULL) && (n_15 != t)))
        _fail(t);
      else
        n_15 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Test_1, not_null(p_10)), not_null(o_10));
      if(((r_10 != NULL) && (r_10 != t)))
        _fail(t);
      else
        r_10 = t;
    }
  }
  return(t);
}
ATerm Not_1_0 (ATerm k_67 (ATerm), ATerm t)
{
  ATerm t_10 = NULL,s_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL;
  if(((v_10 != NULL) && (v_10 != t)))
    _fail(t);
  else
    v_10 = t;
  if(match_cons(t, sym_Not_1))
    {
      if(((s_10 != NULL) && (s_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm o_15 = NULL;
    if(((o_15 != NULL) && (o_15 != t)))
      _fail(t);
    else
      o_15 = t;
    t = SSLgetAnnotations(not_null(v_10));
    if(((t_10 != NULL) && (t_10 != t)))
      _fail(t);
    else
      t_10 = t;
    t = not_null(o_15);
    t = not_null(s_10);
    t = k_67(t);
    if(((u_10 != NULL) && (u_10 != t)))
      _fail(t);
    else
      u_10 = t;
    {
      ATerm p_15 = NULL;
      if(((p_15 != NULL) && (p_15 != t)))
        _fail(t);
      else
        p_15 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, not_null(u_10)), not_null(t_10));
      if(((w_10 != NULL) && (w_10 != t)))
        _fail(t);
      else
        w_10 = t;
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
  ATerm w_21 = t;
  int x_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0_0(t);
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
            t = Fail_0_0(t);
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
                  t = Not_1_0(strategy_expression_0_0, t);
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
                        t = Test_1_0(strategy_expression_0_0, t);
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
                              t = Seq_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                              ;
                              LocalPopChoice(f_22);
                            }
                          else
                            {
                              t = e_22;
                              {
                                ATerm g_22 = t;
                                int h_22 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Choice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                    ;
                                    LocalPopChoice(h_22);
                                  }
                                else
                                  {
                                    t = g_22;
                                    {
                                      ATerm i_22 = t;
                                      int j_22 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                          ;
                                          LocalPopChoice(j_22);
                                        }
                                      else
                                        {
                                          t = i_22;
                                          {
                                            ATerm k_22 = t;
                                            int l_22 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = GuardedLChoice_3_0(strategy_expression_0_0, strategy_expression_0_0, strategy_expression_0_0, t);
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
                                                      t = GChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
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
                                                            t = LGChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                                            ;
                                                            LocalPopChoice(p_22);
                                                          }
                                                        else
                                                          {
                                                            t = o_22;
                                                            {
                                                              ATerm q_22 = t;
                                                              int r_22 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm o_16 (ATerm t)
                                                                  {
                                                                    t = SVar_1_0(is_string_0_0, t);
                                                                    return(t);
                                                                  }
                                                                  ATerm p_16 (ATerm t)
                                                                  {
                                                                    ATerm r_16 (ATerm t)
                                                                    {
                                                                      ATerm s_16 (ATerm t)
                                                                      {
                                                                        t = SVar_1_0(is_string_0_0, t);
                                                                        return(t);
                                                                      }
                                                                      t = CallT_3_0(s_16, Nil_0_0, Nil_0_0, t);
                                                                      return(t);
                                                                    }
                                                                    t = list_1_0(r_16, t);
                                                                    return(t);
                                                                  }
                                                                  ATerm q_16 (ATerm t)
                                                                  {
                                                                    t = list_1_0(term_expression_0_0, t);
                                                                    return(t);
                                                                  }
                                                                  t = CallT_3_0(o_16, p_16, q_16, t);
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
                                                                        t = Rec_2_0(is_string_0_0, strategy_expression_0_0, t);
                                                                        ;
                                                                        LocalPopChoice(t_22);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = s_22;
                                                                        {
                                                                          ATerm u_22 = t;
                                                                          int v_22 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Path_2_0(is_int_0_0, strategy_expression_0_0, t);
                                                                              ;
                                                                              LocalPopChoice(v_22);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = u_22;
                                                                              {
                                                                                ATerm w_22 = t;
                                                                                int x_22 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm t_16 (ATerm t)
                                                                                    {
                                                                                      t = list_1_0(strategy_expression_0_0, t);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2_0(is_string_0_0, t_16, t);
                                                                                    ;
                                                                                    LocalPopChoice(x_22);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = w_22;
                                                                                    {
                                                                                      ATerm y_22 = t;
                                                                                      int z_22 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = One_1_0(strategy_expression_0_0, t);
                                                                                          ;
                                                                                          LocalPopChoice(z_22);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = y_22;
                                                                                          {
                                                                                            ATerm a_23 = t;
                                                                                            int b_23 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Some_1_0(strategy_expression_0_0, t);
                                                                                                ;
                                                                                                LocalPopChoice(b_23);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = a_23;
                                                                                                {
                                                                                                  ATerm c_23 = t;
                                                                                                  int d_23 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = All_1_0(strategy_expression_0_0, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(d_23);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = c_23;
                                                                                                      {
                                                                                                        ATerm e_23 = t;
                                                                                                        int f_23 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Thread_1_0(strategy_expression_0_0, t);
                                                                                                            ;
                                                                                                            LocalPopChoice(f_23);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = e_23;
                                                                                                            {
                                                                                                              ATerm g_23 = t;
                                                                                                              int h_23 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Match_1_0(match_term_exp_0_0, t);
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
                                                                                                                        t = Build_1_0(term_expression_0_0, t);
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
                                                                                                                              ATerm u_16 (ATerm t)
                                                                                                                              {
                                                                                                                                t = list_1_0(is_string_0_0, t);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Scope_2_0(u_16, strategy_expression_0_0, t);
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
                                                                                                                                    t = Where_1_0(strategy_expression_0_0, t);
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
                                                                                                                                          ATerm v_16 (ATerm t)
                                                                                                                                          {
                                                                                                                                            ATerm x_16 (ATerm t)
                                                                                                                                            {
                                                                                                                                              ATerm y_16 (ATerm t)
                                                                                                                                              {
                                                                                                                                                t = SVar_1_0(is_string_0_0, t);
                                                                                                                                                return(t);
                                                                                                                                              }
                                                                                                                                              t = Call_2_0(y_16, Nil_0_0, t);
                                                                                                                                              return(t);
                                                                                                                                            }
                                                                                                                                            t = list_1_0(x_16, t);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          ATerm w_16 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = list_1_0(term_expression_0_0, t);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = PrimT_3_0(is_string_0_0, v_16, w_16, t);
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
                                                                                                                                                ATerm z_16 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  ATerm a_17 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    ATerm s_23 = t;
                                                                                                                                                    int t_23 = stack_ptr;
                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                      {
                                                                                                                                                        ATerm b_17 (ATerm t)
                                                                                                                                                        {
                                                                                                                                                          ATerm c_17 (ATerm t)
                                                                                                                                                          {
                                                                                                                                                            t = VarDec_2_0(is_string_0_0, _id, t);
                                                                                                                                                            return(t);
                                                                                                                                                          }
                                                                                                                                                          t = list_1_0(c_17, t);
                                                                                                                                                          return(t);
                                                                                                                                                        }
                                                                                                                                                        t = SDef_3_0(is_string_0_0, b_17, strategy_expression_0_0, t);
                                                                                                                                                        ;
                                                                                                                                                        LocalPopChoice(t_23);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      {
                                                                                                                                                        t = s_23;
                                                                                                                                                        {
                                                                                                                                                          ATerm d_17 (ATerm t)
                                                                                                                                                          {
                                                                                                                                                            ATerm f_17 (ATerm t)
                                                                                                                                                            {
                                                                                                                                                              t = VarDec_2_0(is_string_0_0, _id, t);
                                                                                                                                                              return(t);
                                                                                                                                                            }
                                                                                                                                                            t = list_1_0(f_17, t);
                                                                                                                                                            return(t);
                                                                                                                                                          }
                                                                                                                                                          ATerm e_17 (ATerm t)
                                                                                                                                                          {
                                                                                                                                                            ATerm g_17 (ATerm t)
                                                                                                                                                            {
                                                                                                                                                              t = VarDec_2_0(is_string_0_0, _id, t);
                                                                                                                                                              return(t);
                                                                                                                                                            }
                                                                                                                                                            t = list_1_0(g_17, t);
                                                                                                                                                            return(t);
                                                                                                                                                          }
                                                                                                                                                          t = SDefT_4_0(is_string_0_0, d_17, e_17, strategy_expression_0_0, t);
                                                                                                                                                        }
                                                                                                                                                      }
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = list_1_0(a_17, t);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = Let_2_0(z_16, strategy_expression_0_0, t);
                                                                                                                                                ;
                                                                                                                                                LocalPopChoice(r_23);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = q_23;
                                                                                                                                                {
                                                                                                                                                  ATerm h_17 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    t = term_u_23;
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = debug_1_0(h_17, t);
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
    }
  return(t);
}
ATerm VarDec_2_0 (ATerm w_68 (ATerm), ATerm x_68 (ATerm), ATerm t)
{
  ATerm z_10 = NULL,x_10 = NULL,y_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL;
  if(((c_11 != NULL) && (c_11 != t)))
    _fail(t);
  else
    c_11 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      if(((x_10 != NULL) && (x_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_10 = ATgetArgument(t, 0);
      if(((y_10 != NULL) && (y_10 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_15 = NULL;
    if(((q_15 != NULL) && (q_15 != t)))
      _fail(t);
    else
      q_15 = t;
    t = SSLgetAnnotations(not_null(c_11));
    if(((z_10 != NULL) && (z_10 != t)))
      _fail(t);
    else
      z_10 = t;
    t = not_null(q_15);
    t = not_null(x_10);
    t = w_68(t);
    if(((a_11 != NULL) && (a_11 != t)))
      _fail(t);
    else
      a_11 = t;
    t = not_null(y_10);
    t = x_68(t);
    if(((b_11 != NULL) && (b_11 != t)))
      _fail(t);
    else
      b_11 = t;
    {
      ATerm r_15 = NULL;
      if(((r_15 != NULL) && (r_15 != t)))
        _fail(t);
      else
        r_15 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(a_11), not_null(b_11)), not_null(z_10));
      if(((d_11 != NULL) && (d_11 != t)))
        _fail(t);
      else
        d_11 = t;
    }
  }
  return(t);
}
ATerm SDefT_4_0 (ATerm d_69 (ATerm), ATerm e_69 (ATerm), ATerm f_69 (ATerm), ATerm g_69 (ATerm), ATerm t)
{
  ATerm i_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL;
  if(((n_11 != NULL) && (n_11 != t)))
    _fail(t);
  else
    n_11 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      if(((e_11 != NULL) && (e_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_11 = ATgetArgument(t, 0);
      if(((f_11 != NULL) && (f_11 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_11 = ATgetArgument(t, 1);
      if(((g_11 != NULL) && (g_11 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        g_11 = ATgetArgument(t, 2);
      if(((h_11 != NULL) && (h_11 != ATgetArgument(t, 3))))
        _fail(ATgetArgument(t, 3));
      else
        h_11 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  {
    ATerm s_15 = NULL;
    if(((s_15 != NULL) && (s_15 != t)))
      _fail(t);
    else
      s_15 = t;
    t = SSLgetAnnotations(not_null(n_11));
    if(((i_11 != NULL) && (i_11 != t)))
      _fail(t);
    else
      i_11 = t;
    t = not_null(s_15);
    t = not_null(e_11);
    t = d_69(t);
    if(((j_11 != NULL) && (j_11 != t)))
      _fail(t);
    else
      j_11 = t;
    t = not_null(f_11);
    t = e_69(t);
    if(((k_11 != NULL) && (k_11 != t)))
      _fail(t);
    else
      k_11 = t;
    t = not_null(g_11);
    t = f_69(t);
    if(((l_11 != NULL) && (l_11 != t)))
      _fail(t);
    else
      l_11 = t;
    t = not_null(h_11);
    t = g_69(t);
    if(((m_11 != NULL) && (m_11 != t)))
      _fail(t);
    else
      m_11 = t;
    {
      ATerm t_15 = NULL;
      if(((t_15 != NULL) && (t_15 != t)))
        _fail(t);
      else
        t_15 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, not_null(j_11), not_null(k_11), not_null(l_11), not_null(m_11)), not_null(i_11));
      if(((o_11 != NULL) && (o_11 != t)))
        _fail(t);
      else
        o_11 = t;
    }
  }
  return(t);
}
ATerm SDef_3_0 (ATerm a_69 (ATerm), ATerm b_69 (ATerm), ATerm c_69 (ATerm), ATerm t)
{
  ATerm s_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL;
  if(((w_11 != NULL) && (w_11 != t)))
    _fail(t);
  else
    w_11 = t;
  if(match_cons(t, sym_SDef_3))
    {
      if(((p_11 != NULL) && (p_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_11 = ATgetArgument(t, 0);
      if(((q_11 != NULL) && (q_11 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_11 = ATgetArgument(t, 1);
      if(((r_11 != NULL) && (r_11 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        r_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  {
    ATerm u_15 = NULL;
    if(((u_15 != NULL) && (u_15 != t)))
      _fail(t);
    else
      u_15 = t;
    t = SSLgetAnnotations(not_null(w_11));
    if(((s_11 != NULL) && (s_11 != t)))
      _fail(t);
    else
      s_11 = t;
    t = not_null(u_15);
    t = not_null(p_11);
    t = a_69(t);
    if(((t_11 != NULL) && (t_11 != t)))
      _fail(t);
    else
      t_11 = t;
    t = not_null(q_11);
    t = b_69(t);
    if(((u_11 != NULL) && (u_11 != t)))
      _fail(t);
    else
      u_11 = t;
    t = not_null(r_11);
    t = c_69(t);
    if(((v_11 != NULL) && (v_11 != t)))
      _fail(t);
    else
      v_11 = t;
    {
      ATerm v_15 = NULL;
      if(((v_15 != NULL) && (v_15 != t)))
        _fail(t);
      else
        v_15 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(t_11), not_null(u_11), not_null(v_11)), not_null(s_11));
      if(((x_11 != NULL) && (x_11 != t)))
        _fail(t);
      else
        x_11 = t;
    }
  }
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm v_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_17 (ATerm t)
      {
        ATerm j_17 (ATerm t)
        {
          t = VarDec_2_0(is_string_0_0, _id, t);
          return(t);
        }
        t = list_1_0(j_17, t);
        return(t);
      }
      t = SDef_3_0(is_string_0_0, i_17, strategy_expression_0_0, t);
      ;
      LocalPopChoice(w_23);
    }
  else
    {
      t = v_23;
      {
        ATerm x_23 = t;
        int y_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_17 (ATerm t)
            {
              ATerm m_17 (ATerm t)
              {
                t = VarDec_2_0(is_string_0_0, _id, t);
                return(t);
              }
              t = list_1_0(m_17, t);
              return(t);
            }
            ATerm l_17 (ATerm t)
            {
              ATerm n_17 (ATerm t)
              {
                t = VarDec_2_0(is_string_0_0, _id, t);
                return(t);
              }
              t = list_1_0(n_17, t);
              return(t);
            }
            t = SDefT_4_0(is_string_0_0, k_17, l_17, strategy_expression_0_0, t);
            ;
            LocalPopChoice(y_23);
          }
        else
          {
            t = x_23;
            {
              ATerm o_17 (ATerm t)
              {
                t = term_z_23;
                return(t);
              }
              t = debug_1_0(o_17, t);
            }
          }
      }
    }
  return(t);
}
ATerm list_1_0 (ATerm h_83 (ATerm), ATerm t)
{
  ATerm i_83 (ATerm t)
  {
    ATerm a_24 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(b_24);
      }
    else
      {
        t = a_24;
        t = Cons_2_0(h_83, i_83, t);
      }
    return(t);
  }
  t = i_83(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm d_62 (ATerm), ATerm t)
{
  ATerm z_11 = NULL,y_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL;
  if(((b_12 != NULL) && (b_12 != t)))
    _fail(t);
  else
    b_12 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      if(((y_11 != NULL) && (y_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_15 = NULL;
    if(((w_15 != NULL) && (w_15 != t)))
      _fail(t);
    else
      w_15 = t;
    t = SSLgetAnnotations(not_null(b_12));
    if(((z_11 != NULL) && (z_11 != t)))
      _fail(t);
    else
      z_11 = t;
    t = not_null(w_15);
    t = not_null(y_11);
    t = d_62(t);
    if(((a_12 != NULL) && (a_12 != t)))
      _fail(t);
    else
      a_12 = t;
    {
      ATerm x_15 = NULL;
      if(((x_15 != NULL) && (x_15 != t)))
        _fail(t);
      else
        x_15 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(a_12)), not_null(z_11));
      if(((c_12 != NULL) && (c_12 != t)))
        _fail(t);
      else
        c_12 = t;
    }
  }
  return(t);
}
ATerm Specification_1_0 (ATerm i_62 (ATerm), ATerm t)
{
  ATerm e_12 = NULL,d_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL;
  if(((g_12 != NULL) && (g_12 != t)))
    _fail(t);
  else
    g_12 = t;
  if(match_cons(t, sym_Specification_1))
    {
      if(((d_12 != NULL) && (d_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_15 = NULL;
    if(((y_15 != NULL) && (y_15 != t)))
      _fail(t);
    else
      y_15 = t;
    t = SSLgetAnnotations(not_null(g_12));
    if(((e_12 != NULL) && (e_12 != t)))
      _fail(t);
    else
      e_12 = t;
    t = not_null(y_15);
    t = not_null(d_12);
    t = i_62(t);
    if(((f_12 != NULL) && (f_12 != t)))
      _fail(t);
    else
      f_12 = t;
    {
      ATerm z_15 = NULL;
      if(((z_15 != NULL) && (z_15 != t)))
        _fail(t);
      else
        z_15 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(f_12)), not_null(e_12));
      if(((h_12 != NULL) && (h_12 != t)))
        _fail(t);
      else
        h_12 = t;
    }
  }
  return(t);
}
ATerm stratego_specification_0_0 (ATerm t)
{
  ATerm c_24 = t;
  int d_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_17 (ATerm t)
      {
        ATerm q_17 (ATerm t)
        {
          ATerm r_17 (ATerm t)
          {
            ATerm s_17 (ATerm t)
            {
              t = list_1_0(strategy_definition_0_0, t);
              return(t);
            }
            t = Strategies_1_0(s_17, t);
            return(t);
          }
          t = Cons_2_0(r_17, Nil_0_0, t);
          return(t);
        }
        t = Cons_2_0(_id, q_17, t);
        return(t);
      }
      t = Specification_1_0(p_17, t);
      ;
      LocalPopChoice(d_24);
    }
  else
    {
      t = c_24;
      {
        ATerm t_17 (ATerm t)
        {
          t = term_e_24;
          return(t);
        }
        t = debug_1_0(t_17, t);
      }
    }
  return(t);
}
ATerm _2_0 (ATerm m_60 (ATerm), ATerm n_60 (ATerm), ATerm t)
{
  ATerm k_12 = NULL,i_12 = NULL,j_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL;
  if(((n_12 != NULL) && (n_12 != t)))
    _fail(t);
  else
    n_12 = t;
  if(match_cons(t, sym__2))
    {
      if(((i_12 != NULL) && (i_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_12 = ATgetArgument(t, 0);
      if(((j_12 != NULL) && (j_12 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_16 = NULL;
    if(((a_16 != NULL) && (a_16 != t)))
      _fail(t);
    else
      a_16 = t;
    t = SSLgetAnnotations(not_null(n_12));
    if(((k_12 != NULL) && (k_12 != t)))
      _fail(t);
    else
      k_12 = t;
    t = not_null(a_16);
    t = not_null(i_12);
    t = m_60(t);
    if(((l_12 != NULL) && (l_12 != t)))
      _fail(t);
    else
      l_12 = t;
    t = not_null(j_12);
    t = n_60(t);
    if(((m_12 != NULL) && (m_12 != t)))
      _fail(t);
    else
      m_12 = t;
    {
      ATerm b_16 = NULL;
      if(((b_16 != NULL) && (b_16 != t)))
        _fail(t);
      else
        b_16 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(l_12), not_null(m_12)), not_null(k_12));
      if(((o_12 != NULL) && (o_12 != t)))
        _fail(t);
      else
        o_12 = t;
    }
  }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,y_455 = NULL;
  if(((b_0 != NULL) && (b_0 != t)))
    _fail(t);
  else
    b_0 = t;
  if(((f_0 != NULL) && (f_0 != t)))
    _fail(t);
  else
    f_0 = t;
  t = term_f_24;
  t = whoami_0_0(t);
  if(((y_455 != NULL) && (y_455 != t)))
    _fail(t);
  else
    y_455 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_24, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_24), not_null(y_455)), term_h_24));
  t = printnl_0_0(t);
  t = term_j_24;
  t = exit_0_0(t);
  t = not_null(b_0);
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL,k_0 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((o_49 != NULL) && (o_49 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_49 = ATgetArgument(t, 0);
      if(((p_49 != NULL) && (p_49 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((k_0 != NULL) && (k_0 != t)))
    _fail(t);
  else
    k_0 = t;
  t = SSL_printnl(not_null(o_49), not_null(p_49));
  t = not_null(k_0);
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm c_41 = NULL;
  if(((c_41 != NULL) && (c_41 != t)))
    _fail(t);
  else
    c_41 = t;
  t = SSL_implode_string(not_null(c_41));
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm k_24 = t;
  int l_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(l_24);
    }
  else
    {
      t = k_24;
      {
        ATerm i_28 = NULL,j_28 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((i_28 != NULL) && (i_28 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              i_28 = ATgetFirst((ATermList) t);
            if(((j_28 != NULL) && (j_28 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              j_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(i_28);
        {
          ATerm u_17 (ATerm t)
          {
            t = not_null(j_28);
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(u_17, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm o_141 = NULL,l_0 = NULL,p_141 = NULL,h_28 = NULL;
  if(((o_141 != NULL) && (o_141 != t)))
    _fail(t);
  else
    o_141 = t;
  if(((l_0 != NULL) && (l_0 != t)))
    _fail(t);
  else
    l_0 = t;
  t = not_null(o_141);
  if(((p_141 != NULL) && (p_141 != t)))
    _fail(t);
  else
    p_141 = t;
  t = SSL_explode_term(not_null(p_141));
  if(match_cons(t, sym__2))
    {
      ATerm m_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      if(((h_28 != NULL) && (h_28 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(h_28);
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm u_83 (ATerm), ATerm t)
{
  ATerm v_83 (ATerm t)
  {
    ATerm n_24 = t;
    int o_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, v_83, t);
        ;
        LocalPopChoice(o_24);
      }
    else
      {
        t = n_24;
        t = Nil_0_0(t);
        t = u_83(t);
      }
    return(t);
  }
  t = v_83(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((g_28 != NULL) && (g_28 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_28 = ATgetArgument(t, 0);
      if(((f_28 != NULL) && (f_28 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(g_28);
  {
    ATerm v_17 (ATerm t)
    {
      t = not_null(f_28);
      return(t);
    }
    t = at_end_1_0(v_17, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm p_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(q_24);
    }
  else
    {
      t = p_24;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm d_41 = NULL;
  if(((d_41 != NULL) && (d_41 != t)))
    _fail(t);
  else
    d_41 = t;
  t = SSL_explode_string(not_null(d_41));
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
  ATerm r_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(s_24);
    }
  else
    {
      t = r_24;
      {
        ATerm t_24 = t;
        int u_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_17 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(w_17, t);
            ;
            LocalPopChoice(u_24);
          }
        else
          {
            t = t_24;
            {
              ATerm v_24 = t;
              int w_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_51 = NULL;
                  if(match_cons(t, sym_Path_1))
                    {
                      if(((k_51 != NULL) && (k_51 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        k_51 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = not_null(k_51);
                  ;
                  LocalPopChoice(w_24);
                }
              else
                {
                  t = v_24;
                  {
                    ATerm x_24 = t;
                    int y_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm j_51 = NULL;
                        if(match_cons(t, sym_Var_1))
                          {
                            if(((j_51 != NULL) && (j_51 != ATgetArgument(t, 0))))
                              _fail(ATgetArgument(t, 0));
                            else
                              j_51 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = not_null(j_51);
                        {
                          ATerm z_24 = t;
                          int a_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0_0(t);
                              ;
                              LocalPopChoice(a_25);
                            }
                          else
                            {
                              t = z_24;
                              {
                                ATerm x_17 (ATerm t)
                                {
                                  t = term_b_25;
                                  return(t);
                                }
                                t = debug_1_0(x_17, t);
                                _fail(t);
                              }
                            }
                        }
                        ;
                        LocalPopChoice(y_24);
                      }
                    else
                      {
                        t = x_24;
                        {
                          ATerm h_51 = NULL,i_51 = NULL,m_0 = NULL,f_426 = NULL,n_0 = NULL,r_426 = NULL;
                          if(match_cons(t, sym_Prefix_2))
                            {
                              if(((h_51 != NULL) && (h_51 != ATgetArgument(t, 0))))
                                _fail(ATgetArgument(t, 0));
                              else
                                h_51 = ATgetArgument(t, 0);
                              if(((i_51 != NULL) && (i_51 != ATgetArgument(t, 1))))
                                _fail(ATgetArgument(t, 1));
                              else
                                i_51 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          if(((m_0 != NULL) && (m_0 != t)))
                            _fail(t);
                          else
                            m_0 = t;
                          t = not_null(h_51);
                          t = eval_config_0_0(t);
                          if(((f_426 != NULL) && (f_426 != t)))
                            _fail(t);
                          else
                            f_426 = t;
                          t = not_null(m_0);
                          if(((n_0 != NULL) && (n_0 != t)))
                            _fail(t);
                          else
                            n_0 = t;
                          t = not_null(i_51);
                          t = eval_config_0_0(t);
                          if(((r_426 != NULL) && (r_426 != t)))
                            _fail(t);
                          else
                            r_426 = t;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(f_426), not_null(r_426));
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
  ATerm g_51 = NULL;
  if(((g_51 != NULL) && (g_51 != t)))
    _fail(t);
  else
    g_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_25, not_null(g_51));
  t = table_get_0_0(t);
  {
    ATerm y_17 (ATerm t)
    {
      ATerm o_0 = NULL,p_0 = NULL,g_425 = NULL;
      t = eval_config_0_0(t);
      if(((o_0 != NULL) && (o_0 != t)))
        _fail(t);
      else
        o_0 = t;
      if(((p_0 != NULL) && (p_0 != t)))
        _fail(t);
      else
        p_0 = t;
      if(((g_425 != NULL) && (g_425 != t)))
        _fail(t);
      else
        g_425 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_25, not_null(g_51), not_null(g_425));
      t = table_put_0_0(t);
      t = not_null(o_0);
      return(t);
    }
    t = try_1_0(y_17, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm u_96 (ATerm), ATerm t)
{
  ATerm z_17 (ATerm t)
  {
    ATerm q_0 = NULL,r_0 = NULL,n_407 = NULL;
    if(((q_0 != NULL) && (q_0 != t)))
      _fail(t);
    else
      q_0 = t;
    if(((r_0 != NULL) && (r_0 != t)))
      _fail(t);
    else
      r_0 = t;
    t = term_d_25;
    t = get_config_0_0(t);
    if(((n_407 != NULL) && (n_407 != t)))
      _fail(t);
    else
      n_407 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_407), term_e_25);
    t = geq_0_0(t);
    t = not_null(q_0);
    t = u_96(t);
    return(t);
  }
  t = try_1_0(z_17, t);
  return(t);
}
ATerm fputc_0_0 (ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL,s_0 = NULL,l_348 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((g_46 != NULL) && (g_46 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_46 = ATgetArgument(t, 0);
      {
        ATerm f_25 = ATgetArgument(t, 1);
        if(match_cons(f_25, sym_Stream_1))
          {
            if(((h_46 != NULL) && (h_46 != ATgetArgument(f_25, 0))))
              _fail(ATgetArgument(f_25, 0));
            else
              h_46 = ATgetArgument(f_25, 0);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_fputc(not_null(g_46), not_null(h_46));
  if(((s_0 != NULL) && (s_0 != t)))
    _fail(t);
  else
    s_0 = t;
  if(((l_348 != NULL) && (l_348 != t)))
    _fail(t);
  else
    l_348 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_348));
  return(t);
}
ATerm write_in_text_to_stream_0_0 (ATerm t)
{
  ATerm u_49 = NULL,v_49 = NULL,t_0 = NULL,z_390 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_25 = ATgetArgument(t, 0);
      if(match_cons(g_25, sym_Stream_1))
        {
          if(((u_49 != NULL) && (u_49 != ATgetArgument(g_25, 0))))
            _fail(ATgetArgument(g_25, 0));
          else
            u_49 = ATgetArgument(g_25, 0);
        }
      else
        _fail(t);
      if(((v_49 != NULL) && (v_49 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(not_null(u_49), not_null(v_49));
  if(((t_0 != NULL) && (t_0 != t)))
    _fail(t);
  else
    t_0 = t;
  if(((z_390 != NULL) && (z_390 != t)))
    _fail(t);
  else
    z_390 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(z_390));
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm a_18 (ATerm t)
  {
    ATerm u_0 = NULL,n_392 = NULL;
    t = write_in_text_to_stream_0_0(t);
    if(((u_0 != NULL) && (u_0 != t)))
      _fail(t);
    else
      u_0 = t;
    if(((n_392 != NULL) && (n_392 != t)))
      _fail(t);
    else
      n_392 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_h_25, not_null(n_392));
    t = fputc_0_0(t);
    return(t);
  }
  t = WriteToFile_1_0(a_18, t);
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm q_49 = NULL,r_49 = NULL,v_0 = NULL,t_389 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_25 = ATgetArgument(t, 0);
      if(match_cons(i_25, sym_Stream_1))
        {
          if(((q_49 != NULL) && (q_49 != ATgetArgument(i_25, 0))))
            _fail(ATgetArgument(i_25, 0));
          else
            q_49 = ATgetArgument(i_25, 0);
        }
      else
        _fail(t);
      if(((r_49 != NULL) && (r_49 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(not_null(q_49), not_null(r_49));
  if(((v_0 != NULL) && (v_0 != t)))
    _fail(t);
  else
    v_0 = t;
  if(((t_389 != NULL) && (t_389 != t)))
    _fail(t);
  else
    t_389 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(t_389));
  return(t);
}
ATerm WriteToFile_1_0 (ATerm q_95 (ATerm), ATerm t)
{
  ATerm y_392 = NULL,y_49 = NULL,w_0 = NULL,j_393 = NULL,x_0 = NULL,u_393 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((y_392 != NULL) && (y_392 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_392 = ATgetArgument(t, 0);
      if(((y_49 != NULL) && (y_49 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(y_392);
  if(((w_0 != NULL) && (w_0 != t)))
    _fail(t);
  else
    w_0 = t;
  if(((j_393 != NULL) && (j_393 != t)))
    _fail(t);
  else
    j_393 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(j_393), term_j_25);
  t = open_stream_0_0(t);
  if(((x_0 != NULL) && (x_0 != t)))
    _fail(t);
  else
    x_0 = t;
  if(((u_393 != NULL) && (u_393 != t)))
    _fail(t);
  else
    u_393 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(u_393), not_null(y_49));
  t = q_95(t);
  t = fclose_0_0(t);
  t = not_null(y_49);
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  t = WriteToFile_1_0(write_in_baf_to_stream_0_0, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm y_0 = NULL,t_52 = NULL;
  if(((y_0 != NULL) && (y_0 != t)))
    _fail(t);
  else
    y_0 = t;
  {
    ATerm b_18 (ATerm t)
    {
      ATerm k_25 = t;
      int l_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_18 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((t_52 != NULL) && (t_52 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  t_52 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(c_18, t);
          ;
          LocalPopChoice(l_25);
        }
      else
        {
          t = k_25;
          t = term_m_25;
          if(((t_52 != NULL) && (t_52 != t)))
            _fail(t);
          else
            t_52 = t;
        }
      return(t);
    }
    t = _2_0(b_18, _id, t);
    t = not_null(y_0);
    {
      ATerm d_18 (ATerm t)
      {
        ATerm e_18 (ATerm t)
        {
          t = not_null(t_52);
          return(t);
        }
        t = split_2_0(e_18, _id, t);
        return(t);
      }
      t = _2_0(_id, d_18, t);
      {
        ATerm n_25 = t;
        int o_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_18 (ATerm t)
            {
              ATerm g_18 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(g_18, t);
              return(t);
            }
            t = _2_0(f_18, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(o_25);
          }
        else
          {
            t = n_25;
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
ATerm apply_strategy_1_0 (ATerm s_98 (ATerm), ATerm t)
{
  ATerm z_0 = NULL,a_1 = NULL,q_52 = NULL,r_52 = NULL,s_52 = NULL;
  if(((z_0 != NULL) && (z_0 != t)))
    _fail(t);
  else
    z_0 = t;
  t = dtime_0_0(t);
  t = not_null(z_0);
  t = s_98(t);
  if(((a_1 != NULL) && (a_1 != t)))
    _fail(t);
  else
    a_1 = t;
  t = dtime_0_0(t);
  if(((q_52 != NULL) && (q_52 != t)))
    _fail(t);
  else
    q_52 = t;
  t = not_null(a_1);
  if(match_cons(t, sym__2))
    {
      if(((r_52 != NULL) && (r_52 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_52 = ATgetArgument(t, 0);
      if(((s_52 != NULL) && (s_52 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(r_52)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(q_52))), not_null(s_52));
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL;
  ATerm p_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Stream_1))
        {
          if(((k_46 != NULL) && (k_46 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            k_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_fclose(not_null(k_46));
      ;
      LocalPopChoice(q_25);
    }
  else
    {
      t = p_25;
      if(((l_46 != NULL) && (l_46 != t)))
        _fail(t);
      else
        l_46 = t;
      t = SSL_fclose(not_null(l_46));
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm w_49 = NULL;
  if(match_cons(t, sym_Stream_1))
    {
      if(((w_49 != NULL) && (w_49 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(not_null(w_49));
  return(t);
}
ATerm debug_1_0 (ATerm c_95 (ATerm), ATerm t)
{
  ATerm b_1 = NULL,c_1 = NULL,v_383 = NULL,d_1 = NULL,c_384 = NULL;
  if(((b_1 != NULL) && (b_1 != t)))
    _fail(t);
  else
    b_1 = t;
  if(((c_1 != NULL) && (c_1 != t)))
    _fail(t);
  else
    c_1 = t;
  t = c_95(t);
  if(((v_383 != NULL) && (v_383 != t)))
    _fail(t);
  else
    v_383 = t;
  t = not_null(c_1);
  if(((d_1 != NULL) && (d_1 != t)))
    _fail(t);
  else
    d_1 = t;
  if(((c_384 != NULL) && (c_384 != t)))
    _fail(t);
  else
    c_384 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_384)), not_null(v_383)));
  t = printnl_0_0(t);
  t = not_null(b_1);
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm i_46 = NULL,j_46 = NULL,e_1 = NULL,b_349 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((i_46 != NULL) && (i_46 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_46 = ATgetArgument(t, 0);
      if(((j_46 != NULL) && (j_46 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_fopen(not_null(i_46), not_null(j_46));
  if(((e_1 != NULL) && (e_1 != t)))
    _fail(t);
  else
    e_1 = t;
  if(((b_349 != NULL) && (b_349 != t)))
    _fail(t);
  else
    b_349 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(b_349));
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm b_41 = NULL;
  if(((b_41 != NULL) && (b_41 != t)))
    _fail(t);
  else
    b_41 = t;
  t = SSL_is_string(not_null(b_41));
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_1 = NULL,c_351 = NULL;
  t = SSL_stdin_stream();
  if(((f_1 != NULL) && (f_1 != t)))
    _fail(t);
  else
    f_1 = t;
  if(((c_351 != NULL) && (c_351 != t)))
    _fail(t);
  else
    c_351 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_351));
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_1 = NULL,n_351 = NULL;
  t = SSL_stdout_stream();
  if(((g_1 != NULL) && (g_1 != t)))
    _fail(t);
  else
    g_1 = t;
  if(((n_351 != NULL) && (n_351 != t)))
    _fail(t);
  else
    n_351 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(n_351));
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_1 = NULL,y_351 = NULL;
  t = SSL_stderr_stream();
  if(((h_1 != NULL) && (h_1 != t)))
    _fail(t);
  else
    h_1 = t;
  if(((y_351 != NULL) && (y_351 != t)))
    _fail(t);
  else
    y_351 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(y_351));
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm r_25 = t;
  int s_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_stderr_0)))
        _fail(t);
      t = stderr_stream_0_0(t);
      ;
      LocalPopChoice(s_25);
    }
  else
    {
      t = r_25;
      {
        ATerm t_25 = t;
        int u_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_stdout_0)))
              _fail(t);
            t = stdout_stream_0_0(t);
            ;
            LocalPopChoice(u_25);
          }
        else
          {
            t = t_25;
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
  ATerm i_223 = NULL,i_1 = NULL,j_223 = NULL,b_36 = NULL,c_36 = NULL;
  if(((i_223 != NULL) && (i_223 != t)))
    _fail(t);
  else
    i_223 = t;
  if(((i_1 != NULL) && (i_1 != t)))
    _fail(t);
  else
    i_1 = t;
  t = not_null(i_223);
  if(((j_223 != NULL) && (j_223 != t)))
    _fail(t);
  else
    j_223 = t;
  t = SSL_explode_term(not_null(j_223));
  if(match_cons(t, sym__2))
    {
      ATerm v_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_25 = ATgetArgument(t, 1);
        if(((ATgetType(w_25) == AT_LIST) && !(ATisEmpty(w_25))))
          {
            if(((c_36 != NULL) && (c_36 != ATgetFirst((ATermList) w_25))))
              _fail(ATgetFirst((ATermList) w_25));
            else
              c_36 = ATgetFirst((ATermList) w_25);
            if(((b_36 != NULL) && (b_36 != (ATerm) ATgetNext((ATermList) w_25))))
              _fail((ATerm) ATgetNext((ATermList) w_25));
            else
              b_36 = (ATerm) ATgetNext((ATermList) w_25);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(c_36);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_25 = ATgetArgument(t, 0);
      ATerm y_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_25 = t;
    int a_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Fst_0_0(t);
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(a_26);
      }
    else
      {
        t = z_25;
        {
          ATerm b_26 = t;
          int c_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_18 (ATerm t)
              {
                ATerm n_342 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    if(((n_342 != NULL) && (n_342 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      n_342 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = not_null(n_342);
                return(t);
              }
              t = _2_0(h_18, _id, t);
              t = fopen_0_0(t);
              ;
              LocalPopChoice(c_26);
            }
          else
            {
              t = b_26;
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
  ATerm k_1 = NULL,x_49 = NULL;
  ATerm d_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_1 = NULL,p_391 = NULL;
      if(((j_1 != NULL) && (j_1 != t)))
        _fail(t);
      else
        j_1 = t;
      if(((p_391 != NULL) && (p_391 != t)))
        _fail(t);
      else
        p_391 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_391), term_f_26);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(e_26);
    }
  else
    {
      t = d_26;
      {
        ATerm i_18 (ATerm t)
        {
          t = term_g_26;
          return(t);
        }
        t = debug_1_0(i_18, t);
        _fail(t);
      }
    }
  if(((k_1 != NULL) && (k_1 != t)))
    _fail(t);
  else
    k_1 = t;
  t = read_from_stream_0_0(t);
  if(((x_49 != NULL) && (x_49 != t)))
    _fail(t);
  else
    x_49 = t;
  t = not_null(k_1);
  t = fclose_0_0(t);
  t = not_null(x_49);
  return(t);
}
ATerm split_2_0 (ATerm u_90 (ATerm), ATerm v_90 (ATerm), ATerm t)
{
  ATerm l_1 = NULL,v_226 = NULL,m_1 = NULL,c_227 = NULL;
  if(((l_1 != NULL) && (l_1 != t)))
    _fail(t);
  else
    l_1 = t;
  t = u_90(t);
  if(((v_226 != NULL) && (v_226 != t)))
    _fail(t);
  else
    v_226 = t;
  t = not_null(l_1);
  if(((m_1 != NULL) && (m_1 != t)))
    _fail(t);
  else
    m_1 = t;
  t = v_90(t);
  if(((c_227 != NULL) && (c_227 != t)))
    _fail(t);
  else
    c_227 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(v_226), not_null(c_227));
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm n_1 = NULL,p_52 = NULL;
  if(((n_1 != NULL) && (n_1 != t)))
    _fail(t);
  else
    n_1 = t;
  {
    ATerm h_26 = t;
    int i_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_18 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              if(((p_52 != NULL) && (p_52 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                p_52 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(j_18, t);
        ;
        LocalPopChoice(i_26);
      }
    else
      {
        t = h_26;
        t = term_j_26;
        if(((p_52 != NULL) && (p_52 != t)))
          _fail(t);
        else
          p_52 = t;
      }
    t = not_null(n_1);
    {
      ATerm k_18 (ATerm t)
      {
        t = not_null(p_52);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, k_18, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm l_18 (ATerm t)
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-k", 0, ATtrue)))
          _fail(t);
        ;
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
      }
    return(t);
  }
  ATerm m_18 (ATerm t)
  {
    ATerm o_1 = NULL,p_1 = NULL,j_459 = NULL;
    if(((o_1 != NULL) && (o_1 != t)))
      _fail(t);
    else
      o_1 = t;
    if(((p_1 != NULL) && (p_1 != t)))
      _fail(t);
    else
      p_1 = t;
    t = string_to_int_0_0(t);
    if(((j_459 != NULL) && (j_459 != t)))
      _fail(t);
    else
      j_459 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_m_26, not_null(j_459));
    t = set_config_0_0(t);
    t = not_null(o_1);
    return(t);
  }
  ATerm n_18 (ATerm t)
  {
    t = term_n_26;
    return(t);
  }
  t = ArgOption_3_0(l_18, m_18, n_18, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm x_42 = NULL;
  if(((x_42 != NULL) && (x_42 != t)))
    _fail(t);
  else
    x_42 = t;
  t = SSL_string_to_int(not_null(x_42));
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_26 = t;
  int p_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_18 (ATerm t)
      {
        ATerm q_26 = t;
        int r_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-S", 0, ATtrue)))
              _fail(t);
            ;
            LocalPopChoice(r_26);
          }
        else
          {
            t = q_26;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
          }
        return(t);
      }
      ATerm p_18 (ATerm t)
      {
        ATerm q_1 = NULL;
        if(((q_1 != NULL) && (q_1 != t)))
          _fail(t);
        else
          q_1 = t;
        t = term_t_26;
        t = set_config_0_0(t);
        t = term_u_26;
        return(t);
      }
      ATerm q_18 (ATerm t)
      {
        t = term_v_26;
        return(t);
      }
      t = Option_3_0(o_18, p_18, q_18, t);
      ;
      LocalPopChoice(p_26);
    }
  else
    {
      t = o_26;
      {
        ATerm w_26 = t;
        int x_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_18 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm s_18 (ATerm t)
            {
              ATerm r_1 = NULL,s_1 = NULL,o_464 = NULL,t_1 = NULL,z_464 = NULL;
              if(((r_1 != NULL) && (r_1 != t)))
                _fail(t);
              else
                r_1 = t;
              if(((s_1 != NULL) && (s_1 != t)))
                _fail(t);
              else
                s_1 = t;
              t = string_to_int_0_0(t);
              if(((o_464 != NULL) && (o_464 != t)))
                _fail(t);
              else
                o_464 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_d_25, not_null(o_464));
              t = set_config_0_0(t);
              t = not_null(r_1);
              if(((t_1 != NULL) && (t_1 != t)))
                _fail(t);
              else
                t_1 = t;
              if(((z_464 != NULL) && (z_464 != t)))
                _fail(t);
              else
                z_464 = t;
              t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(z_464));
              return(t);
            }
            ATerm t_18 (ATerm t)
            {
              t = term_y_26;
              return(t);
            }
            t = ArgOption_3_0(r_18, s_18, t_18, t);
            ;
            LocalPopChoice(x_26);
          }
        else
          {
            t = w_26;
            {
              ATerm u_18 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm v_18 (ATerm t)
              {
                ATerm u_1 = NULL;
                if(((u_1 != NULL) && (u_1 != t)))
                  _fail(t);
                else
                  u_1 = t;
                t = term_a_27;
                t = set_config_0_0(t);
                t = term_b_27;
                return(t);
              }
              ATerm w_18 (ATerm t)
              {
                t = term_c_27;
                return(t);
              }
              t = Option_3_0(u_18, v_18, w_18, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm d_27 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(e_27);
    }
  else
    {
      t = d_27;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm x_18 (ATerm t)
  {
    ATerm f_27 = t;
    int g_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-o", 0, ATtrue)))
          _fail(t);
        ;
        LocalPopChoice(g_27);
      }
    else
      {
        t = f_27;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
      }
    return(t);
  }
  ATerm y_18 (ATerm t)
  {
    ATerm v_1 = NULL,w_1 = NULL,w_461 = NULL,x_1 = NULL,h_462 = NULL;
    if(((v_1 != NULL) && (v_1 != t)))
      _fail(t);
    else
      v_1 = t;
    if(((w_1 != NULL) && (w_1 != t)))
      _fail(t);
    else
      w_1 = t;
    if(((w_461 != NULL) && (w_461 != t)))
      _fail(t);
    else
      w_461 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_h_27, not_null(w_461));
    t = set_config_0_0(t);
    t = not_null(v_1);
    if(((x_1 != NULL) && (x_1 != t)))
      _fail(t);
    else
      x_1 = t;
    if(((h_462 != NULL) && (h_462 != t)))
      _fail(t);
    else
      h_462 = t;
    t = (ATerm) ATmakeAppl(sym_Output_1, not_null(h_462));
    return(t);
  }
  ATerm z_18 (ATerm t)
  {
    t = term_i_27;
    return(t);
  }
  t = ArgOption_3_0(x_18, y_18, z_18, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm j_27 = t;
  int k_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(k_27);
    }
  else
    {
      t = j_27;
      {
        ATerm a_19 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm b_19 (ATerm t)
        {
          ATerm y_1 = NULL;
          if(((y_1 != NULL) && (y_1 != t)))
            _fail(t);
          else
            y_1 = t;
          t = term_m_27;
          t = set_config_0_0(t);
          t = term_n_27;
          return(t);
        }
        ATerm c_19 (ATerm t)
        {
          t = term_o_27;
          return(t);
        }
        t = Option_3_0(a_19, b_19, c_19, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm p_27 = t;
  int q_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("register-usage-info", 0, ATtrue)))
        _fail(t);
      t = register_usage_1_0(j_0, t);
      ;
      LocalPopChoice(q_27);
    }
  else
    {
      t = p_27;
      {
        ATerm j_55 = NULL,h_55 = NULL,i_55 = NULL,z_1 = NULL,a_2 = NULL,e_499 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((j_55 != NULL) && (j_55 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              j_55 = ATgetFirst((ATermList) t);
            {
              ATerm r_27 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(r_27) == AT_LIST) && !(ATisEmpty(r_27))))
                {
                  if(((h_55 != NULL) && (h_55 != ATgetFirst((ATermList) r_27))))
                    _fail(ATgetFirst((ATermList) r_27));
                  else
                    h_55 = ATgetFirst((ATermList) r_27);
                  if(((i_55 != NULL) && (i_55 != (ATerm) ATgetNext((ATermList) r_27))))
                    _fail((ATerm) ATgetNext((ATermList) r_27));
                  else
                    i_55 = (ATerm) ATgetNext((ATermList) r_27);
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
        t = not_null(j_55);
        t = h_0(t);
        t = not_null(z_1);
        if(((a_2 != NULL) && (a_2 != t)))
          _fail(t);
        else
          a_2 = t;
        t = not_null(h_55);
        t = i_0(t);
        if(((e_499 != NULL) && (e_499 != t)))
          _fail(t);
        else
          e_499 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(i_55)), not_null(e_499));
      }
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm d_19 (ATerm t)
  {
    ATerm s_27 = t;
    int t_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-i", 0, ATtrue)))
          _fail(t);
        ;
        LocalPopChoice(t_27);
      }
    else
      {
        t = s_27;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
      }
    return(t);
  }
  ATerm e_19 (ATerm t)
  {
    ATerm b_2 = NULL,c_2 = NULL,m_460 = NULL,d_2 = NULL,x_460 = NULL;
    if(((b_2 != NULL) && (b_2 != t)))
      _fail(t);
    else
      b_2 = t;
    if(((c_2 != NULL) && (c_2 != t)))
      _fail(t);
    else
      c_2 = t;
    if(((m_460 != NULL) && (m_460 != t)))
      _fail(t);
    else
      m_460 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_u_27, not_null(m_460));
    t = set_config_0_0(t);
    t = not_null(b_2);
    if(((d_2 != NULL) && (d_2 != t)))
      _fail(t);
    else
      d_2 = t;
    if(((x_460 != NULL) && (x_460 != t)))
      _fail(t);
    else
      x_460 = t;
    t = (ATerm) ATmakeAppl(sym_Input_1, not_null(x_460));
    return(t);
  }
  ATerm f_19 (ATerm t)
  {
    t = term_v_27;
    return(t);
  }
  t = ArgOption_3_0(d_19, e_19, f_19, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm w_27 = t;
  int x_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(x_27);
    }
  else
    {
      t = w_27;
      {
        ATerm y_27 = t;
        int z_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(z_27);
          }
        else
          {
            t = y_27;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_2 = NULL,f_457 = NULL;
  t = report_run_time_0_0(t);
  if(((e_2 != NULL) && (e_2 != t)))
    _fail(t);
  else
    e_2 = t;
  t = term_f_24;
  t = whoami_0_0(t);
  if(((f_457 != NULL) && (f_457 != t)))
    _fail(t);
  else
    f_457 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_24, (ATerm) ATinsert(ATinsert(ATempty, term_a_28), not_null(f_457)));
  t = printnl_0_0(t);
  t = term_j_24;
  t = exit_0_0(t);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_b_28;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm y_52 = NULL;
  if(((y_52 != NULL) && (y_52 != t)))
    _fail(t);
  else
    y_52 = t;
  t = SSL_TicksToSeconds(not_null(y_52));
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm c_43 = NULL,d_43 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((c_43 != NULL) && (c_43 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_43 = ATgetArgument(t, 0);
      if(((d_43 != NULL) && (d_43 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_28 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(not_null(c_43), not_null(d_43));
        ;
        LocalPopChoice(d_28);
      }
    else
      {
        t = c_28;
        t = SSL_addr(not_null(c_43), not_null(d_43));
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm f_89 (ATerm), ATerm g_89 (ATerm), ATerm t)
{
  ATerm e_28 = t;
  int k_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = f_89(t);
      ;
      LocalPopChoice(k_28);
    }
  else
    {
      t = e_28;
      {
        ATerm m_34 = NULL,n_34 = NULL,f_2 = NULL,z_202 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((m_34 != NULL) && (m_34 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              m_34 = ATgetFirst((ATermList) t);
            if(((n_34 != NULL) && (n_34 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              n_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        if(((f_2 != NULL) && (f_2 != t)))
          _fail(t);
        else
          f_2 = t;
        t = not_null(n_34);
        t = foldr_2_0(f_89, g_89, t);
        if(((z_202 != NULL) && (z_202 != t)))
          _fail(t);
        else
          z_202 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_34), not_null(z_202));
        t = g_89(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm y_92 (ATerm), ATerm z_92 (ATerm), ATerm t)
{
  ATerm y_293 = NULL,g_2 = NULL,z_293 = NULL,f_41 = NULL;
  if(((y_293 != NULL) && (y_293 != t)))
    _fail(t);
  else
    y_293 = t;
  if(((g_2 != NULL) && (g_2 != t)))
    _fail(t);
  else
    g_2 = t;
  t = not_null(y_293);
  if(((z_293 != NULL) && (z_293 != t)))
    _fail(t);
  else
    z_293 = t;
  t = SSL_explode_term(not_null(z_293));
  if(match_cons(t, sym__2))
    {
      ATerm l_28 = ATgetArgument(t, 0);
      if(((f_41 != NULL) && (f_41 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(f_41);
  t = foldr_2_0(y_92, z_92, t);
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
    ATerm g_19 (ATerm t)
    {
      t = term_s_26;
      return(t);
    }
    t = crush_2_0(g_19, add_0_0, t);
    t = ticks_to_seconds_0_0(t);
  }
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm c_44 = NULL,d_44 = NULL,h_2 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((c_44 != NULL) && (c_44 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_44 = ATgetArgument(t, 0);
      if(((d_44 != NULL) && (d_44 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((h_2 != NULL) && (h_2 != t)))
    _fail(t);
  else
    h_2 = t;
  {
    ATerm m_28 = t;
    int n_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(not_null(c_44), not_null(d_44));
        ;
        LocalPopChoice(n_28);
      }
    else
      {
        t = m_28;
        t = SSL_gtr(not_null(c_44), not_null(d_44));
      }
    t = not_null(h_2);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_44 = NULL;
  ATerm o_28 = t;
  int p_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym__2))
        {
          if(((i_44 != NULL) && (i_44 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            i_44 = ATgetArgument(t, 0);
          if(((i_44 != NULL) && (i_44 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            i_44 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      ;
      LocalPopChoice(p_28);
    }
  else
    {
      t = o_28;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_96 (ATerm), ATerm t)
{
  ATerm h_19 (ATerm t)
  {
    ATerm i_2 = NULL,j_2 = NULL,x_406 = NULL;
    if(((i_2 != NULL) && (i_2 != t)))
      _fail(t);
    else
      i_2 = t;
    if(((j_2 != NULL) && (j_2 != t)))
      _fail(t);
    else
      j_2 = t;
    t = term_d_25;
    t = get_config_0_0(t);
    if(((x_406 != NULL) && (x_406 != t)))
      _fail(t);
    else
      x_406 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_406), term_j_24);
    t = geq_0_0(t);
    t = not_null(i_2);
    t = t_96(t);
    return(t);
  }
  t = try_1_0(h_19, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm i_19 (ATerm t)
  {
    ATerm k_2 = NULL,y_457 = NULL,l_2 = NULL,g_458 = NULL;
    if(((k_2 != NULL) && (k_2 != t)))
      _fail(t);
    else
      k_2 = t;
    t = run_time_0_0(t);
    if(((y_457 != NULL) && (y_457 != t)))
      _fail(t);
    else
      y_457 = t;
    t = not_null(k_2);
    if(((l_2 != NULL) && (l_2 != t)))
      _fail(t);
    else
      l_2 = t;
    t = term_f_24;
    t = whoami_0_0(t);
    if(((g_458 != NULL) && (g_458 != t)))
      _fail(t);
    else
      g_458 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_g_24, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_28), not_null(y_457)), term_q_28), not_null(g_458)));
    t = printnl_0_0(t);
    return(t);
  }
  t = if_verbose1_1_0(i_19, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_s_26;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1_0 (ATerm q_99 (ATerm), ATerm t)
{
  ATerm s_28 = t;
  int t_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_28;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_28);
    }
  else
    {
      t = s_28;
      {
        ATerm j_19 (ATerm t)
        {
          ATerm v_28 = t;
          int w_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0_0(t);
              ;
              LocalPopChoice(w_28);
            }
          else
            {
              t = v_28;
              {
                ATerm x_28 = t;
                int b_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(b_29);
                  }
                else
                  {
                    t = x_28;
                    t = Version_0_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(j_19, t);
      }
    }
  t = q_99(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm g_57 = NULL;
  if(((g_57 != NULL) && (g_57 != t)))
    _fail(t);
  else
    g_57 = t;
  t = SSL_table_create(not_null(g_57));
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm u_52 = NULL,m_2 = NULL;
  if(((u_52 != NULL) && (u_52 != t)))
    _fail(t);
  else
    u_52 = t;
  if(((m_2 != NULL) && (m_2 != t)))
    _fail(t);
  else
    m_2 = t;
  t = term_c_29;
  t = table_create_0_0(t);
  t = (ATerm) ATmakeAppl(sym__3, term_c_29, term_d_29, not_null(u_52));
  t = table_put_0_0(t);
  t = not_null(m_2);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm h_57 = NULL;
  if(((h_57 != NULL) && (h_57 != t)))
    _fail(t);
  else
    h_57 = t;
  t = SSL_table_destroy(not_null(h_57));
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm z_51 = NULL;
  if(((z_51 != NULL) && (z_51 != t)))
    _fail(t);
  else
    z_51 = t;
  t = SSL_exit(not_null(z_51));
  return(t);
}
ATerm long_description_1_0 (ATerm r_101 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm map_1_0 (ATerm e_83 (ATerm), ATerm t)
{
  ATerm f_83 (ATerm t)
  {
    ATerm e_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(f_29);
      }
    else
      {
        t = e_29;
        t = Cons_2_0(e_83, f_83, t);
      }
    return(t);
  }
  t = f_83(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm g_29 = t;
  int h_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_28 = NULL,z_28 = NULL,n_2 = NULL,o_2 = NULL,u_150 = NULL,p_2 = NULL,c_151 = NULL,a_29 = NULL;
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
      t = not_null(z_28);
      if(((n_2 != NULL) && (n_2 != t)))
        _fail(t);
      else
        n_2 = t;
      if(((o_2 != NULL) && (o_2 != t)))
        _fail(t);
      else
        o_2 = t;
      t = g_0(t);
      if(((u_150 != NULL) && (u_150 != t)))
        _fail(t);
      else
        u_150 = t;
      t = not_null(o_2);
      if(((p_2 != NULL) && (p_2 != t)))
        _fail(t);
      else
        p_2 = t;
      t = not_null(y_28);
      t = e_0(t);
      if(((c_151 != NULL) && (c_151 != t)))
        _fail(t);
      else
        c_151 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(u_150)), not_null(c_151));
      if(((a_29 != NULL) && (a_29 != t)))
        _fail(t);
      else
        a_29 = t;
      t = not_null(n_2);
      {
        ATerm k_19 (ATerm t)
        {
          t = not_null(a_29);
          return(t);
        }
        t = reverse_acc_2_0(e_0, k_19, t);
      }
      ;
      LocalPopChoice(h_29);
    }
  else
    {
      t = g_29;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_24;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm l_19 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, l_19, t);
  return(t);
}
ATerm short_description_1_0 (ATerm q_101 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm r_74 (ATerm), ATerm t)
{
  ATerm q_12 = NULL,p_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL;
  if(((s_12 != NULL) && (s_12 != t)))
    _fail(t);
  else
    s_12 = t;
  if(match_cons(t, sym_Program_1))
    {
      if(((p_12 != NULL) && (p_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_16 = NULL;
    if(((c_16 != NULL) && (c_16 != t)))
      _fail(t);
    else
      c_16 = t;
    t = SSLgetAnnotations(not_null(s_12));
    if(((q_12 != NULL) && (q_12 != t)))
      _fail(t);
    else
      q_12 = t;
    t = not_null(c_16);
    t = not_null(p_12);
    t = r_74(t);
    if(((r_12 != NULL) && (r_12 != t)))
      _fail(t);
    else
      r_12 = t;
    {
      ATerm d_16 = NULL;
      if(((d_16 != NULL) && (d_16 != t)))
        _fail(t);
      else
        d_16 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(r_12)), not_null(q_12));
      if(((t_12 != NULL) && (t_12 != t)))
        _fail(t);
      else
        t_12 = t;
    }
  }
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_55 = NULL;
  ATerm i_29 = t;
  int j_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_28;
      t = get_config_0_0(t);
      if(((v_55 != NULL) && (v_55 != t)))
        _fail(t);
      else
        v_55 = t;
      ;
      LocalPopChoice(j_29);
    }
  else
    {
      t = i_29;
      {
        ATerm m_19 (ATerm t)
        {
          ATerm n_19 (ATerm t)
          {
            if(((v_55 != NULL) && (v_55 != t)))
              _fail(t);
            else
              v_55 = t;
            return(t);
          }
          t = Program_1_0(n_19, t);
          return(t);
        }
        t = option_defined_1_0(m_19, t);
      }
    }
  {
    ATerm o_19 (ATerm t)
    {
      ATerm p_19 (ATerm t)
      {
        t = not_null(v_55);
        return(t);
      }
      t = short_description_1_0(p_19, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(o_19, t);
    t = term_k_29;
    t = echo_0_0(t);
    t = term_n_29;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    {
      ATerm q_19 (ATerm t)
      {
        ATerm q_2 = NULL,y_508 = NULL;
        if(((q_2 != NULL) && (q_2 != t)))
          _fail(t);
        else
          q_2 = t;
        if(((y_508 != NULL) && (y_508 != t)))
          _fail(t);
        else
          y_508 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_508)), term_o_29);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(q_19, t);
      {
        ATerm r_19 (ATerm t)
        {
          ATerm r_2 = NULL,j_509 = NULL;
          if(((r_2 != NULL) && (r_2 != t)))
            _fail(t);
          else
            r_2 = t;
          {
            ATerm s_19 (ATerm t)
            {
              t = not_null(v_55);
              return(t);
            }
            t = long_description_1_0(s_19, t);
            if(((j_509 != NULL) && (j_509 != t)))
              _fail(t);
            else
              j_509 = t;
            t = (ATerm) ATinsert(CheckATermList(not_null(j_509)), term_p_29);
            t = echo_0_0(t);
          }
          return(t);
        }
        t = try_1_0(r_19, t);
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
  ATerm q_29 = t;
  int r_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(r_29);
    }
  else
    {
      t = q_29;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm Undefined_1_0 (ATerm s_74 (ATerm), ATerm t)
{
  ATerm v_12 = NULL,u_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL;
  if(((x_12 != NULL) && (x_12 != t)))
    _fail(t);
  else
    x_12 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      if(((u_12 != NULL) && (u_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm e_16 = NULL;
    if(((e_16 != NULL) && (e_16 != t)))
      _fail(t);
    else
      e_16 = t;
    t = SSLgetAnnotations(not_null(x_12));
    if(((v_12 != NULL) && (v_12 != t)))
      _fail(t);
    else
      v_12 = t;
    t = not_null(e_16);
    t = not_null(u_12);
    t = s_74(t);
    if(((w_12 != NULL) && (w_12 != t)))
      _fail(t);
    else
      w_12 = t;
    {
      ATerm f_16 = NULL;
      if(((f_16 != NULL) && (f_16 != t)))
        _fail(t);
      else
        f_16 = t;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(w_12)), not_null(v_12));
      if(((y_12 != NULL) && (y_12 != t)))
        _fail(t);
      else
        y_12 = t;
    }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm o_83 (ATerm), ATerm t)
{
  ATerm p_83 (ATerm t)
  {
    ATerm s_29 = t;
    int t_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(o_83, _id, t);
        ;
        LocalPopChoice(t_29);
      }
    else
      {
        t = s_29;
        t = Cons_2_0(_id, p_83, t);
      }
    return(t);
  }
  t = p_83(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm q_100 (ATerm), ATerm t)
{
  t = fetch_1_0(q_100, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm u_29 = t;
  int v_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(v_29);
    }
  else
    {
      t = u_29;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm w_29 = ATgetFirst((ATermList) t);
          ATerm x_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL,w_380 = NULL;
  if(((s_2 != NULL) && (s_2 != t)))
    _fail(t);
  else
    s_2 = t;
  if(((t_2 != NULL) && (t_2 != t)))
    _fail(t);
  else
    t_2 = t;
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(z_29);
      }
    else
      {
        t = y_29;
        {
          ATerm u_2 = NULL,y_380 = NULL;
          if(((u_2 != NULL) && (u_2 != t)))
            _fail(t);
          else
            u_2 = t;
          if(((y_380 != NULL) && (y_380 != t)))
            _fail(t);
          else
            y_380 = t;
          t = (ATerm) ATinsert(ATempty, not_null(y_380));
        }
      }
    if(((w_380 != NULL) && (w_380 != t)))
      _fail(t);
    else
      w_380 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_m_25, not_null(w_380));
    t = printnl_0_0(t);
    t = not_null(s_2);
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_b_28;
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
  ATerm a_30 = t;
  int b_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(b_30);
    }
  else
    {
      t = a_30;
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
ATerm try_1_0 (ATerm t_75 (ATerm), ATerm t)
{
  ATerm c_30 = t;
  int d_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_75(t);
      ;
      LocalPopChoice(d_30);
    }
  else
    {
      t = c_30;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_30 = t;
  int f_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_19 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm u_19 (ATerm t)
      {
        t = term_h_30;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm v_19 (ATerm t)
      {
        t = term_i_30;
        return(t);
      }
      t = Option_3_0(t_19, u_19, v_19, t);
      ;
      LocalPopChoice(f_30);
    }
  else
    {
      t = e_30;
      {
        ATerm w_19 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm x_19 (ATerm t)
        {
          ATerm v_2 = NULL;
          if(((v_2 != NULL) && (v_2 != t)))
            _fail(t);
          else
            v_2 = t;
          t = term_h_30;
          t = set_config_0_0(t);
          t = term_k_30;
          t = set_config_0_0(t);
          t = term_l_30;
          return(t);
        }
        ATerm y_19 (ATerm t)
        {
          t = term_m_30;
          return(t);
        }
        t = Option_3_0(w_19, x_19, y_19, t);
      }
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm l_57 = NULL,m_57 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((l_57 != NULL) && (l_57 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_57 = ATgetArgument(t, 0);
      if(((m_57 != NULL) && (m_57 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get(not_null(l_57), not_null(m_57));
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm x_55 = NULL,y_55 = NULL,w_55 = NULL,w_2 = NULL,x_2 = NULL,e_512 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((x_55 != NULL) && (x_55 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_55 = ATgetArgument(t, 0);
      if(((y_55 != NULL) && (y_55 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_55 = ATgetArgument(t, 1);
      if(((w_55 != NULL) && (w_55 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        w_55 = ATgetArgument(t, 2);
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
  t = (ATerm) ATmakeAppl(sym__2, not_null(x_55), not_null(y_55));
  {
    ATerm n_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        ;
        LocalPopChoice(o_30);
      }
    else
      {
        t = n_30;
        t = (ATerm) ATempty;
      }
    if(((e_512 != NULL) && (e_512 != t)))
      _fail(t);
    else
      e_512 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(x_55), not_null(y_55), (ATerm) ATinsert(CheckATermList(not_null(e_512)), not_null(w_55)));
    t = table_put_0_0(t);
    t = not_null(w_2);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm v_101 (ATerm), ATerm t)
{
  ATerm y_2 = NULL,j_507 = NULL;
  if(((y_2 != NULL) && (y_2 != t)))
    _fail(t);
  else
    y_2 = t;
  t = term_f_24;
  t = v_101(t);
  if(((j_507 != NULL) && (j_507 != t)))
    _fail(t);
  else
    j_507 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_29, term_m_29, not_null(j_507));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm p_30 = t;
  int q_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("register-usage-info", 0, ATtrue)))
        _fail(t);
      t = register_usage_1_0(d_0, t);
      ;
      LocalPopChoice(q_30);
    }
  else
    {
      t = p_30;
      {
        ATerm g_55 = NULL,f_55 = NULL,z_2 = NULL,a_3 = NULL,w_497 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((g_55 != NULL) && (g_55 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              g_55 = ATgetFirst((ATermList) t);
            if(((f_55 != NULL) && (f_55 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              f_55 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        if(((z_2 != NULL) && (z_2 != t)))
          _fail(t);
        else
          z_2 = t;
        t = not_null(g_55);
        t = a_0(t);
        t = not_null(z_2);
        if(((a_3 != NULL) && (a_3 != t)))
          _fail(t);
        else
          a_3 = t;
        t = term_f_24;
        t = c_0(t);
        if(((w_497 != NULL) && (w_497 != t)))
          _fail(t);
        else
          w_497 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(f_55)), not_null(w_497));
      }
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm z_19 (ATerm t)
  {
    ATerm r_30 = t;
    int s_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--help", 0, ATtrue)))
          _fail(t);
        ;
        LocalPopChoice(s_30);
      }
    else
      {
        t = r_30;
        {
          ATerm t_30 = t;
          int u_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-h", 0, ATtrue)))
                _fail(t);
              ;
              LocalPopChoice(u_30);
            }
          else
            {
              t = t_30;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                _fail(t);
            }
        }
      }
    return(t);
  }
  ATerm a_20 (ATerm t)
  {
    t = term_v_30;
    t = set_config_0_0(t);
    t = term_w_30;
    return(t);
  }
  ATerm b_20 (ATerm t)
  {
    t = term_x_30;
    return(t);
  }
  t = Option_3_0(z_19, a_20, b_20, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((s_55 != NULL) && (s_55 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        s_55 = ATgetFirst((ATermList) t);
      if(((t_55 != NULL) && (t_55 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        t_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(t_55)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(s_55)));
  return(t);
}
ATerm Cons_2_0 (ATerm v_61 (ATerm), ATerm w_61 (ATerm), ATerm t)
{
  ATerm b_13 = NULL,z_12 = NULL,a_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL;
  if(((e_13 != NULL) && (e_13 != t)))
    _fail(t);
  else
    e_13 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((z_12 != NULL) && (z_12 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        z_12 = ATgetFirst((ATermList) t);
      if(((a_13 != NULL) && (a_13 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        a_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm g_16 = NULL;
    if(((g_16 != NULL) && (g_16 != t)))
      _fail(t);
    else
      g_16 = t;
    t = SSLgetAnnotations(not_null(e_13));
    if(((b_13 != NULL) && (b_13 != t)))
      _fail(t);
    else
      b_13 = t;
    t = not_null(g_16);
    t = not_null(z_12);
    t = v_61(t);
    if(((c_13 != NULL) && (c_13 != t)))
      _fail(t);
    else
      c_13 = t;
    t = not_null(a_13);
    t = w_61(t);
    if(((d_13 != NULL) && (d_13 != t)))
      _fail(t);
    else
      d_13 = t;
    {
      ATerm h_16 = NULL;
      if(((h_16 != NULL) && (h_16 != t)))
        _fail(t);
      else
        h_16 = t;
      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(d_13)), not_null(c_13)), not_null(b_13));
      if(((f_13 != NULL) && (f_13 != t)))
        _fail(t);
      else
        f_13 = t;
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
  ATerm x_50 = NULL,y_50 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((x_50 != NULL) && (x_50 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_50 = ATgetArgument(t, 0);
      if(((y_50 != NULL) && (y_50 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_c_25, not_null(x_50), not_null(y_50));
  t = table_put_0_0(t);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_101 (ATerm), ATerm t)
{
  ATerm b_3 = NULL;
  if(((b_3 != NULL) && (b_3 != t)))
    _fail(t);
  else
    b_3 = t;
  {
    ATerm c_20 (ATerm t)
    {
      t = term_y_30;
      t = t_101(t);
      return(t);
    }
    t = try_1_0(c_20, t);
    t = not_null(b_3);
    {
      ATerm d_20 (ATerm t)
      {
        ATerm c_3 = NULL,d_3 = NULL,m_506 = NULL,e_3 = NULL,x_506 = NULL;
        if(((c_3 != NULL) && (c_3 != t)))
          _fail(t);
        else
          c_3 = t;
        if(((d_3 != NULL) && (d_3 != t)))
          _fail(t);
        else
          d_3 = t;
        if(((m_506 != NULL) && (m_506 != t)))
          _fail(t);
        else
          m_506 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_b_28, not_null(m_506));
        t = set_config_0_0(t);
        t = not_null(c_3);
        if(((e_3 != NULL) && (e_3 != t)))
          _fail(t);
        else
          e_3 = t;
        if(((x_506 != NULL) && (x_506 != t)))
          _fail(t);
        else
          x_506 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(x_506));
        return(t);
      }
      ATerm e_20 (ATerm t)
      {
        ATerm z_30 = t;
        int a_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_31 = t;
            int c_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0_0(t);
                ;
                LocalPopChoice(c_31);
              }
            else
              {
                t = b_31;
                t = t_101(t);
                t = Cons_2_0(_id, e_20, t);
              }
            ;
            LocalPopChoice(a_31);
          }
        else
          {
            t = z_30;
            t = UndefinedOption_0_0(t);
          }
        return(t);
      }
      t = Cons_2_0(d_20, e_20, t);
    }
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm f_3 = NULL,i_57 = NULL,j_57 = NULL,k_57 = NULL;
  if(((f_3 != NULL) && (f_3 != t)))
    _fail(t);
  else
    f_3 = t;
  if(match_cons(t, sym__3))
    {
      if(((i_57 != NULL) && (i_57 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_57 = ATgetArgument(t, 0);
      if(((j_57 != NULL) && (j_57 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_57 = ATgetArgument(t, 1);
      if(((k_57 != NULL) && (k_57 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        k_57 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_put(not_null(i_57), not_null(j_57), not_null(k_57));
  t = not_null(f_3);
  return(t);
}
ATerm parse_options_1_0 (ATerm s_101 (ATerm), ATerm t)
{
  ATerm g_3 = NULL,u_55 = NULL,j_3 = NULL;
  if(((g_3 != NULL) && (g_3 != t)))
    _fail(t);
  else
    g_3 = t;
  t = term_d_31;
  t = table_put_0_0(t);
  t = not_null(g_3);
  {
    ATerm f_20 (ATerm t)
    {
      ATerm e_31 = t;
      int f_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_101(t);
          ;
          LocalPopChoice(f_31);
        }
      else
        {
          t = e_31;
          {
            ATerm g_31 = t;
            int h_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(h_31);
              }
            else
              {
                t = g_31;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(f_20, t);
    {
      ATerm g_20 (ATerm t)
      {
        ATerm i_31 = t;
        int j_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_3 = NULL;
            if(((h_3 != NULL) && (h_3 != t)))
              _fail(t);
            else
              h_3 = t;
            {
              ATerm k_31 = t;
              int l_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_u_28;
                  t = get_config_0_0(t);
                  ;
                  LocalPopChoice(l_31);
                }
              else
                {
                  t = k_31;
                  t = option_defined_1_0(Help_0_0, t);
                }
              t = not_null(h_3);
              t = system_usage_0_0(t);
              t = term_s_26;
              t = exit_0_0(t);
            }
            ;
            LocalPopChoice(j_31);
          }
        else
          {
            t = i_31;
            {
              ATerm m_31 = t;
              int n_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_3 = NULL;
                  if(((i_3 != NULL) && (i_3 != t)))
                    _fail(t);
                  else
                    i_3 = t;
                  t = term_g_30;
                  t = get_config_0_0(t);
                  t = not_null(i_3);
                  t = system_about_0_0(t);
                  t = term_s_26;
                  t = exit_0_0(t);
                  ;
                  LocalPopChoice(n_31);
                }
              else
                {
                  t = m_31;
                  {
                    ATerm h_20 (ATerm t)
                    {
                      ATerm i_20 (ATerm t)
                      {
                        if(((u_55 != NULL) && (u_55 != t)))
                          _fail(t);
                        else
                          u_55 = t;
                        return(t);
                      }
                      t = Undefined_1_0(i_20, t);
                      return(t);
                    }
                    t = option_defined_1_0(h_20, t);
                    t = (ATerm) ATmakeAppl(sym__2, term_g_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_55)), term_o_31));
                    t = printnl_0_0(t);
                    t = system_usage_0_0(t);
                    t = term_j_24;
                    t = exit_0_0(t);
                  }
                }
            }
          }
        return(t);
      }
      t = try_1_0(g_20, t);
      if(((j_3 != NULL) && (j_3 != t)))
        _fail(t);
      else
        j_3 = t;
      t = term_l_29;
      t = table_destroy_0_0(t);
      t = not_null(j_3);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_99 (ATerm), ATerm t_99 (ATerm), ATerm u_99 (ATerm), ATerm v_99 (ATerm), ATerm t)
{
  t = parse_options_1_0(s_99, t);
  t = store_options_0_0(t);
  t = u_99(t);
  {
    ATerm p_31 = t;
    int q_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_99, t);
        ;
        LocalPopChoice(q_31);
      }
    else
      {
        t = p_31;
        {
          ATerm r_31 = t;
          int s_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_99(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(s_31);
            }
          else
            {
              t = r_31;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm h_99 (ATerm), ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm k_99 (ATerm), ATerm t)
{
  ATerm j_20 (ATerm t)
  {
    ATerm t_31 = t;
    int u_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_99(t);
        ;
        LocalPopChoice(u_31);
      }
    else
      {
        t = t_31;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm k_20 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(h_99, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(j_20, j_99, k_99, k_20, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm b_99 (ATerm), ATerm c_99 (ATerm), ATerm d_99 (ATerm), ATerm t)
{
  ATerm l_20 (ATerm t)
  {
    ATerm m_20 (ATerm t)
    {
      ATerm k_3 = NULL,l_3 = NULL,e_455 = NULL;
      if(((k_3 != NULL) && (k_3 != t)))
        _fail(t);
      else
        k_3 = t;
      if(((l_3 != NULL) && (l_3 != t)))
        _fail(t);
      else
        l_3 = t;
      t = term_b_28;
      t = get_config_0_0(t);
      if(((e_455 != NULL) && (e_455 != t)))
        _fail(t);
      else
        e_455 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_g_24, (ATerm) ATinsert(ATempty, not_null(e_455)));
      t = printnl_0_0(t);
      t = not_null(k_3);
      return(t);
    }
    t = if_verbose2_1_0(m_20, t);
    return(t);
  }
  t = iowrap_4_0(b_99, c_99, d_99, l_20, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm z_98 (ATerm), ATerm a_99 (ATerm), ATerm t)
{
  t = iowrap_3_0(z_98, a_99, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm w_98 (ATerm), ATerm t)
{
  ATerm n_20 (ATerm t)
  {
    t = _2_0(_id, w_98, t);
    return(t);
  }
  t = iowrap_2_0(n_20, _fail, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_1_0(stratego_specification_0_0, t);
  return(t);
}

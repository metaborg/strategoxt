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
ATerm term_p_42;
ATerm term_m_42;
ATerm term_x_41;
ATerm term_w_41;
ATerm term_v_41;
ATerm term_q_41;
ATerm term_p_41;
ATerm term_o_41;
ATerm term_x_40;
ATerm term_w_40;
ATerm term_r_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_a_40;
ATerm term_v_39;
ATerm term_q_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_s_38;
ATerm term_r_38;
ATerm term_q_38;
ATerm term_p_38;
ATerm term_k_38;
ATerm term_j_38;
ATerm term_i_38;
ATerm term_h_38;
ATerm term_c_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_x_37;
ATerm term_w_37;
ATerm term_v_37;
ATerm term_u_37;
ATerm term_t_37;
ATerm term_q_37;
ATerm term_n_37;
ATerm term_k_37;
ATerm term_n_36;
ATerm term_l_36;
ATerm term_l_35;
ATerm term_d_35;
ATerm term_u_34;
ATerm term_l_34;
ATerm term_c_34;
ATerm term_s_30;
ATerm term_s_29;
ATerm term_r_27;
ATerm term_k_27;
ATerm term_g_25;
ATerm term_i_13;
ATerm term_v_7;
void init_constant_terms (void)
{
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("not a match-term-expression: ", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_37);
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(sym__3, term_k_37, term_h_40, term_v_7);
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
}
ATerm default_usage_0_0 (ATerm);
ATerm Let_2_0 (ATerm d_73 (ATerm), ATerm e_73 (ATerm), ATerm);
ATerm Var_1_0 (ATerm t_69 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm c_73 (ATerm), ATerm);
ATerm Call_2_0 (ATerm f_73 (ATerm), ATerm g_73 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm j_74 (ATerm), ATerm k_74 (ATerm), ATerm l_74 (ATerm), ATerm);
ATerm Where_1_0 (ATerm d_74 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm);
ATerm b_17 (ATerm);
ATerm c_17 (ATerm);
ATerm d_17 (ATerm);
ATerm f_17 (ATerm);
ATerm g_17 (ATerm);
ATerm h_17 (ATerm);
ATerm k_17 (ATerm);
ATerm m_17 (ATerm);
ATerm term_expression_0_0 (ATerm);
ATerm Build_1_0 (ATerm l_73 (ATerm), ATerm);
ATerm Op_2_0 (ATerm z_69 (ATerm), ATerm a_70 (ATerm), ATerm);
ATerm As_2_0 (ATerm k_70 (ATerm), ATerm l_70 (ATerm), ATerm);
ATerm BuildDefault_1_0 (ATerm q_70 (ATerm), ATerm);
ATerm Str_1_0 (ATerm x_69 (ATerm), ATerm);
ATerm Real_1_0 (ATerm w_69 (ATerm), ATerm);
ATerm Int_1_0 (ATerm v_69 (ATerm), ATerm);
ATerm n_17 (ATerm);
ATerm o_17 (ATerm);
ATerm p_17 (ATerm);
ATerm r_17 (ATerm);
ATerm s_17 (ATerm);
ATerm u_17 (ATerm);
ATerm v_17 (ATerm);
ATerm y_17 (ATerm);
ATerm match_term_exp_0_0 (ATerm);
ATerm Match_1_0 (ATerm k_73 (ATerm), ATerm);
ATerm Thread_1_0 (ATerm r_74 (ATerm), ATerm);
ATerm All_1_0 (ATerm q_74 (ATerm), ATerm);
ATerm Some_1_0 (ATerm o_74 (ATerm), ATerm);
ATerm One_1_0 (ATerm p_74 (ATerm), ATerm);
ATerm Cong_2_0 (ATerm r_68 (ATerm), ATerm s_68 (ATerm), ATerm);
ATerm Path_2_0 (ATerm m_74 (ATerm), ATerm n_74 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm h_73 (ATerm), ATerm i_73 (ATerm), ATerm j_73 (ATerm), ATerm);
ATerm LGChoice_2_0 (ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm);
ATerm GChoice_2_0 (ATerm v_72 (ATerm), ATerm w_72 (ATerm), ATerm);
ATerm GuardedLChoice_3_0 (ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm t_73 (ATerm), ATerm u_73 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm r_72 (ATerm), ATerm s_72 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm);
ATerm Test_1_0 (ATerm e_74 (ATerm), ATerm);
ATerm Not_1_0 (ATerm c_74 (ATerm), ATerm);
ATerm z_17 (ATerm);
ATerm a_18 (ATerm);
ATerm b_18 (ATerm);
ATerm f_18 (ATerm);
ATerm g_18 (ATerm);
ATerm h_18 (ATerm);
ATerm k_18 (ATerm);
ATerm l_18 (ATerm);
ATerm m_18 (ATerm);
ATerm n_18 (ATerm);
ATerm s_18 (ATerm);
ATerm t_18 (ATerm);
ATerm u_18 (ATerm);
ATerm w_18 (ATerm);
ATerm x_18 (ATerm);
ATerm y_18 (ATerm);
ATerm z_18 (ATerm);
ATerm e_19 (ATerm);
ATerm f_19 (ATerm);
ATerm i_19 (ATerm);
ATerm j_19 (ATerm);
ATerm l_19 (ATerm);
ATerm m_19 (ATerm);
ATerm n_19 (ATerm);
ATerm r_19 (ATerm);
ATerm s_19 (ATerm);
ATerm t_19 (ATerm);
ATerm u_19 (ATerm);
ATerm v_19 (ATerm);
ATerm w_19 (ATerm);
ATerm x_19 (ATerm);
ATerm y_19 (ATerm);
ATerm z_19 (ATerm);
ATerm a_20 (ATerm);
ATerm b_20 (ATerm);
ATerm c_20 (ATerm);
ATerm e_20 (ATerm);
ATerm f_20 (ATerm);
ATerm g_20 (ATerm);
ATerm strategy_expression_0_0 (ATerm);
ATerm VarDec_2_0 (ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm v_75 (ATerm), ATerm w_75 (ATerm), ATerm x_75 (ATerm), ATerm y_75 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm s_75 (ATerm), ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm);
ATerm h_20 (ATerm);
ATerm i_20 (ATerm);
ATerm j_20 (ATerm);
ATerm k_20 (ATerm);
ATerm l_20 (ATerm);
ATerm m_20 (ATerm);
ATerm n_20 (ATerm);
ATerm p_20 (ATerm);
ATerm r_20 (ATerm);
ATerm s_20 (ATerm);
ATerm t_20 (ATerm);
ATerm strategy_definition_0_0 (ATerm);
ATerm list_1_0 (ATerm a_90 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm v_68 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm n_68 (ATerm), ATerm o_68 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm a_69 (ATerm), ATerm);
ATerm _2_0 (ATerm y_63 (ATerm), ATerm z_63 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm m_102 (ATerm), ATerm);
ATerm a_21 (ATerm);
ATerm c_21 (ATerm);
ATerm d_21 (ATerm);
ATerm e_21 (ATerm);
ATerm f_21 (ATerm);
ATerm g_21 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm o_105 (ATerm), ATerm);
ATerm x_28 (ATerm r_28, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm h_21 (ATerm);
ATerm k_21 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm h_90 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm n_90 (ATerm), ATerm);
ATerm m_21 (ATerm);
ATerm n_21 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm r_21 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm x_103 (ATerm), ATerm);
ATerm t_21 (ATerm);
ATerm y_21 (ATerm);
ATerm z_21 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm a_22 (ATerm);
ATerm b_22 (ATerm);
ATerm c_22 (ATerm);
ATerm e_22 (ATerm);
ATerm f_22 (ATerm);
ATerm g_22 (ATerm);
ATerm h_22 (ATerm);
ATerm i_22 (ATerm);
ATerm j_22 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm n_22 (ATerm);
ATerm p_22 (ATerm);
ATerm r_22 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm s_22 (ATerm);
ATerm t_22 (ATerm);
ATerm v_22 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm y_95 (ATerm), ATerm z_95 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm w_22 (ATerm);
ATerm x_22 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm w_103 (ATerm), ATerm);
ATerm y_22 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm z_22 (ATerm);
ATerm need_help_1_0 (ATerm m_106 (ATerm), ATerm);
ATerm map_1_0 (ATerm w_89 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm j_81 (ATerm), ATerm);
ATerm f_23 (ATerm);
ATerm g_23 (ATerm);
ATerm h_23 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm k_81 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm i_23 (ATerm);
ATerm k_23 (ATerm);
ATerm l_23 (ATerm);
ATerm m_23 (ATerm);
ATerm n_23 (ATerm);
ATerm o_23 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm p_23 (ATerm);
ATerm parse_options_p__1_0 (ATerm p_108 (ATerm), ATerm);
ATerm z_23 (ATerm);
ATerm a_24 (ATerm);
ATerm c_24 (ATerm);
ATerm e_24 (ATerm);
ATerm parse_options_1_0 (ATerm o_108 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm o_106 (ATerm), ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm);
ATerm o_24 (ATerm);
ATerm c_25 (ATerm);
ATerm n_25 (ATerm);
ATerm o_25 (ATerm);
ATerm z_25 (ATerm);
ATerm iowrap_3_0 (ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm);
ATerm j_26 (ATerm);
ATerm k_26 (ATerm);
ATerm v_26 (ATerm);
ATerm w_26 (ATerm);
ATerm d_27 (ATerm);
ATerm e_27 (ATerm);
ATerm j_27 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_0 = NULL,l_0 = NULL,k_0 = NULL,m_0 = NULL,n_0 = NULL,o_0 = NULL,t_0 = NULL,v_0 = NULL;
  f_0 = t;
  t = term_v_7;
  t = whoami_0_0(t);
  l_0 = t;
  n_0 = t;
  t = term_i_13;
  k_0 = t;
  t = n_0;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_27), l_0), term_g_25);
  m_0 = t;
  t = SSL_printnl(k_0, m_0);
  v_0 = t;
  t = term_r_27;
  t_0 = t;
  t = SSL_exit(t_0);
  t = f_0;
  return(t);
}
ATerm Let_2_0 (ATerm d_73 (ATerm), ATerm e_73 (ATerm), ATerm t)
{
  ATerm p_0 = NULL,q_0 = NULL,r_0 = NULL,s_0 = NULL,z_0 = NULL,b_1 = NULL,w_0 = NULL,y_0 = NULL;
  b_1 = t;
  if(match_cons(t, sym_Let_2))
    {
      q_0 = ATgetArgument(t, 0);
      r_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_1);
  p_0 = t;
  t = q_0;
  t = d_73(t);
  s_0 = t;
  t = r_0;
  t = e_73(t);
  z_0 = t;
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, s_0, z_0);
  w_0 = t;
  t = SSLsetAnnotations(w_0, p_0);
  return(t);
}
ATerm Var_1_0 (ATerm t_69 (ATerm), ATerm t)
{
  ATerm n_1 = NULL,r_1 = NULL,u_1 = NULL,v_1 = NULL,a_1 = NULL,d_1 = NULL;
  v_1 = t;
  if(match_cons(t, sym_Var_1))
    {
      r_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_1);
  n_1 = t;
  t = r_1;
  t = t_69(t);
  u_1 = t;
  d_1 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, u_1);
  a_1 = t;
  t = SSLsetAnnotations(a_1, n_1);
  return(t);
}
ATerm SVar_1_0 (ATerm c_73 (ATerm), ATerm t)
{
  ATerm z_1 = NULL,b_2 = NULL,c_2 = NULL,e_2 = NULL,e_1 = NULL,g_1 = NULL;
  e_2 = t;
  if(match_cons(t, sym_SVar_1))
    {
      b_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_2);
  z_1 = t;
  t = b_2;
  t = c_73(t);
  c_2 = t;
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, c_2);
  e_1 = t;
  t = SSLsetAnnotations(e_1, z_1);
  return(t);
}
ATerm Call_2_0 (ATerm f_73 (ATerm), ATerm g_73 (ATerm), ATerm t)
{
  ATerm i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,h_1 = NULL,i_1 = NULL;
  n_2 = t;
  if(match_cons(t, sym_Call_2))
    {
      j_2 = ATgetArgument(t, 0);
      k_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_2);
  i_2 = t;
  t = j_2;
  t = f_73(t);
  l_2 = t;
  t = k_2;
  t = g_73(t);
  m_2 = t;
  i_1 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, l_2, m_2);
  h_1 = t;
  t = SSLsetAnnotations(h_1, i_2);
  return(t);
}
ATerm PrimT_3_0 (ATerm j_74 (ATerm), ATerm k_74 (ATerm), ATerm l_74 (ATerm), ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,j_1 = NULL,k_1 = NULL;
  e_3 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      v_2 = ATgetArgument(t, 0);
      w_2 = ATgetArgument(t, 1);
      x_2 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_3);
  u_2 = t;
  t = v_2;
  t = j_74(t);
  y_2 = t;
  t = w_2;
  t = k_74(t);
  c_3 = t;
  t = x_2;
  t = l_74(t);
  d_3 = t;
  k_1 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, y_2, c_3, d_3);
  j_1 = t;
  t = SSLsetAnnotations(j_1, u_2);
  return(t);
}
ATerm Where_1_0 (ATerm d_74 (ATerm), ATerm t)
{
  ATerm i_3 = NULL,j_3 = NULL,m_3 = NULL,n_3 = NULL,l_1 = NULL,m_1 = NULL;
  n_3 = t;
  if(match_cons(t, sym_Where_1))
    {
      j_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_3);
  i_3 = t;
  t = j_3;
  t = d_74(t);
  m_3 = t;
  m_1 = t;
  t = (ATerm) ATmakeAppl(sym_Where_1, m_3);
  l_1 = t;
  t = SSLsetAnnotations(l_1, i_3);
  return(t);
}
ATerm Scope_2_0 (ATerm n_73 (ATerm), ATerm o_73 (ATerm), ATerm t)
{
  ATerm f_5 = NULL,t_5 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL,o_1 = NULL,p_1 = NULL;
  m_6 = t;
  if(match_cons(t, sym_Scope_2))
    {
      t_5 = ATgetArgument(t, 0);
      j_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_6);
  f_5 = t;
  t = t_5;
  t = n_73(t);
  k_6 = t;
  t = j_6;
  t = o_73(t);
  l_6 = t;
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, k_6, l_6);
  o_1 = t;
  t = SSLsetAnnotations(o_1, f_5);
  return(t);
}
ATerm b_17 (ATerm t)
{
  ATerm h_7 = NULL;
  h_7 = t;
  t = SSL_is_string(h_7);
  return(t);
}
ATerm c_17 (ATerm t)
{
  ATerm i_7 = NULL;
  i_7 = t;
  t = SSL_is_int(i_7);
  return(t);
}
ATerm d_17 (ATerm t)
{
  ATerm j_7 = NULL;
  j_7 = t;
  t = SSL_is_real(j_7);
  return(t);
}
ATerm f_17 (ATerm t)
{
  ATerm q_7 = NULL;
  q_7 = t;
  t = SSL_is_string(q_7);
  return(t);
}
ATerm g_17 (ATerm t)
{
  t = Var_1_0(h_17, t);
  return(t);
}
ATerm h_17 (ATerm t)
{
  ATerm r_7 = NULL;
  r_7 = t;
  t = SSL_is_string(r_7);
  return(t);
}
ATerm k_17 (ATerm t)
{
  ATerm u_7 = NULL;
  u_7 = t;
  t = SSL_is_string(u_7);
  return(t);
}
ATerm m_17 (ATerm t)
{
  t = list_1_0(term_expression_0_0, t);
  return(t);
}
ATerm term_expression_0_0 (ATerm t)
{
  ATerm s_27 = t;
  int k_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      ;
      LocalPopChoice(k_28);
    }
  else
    {
      t = s_27;
      {
        ATerm l_28 = t;
        int m_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1_0(b_17, t);
            ;
            LocalPopChoice(m_28);
          }
        else
          {
            t = l_28;
            {
              ATerm n_28 = t;
              int o_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1_0(c_17, t);
                  ;
                  LocalPopChoice(o_28);
                }
              else
                {
                  t = n_28;
                  {
                    ATerm p_28 = t;
                    int q_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1_0(d_17, t);
                        ;
                        LocalPopChoice(q_28);
                      }
                    else
                      {
                        t = p_28;
                        {
                          ATerm s_28 = t;
                          int t_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1_0(f_17, t);
                              ;
                              LocalPopChoice(t_28);
                            }
                          else
                            {
                              t = s_28;
                              {
                                ATerm w_28 = t;
                                int b_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildDefault_1_0(term_expression_0_0, t);
                                    ;
                                    LocalPopChoice(b_29);
                                  }
                                else
                                  {
                                    t = w_28;
                                    {
                                      ATerm c_29 = t;
                                      int d_29 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = As_2_0(g_17, term_expression_0_0, t);
                                          ;
                                          LocalPopChoice(d_29);
                                        }
                                      else
                                        {
                                          t = c_29;
                                          {
                                            ATerm e_29 = t;
                                            int r_29 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Op_2_0(k_17, m_17, t);
                                                ;
                                                LocalPopChoice(r_29);
                                              }
                                            else
                                              {
                                                t = e_29;
                                                {
                                                  ATerm b_0 = NULL,q_1 = NULL,s_1 = NULL,t_1 = NULL,w_1 = NULL;
                                                  b_0 = t;
                                                  t = term_s_29;
                                                  t_1 = t;
                                                  t = term_i_13;
                                                  q_1 = t;
                                                  t = t_1;
                                                  w_1 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATempty, b_0), term_s_29);
                                                  s_1 = t;
                                                  t = SSL_printnl(q_1, s_1);
                                                  t = b_0;
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm Build_1_0 (ATerm l_73 (ATerm), ATerm t)
{
  ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,x_1 = NULL,y_1 = NULL;
  c_8 = t;
  if(match_cons(t, sym_Build_1))
    {
      a_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_8);
  z_7 = t;
  t = a_8;
  t = l_73(t);
  b_8 = t;
  y_1 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, b_8);
  x_1 = t;
  t = SSLsetAnnotations(x_1, z_7);
  return(t);
}
ATerm Op_2_0 (ATerm z_69 (ATerm), ATerm a_70 (ATerm), ATerm t)
{
  ATerm n_8 = NULL,u_8 = NULL,b_9 = NULL,i_9 = NULL,p_9 = NULL,s_9 = NULL,a_2 = NULL,f_2 = NULL;
  s_9 = t;
  if(match_cons(t, sym_Op_2))
    {
      u_8 = ATgetArgument(t, 0);
      b_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_9);
  n_8 = t;
  t = u_8;
  t = z_69(t);
  i_9 = t;
  t = b_9;
  t = a_70(t);
  p_9 = t;
  f_2 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, i_9, p_9);
  a_2 = t;
  t = SSLsetAnnotations(a_2, n_8);
  return(t);
}
ATerm As_2_0 (ATerm k_70 (ATerm), ATerm l_70 (ATerm), ATerm t)
{
  ATerm b_10 = NULL,g_10 = NULL,h_10 = NULL,j_10 = NULL,k_10 = NULL,n_10 = NULL,h_2 = NULL,p_2 = NULL;
  n_10 = t;
  if(match_cons(t, sym_As_2))
    {
      g_10 = ATgetArgument(t, 0);
      h_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_10);
  b_10 = t;
  t = g_10;
  t = k_70(t);
  j_10 = t;
  t = h_10;
  t = l_70(t);
  k_10 = t;
  p_2 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, j_10, k_10);
  h_2 = t;
  t = SSLsetAnnotations(h_2, b_10);
  return(t);
}
ATerm BuildDefault_1_0 (ATerm q_70 (ATerm), ATerm t)
{
  ATerm x_10 = NULL,y_10 = NULL,h_11 = NULL,l_11 = NULL,q_2 = NULL,r_2 = NULL;
  l_11 = t;
  if(match_cons(t, sym_BuildDefault_1))
    {
      y_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_11);
  x_10 = t;
  t = y_10;
  t = q_70(t);
  h_11 = t;
  r_2 = t;
  t = (ATerm) ATmakeAppl(sym_BuildDefault_1, h_11);
  q_2 = t;
  t = SSLsetAnnotations(q_2, x_10);
  return(t);
}
ATerm Str_1_0 (ATerm x_69 (ATerm), ATerm t)
{
  ATerm q_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,s_2 = NULL,t_2 = NULL;
  x_11 = t;
  if(match_cons(t, sym_Str_1))
    {
      v_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_11);
  q_11 = t;
  t = v_11;
  t = x_69(t);
  w_11 = t;
  t_2 = t;
  t = (ATerm) ATmakeAppl(sym_Str_1, w_11);
  s_2 = t;
  t = SSLsetAnnotations(s_2, q_11);
  return(t);
}
ATerm Real_1_0 (ATerm w_69 (ATerm), ATerm t)
{
  ATerm b_12 = NULL,c_12 = NULL,h_12 = NULL,i_12 = NULL,z_2 = NULL,f_3 = NULL;
  i_12 = t;
  if(match_cons(t, sym_Real_1))
    {
      c_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_12);
  b_12 = t;
  t = c_12;
  t = w_69(t);
  h_12 = t;
  f_3 = t;
  t = (ATerm) ATmakeAppl(sym_Real_1, h_12);
  z_2 = t;
  t = SSLsetAnnotations(z_2, b_12);
  return(t);
}
ATerm Int_1_0 (ATerm v_69 (ATerm), ATerm t)
{
  ATerm m_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,g_3 = NULL,h_3 = NULL;
  r_12 = t;
  if(match_cons(t, sym_Int_1))
    {
      p_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_12);
  m_12 = t;
  t = p_12;
  t = v_69(t);
  q_12 = t;
  h_3 = t;
  t = (ATerm) ATmakeAppl(sym_Int_1, q_12);
  g_3 = t;
  t = SSLsetAnnotations(g_3, m_12);
  return(t);
}
ATerm n_17 (ATerm t)
{
  ATerm x_12 = NULL;
  x_12 = t;
  t = SSL_is_string(x_12);
  return(t);
}
ATerm o_17 (ATerm t)
{
  ATerm y_12 = NULL;
  y_12 = t;
  t = SSL_is_int(y_12);
  return(t);
}
ATerm p_17 (ATerm t)
{
  ATerm b_13 = NULL;
  b_13 = t;
  t = SSL_is_real(b_13);
  return(t);
}
ATerm r_17 (ATerm t)
{
  ATerm c_13 = NULL;
  c_13 = t;
  t = SSL_is_string(c_13);
  return(t);
}
ATerm s_17 (ATerm t)
{
  t = Var_1_0(u_17, t);
  return(t);
}
ATerm u_17 (ATerm t)
{
  ATerm g_13 = NULL;
  g_13 = t;
  t = SSL_is_string(g_13);
  return(t);
}
ATerm v_17 (ATerm t)
{
  ATerm h_13 = NULL;
  h_13 = t;
  t = SSL_is_string(h_13);
  return(t);
}
ATerm y_17 (ATerm t)
{
  t = list_1_0(match_term_exp_0_0, t);
  return(t);
}
ATerm match_term_exp_0_0 (ATerm t)
{
  ATerm t_29 = t;
  int u_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      ;
      LocalPopChoice(u_29);
    }
  else
    {
      t = t_29;
      {
        ATerm w_29 = t;
        int x_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1_0(n_17, t);
            ;
            LocalPopChoice(x_29);
          }
        else
          {
            t = w_29;
            {
              ATerm a_30 = t;
              int b_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1_0(o_17, t);
                  ;
                  LocalPopChoice(b_30);
                }
              else
                {
                  t = a_30;
                  {
                    ATerm c_30 = t;
                    int d_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1_0(p_17, t);
                        ;
                        LocalPopChoice(d_30);
                      }
                    else
                      {
                        t = c_30;
                        {
                          ATerm e_30 = t;
                          int g_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1_0(r_17, t);
                              ;
                              LocalPopChoice(g_30);
                            }
                          else
                            {
                              t = e_30;
                              {
                                ATerm k_30 = t;
                                int n_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildDefault_1_0(match_term_exp_0_0, t);
                                    ;
                                    LocalPopChoice(n_30);
                                  }
                                else
                                  {
                                    t = k_30;
                                    {
                                      ATerm o_30 = t;
                                      int p_30 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = As_2_0(s_17, match_term_exp_0_0, t);
                                          ;
                                          LocalPopChoice(p_30);
                                        }
                                      else
                                        {
                                          t = o_30;
                                          {
                                            ATerm q_30 = t;
                                            int r_30 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Op_2_0(v_17, y_17, t);
                                                ;
                                                LocalPopChoice(r_30);
                                              }
                                            else
                                              {
                                                t = q_30;
                                                {
                                                  ATerm u_0 = NULL,k_3 = NULL,l_3 = NULL,o_3 = NULL,p_3 = NULL;
                                                  u_0 = t;
                                                  t = term_s_30;
                                                  o_3 = t;
                                                  t = term_i_13;
                                                  k_3 = t;
                                                  t = o_3;
                                                  p_3 = t;
                                                  t = (ATerm) ATinsert(ATinsert(ATempty, u_0), term_s_30);
                                                  l_3 = t;
                                                  t = SSL_printnl(k_3, l_3);
                                                  t = u_0;
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm Match_1_0 (ATerm k_73 (ATerm), ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL,n_13 = NULL,o_13 = NULL,q_3 = NULL,r_3 = NULL;
  o_13 = t;
  if(match_cons(t, sym_Match_1))
    {
      k_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_13);
  j_13 = t;
  t = k_13;
  t = k_73(t);
  n_13 = t;
  r_3 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, n_13);
  q_3 = t;
  t = SSLsetAnnotations(q_3, j_13);
  return(t);
}
ATerm Thread_1_0 (ATerm r_74 (ATerm), ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL,z_13 = NULL,j_14 = NULL,s_3 = NULL,t_3 = NULL;
  j_14 = t;
  if(match_cons(t, sym_Thread_1))
    {
      w_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_14);
  v_13 = t;
  t = w_13;
  t = r_74(t);
  z_13 = t;
  t_3 = t;
  t = (ATerm) ATmakeAppl(sym_Thread_1, z_13);
  s_3 = t;
  t = SSLsetAnnotations(s_3, v_13);
  return(t);
}
ATerm All_1_0 (ATerm q_74 (ATerm), ATerm t)
{
  ATerm p_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,u_3 = NULL,v_3 = NULL;
  w_14 = t;
  if(match_cons(t, sym_All_1))
    {
      u_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_14);
  p_14 = t;
  t = u_14;
  t = q_74(t);
  v_14 = t;
  v_3 = t;
  t = (ATerm) ATmakeAppl(sym_All_1, v_14);
  u_3 = t;
  t = SSLsetAnnotations(u_3, p_14);
  return(t);
}
ATerm Some_1_0 (ATerm o_74 (ATerm), ATerm t)
{
  ATerm k_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,w_3 = NULL,x_3 = NULL;
  r_15 = t;
  if(match_cons(t, sym_Some_1))
    {
      p_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_15);
  k_15 = t;
  t = p_15;
  t = o_74(t);
  q_15 = t;
  x_3 = t;
  t = (ATerm) ATmakeAppl(sym_Some_1, q_15);
  w_3 = t;
  t = SSLsetAnnotations(w_3, k_15);
  return(t);
}
ATerm One_1_0 (ATerm p_74 (ATerm), ATerm t)
{
  ATerm f_16 = NULL,i_16 = NULL,n_16 = NULL,o_16 = NULL,y_3 = NULL,z_3 = NULL;
  o_16 = t;
  if(match_cons(t, sym_One_1))
    {
      i_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_16);
  f_16 = t;
  t = i_16;
  t = p_74(t);
  n_16 = t;
  z_3 = t;
  t = (ATerm) ATmakeAppl(sym_One_1, n_16);
  y_3 = t;
  t = SSLsetAnnotations(y_3, f_16);
  return(t);
}
ATerm Cong_2_0 (ATerm r_68 (ATerm), ATerm s_68 (ATerm), ATerm t)
{
  ATerm v_16 = NULL,e_17 = NULL,i_17 = NULL,j_17 = NULL,l_17 = NULL,q_17 = NULL,a_4 = NULL,b_4 = NULL;
  q_17 = t;
  if(match_cons(t, sym_Cong_2))
    {
      e_17 = ATgetArgument(t, 0);
      i_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_17);
  v_16 = t;
  t = e_17;
  t = r_68(t);
  j_17 = t;
  t = i_17;
  t = s_68(t);
  l_17 = t;
  b_4 = t;
  t = (ATerm) ATmakeAppl(sym_Cong_2, j_17, l_17);
  a_4 = t;
  t = SSLsetAnnotations(a_4, v_16);
  return(t);
}
ATerm Path_2_0 (ATerm m_74 (ATerm), ATerm n_74 (ATerm), ATerm t)
{
  ATerm t_17 = NULL,w_17 = NULL,x_17 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,c_4 = NULL,d_4 = NULL;
  e_18 = t;
  if(match_cons(t, sym_Path_2))
    {
      w_17 = ATgetArgument(t, 0);
      x_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_18);
  t_17 = t;
  t = w_17;
  t = m_74(t);
  c_18 = t;
  t = x_17;
  t = n_74(t);
  d_18 = t;
  d_4 = t;
  t = (ATerm) ATmakeAppl(sym_Path_2, c_18, d_18);
  c_4 = t;
  t = SSLsetAnnotations(c_4, t_17);
  return(t);
}
ATerm Rec_2_0 (ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL,f_4 = NULL,g_4 = NULL;
  r_18 = t;
  if(match_cons(t, sym_Rec_2))
    {
      j_18 = ATgetArgument(t, 0);
      o_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_18);
  i_18 = t;
  t = j_18;
  t = a_74(t);
  p_18 = t;
  t = o_18;
  t = b_74(t);
  q_18 = t;
  g_4 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, p_18, q_18);
  f_4 = t;
  t = SSLsetAnnotations(f_4, i_18);
  return(t);
}
ATerm CallT_3_0 (ATerm h_73 (ATerm), ATerm i_73 (ATerm), ATerm j_73 (ATerm), ATerm t)
{
  ATerm v_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,g_19 = NULL,h_19 = NULL,k_19 = NULL,h_4 = NULL,i_4 = NULL;
  k_19 = t;
  if(match_cons(t, sym_CallT_3))
    {
      a_19 = ATgetArgument(t, 0);
      b_19 = ATgetArgument(t, 1);
      c_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_19);
  v_18 = t;
  t = a_19;
  t = h_73(t);
  d_19 = t;
  t = b_19;
  t = i_73(t);
  g_19 = t;
  t = c_19;
  t = j_73(t);
  h_19 = t;
  i_4 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, d_19, g_19, h_19);
  h_4 = t;
  t = SSLsetAnnotations(h_4, v_18);
  return(t);
}
ATerm LGChoice_2_0 (ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL,d_20 = NULL,o_20 = NULL,q_20 = NULL,j_4 = NULL,k_4 = NULL;
  q_20 = t;
  if(match_cons(t, sym_LGChoice_2))
    {
      p_19 = ATgetArgument(t, 0);
      q_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_20);
  o_19 = t;
  t = p_19;
  t = v_73(t);
  d_20 = t;
  t = q_19;
  t = w_73(t);
  o_20 = t;
  k_4 = t;
  t = (ATerm) ATmakeAppl(sym_LGChoice_2, d_20, o_20);
  j_4 = t;
  t = SSLsetAnnotations(j_4, o_19);
  return(t);
}
ATerm GChoice_2_0 (ATerm v_72 (ATerm), ATerm w_72 (ATerm), ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL,b_21 = NULL,i_21 = NULL,j_21 = NULL,l_4 = NULL,n_4 = NULL;
  j_21 = t;
  if(match_cons(t, sym_GChoice_2))
    {
      y_20 = ATgetArgument(t, 0);
      z_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_21);
  x_20 = t;
  t = y_20;
  t = v_72(t);
  b_21 = t;
  t = z_20;
  t = w_72(t);
  i_21 = t;
  n_4 = t;
  t = (ATerm) ATmakeAppl(sym_GChoice_2, b_21, i_21);
  l_4 = t;
  t = SSLsetAnnotations(l_4, x_20);
  return(t);
}
ATerm GuardedLChoice_3_0 (ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL,s_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,d_22 = NULL,o_4 = NULL,p_4 = NULL;
  d_22 = t;
  if(match_cons(t, sym_GuardedLChoice_3))
    {
      p_21 = ATgetArgument(t, 0);
      s_21 = ATgetArgument(t, 1);
      u_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_22);
  o_21 = t;
  t = p_21;
  t = x_73(t);
  v_21 = t;
  t = s_21;
  t = y_73(t);
  w_21 = t;
  t = u_21;
  t = z_73(t);
  x_21 = t;
  p_4 = t;
  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, v_21, w_21, x_21);
  o_4 = t;
  t = SSLsetAnnotations(o_4, o_21);
  return(t);
}
ATerm LChoice_2_0 (ATerm t_73 (ATerm), ATerm u_73 (ATerm), ATerm t)
{
  ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL,o_22 = NULL,q_22 = NULL,u_22 = NULL,t_4 = NULL,u_4 = NULL;
  u_22 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      l_22 = ATgetArgument(t, 0);
      m_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_22);
  k_22 = t;
  t = l_22;
  t = t_73(t);
  o_22 = t;
  t = m_22;
  t = u_73(t);
  q_22 = t;
  u_4 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, o_22, q_22);
  t_4 = t;
  t = SSLsetAnnotations(t_4, k_22);
  return(t);
}
ATerm Choice_2_0 (ATerm r_72 (ATerm), ATerm s_72 (ATerm), ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,j_23 = NULL,q_23 = NULL,x_4 = NULL,y_4 = NULL;
  q_23 = t;
  if(match_cons(t, sym_Choice_2))
    {
      c_23 = ATgetArgument(t, 0);
      d_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_23);
  b_23 = t;
  t = c_23;
  t = r_72(t);
  e_23 = t;
  t = d_23;
  t = s_72(t);
  j_23 = t;
  y_4 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, e_23, j_23);
  x_4 = t;
  t = SSLsetAnnotations(x_4, b_23);
  return(t);
}
ATerm Seq_2_0 (ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL,z_4 = NULL,a_5 = NULL;
  y_23 = t;
  if(match_cons(t, sym_Seq_2))
    {
      u_23 = ATgetArgument(t, 0);
      v_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_23);
  t_23 = t;
  t = u_23;
  t = r_73(t);
  w_23 = t;
  t = v_23;
  t = s_73(t);
  x_23 = t;
  a_5 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, w_23, x_23);
  z_4 = t;
  t = SSLsetAnnotations(z_4, t_23);
  return(t);
}
ATerm Test_1_0 (ATerm e_74 (ATerm), ATerm t)
{
  ATerm b_24 = NULL,d_24 = NULL,f_24 = NULL,g_24 = NULL,b_5 = NULL,c_5 = NULL;
  g_24 = t;
  if(match_cons(t, sym_Test_1))
    {
      d_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_24);
  b_24 = t;
  t = d_24;
  t = e_74(t);
  f_24 = t;
  c_5 = t;
  t = (ATerm) ATmakeAppl(sym_Test_1, f_24);
  b_5 = t;
  t = SSLsetAnnotations(b_5, b_24);
  return(t);
}
ATerm Not_1_0 (ATerm c_74 (ATerm), ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,d_5 = NULL,e_5 = NULL;
  m_24 = t;
  if(match_cons(t, sym_Not_1))
    {
      k_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_24);
  j_24 = t;
  t = k_24;
  t = c_74(t);
  l_24 = t;
  e_5 = t;
  t = (ATerm) ATmakeAppl(sym_Not_1, l_24);
  d_5 = t;
  t = SSLsetAnnotations(d_5, j_24);
  return(t);
}
ATerm z_17 (ATerm t)
{
  t = SVar_1_0(f_18, t);
  return(t);
}
ATerm a_18 (ATerm t)
{
  t = list_1_0(g_18, t);
  return(t);
}
ATerm b_18 (ATerm t)
{
  t = list_1_0(n_18, t);
  return(t);
}
ATerm f_18 (ATerm t)
{
  ATerm p_24 = NULL;
  p_24 = t;
  t = SSL_is_string(p_24);
  return(t);
}
ATerm g_18 (ATerm t)
{
  t = CallT_3_0(h_18, k_18, l_18, t);
  return(t);
}
ATerm h_18 (ATerm t)
{
  t = SVar_1_0(m_18, t);
  return(t);
}
ATerm k_18 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm l_18 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm m_18 (ATerm t)
{
  ATerm q_24 = NULL;
  q_24 = t;
  t = SSL_is_string(q_24);
  return(t);
}
ATerm n_18 (ATerm t)
{
  t = Var_1_0(s_18, t);
  return(t);
}
ATerm s_18 (ATerm t)
{
  ATerm r_24 = NULL;
  r_24 = t;
  t = SSL_is_string(r_24);
  return(t);
}
ATerm t_18 (ATerm t)
{
  ATerm s_24 = NULL;
  s_24 = t;
  t = SSL_is_string(s_24);
  return(t);
}
ATerm u_18 (ATerm t)
{
  ATerm t_24 = NULL;
  t_24 = t;
  t = SSL_is_int(t_24);
  return(t);
}
ATerm w_18 (ATerm t)
{
  ATerm u_24 = NULL;
  u_24 = t;
  t = SSL_is_string(u_24);
  return(t);
}
ATerm x_18 (ATerm t)
{
  t = list_1_0(strategy_expression_0_0, t);
  return(t);
}
ATerm y_18 (ATerm t)
{
  t = list_1_0(z_18, t);
  return(t);
}
ATerm z_18 (ATerm t)
{
  ATerm v_24 = NULL;
  v_24 = t;
  t = SSL_is_string(v_24);
  return(t);
}
ATerm e_19 (ATerm t)
{
  ATerm w_24 = NULL;
  w_24 = t;
  t = SSL_is_string(w_24);
  return(t);
}
ATerm f_19 (ATerm t)
{
  t = list_1_0(j_19, t);
  return(t);
}
ATerm i_19 (ATerm t)
{
  t = list_1_0(r_19, t);
  return(t);
}
ATerm j_19 (ATerm t)
{
  t = Call_2_0(l_19, m_19, t);
  return(t);
}
ATerm l_19 (ATerm t)
{
  t = SVar_1_0(n_19, t);
  return(t);
}
ATerm m_19 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm n_19 (ATerm t)
{
  ATerm x_24 = NULL;
  x_24 = t;
  t = SSL_is_string(x_24);
  return(t);
}
ATerm r_19 (ATerm t)
{
  t = Var_1_0(s_19, t);
  return(t);
}
ATerm s_19 (ATerm t)
{
  ATerm y_24 = NULL;
  y_24 = t;
  t = SSL_is_string(y_24);
  return(t);
}
ATerm t_19 (ATerm t)
{
  t = list_1_0(u_19, t);
  return(t);
}
ATerm u_19 (ATerm t)
{
  ATerm t_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SDef_3_0(v_19, w_19, strategy_expression_0_0, t);
      ;
      LocalPopChoice(v_30);
    }
  else
    {
      t = t_30;
      t = SDefT_4_0(z_19, a_20, b_20, strategy_expression_0_0, t);
    }
  return(t);
}
ATerm v_19 (ATerm t)
{
  ATerm z_24 = NULL;
  z_24 = t;
  t = SSL_is_string(z_24);
  return(t);
}
ATerm w_19 (ATerm t)
{
  t = list_1_0(x_19, t);
  return(t);
}
ATerm x_19 (ATerm t)
{
  t = VarDec_2_0(y_19, _id, t);
  return(t);
}
ATerm y_19 (ATerm t)
{
  ATerm a_25 = NULL;
  a_25 = t;
  t = SSL_is_string(a_25);
  return(t);
}
ATerm z_19 (ATerm t)
{
  ATerm d_25 = NULL;
  d_25 = t;
  t = SSL_is_string(d_25);
  return(t);
}
ATerm a_20 (ATerm t)
{
  t = list_1_0(c_20, t);
  return(t);
}
ATerm b_20 (ATerm t)
{
  t = list_1_0(f_20, t);
  return(t);
}
ATerm c_20 (ATerm t)
{
  t = VarDec_2_0(e_20, _id, t);
  return(t);
}
ATerm e_20 (ATerm t)
{
  ATerm e_25 = NULL;
  e_25 = t;
  t = SSL_is_string(e_25);
  return(t);
}
ATerm f_20 (ATerm t)
{
  t = VarDec_2_0(g_20, _id, t);
  return(t);
}
ATerm g_20 (ATerm t)
{
  ATerm f_25 = NULL;
  f_25 = t;
  t = SSL_is_string(f_25);
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm w_30 = t;
  int x_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      ;
      LocalPopChoice(x_30);
    }
  else
    {
      t = w_30;
      {
        ATerm b_31 = t;
        int c_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_Fail_0)))
              _fail(t);
            ;
            LocalPopChoice(c_31);
          }
        else
          {
            t = b_31;
            {
              ATerm d_31 = t;
              int g_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Not_1_0(strategy_expression_0_0, t);
                  ;
                  LocalPopChoice(g_31);
                }
              else
                {
                  t = d_31;
                  {
                    ATerm h_31 = t;
                    int i_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Test_1_0(strategy_expression_0_0, t);
                        ;
                        LocalPopChoice(i_31);
                      }
                    else
                      {
                        t = h_31;
                        {
                          ATerm j_31 = t;
                          int l_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Seq_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                              ;
                              LocalPopChoice(l_31);
                            }
                          else
                            {
                              t = j_31;
                              {
                                ATerm n_31 = t;
                                int o_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Choice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                    ;
                                    LocalPopChoice(o_31);
                                  }
                                else
                                  {
                                    t = n_31;
                                    {
                                      ATerm p_31 = t;
                                      int q_31 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                          ;
                                          LocalPopChoice(q_31);
                                        }
                                      else
                                        {
                                          t = p_31;
                                          {
                                            ATerm u_31 = t;
                                            int y_31 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = GuardedLChoice_3_0(strategy_expression_0_0, strategy_expression_0_0, strategy_expression_0_0, t);
                                                ;
                                                LocalPopChoice(y_31);
                                              }
                                            else
                                              {
                                                t = u_31;
                                                {
                                                  ATerm z_31 = t;
                                                  int d_32 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = GChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                                      ;
                                                      LocalPopChoice(d_32);
                                                    }
                                                  else
                                                    {
                                                      t = z_31;
                                                      {
                                                        ATerm e_32 = t;
                                                        int f_32 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = LGChoice_2_0(strategy_expression_0_0, strategy_expression_0_0, t);
                                                            ;
                                                            LocalPopChoice(f_32);
                                                          }
                                                        else
                                                          {
                                                            t = e_32;
                                                            {
                                                              ATerm g_32 = t;
                                                              int i_32 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = CallT_3_0(z_17, a_18, b_18, t);
                                                                  ;
                                                                  LocalPopChoice(i_32);
                                                                }
                                                              else
                                                                {
                                                                  t = g_32;
                                                                  {
                                                                    ATerm l_32 = t;
                                                                    int m_32 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2_0(t_18, strategy_expression_0_0, t);
                                                                        ;
                                                                        LocalPopChoice(m_32);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = l_32;
                                                                        {
                                                                          ATerm r_32 = t;
                                                                          int s_32 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Path_2_0(u_18, strategy_expression_0_0, t);
                                                                              ;
                                                                              LocalPopChoice(s_32);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = r_32;
                                                                              {
                                                                                ATerm t_32 = t;
                                                                                int u_32 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = Cong_2_0(w_18, x_18, t);
                                                                                    ;
                                                                                    LocalPopChoice(u_32);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = t_32;
                                                                                    {
                                                                                      ATerm v_32 = t;
                                                                                      int w_32 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = One_1_0(strategy_expression_0_0, t);
                                                                                          ;
                                                                                          LocalPopChoice(w_32);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = v_32;
                                                                                          {
                                                                                            ATerm x_32 = t;
                                                                                            int d_33 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Some_1_0(strategy_expression_0_0, t);
                                                                                                ;
                                                                                                LocalPopChoice(d_33);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = x_32;
                                                                                                {
                                                                                                  ATerm e_33 = t;
                                                                                                  int f_33 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = All_1_0(strategy_expression_0_0, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(f_33);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = e_33;
                                                                                                      {
                                                                                                        ATerm h_33 = t;
                                                                                                        int l_33 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Thread_1_0(strategy_expression_0_0, t);
                                                                                                            ;
                                                                                                            LocalPopChoice(l_33);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = h_33;
                                                                                                            {
                                                                                                              ATerm m_33 = t;
                                                                                                              int p_33 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Match_1_0(match_term_exp_0_0, t);
                                                                                                                  ;
                                                                                                                  LocalPopChoice(p_33);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = m_33;
                                                                                                                  {
                                                                                                                    ATerm q_33 = t;
                                                                                                                    int s_33 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Build_1_0(term_expression_0_0, t);
                                                                                                                        ;
                                                                                                                        LocalPopChoice(s_33);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = q_33;
                                                                                                                        {
                                                                                                                          ATerm t_33 = t;
                                                                                                                          int v_33 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = Scope_2_0(y_18, strategy_expression_0_0, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(v_33);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = t_33;
                                                                                                                              {
                                                                                                                                ATerm w_33 = t;
                                                                                                                                int x_33 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = Where_1_0(strategy_expression_0_0, t);
                                                                                                                                    ;
                                                                                                                                    LocalPopChoice(x_33);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = w_33;
                                                                                                                                    {
                                                                                                                                      ATerm y_33 = t;
                                                                                                                                      int z_33 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = PrimT_3_0(e_19, f_19, i_19, t);
                                                                                                                                          ;
                                                                                                                                          LocalPopChoice(z_33);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = y_33;
                                                                                                                                          {
                                                                                                                                            ATerm a_34 = t;
                                                                                                                                            int b_34 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                t = Let_2_0(t_19, strategy_expression_0_0, t);
                                                                                                                                                ;
                                                                                                                                                LocalPopChoice(b_34);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = a_34;
                                                                                                                                                {
                                                                                                                                                  ATerm x_0 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL,j_5 = NULL;
                                                                                                                                                  x_0 = t;
                                                                                                                                                  t = term_c_34;
                                                                                                                                                  i_5 = t;
                                                                                                                                                  t = term_i_13;
                                                                                                                                                  g_5 = t;
                                                                                                                                                  t = i_5;
                                                                                                                                                  j_5 = t;
                                                                                                                                                  t = (ATerm) ATinsert(ATinsert(ATempty, x_0), term_c_34);
                                                                                                                                                  h_5 = t;
                                                                                                                                                  t = SSL_printnl(g_5, h_5);
                                                                                                                                                  t = x_0;
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm VarDec_2_0 (ATerm o_75 (ATerm), ATerm p_75 (ATerm), ATerm t)
{
  ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,l_5 = NULL,m_5 = NULL;
  m_25 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      i_25 = ATgetArgument(t, 0);
      j_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_25);
  h_25 = t;
  t = i_25;
  t = o_75(t);
  k_25 = t;
  t = j_25;
  t = p_75(t);
  l_25 = t;
  m_5 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, k_25, l_25);
  l_5 = t;
  t = SSLsetAnnotations(l_5, h_25);
  return(t);
}
ATerm SDefT_4_0 (ATerm v_75 (ATerm), ATerm w_75 (ATerm), ATerm x_75 (ATerm), ATerm y_75 (ATerm), ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,n_5 = NULL,p_5 = NULL;
  y_25 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      q_25 = ATgetArgument(t, 0);
      r_25 = ATgetArgument(t, 1);
      s_25 = ATgetArgument(t, 2);
      t_25 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_25);
  p_25 = t;
  t = q_25;
  t = v_75(t);
  u_25 = t;
  t = r_25;
  t = w_75(t);
  v_25 = t;
  t = s_25;
  t = x_75(t);
  w_25 = t;
  t = t_25;
  t = y_75(t);
  x_25 = t;
  p_5 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, u_25, v_25, w_25, x_25);
  n_5 = t;
  t = SSLsetAnnotations(n_5, p_25);
  return(t);
}
ATerm SDef_3_0 (ATerm s_75 (ATerm), ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm t)
{
  ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,q_5 = NULL,r_5 = NULL;
  i_26 = t;
  if(match_cons(t, sym_SDef_3))
    {
      c_26 = ATgetArgument(t, 0);
      d_26 = ATgetArgument(t, 1);
      e_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_26);
  b_26 = t;
  t = c_26;
  t = s_75(t);
  f_26 = t;
  t = d_26;
  t = t_75(t);
  g_26 = t;
  t = e_26;
  t = u_75(t);
  h_26 = t;
  r_5 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, f_26, g_26, h_26);
  q_5 = t;
  t = SSLsetAnnotations(q_5, b_26);
  return(t);
}
ATerm h_20 (ATerm t)
{
  ATerm l_26 = NULL;
  l_26 = t;
  t = SSL_is_string(l_26);
  return(t);
}
ATerm i_20 (ATerm t)
{
  t = list_1_0(j_20, t);
  return(t);
}
ATerm j_20 (ATerm t)
{
  t = VarDec_2_0(k_20, _id, t);
  return(t);
}
ATerm k_20 (ATerm t)
{
  ATerm m_26 = NULL;
  m_26 = t;
  t = SSL_is_string(m_26);
  return(t);
}
ATerm l_20 (ATerm t)
{
  ATerm n_26 = NULL;
  n_26 = t;
  t = SSL_is_string(n_26);
  return(t);
}
ATerm m_20 (ATerm t)
{
  t = list_1_0(p_20, t);
  return(t);
}
ATerm n_20 (ATerm t)
{
  t = list_1_0(s_20, t);
  return(t);
}
ATerm p_20 (ATerm t)
{
  t = VarDec_2_0(r_20, _id, t);
  return(t);
}
ATerm r_20 (ATerm t)
{
  ATerm o_26 = NULL;
  o_26 = t;
  t = SSL_is_string(o_26);
  return(t);
}
ATerm s_20 (ATerm t)
{
  t = VarDec_2_0(t_20, _id, t);
  return(t);
}
ATerm t_20 (ATerm t)
{
  ATerm p_26 = NULL;
  p_26 = t;
  t = SSL_is_string(p_26);
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm d_34 = t;
  int e_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SDef_3_0(h_20, i_20, strategy_expression_0_0, t);
      ;
      LocalPopChoice(e_34);
    }
  else
    {
      t = d_34;
      {
        ATerm i_34 = t;
        int j_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(l_20, m_20, n_20, strategy_expression_0_0, t);
            ;
            LocalPopChoice(j_34);
          }
        else
          {
            t = i_34;
            {
              ATerm c_1 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL,y_5 = NULL;
              c_1 = t;
              t = term_l_34;
              w_5 = t;
              t = term_i_13;
              u_5 = t;
              t = w_5;
              y_5 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, c_1), term_l_34);
              v_5 = t;
              t = SSL_printnl(u_5, v_5);
              t = c_1;
            }
          }
      }
    }
  return(t);
}
ATerm list_1_0 (ATerm a_90 (ATerm), ATerm t)
{
  ATerm q_26 (ATerm t)
  {
    ATerm n_34 = t;
    int r_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(r_34);
      }
    else
      {
        t = n_34;
        t = Cons_2_0(a_90, q_26, t);
      }
    return(t);
  }
  t = q_26(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm v_68 (ATerm), ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,z_5 = NULL,a_6 = NULL;
  u_26 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      s_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_26);
  r_26 = t;
  t = s_26;
  t = v_68(t);
  t_26 = t;
  a_6 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, t_26);
  z_5 = t;
  t = SSLsetAnnotations(z_5, r_26);
  return(t);
}
ATerm Cons_2_0 (ATerm n_68 (ATerm), ATerm o_68 (ATerm), ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,b_6 = NULL,c_6 = NULL;
  c_27 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_26 = ATgetFirst((ATermList) t);
      z_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_27);
  x_26 = t;
  t = y_26;
  t = n_68(t);
  a_27 = t;
  t = z_26;
  t = o_68(t);
  b_27 = t;
  c_6 = t;
  t = (ATerm) ATinsert(CheckATermList(b_27), a_27);
  b_6 = t;
  t = SSLsetAnnotations(b_6, x_26);
  return(t);
}
ATerm Specification_1_0 (ATerm a_69 (ATerm), ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,d_6 = NULL,e_6 = NULL;
  i_27 = t;
  if(match_cons(t, sym_Specification_1))
    {
      g_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_27);
  f_27 = t;
  t = g_27;
  t = a_69(t);
  h_27 = t;
  e_6 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, h_27);
  d_6 = t;
  t = SSLsetAnnotations(d_6, f_27);
  return(t);
}
ATerm _2_0 (ATerm y_63 (ATerm), ATerm z_63 (ATerm), ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL,f_6 = NULL,g_6 = NULL;
  q_27 = t;
  if(match_cons(t, sym__2))
    {
      m_27 = ATgetArgument(t, 0);
      n_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_27);
  l_27 = t;
  t = m_27;
  t = y_63(t);
  o_27 = t;
  t = n_27;
  t = z_63(t);
  p_27 = t;
  g_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_27, p_27);
  f_6 = t;
  t = SSLsetAnnotations(f_6, l_27);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm m_102 (ATerm), ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL;
  if(match_cons(t, sym__2))
    {
      t_27 = ATgetArgument(t, 0);
      u_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_27, term_u_34);
  t = open_stream_0_0(t);
  v_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_27, u_27);
  t = m_102(t);
  t = fclose_0_0(t);
  t = u_27;
  return(t);
}
ATerm a_21 (ATerm t)
{
  t = fetch_1_0(d_21, t);
  return(t);
}
ATerm c_21 (ATerm t)
{
  t = WriteToFile_1_0(e_21, t);
  return(t);
}
ATerm d_21 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm e_21 (ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_34 = ATgetArgument(t, 0);
      if(match_cons(v_34, sym_Stream_1))
        {
          y_27 = ATgetArgument(v_34, 0);
        }
      else
        _fail(t);
      z_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(y_27, z_27);
  a_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_28);
  return(t);
}
ATerm f_21 (ATerm t)
{
  t = WriteToFile_1_0(g_21, t);
  return(t);
}
ATerm g_21 (ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,h_6 = NULL,i_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_34 = ATgetArgument(t, 0);
      if(match_cons(w_34, sym_Stream_1))
        {
          b_28 = ATgetArgument(w_34, 0);
        }
      else
        _fail(t);
      c_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(b_28, c_28);
  d_28 = t;
  i_6 = t;
  t = term_d_35;
  h_6 = t;
  t = SSL_fputc(h_6, d_28);
  e_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_28);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL;
  w_27 = t;
  {
    ATerm u_20 (ATerm t)
    {
      ATerm e_35 = t;
      int k_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_20 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((x_27 != NULL) && (x_27 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  x_27 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(v_20, t);
          ;
          LocalPopChoice(k_35);
        }
      else
        {
          t = e_35;
          t = term_l_35;
          if(((x_27 != NULL) && (x_27 != t)))
            _fail(t);
          else
            x_27 = t;
        }
      return(t);
    }
    t = _2_0(u_20, _id, t);
    t = w_27;
    {
      ATerm w_20 (ATerm t)
      {
        ATerm f_1 = NULL;
        f_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_27), f_1);
        return(t);
      }
      t = _2_0(_id, w_20, t);
      {
        ATerm m_35 = t;
        int p_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(a_21, c_21, t);
            ;
            LocalPopChoice(p_35);
          }
        else
          {
            t = m_35;
            t = _2_0(_id, f_21, t);
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
ATerm apply_strategy_1_0 (ATerm o_105 (ATerm), ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL;
  f_28 = t;
  t = dtime_0_0(t);
  t = f_28;
  t = o_105(t);
  g_28 = t;
  t = dtime_0_0(t);
  h_28 = t;
  t = g_28;
  if(match_cons(t, sym__2))
    {
      i_28 = ATgetArgument(t, 0);
      j_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_28), (ATerm) ATmakeAppl(sym_Runtime_1, h_28)), j_28);
  return(t);
}
ATerm x_28 (ATerm r_28, ATerm t)
{
  t = SSL_fclose(r_28);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL;
  v_28 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_28 = ATgetArgument(t, 0);
      {
        ATerm q_35 = t;
        int r_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_28);
            ;
            LocalPopChoice(r_35);
          }
        else
          {
            t = q_35;
            t = x_28(v_28, t);
          }
      }
    }
  else
    {
      t = x_28(v_28, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_28 = NULL;
  t = SSL_stdin_stream();
  y_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_28);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_28 = NULL;
  t = SSL_stdout_stream();
  z_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_28);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_29 = NULL;
  t = SSL_stderr_stream();
  a_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_29);
  return(t);
}
ATerm h_21 (ATerm t)
{
  ATerm i_29 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      i_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_29;
  return(t);
}
ATerm k_21 (ATerm t)
{
  ATerm m_29 = NULL;
  m_29 = t;
  t = SSL_is_string(m_29);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_35 = ATgetArgument(t, 0);
      ATerm v_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_35 = t;
    int z_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_2 = NULL,g_2 = NULL;
        d_2 = t;
        t = SSL_explode_term(d_2);
        if(match_cons(t, sym__2))
          {
            ATerm a_36 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) a_36) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm b_36 = ATgetArgument(t, 1);
              if(((ATgetType(b_36) == AT_LIST) && !(ATisEmpty(b_36))))
                {
                  g_2 = ATgetFirst((ATermList) b_36);
                  {
                    ATerm c_36 = (ATerm) ATgetNext((ATermList) b_36);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = g_2;
        if(match_cons(t, sym_stderr_0))
          {
            t = g_2;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = g_2;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = g_2;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(z_35);
      }
    else
      {
        t = y_35;
        {
          ATerm d_36 = t;
          int i_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL;
              t = _2_0(h_21, _id, t);
              if(match_cons(t, sym__2))
                {
                  f_29 = ATgetArgument(t, 0);
                  g_29 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(f_29, g_29);
              h_29 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, h_29);
              ;
              LocalPopChoice(i_36);
            }
          else
            {
              t = d_36;
              {
                ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL;
                t = _2_0(k_21, _id, t);
                if(match_cons(t, sym__2))
                  {
                    j_29 = ATgetArgument(t, 0);
                    k_29 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(j_29, k_29);
                l_29 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, l_29);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL;
  ATerm j_36 = t;
  int k_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_29 = NULL;
      q_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_29, term_l_36);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(k_36);
    }
  else
    {
      t = j_36;
      {
        ATerm o_2 = NULL,n_6 = NULL,o_6 = NULL,p_6 = NULL,q_6 = NULL;
        o_2 = t;
        t = term_n_36;
        p_6 = t;
        t = term_i_13;
        n_6 = t;
        t = p_6;
        q_6 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, o_2), term_n_36);
        o_6 = t;
        t = SSL_printnl(n_6, o_6);
        t = o_2;
        _fail(t);
      }
    }
  n_29 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(p_29);
  o_29 = t;
  t = n_29;
  t = fclose_0_0(t);
  t = o_29;
  return(t);
}
ATerm fetch_1_0 (ATerm h_90 (ATerm), ATerm t)
{
  ATerm v_29 (ATerm t)
  {
    ATerm o_36 = t;
    int u_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(h_90, _id, t);
        ;
        LocalPopChoice(u_36);
      }
    else
      {
        t = o_36;
        t = Cons_2_0(_id, v_29, t);
      }
    return(t);
  }
  t = v_29(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_36 = t;
  int w_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(w_36);
    }
  else
    {
      t = v_36;
      {
        ATerm y_29 = NULL,z_29 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_29 = ATgetFirst((ATermList) t);
            z_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_29;
        {
          ATerm l_21 (ATerm t)
          {
            t = z_29;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(l_21, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm n_90 (ATerm), ATerm t)
{
  ATerm f_30 (ATerm t)
  {
    ATerm x_36 = t;
    int y_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, f_30, t);
        ;
        LocalPopChoice(y_36);
      }
    else
      {
        t = x_36;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_90(t);
      }
    return(t);
  }
  t = f_30(t);
  return(t);
}
ATerm m_21 (ATerm t)
{
  ATerm i_30 = NULL;
  i_30 = t;
  t = SSL_explode_string(i_30);
  return(t);
}
ATerm n_21 (ATerm t)
{
  ATerm j_30 = NULL;
  j_30 = t;
  t = SSL_explode_string(j_30);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm h_30 = NULL;
  t = _2_0(m_21, n_21, t);
  {
    ATerm z_36 = t;
    int a_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_30 = NULL,m_30 = NULL;
        if(match_cons(t, sym__2))
          {
            l_30 = ATgetArgument(t, 0);
            m_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_30;
        {
          ATerm q_21 (ATerm t)
          {
            t = m_30;
            return(t);
          }
          t = at_end_1_0(q_21, t);
        }
        ;
        LocalPopChoice(a_37);
      }
    else
      {
        t = z_36;
        {
          ATerm a_3 = NULL,b_3 = NULL;
          a_3 = t;
          t = SSL_explode_term(a_3);
          if(match_cons(t, sym__2))
            {
              ATerm b_37 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) b_37) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              b_3 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_3;
          t = concat_0_0(t);
        }
      }
    h_30 = t;
    t = SSL_implode_string(h_30);
  }
  return(t);
}
ATerm r_21 (ATerm t)
{
  ATerm c_37 = t;
  int d_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(d_37);
    }
  else
    {
      t = c_37;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm e_37 = t;
  int f_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_30 = NULL;
      u_30 = t;
      t = SSL_is_string(u_30);
      ;
      LocalPopChoice(f_37);
    }
  else
    {
      t = e_37;
      {
        ATerm g_37 = t;
        int h_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(r_21, t);
            ;
            LocalPopChoice(h_37);
          }
        else
          {
            t = g_37;
            {
              ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL;
              y_30 = t;
              if(match_cons(t, sym_Path_1))
                {
                  z_30 = ATgetArgument(t, 0);
                  t = z_30;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      z_30 = ATgetArgument(t, 0);
                      t = z_30;
                      {
                        ATerm i_37 = t;
                        int j_37 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm s_6 = NULL,t_6 = NULL;
                            t_6 = t;
                            t = term_k_37;
                            s_6 = t;
                            t = SSL_table_get(s_6, z_30);
                            {
                              ATerm l_37 = t;
                              int m_37 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm e_4 = NULL,u_6 = NULL,v_6 = NULL;
                                  t = eval_config_0_0(t);
                                  e_4 = t;
                                  v_6 = t;
                                  t = term_k_37;
                                  u_6 = t;
                                  t = SSL_table_put(u_6, z_30, e_4);
                                  t = e_4;
                                  ;
                                  LocalPopChoice(m_37);
                                }
                              else
                                {
                                  t = l_37;
                                }
                            }
                            ;
                            LocalPopChoice(j_37);
                          }
                        else
                          {
                            t = i_37;
                            {
                              ATerm w_6 = NULL,x_6 = NULL,y_6 = NULL,a_7 = NULL;
                              t = term_n_37;
                              y_6 = t;
                              t = term_i_13;
                              w_6 = t;
                              t = y_6;
                              a_7 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, z_30), term_n_37);
                              x_6 = t;
                              t = SSL_printnl(w_6, x_6);
                              t = z_30;
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm e_31 = NULL,f_31 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          z_30 = ATgetArgument(t, 0);
                          a_31 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = z_30;
                      t = eval_config_0_0(t);
                      e_31 = t;
                      t = a_31;
                      t = eval_config_0_0(t);
                      f_31 = t;
                      t = (ATerm) ATmakeAppl(sym__2, e_31, f_31);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm x_103 (ATerm), ATerm t)
{
  ATerm o_37 = t;
  int p_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_31 = NULL,m_31 = NULL,b_7 = NULL,c_7 = NULL,e_7 = NULL,f_7 = NULL;
      k_31 = t;
      t = term_q_37;
      e_7 = t;
      t = term_k_37;
      b_7 = t;
      t = e_7;
      f_7 = t;
      t = term_q_37;
      c_7 = t;
      t = SSL_table_get(b_7, c_7);
      {
        ATerm r_37 = t;
        int s_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_4 = NULL,k_7 = NULL,l_7 = NULL,n_7 = NULL,o_7 = NULL;
            t = eval_config_0_0(t);
            m_4 = t;
            n_7 = t;
            t = term_k_37;
            k_7 = t;
            t = n_7;
            o_7 = t;
            t = term_q_37;
            l_7 = t;
            t = SSL_table_put(k_7, l_7, m_4);
            t = m_4;
            ;
            LocalPopChoice(s_37);
          }
        else
          {
            t = r_37;
          }
        m_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_31, term_t_37);
        t = geq_0_0(t);
        t = k_31;
        t = x_103(t);
      }
      ;
      LocalPopChoice(p_37);
    }
  else
    {
      t = o_37;
    }
  return(t);
}
ATerm t_21 (ATerm t)
{
  ATerm r_31 = NULL;
  r_31 = t;
  if(match_string(t, "-k"))
    {
      t = r_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_31;
    }
  return(t);
}
ATerm y_21 (ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL,p_7 = NULL,s_7 = NULL,t_7 = NULL,w_7 = NULL;
  s_31 = t;
  t = SSL_string_to_int(s_31);
  t_31 = t;
  t_7 = t;
  t = term_k_37;
  p_7 = t;
  t = t_7;
  w_7 = t;
  t = term_u_37;
  s_7 = t;
  t = SSL_table_put(p_7, s_7, t_31);
  t = s_31;
  return(t);
}
ATerm z_21 (ATerm t)
{
  t = term_v_37;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_21, y_21, z_21, t);
  return(t);
}
ATerm a_22 (ATerm t)
{
  ATerm v_31 = NULL;
  v_31 = t;
  if(match_string(t, "-S"))
    {
      t = v_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = v_31;
    }
  return(t);
}
ATerm b_22 (ATerm t)
{
  ATerm x_7 = NULL,y_7 = NULL,d_8 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL;
  e_8 = t;
  t = term_k_37;
  x_7 = t;
  t = e_8;
  f_8 = t;
  t = term_q_37;
  y_7 = t;
  t = f_8;
  g_8 = t;
  t = term_w_37;
  d_8 = t;
  t = SSL_table_put(x_7, y_7, d_8);
  t = term_x_37;
  return(t);
}
ATerm c_22 (ATerm t)
{
  t = term_y_37;
  return(t);
}
ATerm e_22 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_22 (ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL;
  w_31 = t;
  t = SSL_string_to_int(w_31);
  x_31 = t;
  j_8 = t;
  t = term_k_37;
  h_8 = t;
  t = j_8;
  k_8 = t;
  t = term_q_37;
  i_8 = t;
  t = SSL_table_put(h_8, i_8, x_31);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_31);
  return(t);
}
ATerm g_22 (ATerm t)
{
  t = term_z_37;
  return(t);
}
ATerm h_22 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_22 (ATerm t)
{
  ATerm l_8 = NULL,m_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL;
  p_8 = t;
  t = term_k_37;
  l_8 = t;
  t = p_8;
  q_8 = t;
  t = term_a_38;
  m_8 = t;
  t = q_8;
  r_8 = t;
  t = term_v_7;
  o_8 = t;
  t = SSL_table_put(l_8, m_8, o_8);
  t = term_b_38;
  return(t);
}
ATerm j_22 (ATerm t)
{
  t = term_c_38;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_38 = t;
  int e_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_22, b_22, c_22, t);
      ;
      LocalPopChoice(e_38);
    }
  else
    {
      t = d_38;
      {
        ATerm f_38 = t;
        int g_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_22, f_22, g_22, t);
            ;
            LocalPopChoice(g_38);
          }
        else
          {
            t = f_38;
            t = Option_3_0(h_22, i_22, j_22, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_32 = NULL;
      t = term_v_7;
      t = d_0(t);
      c_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_38, term_i_38, c_32);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm h_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_32 = ATgetFirst((ATermList) t);
          b_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_32;
      t = a_0(t);
      t = term_v_7;
      t = c_0(t);
      h_32 = t;
      t = (ATerm) ATinsert(CheckATermList(b_32), h_32);
    }
  return(t);
}
ATerm n_22 (ATerm t)
{
  ATerm j_32 = NULL;
  j_32 = t;
  if(match_string(t, "-o"))
    {
      t = j_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = j_32;
    }
  return(t);
}
ATerm p_22 (ATerm t)
{
  ATerm k_32 = NULL,s_8 = NULL,t_8 = NULL,v_8 = NULL,w_8 = NULL;
  k_32 = t;
  v_8 = t;
  t = term_k_37;
  s_8 = t;
  t = v_8;
  w_8 = t;
  t = term_j_38;
  t_8 = t;
  t = SSL_table_put(s_8, t_8, k_32);
  t = (ATerm) ATmakeAppl(sym_Output_1, k_32);
  return(t);
}
ATerm r_22 (ATerm t)
{
  t = term_k_38;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_22, p_22, r_22, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,x_8 = NULL,y_8 = NULL;
  if(match_cons(t, sym__3))
    {
      n_32 = ATgetArgument(t, 0);
      o_32 = ATgetArgument(t, 1);
      p_32 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_32, o_32);
  {
    ATerm l_38 = t;
    int m_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_38 = ATgetArgument(t, 0);
            ATerm o_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(n_32, o_32);
        ;
        LocalPopChoice(m_38);
      }
    else
      {
        t = l_38;
        t = (ATerm) ATempty;
      }
    q_32 = t;
    y_8 = t;
    t = (ATerm) ATinsert(CheckATermList(q_32), p_32);
    x_8 = t;
    t = SSL_table_put(n_32, o_32, x_8);
    t = (ATerm) ATmakeAppl(sym__3, n_32, o_32, p_32);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_33 = NULL;
      t = term_v_7;
      t = j_0(t);
      c_33 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_38, term_i_38, c_33);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm g_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_32 = ATgetFirst((ATermList) t);
          z_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_32;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_33 = ATgetFirst((ATermList) t);
          b_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_32;
      t = h_0(t);
      t = a_33;
      t = i_0(t);
      g_33 = t;
      t = (ATerm) ATinsert(CheckATermList(b_33), g_33);
    }
  return(t);
}
ATerm s_22 (ATerm t)
{
  ATerm i_33 = NULL;
  i_33 = t;
  if(match_string(t, "-i"))
    {
      t = i_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_33;
    }
  return(t);
}
ATerm t_22 (ATerm t)
{
  ATerm j_33 = NULL,z_8 = NULL,a_9 = NULL,c_9 = NULL,d_9 = NULL;
  j_33 = t;
  c_9 = t;
  t = term_k_37;
  z_8 = t;
  t = c_9;
  d_9 = t;
  t = term_p_38;
  a_9 = t;
  t = SSL_table_put(z_8, a_9, j_33);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_33);
  return(t);
}
ATerm v_22 (ATerm t)
{
  t = term_q_38;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_22, t_22, v_22, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_33 = NULL,j_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,k_9 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_7;
  t = whoami_0_0(t);
  k_33 = t;
  g_9 = t;
  t = term_i_13;
  e_9 = t;
  t = g_9;
  h_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_r_38), k_33);
  f_9 = t;
  t = SSL_printnl(e_9, f_9);
  k_9 = t;
  t = term_r_27;
  j_9 = t;
  t = SSL_exit(j_9);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL;
  t = term_s_38;
  n_9 = t;
  t = term_k_37;
  l_9 = t;
  t = n_9;
  o_9 = t;
  t = term_s_38;
  m_9 = t;
  t = SSL_table_get(l_9, m_9);
  {
    ATerm t_38 = t;
    int u_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_4 = NULL,q_9 = NULL,r_9 = NULL,t_9 = NULL,u_9 = NULL;
        t = eval_config_0_0(t);
        q_4 = t;
        t_9 = t;
        t = term_k_37;
        q_9 = t;
        t = t_9;
        u_9 = t;
        t = term_s_38;
        r_9 = t;
        t = SSL_table_put(q_9, r_9, q_4);
        t = q_4;
        ;
        LocalPopChoice(u_38);
      }
    else
      {
        t = t_38;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm y_95 (ATerm), ATerm z_95 (ATerm), ATerm t)
{
  ATerm v_38 = t;
  int w_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_95(t);
      ;
      LocalPopChoice(w_38);
    }
  else
    {
      t = v_38;
      {
        ATerm n_33 = NULL,o_33 = NULL,r_33 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_33 = ATgetFirst((ATermList) t);
            o_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_33;
        t = foldr_2_0(y_95, z_95, t);
        r_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_33, r_33);
        t = z_95(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm w_22 (ATerm t)
{
  t = term_w_37;
  return(t);
}
ATerm x_22 (ATerm t)
{
  ATerm v_4 = NULL,w_4 = NULL;
  if(match_cons(t, sym__2))
    {
      v_4 = ATgetArgument(t, 0);
      w_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_38 = t;
    int y_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(v_4, w_4);
        ;
        LocalPopChoice(y_38);
      }
    else
      {
        t = x_38;
        t = SSL_addr(v_4, w_4);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_33 = NULL,r_4 = NULL,s_4 = NULL;
  t = times_0_0(t);
  r_4 = t;
  t = SSL_explode_term(r_4);
  if(match_cons(t, sym__2))
    {
      ATerm z_38 = ATgetArgument(t, 0);
      s_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_4;
  t = foldr_2_0(w_22, x_22, t);
  u_33 = t;
  t = SSL_TicksToSeconds(u_33);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL;
  f_34 = t;
  if(match_cons(t, sym__2))
    {
      g_34 = ATgetArgument(t, 0);
      h_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_39 = t;
    int b_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_34;
        if((g_34 != t))
          {
            _fail(t);
          }
        t = f_34;
        ;
        LocalPopChoice(b_39);
      }
    else
      {
        t = a_39;
        t = f_34;
        {
          ATerm c_39 = t;
          int d_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_34, h_34);
              ;
              LocalPopChoice(d_39);
            }
          else
            {
              t = c_39;
              t = SSL_gtr(g_34, h_34);
            }
          t = (ATerm) ATmakeAppl(sym__2, g_34, h_34);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_103 (ATerm), ATerm t)
{
  ATerm e_39 = t;
  int f_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_34 = NULL,m_34 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL;
      k_34 = t;
      t = term_q_37;
      x_9 = t;
      t = term_k_37;
      v_9 = t;
      t = x_9;
      y_9 = t;
      t = term_q_37;
      w_9 = t;
      t = SSL_table_get(v_9, w_9);
      {
        ATerm g_39 = t;
        int h_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_5 = NULL,z_9 = NULL,a_10 = NULL,c_10 = NULL,d_10 = NULL;
            t = eval_config_0_0(t);
            k_5 = t;
            c_10 = t;
            t = term_k_37;
            z_9 = t;
            t = c_10;
            d_10 = t;
            t = term_q_37;
            a_10 = t;
            t = SSL_table_put(z_9, a_10, k_5);
            t = k_5;
            ;
            LocalPopChoice(h_39);
          }
        else
          {
            t = g_39;
          }
        m_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_34, term_r_27);
        t = geq_0_0(t);
        t = k_34;
        t = w_103(t);
      }
      ;
      LocalPopChoice(f_39);
    }
  else
    {
      t = e_39;
    }
  return(t);
}
ATerm y_22 (ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL,e_10 = NULL,f_10 = NULL,i_10 = NULL,l_10 = NULL;
  t = run_time_0_0(t);
  o_34 = t;
  t = term_v_7;
  t = whoami_0_0(t);
  p_34 = t;
  i_10 = t;
  t = term_i_13;
  e_10 = t;
  t = i_10;
  l_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_39), o_34), term_i_39), p_34);
  f_10 = t;
  t = SSL_printnl(e_10, f_10);
  t = (ATerm) ATmakeAppl(sym__2, term_i_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_39), o_34), term_i_39), p_34));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(y_22, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm m_10 = NULL,o_10 = NULL;
  t = report_run_time_0_0(t);
  o_10 = t;
  t = term_w_37;
  m_10 = t;
  t = SSL_exit(m_10);
  return(t);
}
ATerm z_22 (ATerm t)
{
  ATerm k_39 = t;
  int l_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(l_39);
    }
  else
    {
      t = k_39;
      {
        ATerm m_39 = t;
        int n_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(n_39);
          }
        else
          {
            t = m_39;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_106 (ATerm), ATerm t)
{
  ATerm o_39 = t;
  int p_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL;
      t = term_q_39;
      r_10 = t;
      t = term_k_37;
      p_10 = t;
      t = r_10;
      s_10 = t;
      t = term_q_39;
      q_10 = t;
      t = SSL_table_get(p_10, q_10);
      {
        ATerm r_39 = t;
        int s_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_5 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL;
            t = eval_config_0_0(t);
            o_5 = t;
            v_10 = t;
            t = term_k_37;
            t_10 = t;
            t = v_10;
            w_10 = t;
            t = term_q_39;
            u_10 = t;
            t = SSL_table_put(t_10, u_10, o_5);
            t = o_5;
            ;
            LocalPopChoice(s_39);
          }
        else
          {
            t = r_39;
          }
      }
      ;
      LocalPopChoice(p_39);
    }
  else
    {
      t = o_39;
      t = fetch_1_0(z_22, t);
    }
  t = m_106(t);
  return(t);
}
ATerm map_1_0 (ATerm w_89 (ATerm), ATerm t)
{
  ATerm q_34 (ATerm t)
  {
    ATerm t_39 = t;
    int u_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(u_39);
      }
    else
      {
        t = t_39;
        t = Cons_2_0(w_89, q_34, t);
      }
    return(t);
  }
  t = q_34(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_34 = ATgetFirst((ATermList) t);
      t_34 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_34 = NULL,y_34 = NULL;
        t = t_34;
        t = g_0(t);
        x_34 = t;
        t = s_34;
        t = e_0(t);
        y_34 = t;
        t = t_34;
        {
          ATerm a_23 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(x_34), y_34);
            return(t);
          }
          t = reverse_acc_2_0(e_0, a_23, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_v_7;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm j_81 (ATerm), ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL,c_35 = NULL,z_10 = NULL,a_11 = NULL;
  c_35 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_35);
  z_34 = t;
  t = a_35;
  t = j_81(t);
  b_35 = t;
  a_11 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, b_35);
  z_10 = t;
  t = SSLsetAnnotations(z_10, z_34);
  return(t);
}
ATerm f_23 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm g_23 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_23 (ATerm t)
{
  ATerm f_35 = NULL;
  f_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_35), term_v_39);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm k_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL;
  ATerm w_39 = t;
  int x_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL;
      t = term_s_38;
      d_11 = t;
      t = term_k_37;
      b_11 = t;
      t = d_11;
      e_11 = t;
      t = term_s_38;
      c_11 = t;
      t = SSL_table_get(b_11, c_11);
      {
        ATerm y_39 = t;
        int z_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_5 = NULL,f_11 = NULL,g_11 = NULL,i_11 = NULL,j_11 = NULL;
            t = eval_config_0_0(t);
            s_5 = t;
            i_11 = t;
            t = term_k_37;
            f_11 = t;
            t = i_11;
            j_11 = t;
            t = term_s_38;
            g_11 = t;
            t = SSL_table_put(f_11, g_11, s_5);
            t = s_5;
            ;
            LocalPopChoice(z_39);
          }
        else
          {
            t = y_39;
          }
      }
      ;
      LocalPopChoice(x_39);
    }
  else
    {
      t = w_39;
      t = fetch_1_0(f_23, t);
    }
  t = term_a_40;
  t = echo_0_0(t);
  n_11 = t;
  t = term_h_38;
  k_11 = t;
  t = n_11;
  o_11 = t;
  t = term_i_38;
  m_11 = t;
  t = SSL_table_get(k_11, m_11);
  t = reverse_acc_2_0(_id, g_23, t);
  t = map_1_0(h_23, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm k_81 (ATerm), ATerm t)
{
  ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL,p_11 = NULL,r_11 = NULL;
  j_35 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      h_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_35);
  g_35 = t;
  t = h_35;
  t = k_81(t);
  i_35 = t;
  r_11 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, i_35);
  p_11 = t;
  t = SSLsetAnnotations(p_11, g_35);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL,s_11 = NULL,t_11 = NULL;
  n_35 = t;
  {
    ATerm b_40 = t;
    int c_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = n_35;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_40 = ATgetFirst((ATermList) t);
                ATerm e_40 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = n_35;
          }
        ;
        LocalPopChoice(c_40);
      }
    else
      {
        t = b_40;
        t = (ATerm) ATinsert(ATempty, n_35);
      }
    o_35 = t;
    t_11 = t;
    t = term_l_35;
    s_11 = t;
    t = SSL_printnl(s_11, o_35);
    t = n_35;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm u_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL;
  t = term_s_38;
  z_11 = t;
  t = term_k_37;
  u_11 = t;
  t = z_11;
  a_12 = t;
  t = term_s_38;
  y_11 = t;
  t = SSL_table_get(u_11, y_11);
  {
    ATerm f_40 = t;
    int g_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_5 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL;
        t = eval_config_0_0(t);
        x_5 = t;
        f_12 = t;
        t = term_k_37;
        d_12 = t;
        t = f_12;
        g_12 = t;
        t = term_s_38;
        e_12 = t;
        t = SSL_table_put(d_12, e_12, x_5);
        t = x_5;
        ;
        LocalPopChoice(g_40);
      }
    else
      {
        t = f_40;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm i_23 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_23 (ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL,n_12 = NULL,o_12 = NULL,s_12 = NULL;
  n_12 = t;
  t = term_k_37;
  j_12 = t;
  t = n_12;
  o_12 = t;
  t = term_h_40;
  k_12 = t;
  t = o_12;
  s_12 = t;
  t = term_v_7;
  l_12 = t;
  t = SSL_table_put(j_12, k_12, l_12);
  t = term_i_40;
  return(t);
}
ATerm l_23 (ATerm t)
{
  t = term_j_40;
  return(t);
}
ATerm m_23 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_23 (ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,z_12 = NULL,a_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,l_13 = NULL,m_13 = NULL,p_13 = NULL;
  w_12 = t;
  t = term_k_37;
  t_12 = t;
  t = w_12;
  z_12 = t;
  t = term_h_40;
  u_12 = t;
  t = z_12;
  a_13 = t;
  t = term_v_7;
  v_12 = t;
  t = SSL_table_put(t_12, u_12, v_12);
  l_13 = t;
  t = term_k_37;
  d_13 = t;
  t = l_13;
  m_13 = t;
  t = term_k_40;
  e_13 = t;
  t = m_13;
  p_13 = t;
  t = term_v_7;
  f_13 = t;
  t = SSL_table_put(d_13, e_13, f_13);
  t = term_l_40;
  return(t);
}
ATerm o_23 (ATerm t)
{
  t = term_m_40;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_40 = t;
  int o_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_23, k_23, l_23, t);
      ;
      LocalPopChoice(o_40);
    }
  else
    {
      t = n_40;
      t = Option_3_0(m_23, n_23, o_23, t);
    }
  return(t);
}
ATerm p_23 (ATerm t)
{
  ATerm u_35 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL;
  u_35 = t;
  s_13 = t;
  t = term_k_37;
  q_13 = t;
  t = s_13;
  t_13 = t;
  t = term_s_38;
  r_13 = t;
  t = SSL_table_put(q_13, r_13, u_35);
  t = (ATerm) ATmakeAppl(sym_Program_1, u_35);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_108 (ATerm), ATerm t)
{
  ATerm t_35 = NULL;
  t_35 = t;
  {
    ATerm p_40 = t;
    int q_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_40;
        t = p_108(t);
        ;
        LocalPopChoice(q_40);
      }
    else
      {
        t = p_40;
      }
    t = t_35;
    {
      ATerm r_23 (ATerm t)
      {
        ATerm s_40 = t;
        int t_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_40 = t;
            int v_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(v_40);
              }
            else
              {
                t = u_40;
                t = p_108(t);
                t = Cons_2_0(_id, r_23, t);
              }
            ;
            LocalPopChoice(t_40);
          }
        else
          {
            t = s_40;
            {
              ATerm w_35 = NULL,x_35 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_35 = ATgetFirst((ATermList) t);
                  x_35 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(x_35), (ATerm) ATmakeAppl(sym_Undefined_1, w_35));
            }
          }
        return(t);
      }
      t = Cons_2_0(p_23, r_23, t);
    }
  }
  return(t);
}
ATerm z_23 (ATerm t)
{
  ATerm h_36 = NULL;
  h_36 = t;
  if(match_string(t, "--help"))
    {
      t = h_36;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_36;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_36;
        }
    }
  return(t);
}
ATerm a_24 (ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL;
  g_14 = t;
  t = term_k_37;
  d_14 = t;
  t = g_14;
  h_14 = t;
  t = term_q_39;
  e_14 = t;
  t = h_14;
  i_14 = t;
  t = term_v_7;
  f_14 = t;
  t = SSL_table_put(d_14, e_14, f_14);
  t = term_w_40;
  return(t);
}
ATerm c_24 (ATerm t)
{
  t = term_x_40;
  return(t);
}
ATerm e_24 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_108 (ATerm), ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL,u_13 = NULL,x_13 = NULL,y_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,s_15 = NULL,t_15 = NULL;
  e_36 = t;
  a_14 = t;
  t = term_h_38;
  u_13 = t;
  t = a_14;
  b_14 = t;
  t = term_i_38;
  x_13 = t;
  t = b_14;
  c_14 = t;
  t = (ATerm) ATempty;
  y_13 = t;
  t = SSL_table_put(u_13, x_13, y_13);
  t = e_36;
  {
    ATerm s_23 (ATerm t)
    {
      ATerm y_40 = t;
      int z_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_108(t);
          ;
          LocalPopChoice(z_40);
        }
      else
        {
          t = y_40;
          {
            ATerm a_41 = t;
            int b_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(z_23, a_24, c_24, t);
                ;
                LocalPopChoice(b_41);
              }
            else
              {
                t = a_41;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_23, t);
    {
      ATerm c_41 = t;
      int d_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_36 = NULL;
          m_36 = t;
          {
            ATerm e_41 = t;
            int f_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_14 = NULL,x_14 = NULL;
                t = m_36;
                {
                  ATerm g_41 = t;
                  int h_41 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL;
                      t = term_q_39;
                      m_14 = t;
                      t = term_k_37;
                      k_14 = t;
                      t = m_14;
                      n_14 = t;
                      t = term_q_39;
                      l_14 = t;
                      t = SSL_table_get(k_14, l_14);
                      {
                        ATerm i_41 = t;
                        int j_41 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm r_6 = NULL,o_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL;
                            t = eval_config_0_0(t);
                            r_6 = t;
                            r_14 = t;
                            t = term_k_37;
                            o_14 = t;
                            t = r_14;
                            s_14 = t;
                            t = term_q_39;
                            q_14 = t;
                            t = SSL_table_put(o_14, q_14, r_6);
                            t = r_6;
                            ;
                            LocalPopChoice(j_41);
                          }
                        else
                          {
                            t = i_41;
                          }
                      }
                      ;
                      LocalPopChoice(h_41);
                    }
                  else
                    {
                      t = g_41;
                      t = fetch_1_0(e_24, t);
                    }
                  t = m_36;
                  t = default_system_usage_0_0(t);
                  x_14 = t;
                  t = term_w_37;
                  t_14 = t;
                  t = SSL_exit(t_14);
                }
                ;
                LocalPopChoice(f_41);
              }
            else
              {
                t = e_41;
                {
                  ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,g_15 = NULL,h_15 = NULL;
                  t = term_h_40;
                  a_15 = t;
                  t = term_k_37;
                  y_14 = t;
                  t = a_15;
                  b_15 = t;
                  t = term_h_40;
                  z_14 = t;
                  t = SSL_table_get(y_14, z_14);
                  {
                    ATerm k_41 = t;
                    int l_41 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_6 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL;
                        t = eval_config_0_0(t);
                        z_6 = t;
                        e_15 = t;
                        t = term_k_37;
                        c_15 = t;
                        t = e_15;
                        f_15 = t;
                        t = term_h_40;
                        d_15 = t;
                        t = SSL_table_put(c_15, d_15, z_6);
                        t = z_6;
                        ;
                        LocalPopChoice(l_41);
                      }
                    else
                      {
                        t = k_41;
                      }
                    t = m_36;
                    t = default_system_about_0_0(t);
                    h_15 = t;
                    t = term_w_37;
                    g_15 = t;
                    t = SSL_exit(g_15);
                  }
                }
              }
          }
          ;
          LocalPopChoice(d_41);
        }
      else
        {
          t = c_41;
          {
            ATerm m_41 = t;
            int n_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_15 = NULL,j_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL;
                ATerm h_24 (ATerm t)
                {
                  ATerm i_24 (ATerm t)
                  {
                    if(((f_36 != NULL) && (f_36 != t)))
                      _fail(t);
                    else
                      f_36 = t;
                    return(t);
                  }
                  t = Undefined_1_0(i_24, t);
                  return(t);
                }
                t = fetch_1_0(h_24, t);
                l_15 = t;
                t = term_i_13;
                i_15 = t;
                t = l_15;
                m_15 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_36)), term_o_41);
                j_15 = t;
                t = SSL_printnl(i_15, j_15);
                t = (ATerm) ATmakeAppl(sym__2, term_i_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_36)), term_o_41));
                t = default_system_usage_0_0(t);
                o_15 = t;
                t = term_r_27;
                n_15 = t;
                t = SSL_exit(n_15);
                ;
                LocalPopChoice(n_41);
              }
            else
              {
                t = m_41;
              }
          }
        }
      g_36 = t;
      t_15 = t;
      t = term_h_38;
      s_15 = t;
      t = SSL_table_destroy(s_15);
      t = g_36;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_106 (ATerm), ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm t)
{
  ATerm p_36 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL;
  t = parse_options_1_0(o_106, t);
  p_36 = t;
  v_15 = t;
  t = term_p_41;
  u_15 = t;
  t = SSL_table_create(u_15);
  y_15 = t;
  t = term_p_41;
  w_15 = t;
  t = y_15;
  z_15 = t;
  t = term_q_41;
  x_15 = t;
  t = SSL_table_put(w_15, x_15, p_36);
  t = p_36;
  t = q_106(t);
  {
    ATerm r_41 = t;
    int s_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_106, t);
        ;
        LocalPopChoice(s_41);
      }
    else
      {
        t = r_41;
        {
          ATerm t_41 = t;
          int u_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_106(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(u_41);
            }
          else
            {
              t = t_41;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm o_24 (ATerm t)
{
  t = if_verbose2_1_0(z_25, t);
  return(t);
}
ATerm c_25 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_25 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL,g_16 = NULL;
  d_16 = t;
  t = term_k_37;
  a_16 = t;
  t = d_16;
  e_16 = t;
  t = term_v_41;
  b_16 = t;
  t = e_16;
  g_16 = t;
  t = term_v_7;
  c_16 = t;
  t = SSL_table_put(a_16, b_16, c_16);
  t = term_w_41;
  return(t);
}
ATerm o_25 (ATerm t)
{
  t = term_x_41;
  return(t);
}
ATerm z_25 (ATerm t)
{
  ATerm q_36 = NULL,r_36 = NULL,h_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,w_16 = NULL;
  q_36 = t;
  t = term_s_38;
  k_16 = t;
  t = term_k_37;
  h_16 = t;
  t = k_16;
  l_16 = t;
  t = term_s_38;
  j_16 = t;
  t = SSL_table_get(h_16, j_16);
  {
    ATerm y_41 = t;
    int z_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_7 = NULL,m_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL;
        t = eval_config_0_0(t);
        d_7 = t;
        q_16 = t;
        t = term_k_37;
        m_16 = t;
        t = q_16;
        r_16 = t;
        t = term_s_38;
        p_16 = t;
        t = SSL_table_put(m_16, p_16, d_7);
        t = d_7;
        ;
        LocalPopChoice(z_41);
      }
    else
      {
        t = y_41;
      }
    r_36 = t;
    u_16 = t;
    t = term_i_13;
    s_16 = t;
    t = u_16;
    w_16 = t;
    t = (ATerm) ATinsert(ATempty, r_36);
    t_16 = t;
    t = SSL_printnl(s_16, t_16);
    t = q_36;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm t)
{
  ATerm n_24 (ATerm t)
  {
    ATerm a_42 = t;
    int b_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_105(t);
        ;
        LocalPopChoice(b_42);
      }
    else
      {
        t = a_42;
        {
          ATerm c_42 = t;
          int d_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(d_42);
            }
          else
            {
              t = c_42;
              {
                ATerm e_42 = t;
                int f_42 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(f_42);
                  }
                else
                  {
                    t = e_42;
                    {
                      ATerm g_42 = t;
                      int h_42 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(c_25, n_25, o_25, t);
                          ;
                          LocalPopChoice(h_42);
                        }
                      else
                        {
                          t = g_42;
                          {
                            ATerm i_42 = t;
                            int j_42 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(j_42);
                              }
                            else
                              {
                                t = i_42;
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
  ATerm b_25 (ATerm t)
  {
    ATerm s_36 = NULL,t_36 = NULL,g_7 = NULL;
    s_36 = t;
    {
      ATerm k_42 = t;
      int l_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_26 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((t_36 != NULL) && (t_36 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  t_36 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(a_26, t);
          ;
          LocalPopChoice(l_42);
        }
      else
        {
          t = k_42;
          t = term_m_42;
          t_36 = t;
        }
      t = not_null(t_36);
      t = ReadFromFile_0_0(t);
      g_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_36, g_7);
      t = apply_strategy_1_0(x_105, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(n_24, z_105, o_24, b_25, t);
  return(t);
}
ATerm j_26 (ATerm t)
{
  t = _2_0(_id, k_26, t);
  return(t);
}
ATerm k_26 (ATerm t)
{
  ATerm n_42 = t;
  int o_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Specification_1_0(v_26, t);
      ;
      LocalPopChoice(o_42);
    }
  else
    {
      t = n_42;
      {
        ATerm m_7 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL;
        m_7 = t;
        t = term_p_42;
        z_16 = t;
        t = term_i_13;
        x_16 = t;
        t = z_16;
        a_17 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, m_7), term_p_42);
        y_16 = t;
        t = SSL_printnl(x_16, y_16);
        t = m_7;
      }
    }
  return(t);
}
ATerm v_26 (ATerm t)
{
  t = Cons_2_0(_id, w_26, t);
  return(t);
}
ATerm w_26 (ATerm t)
{
  t = Cons_2_0(d_27, e_27, t);
  return(t);
}
ATerm d_27 (ATerm t)
{
  t = Strategies_1_0(j_27, t);
  return(t);
}
ATerm e_27 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm j_27 (ATerm t)
{
  t = list_1_0(strategy_definition_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(j_26, _fail, default_usage_0_0, t);
  return(t);
}

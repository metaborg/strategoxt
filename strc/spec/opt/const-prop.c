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
Symbol sym_Signature_1;
Symbol sym_Specification_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Wld_0;
Symbol sym_As_2;
Symbol sym_Choice_2;
Symbol sym_GChoice_2;
Symbol sym_Fail_0;
Symbol sym_Let_2;
Symbol sym_CallT_3;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_Scope_2;
Symbol sym_Seq_2;
Symbol sym_LChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_Rec_2;
Symbol sym_Not_1;
Symbol sym_Bagof_1;
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_VarDec_2;
Symbol sym_SDefT_4;
Symbol sym_Some_1;
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
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
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_GChoice_2 = ATmakeSymbol("GChoice", 2, ATfalse);
  ATprotectSymbol(sym_GChoice_2);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
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
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Bagof_1 = ATmakeSymbol("Bagof", 1, ATfalse);
  ATprotectSymbol(sym_Bagof_1);
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
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
  ATprotectSymbol(sym_Defined_0);
  sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
  ATprotectSymbol(sym_Defined_1);
  sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
  ATprotectSymbol(sym_Defined_2);
  sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
  ATprotectSymbol(sym_Defined_3);
  sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
  ATprotectSymbol(sym_Defined_4);
  sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
  ATprotectSymbol(sym_Defined_5);
  sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
  ATprotectSymbol(sym_Defined_6);
  sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
  ATprotectSymbol(sym_Defined_7);
  sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
  ATprotectSymbol(sym_Defined_8);
  sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
  ATprotectSymbol(sym_Defined_9);
  sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
  ATprotectSymbol(sym_Defined_10);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
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
ATerm term_t_35;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_s_34;
ATerm term_q_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_e_33;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_c_31;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_p_29;
ATerm term_h_29;
ATerm term_y_28;
ATerm term_v_28;
ATerm term_j_28;
ATerm term_g_28;
ATerm term_d_28;
ATerm term_m_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_z_24;
ATerm term_b_24;
ATerm term_m_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_c_20;
ATerm term_u_19;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_u_13;
ATerm term_s_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_j_13;
ATerm term_h_13;
ATerm term_f_13;
void init_constant_terms (void)
{
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_u_13);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym__2, term_x_13, (ATerm) ATempty);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("no match with current term: ", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("strat: ", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("current: ", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym__2, term_h_20, term_b_30);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_30);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym__2, term_i_30, term_f_13);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym__2, term_r_30, term_s_30);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym__2, term_n_32, term_f_13);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(sym__2, term_q_32, term_f_13);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym__2, term_d_32, term_f_13);
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym__2, term_q_34, term_f_13);
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm a_0 (ATerm);
ATerm q_0 (ATerm);
ATerm s_0 (ATerm);
ATerm t_0 (ATerm);
ATerm c_6 (ATerm d_75 (ATerm), ATerm d_19, ATerm e_19, ATerm);
ATerm v_0 (ATerm);
ATerm d_6 (ATerm b_75 (ATerm), ATerm);
ATerm w_0 (ATerm);
ATerm x_0 (ATerm);
ATerm exec_maybe_1_0 (ATerm u_74 (ATerm), ATerm);
ATerm k_2 (ATerm);
ATerm f_6 (ATerm e_75 (ATerm), ATerm);
ATerm l_2 (ATerm);
ATerm u_7 (ATerm t_4, ATerm u_4, ATerm v_4, ATerm);
ATerm isect_CurrentTerm_0_0 (ATerm);
ATerm j_3 (ATerm);
ATerm j_11 (ATerm c_9, ATerm f_9, ATerm l_9, ATerm);
ATerm isect_Binding_0_0 (ATerm);
ATerm g_6 (ATerm c_51, ATerm b_51, ATerm);
ATerm save_CurrentTerm_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_Binding_0_0 (ATerm);
ATerm prop_abstract_choice_2_0 (ATerm i_75 (ATerm), ATerm j_75 (ATerm), ATerm);
ATerm prop_choice_1_0 (ATerm h_75 (ATerm), ATerm);
ATerm o_4 (ATerm);
ATerm w_4 (ATerm);
ATerm prop_traversal_1_0 (ATerm r_0 (ATerm), ATerm);
ATerm z_4 (ATerm);
ATerm b_5 (ATerm);
ATerm d_5 (ATerm);
ATerm g_5 (ATerm);
ATerm prop_call_1_0 (ATerm m_0 (ATerm), ATerm);
ATerm m_5 (ATerm);
ATerm t_5 (ATerm);
ATerm y_5 (ATerm);
ATerm p_6 (ATerm);
ATerm h_6 (ATerm c_75 (ATerm), ATerm y_18, ATerm);
ATerm q_6 (ATerm);
ATerm prop_build_0_0 (ATerm);
ATerm i_6 (ATerm z_93 (ATerm), ATerm y_38, ATerm w_38, ATerm);
ATerm oncetd_1_0 (ATerm i_78 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm e_97 (ATerm), ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm j_6 (ATerm r_19, ATerm s_19, ATerm);
ATerm lookup_0_0 (ATerm);
ATerm t_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm z_101 (ATerm), ATerm a_102 (ATerm), ATerm);
ATerm u_6 (ATerm l_105 (ATerm), ATerm o_55, ATerm p_55, ATerm r_55, ATerm q_55, ATerm);
ATerm at_end_1_0 (ATerm l_83 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm p_26 (ATerm b_26, ATerm);
ATerm conc_0_0 (ATerm);
ATerm genzip_4_0 (ATerm y_84 (ATerm), ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm b_85 (ATerm), ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm n_6 (ATerm k_603, ATerm p_603, ATerm q_56, ATerm);
ATerm while_not_2_0 (ATerm v_76 (ATerm), ATerm w_76 (ATerm), ATerm);
ATerm for_3_0 (ATerm y_76 (ATerm), ATerm z_76 (ATerm), ATerm a_77 (ATerm), ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm y_7 (ATerm);
ATerm m_38 (ATerm x_32, ATerm a_33, ATerm b_33, ATerm);
ATerm p_38 (ATerm u_33, ATerm y_33, ATerm z_33, ATerm);
ATerm b_39 (ATerm p_34, ATerm r_34, ATerm t_34, ATerm);
ATerm c_39 (ATerm j_35, ATerm k_35, ATerm m_35, ATerm);
ATerm h_39 (ATerm w_35, ATerm z_35, ATerm c_36, ATerm);
ATerm z_7 (ATerm);
ATerm prop_pattern_match_0_0 (ATerm);
ATerm CurrentTerm_0_0 (ATerm);
ATerm x_6 (ATerm k_50, ATerm l_50, ATerm);
ATerm Binding_0_0 (ATerm);
ATerm alltd_1_0 (ATerm w_78 (ATerm), ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm prop_match_0_0 (ATerm);
ATerm cp_0_0 (ATerm);
ATerm y_6 (ATerm e_50, ATerm f_50, ATerm);
ATerm end_scope_1_0 (ATerm w_93 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm z_75 (ATerm), ATerm a_76 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm v_93 (ATerm), ATerm);
ATerm scope_2_0 (ATerm x_93 (ATerm), ATerm y_93 (ATerm), ATerm);
ATerm map_1_0 (ATerm v_82 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm h_61 (ATerm), ATerm i_61 (ATerm), ATerm);
ATerm b_7 (ATerm k_40, ATerm l_40, ATerm);
ATerm c_7 (ATerm y_43, ATerm z_43, ATerm);
ATerm e_7 (ATerm s_95 (ATerm), ATerm a_429, ATerm c_44, ATerm);
ATerm d_7 (ATerm u_43, ATerm v_43, ATerm);
ATerm l_8 (ATerm);
ATerm m_8 (ATerm);
ATerm o_8 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm u_98 (ATerm), ATerm);
ATerm r_48 (ATerm l_48, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm f_7 (ATerm a_44, ATerm);
ATerm g_7 (ATerm m_40, ATerm n_40, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm q_50 (ATerm b_49, ATerm);
ATerm r_50 (ATerm f_49, ATerm g_49, ATerm m_49, ATerm);
ATerm s_50 (ATerm u_49, ATerm v_49, ATerm x_49, ATerm);
ATerm h_7 (ATerm);
ATerm p_8 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm f_83 (ATerm), ATerm);
ATerm a_7 (ATerm z_34, ATerm a_35, ATerm);
ATerm debug_1_0 (ATerm q_95 (ATerm), ATerm);
ATerm s_8 (ATerm);
ATerm t_8 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm d_97 (ATerm), ATerm);
ATerm u_8 (ATerm);
ATerm v_8 (ATerm);
ATerm w_8 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm g_9 (ATerm);
ATerm h_9 (ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm k_9 (ATerm);
ATerm n_9 (ATerm);
ATerm o_9 (ATerm);
ATerm p_9 (ATerm);
ATerm q_9 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm n_7 (ATerm b_45, ATerm c_45, ATerm);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm t_9 (ATerm);
ATerm u_9 (ATerm);
ATerm v_9 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm l_7 (ATerm z_49, ATerm a_50, ATerm y_49, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm w_9 (ATerm);
ATerm x_9 (ATerm);
ATerm z_9 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm i_7 (ATerm k_37, ATerm l_37, ATerm);
ATerm foldr_2_0 (ATerm y_88 (ATerm), ATerm z_88 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm a_10 (ATerm);
ATerm b_10 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm c_97 (ATerm), ATerm);
ATerm d_10 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm h_10 (ATerm);
ATerm need_help_1_0 (ATerm s_99 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm k_7 (ATerm q_51, ATerm r_51, ATerm);
ATerm j_10 (ATerm);
ATerm l_10 (ATerm);
ATerm t_10 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm u_10 (ATerm);
ATerm v_10 (ATerm);
ATerm w_10 (ATerm);
ATerm x_10 (ATerm);
ATerm y_10 (ATerm);
ATerm z_10 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm v_101 (ATerm), ATerm);
ATerm c_11 (ATerm);
ATerm d_11 (ATerm);
ATerm e_11 (ATerm);
ATerm f_11 (ATerm);
ATerm parse_options_1_0 (ATerm u_101 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_99 (ATerm), ATerm v_99 (ATerm), ATerm w_99 (ATerm), ATerm x_99 (ATerm), ATerm);
ATerm i_12 (ATerm);
ATerm l_12 (ATerm);
ATerm m_12 (ATerm);
ATerm n_12 (ATerm);
ATerm o_12 (ATerm);
ATerm iowrap_3_0 (ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm);
ATerm q_12 (ATerm);
ATerm r_12 (ATerm);
ATerm t_12 (ATerm);
ATerm u_12 (ATerm);
ATerm v_12 (ATerm);
ATerm b_13 (ATerm);
ATerm d_13 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm y_0 = NULL,z_0 = NULL,c_1 = NULL,d_1 = NULL,f_1 = NULL;
  y_0 = t;
  t = term_f_13;
  t = whoami_0_0(t);
  z_0 = t;
  t = term_h_13;
  d_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_13), z_0), term_j_13);
  f_1 = t;
  t = SSL_printnl(d_1, f_1);
  t = term_n_13;
  c_1 = t;
  t = SSL_exit(c_1);
  t = y_0;
  return(t);
}
ATerm a_0 (ATerm t)
{
  t = term_s_13;
  return(t);
}
ATerm q_0 (ATerm t)
{
  ATerm t_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      t_1 = ATgetArgument(t, 0);
      {
        ATerm t_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, t_1);
  v_1 = t;
  t = term_u_13;
  w_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, t_1), term_u_13);
  t = i_6(s_0, v_1, w_1, t);
  t = u_1;
  return(t);
}
ATerm s_0 (ATerm t)
{
  t = term_s_13;
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm c_6 (ATerm d_75 (ATerm), ATerm d_19, ATerm e_19, ATerm t)
{
  ATerm o_0 (ATerm t)
  {
    ATerm g_1 = NULL,i_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL,s_1 = NULL,n_0 = NULL;
    g_1 = t;
    t = e_19;
    t = map_1_0(q_0, t);
    t = g_1;
    if(match_cons(t, sym_SDefT_4))
      {
        l_1 = ATgetArgument(t, 0);
        m_1 = ATgetArgument(t, 1);
        n_1 = ATgetArgument(t, 2);
        o_1 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(g_1);
    i_1 = t;
    t = (ATerm) ATempty;
    q_1 = t;
    t = term_u_13;
    s_1 = t;
    t = term_y_13;
    t = i_6(t_0, q_1, s_1, t);
    t = o_1;
    t = d_75(t);
    p_1 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, l_1, m_1, n_1, p_1);
    n_0 = t;
    t = SSLsetAnnotations(n_0, i_1);
    return(t);
  }
  t = scope_2_0(a_0, o_0, t);
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm d_6 (ATerm b_75 (ATerm), ATerm t)
{
  ATerm x_1 = NULL,y_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL,c_5 = NULL;
  x_1 = t;
  t = (ATerm) ATempty;
  y_1 = t;
  t = term_u_13;
  z_1 = t;
  t = term_y_13;
  t = i_6(v_0, y_1, z_1, t);
  t = x_1;
  if(match_cons(t, sym_Not_1))
    {
      b_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_1);
  a_2 = t;
  t = b_2;
  t = exec_maybe_1_0(b_75, t);
  c_2 = t;
  t = (ATerm) ATmakeAppl(sym_Not_1, c_2);
  c_5 = t;
  t = SSLsetAnnotations(c_5, a_2);
  return(t);
}
ATerm w_0 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm exec_maybe_1_0 (ATerm u_74 (ATerm), ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL,n_2 = NULL,p_2 = NULL;
  f_2 = t;
  t = (ATerm) ATempty;
  n_2 = t;
  t = term_u_13;
  p_2 = t;
  t = term_y_13;
  t = i_6(w_0, n_2, p_2, t);
  t = f_2;
  t = save_Binding_0_0(t);
  d_2 = t;
  t = f_2;
  t = u_74(t);
  e_2 = t;
  t = (ATerm) ATempty;
  i_2 = t;
  t = term_u_13;
  j_2 = t;
  t = term_y_13;
  t = i_6(x_0, i_2, j_2, t);
  t = term_s_13;
  h_2 = t;
  t = SSL_table_destroy(h_2);
  t = term_s_13;
  g_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_13, d_2);
  t = g_6(g_2, d_2, t);
  t = e_2;
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm f_6 (ATerm e_75 (ATerm), ATerm t)
{
  ATerm r_2 = NULL,t_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL,i_3 = NULL,n_3 = NULL,o_3 = NULL,e_5 = NULL;
  v_2 = t;
  t = save_Binding_0_0(t);
  t_2 = t;
  t = save_CurrentTerm_0_0(t);
  r_2 = t;
  t = v_2;
  if(match_cons(t, sym_Let_2))
    {
      x_2 = ATgetArgument(t, 0);
      y_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_2);
  w_2 = t;
  t = x_2;
  {
    ATerm r_1 (ATerm t)
    {
      ATerm y_3 = NULL,z_3 = NULL,a_4 = NULL,c_4 = NULL,d_4 = NULL;
      y_3 = t;
      t = (ATerm) ATempty;
      c_4 = t;
      t = term_u_13;
      d_4 = t;
      t = term_y_13;
      t = i_6(k_2, c_4, d_4, t);
      t = term_s_13;
      a_4 = t;
      t = SSL_table_destroy(a_4);
      t = term_s_13;
      z_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_s_13, t_2);
      t = g_6(z_3, t_2, t);
      t = y_3;
      t = e_75(t);
      return(t);
    }
    t = map_1_0(r_1, t);
    z_2 = t;
    t = term_x_13;
    o_3 = t;
    t = SSL_table_destroy(o_3);
    t = term_x_13;
    n_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_x_13, r_2);
    t = g_6(n_3, r_2, t);
    t = term_s_13;
    i_3 = t;
    t = SSL_table_destroy(i_3);
    t = term_s_13;
    b_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_s_13, t_2);
    t = g_6(b_3, t_2, t);
    t = y_2;
    t = e_75(t);
    a_3 = t;
    t = (ATerm) ATmakeAppl(sym_Let_2, z_2, a_3);
    e_5 = t;
    t = SSLsetAnnotations(e_5, w_2);
  }
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm i_5 = NULL,j_5 = NULL,l_5 = NULL,o_5 = NULL,q_5 = NULL;
  q_5 = t;
  if(match_cons(t, sym__2))
    {
      i_5 = ATgetArgument(t, 0);
      j_5 = ATgetArgument(t, 1);
      t = j_5;
      {
        ATerm e_14 = t;
        int g_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_5 = ATgetFirst((ATermList) t);
                {
                  ATerm h_14 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(g_14);
            t = l_5;
            {
              ATerm j_14 = t;
              int k_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm l_14 = ATgetArgument(t, 0);
                      o_5 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(k_14);
                  t = i_5;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = q_5;
                    }
                  else
                    {
                      ATerm n_14 = t;
                      int o_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = u_7(i_5, o_5, q_5, t);
                          ;
                          LocalPopChoice(o_14);
                        }
                      else
                        {
                          t = n_14;
                          t = q_5;
                        }
                    }
                }
              else
                {
                  t = j_14;
                  t = i_5;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = q_5;
                    }
                  else
                    {
                      t = q_5;
                    }
                }
            }
          }
        else
          {
            t = e_14;
            t = i_5;
            if(match_cons(t, sym_Scopes_0))
              {
                t = q_5;
              }
            else
              {
                t = q_5;
              }
          }
      }
    }
  else
    {
      t = q_5;
    }
  return(t);
}
ATerm u_7 (ATerm t_4, ATerm u_4, ATerm v_4, ATerm t)
{
  t = v_4;
  {
    ATerm q_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_0 = NULL;
        t = term_x_13;
        p_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_13, t_4);
        t = k_7(p_0, t_4, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm t_14 = ATgetFirst((ATermList) t);
            if(match_cons(t_14, sym_Defined_2))
              {
                ATerm j_15 = ATgetArgument(t_14, 0);
                if((u_4 != ATgetArgument(t_14, 1)))
                  {
                    _fail(ATgetArgument(t_14, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm u_14 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = v_4;
        ;
        LocalPopChoice(s_14);
      }
    else
      {
        t = q_14;
        t = (ATerm) ATmakeAppl(sym__2, t_4, (ATerm) ATinsert(ATempty, term_u_13));
      }
  }
  return(t);
}
ATerm isect_CurrentTerm_0_0 (ATerm t)
{
  ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL;
  t = map_1_0(l_2, t);
  q_4 = t;
  t = term_x_13;
  s_4 = t;
  t = SSL_table_destroy(s_4);
  t = term_x_13;
  r_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_13, q_4);
  t = g_6(r_4, q_4, t);
  t = q_4;
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL,k_10 = NULL,o_10 = NULL;
  o_10 = t;
  if(match_cons(t, sym__2))
    {
      e_10 = ATgetArgument(t, 0);
      f_10 = ATgetArgument(t, 1);
      t = f_10;
      {
        ATerm k_15 = t;
        int l_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_10 = ATgetFirst((ATermList) t);
                {
                  ATerm m_15 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(l_15);
            t = g_10;
            {
              ATerm n_15 = t;
              int o_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm p_15 = ATgetArgument(t, 0);
                      k_10 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(o_15);
                  t = e_10;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = o_10;
                    }
                  else
                    {
                      ATerm q_15 = t;
                      int z_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = j_11(e_10, k_10, o_10, t);
                          ;
                          LocalPopChoice(z_15);
                        }
                      else
                        {
                          t = q_15;
                          t = o_10;
                        }
                    }
                }
              else
                {
                  t = n_15;
                  t = e_10;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = o_10;
                    }
                  else
                    {
                      t = o_10;
                    }
                }
            }
          }
        else
          {
            t = k_15;
            t = e_10;
            if(match_cons(t, sym_Scopes_0))
              {
                t = o_10;
              }
            else
              {
                t = o_10;
              }
          }
      }
    }
  else
    {
      t = o_10;
    }
  return(t);
}
ATerm j_11 (ATerm c_9, ATerm f_9, ATerm l_9, ATerm t)
{
  t = l_9;
  {
    ATerm a_16 = t;
    int g_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_0 = NULL;
        t = term_s_13;
        u_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_13, c_9);
        t = k_7(u_0, c_9, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm l_16 = ATgetFirst((ATermList) t);
            if(match_cons(l_16, sym_Defined_2))
              {
                ATerm n_16 = ATgetArgument(l_16, 0);
                if((f_9 != ATgetArgument(l_16, 1)))
                  {
                    _fail(ATgetArgument(l_16, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm m_16 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = l_9;
        ;
        LocalPopChoice(g_16);
      }
    else
      {
        t = a_16;
        t = (ATerm) ATmakeAppl(sym__2, c_9, (ATerm) ATinsert(ATempty, term_u_13));
      }
  }
  return(t);
}
ATerm isect_Binding_0_0 (ATerm t)
{
  ATerm x_8 = NULL,a_9 = NULL,b_9 = NULL;
  t = map_1_0(j_3, t);
  x_8 = t;
  t = term_s_13;
  b_9 = t;
  t = SSL_table_destroy(b_9);
  t = term_s_13;
  a_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_13, x_8);
  t = g_6(a_9, x_8, t);
  t = x_8;
  return(t);
}
ATerm g_6 (ATerm c_51, ATerm b_51, ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    ATerm l_11 = NULL,p_11 = NULL;
    if(match_cons(t, sym__2))
      {
        l_11 = ATgetArgument(t, 0);
        p_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(c_51, l_11, p_11);
    t = (ATerm) ATmakeAppl(sym__3, c_51, l_11, p_11);
    return(t);
  }
  t = b_51;
  t = map_1_0(k_3, t);
  return(t);
}
ATerm save_CurrentTerm_0_0 (ATerm t)
{
  t = term_x_13;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm q_11 = NULL;
  ATerm l_3 (ATerm t)
  {
    ATerm r_11 = NULL,v_11 = NULL;
    r_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_11), r_11);
    t = k_7(not_null(q_11), r_11, t);
    v_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_11, v_11);
    return(t);
  }
  if(((q_11 != NULL) && (q_11 != t)))
    _fail(t);
  else
    q_11 = t;
  t = SSL_table_keys(q_11);
  t = map_1_0(l_3, t);
  return(t);
}
ATerm save_Binding_0_0 (ATerm t)
{
  t = term_s_13;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm prop_abstract_choice_2_0 (ATerm i_75 (ATerm), ATerm j_75 (ATerm), ATerm t)
{
  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL;
  c_12 = t;
  t = save_Binding_0_0(t);
  w_11 = t;
  t = save_CurrentTerm_0_0(t);
  x_11 = t;
  t = c_12;
  t = i_75(t);
  b_12 = t;
  t = save_Binding_0_0(t);
  y_11 = t;
  t = term_s_13;
  g_12 = t;
  t = SSL_table_destroy(g_12);
  t = term_s_13;
  f_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_13, w_11);
  t = g_6(f_12, w_11, t);
  t = w_11;
  t = save_CurrentTerm_0_0(t);
  z_11 = t;
  t = term_x_13;
  e_12 = t;
  t = SSL_table_destroy(e_12);
  t = term_x_13;
  d_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_13, x_11);
  t = g_6(d_12, x_11, t);
  t = b_12;
  t = j_75(t);
  a_12 = t;
  t = y_11;
  t = isect_Binding_0_0(t);
  t = z_11;
  t = isect_CurrentTerm_0_0(t);
  t = a_12;
  return(t);
}
ATerm prop_choice_1_0 (ATerm h_75 (ATerm), ATerm t)
{
  ATerm k_12 = NULL;
  k_12 = t;
  {
    ATerm o_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Choice_2))
          {
            ATerm r_16 = ATgetArgument(t, 0);
            ATerm s_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(p_16);
        {
          ATerm e_4 (ATerm t)
          {
            ATerm s_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,n_5 = NULL;
            z_12 = t;
            if(match_cons(t, sym_Choice_2))
              {
                w_12 = ATgetArgument(t, 0);
                x_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(z_12);
            s_12 = t;
            t = w_12;
            t = h_75(t);
            y_12 = t;
            t = (ATerm) ATmakeAppl(sym_Choice_2, y_12, x_12);
            n_5 = t;
            t = SSLsetAnnotations(n_5, s_12);
            return(t);
          }
          ATerm f_4 (ATerm t)
          {
            ATerm a_13 = NULL,e_13 = NULL,i_13 = NULL,k_13 = NULL,l_13 = NULL,u_5 = NULL;
            l_13 = t;
            if(match_cons(t, sym_Choice_2))
              {
                e_13 = ATgetArgument(t, 0);
                i_13 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(l_13);
            a_13 = t;
            t = i_13;
            t = h_75(t);
            k_13 = t;
            t = (ATerm) ATmakeAppl(sym_Choice_2, e_13, k_13);
            u_5 = t;
            t = SSLsetAnnotations(u_5, a_13);
            return(t);
          }
          t = k_12;
          t = prop_abstract_choice_2_0(e_4, f_4, t);
        }
      }
    else
      {
        t = o_16;
        {
          ATerm u_16 = t;
          int v_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_GChoice_2))
                {
                  ATerm w_16 = ATgetArgument(t, 0);
                  ATerm x_16 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(v_16);
              {
                ATerm g_4 (ATerm t)
                {
                  ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,w_13 = NULL,x_5 = NULL;
                  w_13 = t;
                  if(match_cons(t, sym_GChoice_2))
                    {
                      p_13 = ATgetArgument(t, 0);
                      q_13 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(w_13);
                  o_13 = t;
                  t = p_13;
                  t = h_75(t);
                  r_13 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, r_13, q_13);
                  x_5 = t;
                  t = SSLsetAnnotations(x_5, o_13);
                  return(t);
                }
                ATerm h_4 (ATerm t)
                {
                  ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,f_14 = NULL,z_5 = NULL;
                  f_14 = t;
                  if(match_cons(t, sym_GChoice_2))
                    {
                      b_14 = ATgetArgument(t, 0);
                      c_14 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(f_14);
                  a_14 = t;
                  t = c_14;
                  t = h_75(t);
                  d_14 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, b_14, d_14);
                  z_5 = t;
                  t = SSLsetAnnotations(z_5, a_14);
                  return(t);
                }
                t = k_12;
                t = prop_abstract_choice_2_0(g_4, h_4, t);
              }
            }
          else
            {
              t = u_16;
              {
                ATerm y_16 = t;
                int a_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_LChoice_2))
                      {
                        ATerm d_17 = ATgetArgument(t, 0);
                        ATerm e_17 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(a_17);
                    {
                      ATerm j_4 (ATerm t)
                      {
                        ATerm i_14 = NULL,m_14 = NULL,p_14 = NULL,r_14 = NULL,w_14 = NULL,a_6 = NULL;
                        w_14 = t;
                        if(match_cons(t, sym_LChoice_2))
                          {
                            m_14 = ATgetArgument(t, 0);
                            p_14 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(w_14);
                        i_14 = t;
                        t = m_14;
                        t = h_75(t);
                        r_14 = t;
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, r_14, p_14);
                        a_6 = t;
                        t = SSLsetAnnotations(a_6, i_14);
                        return(t);
                      }
                      ATerm k_4 (ATerm t)
                      {
                        ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,b_6 = NULL;
                        d_15 = t;
                        if(match_cons(t, sym_LChoice_2))
                          {
                            a_15 = ATgetArgument(t, 0);
                            b_15 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(d_15);
                        z_14 = t;
                        t = b_15;
                        t = h_75(t);
                        c_15 = t;
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, a_15, c_15);
                        b_6 = t;
                        t = SSLsetAnnotations(b_6, z_14);
                        return(t);
                      }
                      t = k_12;
                      t = prop_abstract_choice_2_0(j_4, k_4, t);
                    }
                  }
                else
                  {
                    t = y_16;
                    {
                      ATerm m_4 (ATerm t)
                      {
                        ATerm g_15 = NULL,i_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,b_16 = NULL,c_16 = NULL,l_6 = NULL,k_6 = NULL;
                        c_16 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            v_15 = ATgetArgument(t, 0);
                            w_15 = ATgetArgument(t, 1);
                            x_15 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(c_16);
                        u_15 = t;
                        t = v_15;
                        t = h_75(t);
                        y_15 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_15, w_15, x_15);
                        k_6 = t;
                        t = SSLsetAnnotations(k_6, u_15);
                        b_16 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            i_15 = ATgetArgument(t, 0);
                            r_15 = ATgetArgument(t, 1);
                            s_15 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(b_16);
                        g_15 = t;
                        t = r_15;
                        t = h_75(t);
                        t_15 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, i_15, t_15, s_15);
                        l_6 = t;
                        t = SSLsetAnnotations(l_6, g_15);
                        return(t);
                      }
                      ATerm n_4 (ATerm t)
                      {
                        ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,m_6 = NULL;
                        k_16 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            e_16 = ATgetArgument(t, 0);
                            f_16 = ATgetArgument(t, 1);
                            i_16 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(k_16);
                        d_16 = t;
                        t = i_16;
                        t = h_75(t);
                        j_16 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, e_16, f_16, j_16);
                        m_6 = t;
                        t = SSLsetAnnotations(m_6, d_16);
                        return(t);
                      }
                      if(match_cons(t, sym_GuardedLChoice_3))
                        {
                          ATerm g_17 = ATgetArgument(t, 0);
                          ATerm h_17 = ATgetArgument(t, 1);
                          ATerm i_17 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = k_12;
                      t = prop_abstract_choice_2_0(m_4, n_4, t);
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm prop_traversal_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm n_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_17 = NULL,a_1 = NULL,b_1 = NULL,e_1 = NULL,h_1 = NULL,j_1 = NULL,k_1 = NULL,y_9 = NULL;
      c_17 = t;
      if(match_cons(t, sym_Cong_2))
        {
          ATerm t_17 = ATgetArgument(t, 0);
          ATerm a_18 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      a_1 = t;
      t = term_u_13;
      b_1 = t;
      t = term_y_13;
      t = i_6(o_4, a_1, b_1, t);
      t = c_17;
      if(match_cons(t, sym_Cong_2))
        {
          h_1 = ATgetArgument(t, 0);
          j_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_17);
      e_1 = t;
      t = j_1;
      {
        ATerm p_4 (ATerm t)
        {
          t = exec_maybe_1_0(r_0, t);
          return(t);
        }
        t = map_1_0(p_4, t);
        k_1 = t;
        t = (ATerm) ATmakeAppl(sym_Cong_2, h_1, k_1);
        y_9 = t;
        t = SSLsetAnnotations(y_9, e_1);
      }
      ;
      LocalPopChoice(p_17);
    }
  else
    {
      t = n_17;
      {
        ATerm j_17 = NULL,l_17 = NULL,m_17 = NULL;
        ATerm y_4 (ATerm t)
        {
          t = exec_maybe_1_0(r_0, t);
          return(t);
        }
        ATerm b_18 = t;
        int c_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_All_1))
              {
                ATerm d_18 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            ;
            LocalPopChoice(c_18);
          }
        else
          {
            t = b_18;
            {
              ATerm s_17 = NULL;
              s_17 = t;
              {
                ATerm e_18 = t;
                int f_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_One_1))
                      {
                        ATerm g_18 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(f_18);
                    t = s_17;
                  }
                else
                  {
                    t = e_18;
                    {
                      ATerm h_18 = t;
                      int j_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Some_1))
                            {
                              ATerm m_18 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(j_18);
                          t = s_17;
                        }
                      else
                        {
                          t = h_18;
                          {
                            ATerm n_18 = t;
                            int p_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_Thread_1))
                                  {
                                    ATerm r_18 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(p_18);
                                t = s_17;
                              }
                            else
                              {
                                t = n_18;
                                if(match_cons(t, sym_Bagof_1))
                                  {
                                    ATerm w_18 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = s_17;
                              }
                          }
                        }
                    }
                  }
              }
            }
          }
        j_17 = t;
        t = (ATerm) ATempty;
        l_17 = t;
        t = term_u_13;
        m_17 = t;
        t = term_y_13;
        t = i_6(w_4, l_17, m_17, t);
        t = j_17;
        t = SRTS_one(y_4, t);
      }
    }
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL,h_3 = NULL,k_11 = NULL;
  t = Binding_0_0(t);
  h_3 = t;
  if(match_cons(t, sym_Var_1))
    {
      g_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_3);
  f_3 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, g_3);
  k_11 = t;
  t = SSLsetAnnotations(k_11, f_3);
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL,b_4 = NULL,e_15 = NULL;
  t = Binding_0_0(t);
  b_4 = t;
  if(match_cons(t, sym_Var_1))
    {
      x_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_4);
  w_3 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, x_3);
  e_15 = t;
  t = SSLsetAnnotations(e_15, w_3);
  return(t);
}
ATerm prop_call_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  ATerm s_20 = NULL;
  s_20 = t;
  {
    ATerm x_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_PrimT_3))
          {
            ATerm a_19 = ATgetArgument(t, 0);
            ATerm f_19 = ATgetArgument(t, 1);
            ATerm g_19 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(z_18);
        {
          ATerm m_2 = NULL,o_2 = NULL,q_2 = NULL,s_2 = NULL,u_2 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,y_14 = NULL;
          t = (ATerm) ATempty;
          m_2 = t;
          t = term_u_13;
          o_2 = t;
          t = term_y_13;
          t = i_6(z_4, m_2, o_2, t);
          t = s_20;
          if(match_cons(t, sym_PrimT_3))
            {
              s_2 = ATgetArgument(t, 0);
              u_2 = ATgetArgument(t, 1);
              c_3 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_20);
          q_2 = t;
          t = u_2;
          {
            ATerm a_5 (ATerm t)
            {
              t = exec_maybe_1_0(m_0, t);
              return(t);
            }
            t = map_1_0(a_5, t);
            d_3 = t;
            t = c_3;
            t = alltd_1_0(b_5, t);
            e_3 = t;
            t = (ATerm) ATmakeAppl(sym_PrimT_3, s_2, d_3, e_3);
            y_14 = t;
            t = SSLsetAnnotations(y_14, q_2);
          }
        }
      }
    else
      {
        t = x_18;
        {
          ATerm m_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,q_16 = NULL;
          if(match_cons(t, sym_CallT_3))
            {
              ATerm j_19 = ATgetArgument(t, 0);
              ATerm k_19 = ATgetArgument(t, 1);
              ATerm m_19 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATempty;
          m_3 = t;
          t = term_u_13;
          p_3 = t;
          t = term_y_13;
          t = i_6(d_5, m_3, p_3, t);
          t = s_20;
          if(match_cons(t, sym_CallT_3))
            {
              r_3 = ATgetArgument(t, 0);
              s_3 = ATgetArgument(t, 1);
              t_3 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_20);
          q_3 = t;
          t = s_3;
          {
            ATerm f_5 (ATerm t)
            {
              t = exec_maybe_1_0(m_0, t);
              return(t);
            }
            t = map_1_0(f_5, t);
            u_3 = t;
            t = t_3;
            t = alltd_1_0(g_5, t);
            v_3 = t;
            t = (ATerm) ATmakeAppl(sym_CallT_3, r_3, u_3, v_3);
            q_16 = t;
            t = SSLsetAnnotations(q_16, q_3);
          }
        }
      }
  }
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_s_13;
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm t_21 = NULL,f_22 = NULL,k_22 = NULL;
  t_21 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, t_21);
  f_22 = t;
  t = term_u_13;
  k_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, t_21), term_u_13);
  t = i_6(y_5, f_22, k_22, t);
  t = t_21;
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_s_13;
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm h_6 (ATerm c_75 (ATerm), ATerm y_18, ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm g_21 = NULL,j_21 = NULL,l_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL,z_16 = NULL;
    g_21 = t;
    t = y_18;
    t = map_1_0(t_5, t);
    t = g_21;
    if(match_cons(t, sym_Scope_2))
      {
        l_21 = ATgetArgument(t, 0);
        q_21 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(g_21);
    j_21 = t;
    t = q_21;
    t = c_75(t);
    r_21 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, l_21, r_21);
    z_16 = t;
    t = SSLsetAnnotations(z_16, j_21);
    s_21 = t;
    {
      ATerm o_19 = t;
      int q_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_22 = NULL,r_22 = NULL,u_22 = NULL;
          t = CurrentTerm_0_0(t);
          {
            ATerm e_6 (ATerm t)
            {
              ATerm w_22 = NULL;
              ATerm o_6 (ATerm t)
              {
                if(((w_22 != NULL) && (w_22 != t)))
                  _fail(t);
                else
                  w_22 = t;
                return(t);
              }
              if(match_cons(t, sym_Var_1))
                {
                  if(((w_22 != NULL) && (w_22 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    w_22 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = y_18;
              t = fetch_1_0(o_6, t);
              return(t);
            }
            t = oncetd_1_0(e_6, t);
            q_22 = t;
            t = (ATerm) ATempty;
            r_22 = t;
            t = term_u_13;
            u_22 = t;
            t = term_y_13;
            t = i_6(p_6, r_22, u_22, t);
            t = q_22;
          }
          ;
          LocalPopChoice(q_19);
        }
      else
        {
          t = o_19;
        }
      t = s_21;
    }
    return(t);
  }
  t = scope_2_0(m_5, p_5, t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm prop_build_0_0 (ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL,d_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL,b_17 = NULL;
  j_23 = t;
  if(match_cons(t, sym_Build_1))
    {
      g_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_23);
  d_23 = t;
  t = g_23;
  t = alltd_1_0(Binding_0_0, t);
  h_23 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, h_23);
  b_17 = t;
  t = SSLsetAnnotations(b_17, d_23);
  i_23 = t;
  if(match_cons(t, sym_Build_1))
    {
      z_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  a_23 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_u_19, z_22);
  b_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_u_19, z_22));
  t = i_6(q_6, a_23, b_23, t);
  t = i_23;
  return(t);
}
ATerm i_6 (ATerm z_93 (ATerm), ATerm y_38, ATerm w_38, ATerm t)
{
  ATerm k_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL;
  r_23 = t;
  t = z_93(t);
  k_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_23, y_38, w_38);
  t = l_7(k_23, y_38, w_38, t);
  {
    ATerm a_20 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_23 = NULL;
        t = term_c_20;
        u_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_23, term_c_20);
        t = k_7(k_23, u_23, t);
        ;
        LocalPopChoice(b_20);
      }
    else
      {
        t = a_20;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_23 = ATgetFirst((ATermList) t);
        q_23 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_c_20;
    s_23 = t;
    t = (ATerm) ATinsert(CheckATermList(q_23), (ATerm) ATinsert(CheckATermList(p_23), y_38));
    t_23 = t;
    t = SSL_table_put(k_23, s_23, t_23);
    t = r_23;
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm i_78 (ATerm), ATerm t)
{
  ATerm v_23 (ATerm t)
  {
    ATerm d_20 = t;
    int e_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_78(t);
        ;
        LocalPopChoice(e_20);
      }
    else
      {
        t = d_20;
        t = SRTS_one(v_23, t);
      }
    return(t);
  }
  t = v_23(t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm e_97 (ATerm), ATerm t)
{
  ATerm x_23 = NULL;
  x_23 = t;
  {
    ATerm f_20 = t;
    int g_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_23 = NULL;
        t = term_h_20;
        t = get_config_0_0(t);
        z_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_23, term_i_20);
        t = geq_0_0(t);
        t = x_23;
        t = e_97(t);
        ;
        LocalPopChoice(g_20);
      }
    else
      {
        t = f_20;
        t = x_23;
      }
  }
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm i_24 = NULL;
  i_24 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = i_24;
    }
  else
    {
      if(match_cons(t, sym_As_2))
        {
          ATerm j_20 = ATgetArgument(t, 0);
          ATerm k_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_24;
    }
  return(t);
}
ATerm s_6 (ATerm t)
{
  t = term_s_13;
  return(t);
}
ATerm j_6 (ATerm r_19, ATerm s_19, ATerm t)
{
  ATerm f_24 = NULL,g_24 = NULL,h_24 = NULL;
  f_24 = t;
  t = s_19;
  {
    ATerm l_20 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(r_6, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_20;
      }
    t = (ATerm) ATmakeAppl(sym_Var_1, r_19);
    g_24 = t;
    t = (ATerm) ATmakeAppl(sym_Defined_2, term_m_20, s_19);
    h_24 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, r_19), (ATerm) ATmakeAppl(sym_Defined_2, term_m_20, s_19));
    t = i_6(s_6, g_24, h_24, t);
    t = f_24;
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL;
  n_27 = t;
  if(match_cons(t, sym__2))
    {
      q_27 = ATgetArgument(t, 0);
      r_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_27;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_27 = ATgetFirst((ATermList) t);
      t_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_27;
  if(match_cons(t, sym__2))
    {
      l_27 = ATgetArgument(t, 0);
      m_27 = ATgetArgument(t, 1);
      {
        ATerm n_20 = t;
        int o_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_27;
            if((q_27 != t))
              {
                _fail(t);
              }
            t = m_27;
            ;
            LocalPopChoice(o_20);
          }
        else
          {
            t = n_20;
            t = (ATerm) ATmakeAppl(sym__2, q_27, t_27);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, q_27, t_27);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm t_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_20 = ATgetArgument(t, 0);
      if(((ATgetType(p_20) != AT_LIST) || !(ATisEmpty(p_20))))
        _fail(t);
      {
        ATerm q_20 = ATgetArgument(t, 1);
        if(((ATgetType(q_20) != AT_LIST) || !(ATisEmpty(q_20))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm w_30 = NULL,y_30 = NULL,b_31 = NULL,d_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_20 = ATgetArgument(t, 0);
      if(((ATgetType(r_20) == AT_LIST) && !(ATisEmpty(r_20))))
        {
          w_30 = ATgetFirst((ATermList) r_20);
          y_30 = (ATerm) ATgetNext((ATermList) r_20);
        }
      else
        _fail(t);
      {
        ATerm t_20 = ATgetArgument(t, 1);
        if(((ATgetType(t_20) == AT_LIST) && !(ATisEmpty(t_20))))
          {
            b_31 = ATgetFirst((ATermList) t_20);
            d_31 = (ATerm) ATgetNext((ATermList) t_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_30, b_31), (ATerm) ATmakeAppl(sym__2, y_30, d_31));
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm h_31 = NULL,j_31 = NULL;
  if(match_cons(t, sym__2))
    {
      h_31 = ATgetArgument(t, 0);
      j_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_31), h_31);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL,c_30 = NULL,d_30 = NULL;
  y_29 = t;
  {
    ATerm u_20 = t;
    int v_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_20 = ATgetArgument(t, 0);
            ATerm x_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(v_20);
        t = y_29;
      }
    else
      {
        t = u_20;
        {
          ATerm q_30 = NULL;
          if(match_cons(t, sym__3))
            {
              z_29 = ATgetArgument(t, 0);
              c_30 = ATgetArgument(t, 1);
              d_30 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, z_29, c_30);
          t = genzip_4_0(t_6, v_6, w_6, _id, t);
          q_30 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_30, d_30);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm z_101 (ATerm), ATerm a_102 (ATerm), ATerm t)
{
  ATerm m_31 = NULL,p_31 = NULL;
  ATerm j_7 (ATerm t)
  {
    ATerm x_4 = NULL;
    t = z_101(t);
    x_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_4, not_null(p_31));
    t = lookup_0_0(t);
    t = a_102(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((p_31 != NULL) && (p_31 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_31 = ATgetArgument(t, 0);
      m_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_31;
  t = alltd_1_0(j_7, t);
  return(t);
}
ATerm u_6 (ATerm l_105 (ATerm), ATerm o_55, ATerm p_55, ATerm r_55, ATerm q_55, ATerm t)
{
  ATerm s_31 = NULL,v_31 = NULL;
  t = o_55;
  t = l_105(t);
  t = (ATerm) ATmakeAppl(sym__2, o_55, p_55);
  {
    ATerm y_20 = t;
    if((PushChoice() == 0))
      {
        ATerm w_31 = NULL,z_31 = NULL;
        if(match_cons(t, sym__2))
          {
            w_31 = ATgetArgument(t, 0);
            z_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_31;
        {
          ATerm m_7 (ATerm t)
          {
            if((w_31 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1_0(m_7, t);
          t = (ATerm) ATmakeAppl(sym__2, w_31, z_31);
        }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_20;
      }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, o_55, p_55)), (ATerm) ATmakeAppl(sym__2, q_55, r_55));
    t = substitute_2_0(l_105, _id, t);
    if(match_cons(t, sym__2))
      {
        s_31 = ATgetArgument(t, 0);
        v_31 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, v_31, (ATerm) ATinsert(CheckATermList(s_31), (ATerm) ATmakeAppl(sym__2, o_55, p_55)));
  }
  return(t);
}
ATerm at_end_1_0 (ATerm l_83 (ATerm), ATerm t)
{
  ATerm w_25 (ATerm t)
  {
    ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL;
    u_25 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_25 = ATgetFirst((ATermList) t);
        t_25 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm i_4 = NULL,l_4 = NULL,k_17 = NULL;
          t = SSLgetAnnotations(u_25);
          i_4 = t;
          t = t_25;
          t = w_25(t);
          l_4 = t;
          t = (ATerm) ATinsert(CheckATermList(l_4), s_25);
          k_17 = t;
          t = SSLsetAnnotations(k_17, i_4);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_25;
        t = l_83(t);
      }
    return(t);
  }
  t = w_25(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_24 = NULL,v_24 = NULL,w_24 = NULL;
  q_24 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_24;
    }
  else
    {
      ATerm o_7 (ATerm t)
      {
        t = not_null(w_24);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_24 = ATgetFirst((ATermList) t);
          if(((w_24 != NULL) && (w_24 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            w_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_24;
      t = at_end_1_0(o_7, t);
    }
  return(t);
}
ATerm p_26 (ATerm b_26, ATerm t)
{
  ATerm c_26 = NULL;
  t = SSL_explode_term(b_26);
  if(match_cons(t, sym__2))
    {
      ATerm z_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      c_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_26;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL,k_26 = NULL;
  k_26 = t;
  if(match_cons(t, sym__2))
    {
      h_26 = ATgetArgument(t, 0);
      i_26 = ATgetArgument(t, 1);
      {
        ATerm a_21 = t;
        int b_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_7 (ATerm t)
            {
              t = i_26;
              return(t);
            }
            t = h_26;
            t = at_end_1_0(q_7, t);
            ;
            LocalPopChoice(b_21);
          }
        else
          {
            t = a_21;
            t = p_26(k_26, t);
          }
      }
    }
  else
    {
      t = p_26(k_26, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm y_84 (ATerm), ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm b_85 (ATerm), ATerm t)
{
  ATerm r_29 (ATerm t)
  {
    ATerm c_21 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_84(t);
        ;
        LocalPopChoice(d_21);
      }
    else
      {
        t = c_21;
        {
          ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,k_29 = NULL,q_29 = NULL,o_17 = NULL;
          t = z_84(t);
          q_29 = t;
          if(match_cons(t, sym__2))
            {
              e_29 = ATgetArgument(t, 0);
              f_29 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(q_29);
          d_29 = t;
          t = e_29;
          t = b_85(t);
          g_29 = t;
          t = f_29;
          t = r_29(t);
          k_29 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_29, k_29);
          o_17 = t;
          t = SSLsetAnnotations(o_17, d_29);
          t = a_85(t);
        }
      }
    return(t);
  }
  t = r_29(t);
  return(t);
}
ATerm r_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_21 = ATgetArgument(t, 0);
      if(((ATgetType(e_21) != AT_LIST) || !(ATisEmpty(e_21))))
        _fail(t);
      {
        ATerm f_21 = ATgetArgument(t, 1);
        if(((ATgetType(f_21) != AT_LIST) || !(ATisEmpty(f_21))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL,a_27 = NULL,b_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_21 = ATgetArgument(t, 0);
      if(((ATgetType(h_21) == AT_LIST) && !(ATisEmpty(h_21))))
        {
          x_26 = ATgetFirst((ATermList) h_21);
          y_26 = (ATerm) ATgetNext((ATermList) h_21);
        }
      else
        _fail(t);
      {
        ATerm i_21 = ATgetArgument(t, 1);
        if(((ATgetType(i_21) == AT_LIST) && !(ATisEmpty(i_21))))
          {
            a_27 = ATgetFirst((ATermList) i_21);
            b_27 = (ATerm) ATgetNext((ATermList) i_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_26, a_27), (ATerm) ATmakeAppl(sym__2, y_26, b_27));
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm c_27 = NULL,e_27 = NULL;
  if(match_cons(t, sym__2))
    {
      c_27 = ATgetArgument(t, 0);
      e_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_27), c_27);
  return(t);
}
ATerm n_6 (ATerm k_603, ATerm p_603, ATerm q_56, ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL;
  t = SSL_explode_term(p_603);
  if(match_cons(t, sym__2))
    {
      s_26 = ATgetArgument(t, 0);
      u_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(k_603);
  if(match_cons(t, sym__2))
    {
      if((s_26 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      t_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_26, u_26);
  t = genzip_4_0(r_7, s_7, t_7, _id, t);
  v_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_26, q_56);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm v_76 (ATerm), ATerm w_76 (ATerm), ATerm t)
{
  ATerm b_32 (ATerm t)
  {
    ATerm k_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_76(t);
        ;
        LocalPopChoice(m_21);
      }
    else
      {
        t = k_21;
        t = w_76(t);
        t = b_32(t);
      }
    return(t);
  }
  t = b_32(t);
  return(t);
}
ATerm for_3_0 (ATerm y_76 (ATerm), ATerm z_76 (ATerm), ATerm a_77 (ATerm), ATerm t)
{
  t = y_76(t);
  t = while_not_2_0(z_76, a_77, t);
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm v_32 = NULL;
  v_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_32, (ATerm) ATempty);
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm w_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_21 = ATgetArgument(t, 0);
      if(((ATgetType(n_21) != AT_LIST) || !(ATisEmpty(n_21))))
        _fail(t);
      w_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_32;
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm e_37 = NULL,j_37 = NULL,m_37 = NULL,q_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL;
  s_37 = t;
  if(match_cons(t, sym__2))
    {
      t_37 = ATgetArgument(t, 0);
      u_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_37;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_37 = ATgetFirst((ATermList) t);
      q_37 = (ATerm) ATgetNext((ATermList) t);
      t = e_37;
      if(match_cons(t, sym__2))
        {
          j_37 = ATgetArgument(t, 0);
          m_37 = ATgetArgument(t, 1);
          {
            ATerm o_21 = t;
            int p_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = m_38(t_37, u_37, s_37, t);
                ;
                LocalPopChoice(p_21);
              }
            else
              {
                t = o_21;
                {
                  ATerm u_21 = t;
                  int v_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = s_37;
                      t = u_6(z_7, j_37, m_37, q_37, u_37, t);
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
                            t = p_38(t_37, u_37, s_37, t);
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
                                  t = b_39(t_37, u_37, s_37, t);
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
                                        t = c_39(t_37, u_37, s_37, t);
                                        ;
                                        LocalPopChoice(b_22);
                                      }
                                    else
                                      {
                                        t = a_22;
                                        t = h_39(t_37, u_37, s_37, t);
                                      }
                                  }
                                }
                            }
                          }
                      }
                    }
                }
              }
          }
        }
      else
        {
          ATerm c_22 = t;
          int d_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_38(t_37, u_37, s_37, t);
              ;
              LocalPopChoice(d_22);
            }
          else
            {
              t = c_22;
              {
                ATerm e_22 = t;
                int g_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = p_38(t_37, u_37, s_37, t);
                    ;
                    LocalPopChoice(g_22);
                  }
                else
                  {
                    t = e_22;
                    {
                      ATerm h_22 = t;
                      int i_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = b_39(t_37, u_37, s_37, t);
                          ;
                          LocalPopChoice(i_22);
                        }
                      else
                        {
                          t = h_22;
                          {
                            ATerm j_22 = t;
                            int l_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = c_39(t_37, u_37, s_37, t);
                                ;
                                LocalPopChoice(l_22);
                              }
                            else
                              {
                                t = j_22;
                                t = h_39(t_37, u_37, s_37, t);
                              }
                          }
                        }
                    }
                  }
              }
            }
        }
    }
  else
    {
      ATerm m_22 = t;
      int n_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_38(t_37, u_37, s_37, t);
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
                t = p_38(t_37, u_37, s_37, t);
                ;
                LocalPopChoice(p_22);
              }
            else
              {
                t = o_22;
                {
                  ATerm s_22 = t;
                  int t_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = b_39(t_37, u_37, s_37, t);
                      ;
                      LocalPopChoice(t_22);
                    }
                  else
                    {
                      t = s_22;
                      {
                        ATerm v_22 = t;
                        int x_22 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = c_39(t_37, u_37, s_37, t);
                            ;
                            LocalPopChoice(x_22);
                          }
                        else
                          {
                            t = v_22;
                            t = h_39(t_37, u_37, s_37, t);
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
ATerm m_38 (ATerm x_32, ATerm a_33, ATerm b_33, ATerm t)
{
  ATerm c_33 = NULL,r_33 = NULL,s_33 = NULL,q_17 = NULL;
  t = SSLgetAnnotations(b_33);
  c_33 = t;
  t = x_32;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_22 = ATgetFirst((ATermList) t);
      if(match_cons(y_22, sym__2))
        {
          r_33 = ATgetArgument(y_22, 0);
          if((r_33 != ATgetArgument(y_22, 1)))
            {
              _fail(ATgetArgument(y_22, 1));
            }
        }
      else
        _fail(t);
      s_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_33, a_33);
  q_17 = t;
  t = SSLsetAnnotations(q_17, c_33);
  return(t);
}
ATerm p_38 (ATerm u_33, ATerm y_33, ATerm z_33, ATerm t)
{
  ATerm a_34 = NULL,e_34 = NULL,f_34 = NULL,m_34 = NULL,n_34 = NULL,r_17 = NULL;
  t = SSLgetAnnotations(z_33);
  a_34 = t;
  t = u_33;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_23 = ATgetFirst((ATermList) t);
      if(match_cons(c_23, sym__2))
        {
          f_34 = ATgetArgument(c_23, 0);
          m_34 = ATgetArgument(c_23, 1);
        }
      else
        _fail(t);
      n_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_6(f_34, m_34, n_34, t);
  e_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_34, y_33);
  r_17 = t;
  t = SSLsetAnnotations(r_17, a_34);
  return(t);
}
ATerm b_39 (ATerm p_34, ATerm r_34, ATerm t_34, ATerm t)
{
  ATerm u_34 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,h_35 = NULL,u_17 = NULL;
  t = SSLgetAnnotations(t_34);
  u_34 = t;
  t = p_34;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_23 = ATgetFirst((ATermList) t);
      if(match_cons(e_23, sym__2))
        {
          ATerm f_23 = ATgetArgument(e_23, 0);
          if(match_cons(f_23, sym_As_2))
            {
              d_35 = ATgetArgument(f_23, 0);
              e_35 = ATgetArgument(f_23, 1);
            }
          else
            _fail(t);
          f_35 = ATgetArgument(e_23, 1);
        }
      else
        _fail(t);
      h_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(CheckATermList(h_35), (ATerm) ATmakeAppl(sym__2, e_35, f_35)), (ATerm) ATmakeAppl(sym__2, d_35, f_35)), r_34);
  u_17 = t;
  t = SSLsetAnnotations(u_17, u_34);
  return(t);
}
ATerm c_39 (ATerm j_35, ATerm k_35, ATerm m_35, ATerm t)
{
  ATerm n_35 = NULL,u_35 = NULL,v_17 = NULL;
  t = SSLgetAnnotations(m_35);
  n_35 = t;
  t = j_35;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_23 = ATgetFirst((ATermList) t);
      if(match_cons(l_23, sym__2))
        {
          ATerm m_23 = ATgetArgument(l_23, 0);
          if(!(match_cons(m_23, sym_Wld_0)))
            _fail(t);
          {
            ATerm n_23 = ATgetArgument(l_23, 1);
          }
        }
      else
        _fail(t);
      u_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_35, k_35);
  v_17 = t;
  t = SSLsetAnnotations(v_17, n_35);
  return(t);
}
ATerm h_39 (ATerm w_35, ATerm z_35, ATerm c_36, ATerm t)
{
  ATerm d_36 = NULL,j_36 = NULL,m_36 = NULL,p_36 = NULL,t_36 = NULL,u_36 = NULL,y_17 = NULL,x_17 = NULL;
  t = SSLgetAnnotations(c_36);
  d_36 = t;
  t = w_35;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_23 = ATgetFirst((ATermList) t);
      if(match_cons(o_23, sym__2))
        {
          j_36 = ATgetArgument(o_23, 0);
          m_36 = ATgetArgument(o_23, 1);
        }
      else
        _fail(t);
      p_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_36;
  {
    ATerm w_23 = t;
    if((PushChoice() == 0))
      {
        ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL,w_17 = NULL;
        a_37 = t;
        if(match_cons(t, sym_Var_1))
          {
            z_36 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_37);
        y_36 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, z_36);
        w_17 = t;
        t = SSLsetAnnotations(w_17, y_36);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_23;
      }
    t = m_36;
    if(match_cons(t, sym_Var_1))
      {
        u_36 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(m_36);
    t_36 = t;
    t = (ATerm) ATmakeAppl(sym_Var_1, u_36);
    x_17 = t;
    t = SSLsetAnnotations(x_17, t_36);
    t = (ATerm) ATmakeAppl(sym__2, p_36, z_35);
    y_17 = t;
    t = SSLsetAnnotations(y_17, d_36);
  }
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm g_38 = NULL,j_38 = NULL,k_38 = NULL,z_17 = NULL;
  k_38 = t;
  if(match_cons(t, sym_Var_1))
    {
      j_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_38);
  g_38 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, j_38);
  z_17 = t;
  t = SSLsetAnnotations(z_17, g_38);
  return(t);
}
ATerm prop_pattern_match_0_0 (ATerm t)
{
  t = for_3_0(v_7, w_7, y_7, t);
  return(t);
}
ATerm CurrentTerm_0_0 (ATerm t)
{
  ATerm y_23 = t;
  int a_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_39 = NULL,h_5 = NULL,k_5 = NULL;
      t = (ATerm) ATempty;
      h_5 = t;
      t = term_x_13;
      k_5 = t;
      t = term_b_24;
      t = x_6(k_5, h_5, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm c_24 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) c_24) != ATmakeSymbol("i_0", 0, ATtrue)))
            _fail(t);
          j_39 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = j_39;
      ;
      LocalPopChoice(a_24);
    }
  else
    {
      t = y_23;
      {
        ATerm d_24 = t;
        int e_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_39 = NULL,r_5 = NULL,s_5 = NULL;
            t = (ATerm) ATempty;
            r_5 = t;
            t = term_x_13;
            s_5 = t;
            t = term_b_24;
            t = x_6(s_5, r_5, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm j_24 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) j_24) != ATmakeSymbol("g_0", 0, ATtrue)))
                  _fail(t);
                k_39 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = k_39;
            ;
            LocalPopChoice(e_24);
          }
        else
          {
            t = d_24;
            {
              ATerm v_5 = NULL,w_5 = NULL;
              t = (ATerm) ATempty;
              v_5 = t;
              t = term_x_13;
              w_5 = t;
              t = term_b_24;
              t = x_6(w_5, v_5, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
            }
          }
      }
    }
  return(t);
}
ATerm x_6 (ATerm k_50, ATerm l_50, ATerm t)
{
  ATerm m_39 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_50, l_50);
  t = k_7(k_50, l_50, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_39 = ATgetFirst((ATermList) t);
      {
        ATerm k_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = m_39;
  return(t);
}
ATerm Binding_0_0 (ATerm t)
{
  ATerm f_40 = NULL;
  f_40 = t;
  if(match_cons(t, sym_Var_1))
    {
      ATerm l_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_6 = NULL,p_7 = NULL;
        t = term_s_13;
        p_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_13, f_40);
        t = x_6(p_7, f_40, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm o_24 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) o_24) != ATmakeSymbol("k_0", 0, ATtrue)))
              _fail(t);
            z_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_6;
        ;
        LocalPopChoice(n_24);
      }
    else
      {
        t = m_24;
        {
          ATerm p_24 = t;
          int r_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_7 = NULL;
              t = term_s_13;
              x_7 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_s_13, f_40);
              t = x_6(x_7, f_40, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
              ;
              LocalPopChoice(r_24);
            }
          else
            {
              t = p_24;
              {
                ATerm d_8 = NULL;
                t = term_s_13;
                d_8 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_s_13, f_40);
                t = x_6(d_8, f_40, t);
                if(!(match_cons(t, sym_Undefined_0)))
                  _fail(t);
                _fail(t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm w_78 (ATerm), ATerm t)
{
  ATerm t_40 (ATerm t)
  {
    ATerm s_24 = t;
    int t_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_78(t);
        ;
        LocalPopChoice(t_24);
      }
    else
      {
        t = s_24;
        t = SRTS_all(t_40, t);
      }
    return(t);
  }
  t = t_40(t);
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm u_24 = t;
  int x_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_8 = NULL,j_8 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm y_24 = ATgetArgument(t, 0);
          if(match_cons(y_24, sym_Var_1))
            {
              i_8 = ATgetArgument(y_24, 0);
            }
          else
            _fail(t);
          j_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = j_6(i_8, j_8, t);
      ;
      LocalPopChoice(x_24);
    }
  else
    {
      t = u_24;
    }
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = debug_1_0(c_8, t);
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = term_z_24;
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm p_41 = NULL;
  p_41 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = p_41;
    }
  else
    {
      if(match_cons(t, sym_As_2))
        {
          ATerm a_25 = ATgetArgument(t, 0);
          ATerm b_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_41;
    }
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm prop_match_0_0 (ATerm t)
{
  ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,i_41 = NULL,k_41 = NULL,i_18 = NULL;
  k_41 = t;
  if(match_cons(t, sym_Match_1))
    {
      e_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_41);
  d_41 = t;
  t = e_41;
  t = alltd_1_0(Binding_0_0, t);
  f_41 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, f_41);
  i_18 = t;
  t = SSLsetAnnotations(i_18, d_41);
  i_41 = t;
  if(match_cons(t, sym_Match_1))
    {
      c_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_25 = t;
    int d_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = CurrentTerm_0_0(t);
        b_41 = t;
        t = i_41;
        {
          ATerm e_25 = t;
          int f_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, c_41, b_41));
              t = prop_pattern_match_0_0(t);
              t = map_1_0(a_8, t);
              t = i_41;
              ;
              LocalPopChoice(f_25);
            }
          else
            {
              t = e_25;
              t = (ATerm) ATmakeAppl(sym__4, term_g_25, i_41, term_h_25, b_41);
              t = if_verbose3_1_0(b_8, t);
              t = term_i_25;
            }
        }
        ;
        LocalPopChoice(d_25);
      }
    else
      {
        t = c_25;
        {
          ATerm j_25 = t;
          int k_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_41 = NULL,o_41 = NULL;
              t = c_41;
              {
                ATerm l_25 = t;
                if((PushChoice() == 0))
                  {
                    t = oncetd_1_0(e_8, t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = l_25;
                  }
                t = (ATerm) ATempty;
                n_41 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_m_25, c_41);
                o_41 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_m_25, c_41));
                t = i_6(f_8, n_41, o_41, t);
                t = i_41;
              }
              ;
              LocalPopChoice(k_25);
            }
          else
            {
              t = j_25;
            }
        }
      }
  }
  return(t);
}
ATerm cp_0_0 (ATerm t)
{
  ATerm n_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = prop_match_0_0(t);
      ;
      LocalPopChoice(o_25);
    }
  else
    {
      t = n_25;
      {
        ATerm p_25 = t;
        int q_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = prop_build_0_0(t);
            ;
            LocalPopChoice(q_25);
          }
        else
          {
            t = p_25;
            {
              ATerm r_25 = t;
              int v_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_42 = NULL,t_42 = NULL;
                  s_42 = t;
                  if(match_cons(t, sym_Scope_2))
                    {
                      t_42 = ATgetArgument(t, 0);
                      {
                        ATerm x_25 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  t = s_42;
                  t = h_6(cp_0_0, t_42, t);
                  ;
                  LocalPopChoice(v_25);
                }
              else
                {
                  t = r_25;
                  {
                    ATerm y_25 = t;
                    int z_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = prop_call_1_0(cp_0_0, t);
                        ;
                        LocalPopChoice(z_25);
                      }
                    else
                      {
                        t = y_25;
                        {
                          ATerm a_26 = t;
                          int d_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = prop_traversal_1_0(cp_0_0, t);
                              ;
                              LocalPopChoice(d_26);
                            }
                          else
                            {
                              t = a_26;
                              {
                                ATerm e_26 = t;
                                int f_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL,n_8 = NULL,q_8 = NULL,r_8 = NULL,k_18 = NULL;
                                    f_43 = t;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        g_43 = ATgetArgument(t, 0);
                                        h_43 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(f_43);
                                    n_8 = t;
                                    t = g_43;
                                    t = cp_0_0(t);
                                    q_8 = t;
                                    t = h_43;
                                    t = cp_0_0(t);
                                    r_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, q_8, r_8);
                                    k_18 = t;
                                    t = SSLsetAnnotations(k_18, n_8);
                                    ;
                                    LocalPopChoice(f_26);
                                  }
                                else
                                  {
                                    t = e_26;
                                    {
                                      ATerm g_26 = t;
                                      int j_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = prop_choice_1_0(cp_0_0, t);
                                          ;
                                          LocalPopChoice(j_26);
                                        }
                                      else
                                        {
                                          t = g_26;
                                          {
                                            ATerm l_26 = t;
                                            int m_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm o_43 = NULL,p_43 = NULL,r_43 = NULL;
                                                o_43 = t;
                                                {
                                                  ATerm n_26 = t;
                                                  int o_26 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_Let_2))
                                                        {
                                                          ATerm q_26 = ATgetArgument(t, 0);
                                                          ATerm r_26 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(o_26);
                                                      t = o_43;
                                                      t = f_6(cp_0_0, t);
                                                    }
                                                  else
                                                    {
                                                      t = n_26;
                                                      {
                                                        ATerm w_26 = t;
                                                        int z_26 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm d_27 = ATgetArgument(t, 0);
                                                                ATerm f_27 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(z_26);
                                                            {
                                                              ATerm y_8 = NULL,z_8 = NULL,d_9 = NULL,e_9 = NULL,l_18 = NULL;
                                                              t = o_43;
                                                              if(match_cons(t, sym_Rec_2))
                                                                {
                                                                  z_8 = ATgetArgument(t, 0);
                                                                  d_9 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSLgetAnnotations(o_43);
                                                              y_8 = t;
                                                              t = d_9;
                                                              t = exec_maybe_1_0(cp_0_0, t);
                                                              e_9 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Rec_2, z_8, e_9);
                                                              l_18 = t;
                                                              t = SSLsetAnnotations(l_18, y_8);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = w_26;
                                                            {
                                                              ATerm g_27 = t;
                                                              int h_27 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_Not_1))
                                                                    {
                                                                      ATerm i_27 = ATgetArgument(t, 0);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(h_27);
                                                                  t = o_43;
                                                                  t = d_6(cp_0_0, t);
                                                                }
                                                              else
                                                                {
                                                                  t = g_27;
                                                                  if(match_cons(t, sym_SDefT_4))
                                                                    {
                                                                      p_43 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm j_27 = ATgetArgument(t, 1);
                                                                      }
                                                                      r_43 = ATgetArgument(t, 2);
                                                                      {
                                                                        ATerm k_27 = ATgetArgument(t, 3);
                                                                      }
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  t = o_43;
                                                                  t = c_6(cp_0_0, p_43, r_43, t);
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                                ;
                                                LocalPopChoice(m_26);
                                              }
                                            else
                                              {
                                                t = l_26;
                                                t = SRTS_all(cp_0_0, t);
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm y_6 (ATerm e_50, ATerm f_50, ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL;
  f_44 = t;
  {
    ATerm o_27 = t;
    int p_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, e_50, f_50);
        t = k_7(e_50, f_50, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm u_27 = ATgetFirst((ATermList) t);
            e_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(p_27);
        t = SSL_table_put(e_50, f_50, e_44);
        t = (ATerm) ATmakeAppl(sym__3, e_50, f_50, e_44);
      }
    else
      {
        t = o_27;
        t = SSL_table_remove(e_50, f_50);
        t = (ATerm) ATmakeAppl(sym__2, e_50, f_50);
      }
    t = f_44;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm w_93 (ATerm), ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL;
  j_44 = t;
  t = w_93(t);
  i_44 = t;
  {
    ATerm v_27 = t;
    int w_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_44 = NULL;
        t = term_c_20;
        l_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_44, term_c_20);
        t = k_7(i_44, l_44, t);
        ;
        LocalPopChoice(w_27);
      }
    else
      {
        t = v_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_44 = ATgetFirst((ATermList) t);
        g_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_c_20;
    k_44 = t;
    t = SSL_table_put(i_44, k_44, g_44);
    t = h_44;
    {
      ATerm g_8 (ATerm t)
      {
        ATerm m_44 = NULL;
        m_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_44, m_44);
        t = y_6(i_44, m_44, t);
        return(t);
      }
      t = map_1_0(g_8, t);
      t = j_44;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm z_75 (ATerm), ATerm a_76 (ATerm), ATerm t)
{
  ATerm x_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_75(t);
      t = a_76(t);
      ;
      LocalPopChoice(y_27);
    }
  else
    {
      t = x_27;
      t = a_76(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm v_93 (ATerm), ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL;
  p_44 = t;
  t = v_93(t);
  o_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_44, term_c_20);
  {
    ATerm z_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_44 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm b_28 = ATgetArgument(t, 0);
            ATerm c_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_c_20;
        w_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_44, term_c_20);
        t = k_7(o_44, w_44, t);
        ;
        LocalPopChoice(a_28);
      }
    else
      {
        t = z_27;
        t = (ATerm) ATempty;
      }
    q_44 = t;
    t = term_c_20;
    r_44 = t;
    t = (ATerm) ATinsert(CheckATermList(q_44), (ATerm) ATempty);
    s_44 = t;
    t = SSL_table_put(o_44, r_44, s_44);
    t = p_44;
  }
  return(t);
}
ATerm scope_2_0 (ATerm x_93 (ATerm), ATerm y_93 (ATerm), ATerm t)
{
  ATerm h_8 (ATerm t)
  {
    t = end_scope_1_0(x_93, t);
    return(t);
  }
  t = begin_scope_1_0(x_93, t);
  t = restore_always_2_0(y_93, h_8, t);
  return(t);
}
ATerm map_1_0 (ATerm v_82 (ATerm), ATerm t)
{
  ATerm s_45 (ATerm t)
  {
    ATerm p_45 = NULL,q_45 = NULL,r_45 = NULL;
    p_45 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_45;
      }
    else
      {
        ATerm m_9 = NULL,r_9 = NULL,s_9 = NULL,o_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_45 = ATgetFirst((ATermList) t);
            r_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_45);
        m_9 = t;
        t = q_45;
        t = v_82(t);
        r_9 = t;
        t = r_45;
        t = s_45(t);
        s_9 = t;
        t = (ATerm) ATinsert(CheckATermList(s_9), r_9);
        o_18 = t;
        t = SSLsetAnnotations(o_18, m_9);
      }
    return(t);
  }
  t = s_45(t);
  return(t);
}
ATerm Cons_2_0 (ATerm h_61 (ATerm), ATerm i_61 (ATerm), ATerm t)
{
  ATerm u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,q_18 = NULL;
  z_45 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_45 = ATgetFirst((ATermList) t);
      w_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_45);
  u_45 = t;
  t = v_45;
  t = h_61(t);
  x_45 = t;
  t = w_45;
  t = i_61(t);
  y_45 = t;
  t = (ATerm) ATinsert(CheckATermList(y_45), x_45);
  q_18 = t;
  t = SSLsetAnnotations(q_18, u_45);
  return(t);
}
ATerm b_7 (ATerm k_40, ATerm l_40, ATerm t)
{
  ATerm a_46 = NULL;
  t = SSL_fputc(k_40, l_40);
  a_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_46);
  return(t);
}
ATerm c_7 (ATerm y_43, ATerm z_43, ATerm t)
{
  ATerm b_46 = NULL;
  t = SSL_write_term_to_stream_text(y_43, z_43);
  b_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_46);
  return(t);
}
ATerm e_7 (ATerm s_95 (ATerm), ATerm a_429, ATerm c_44, ATerm t)
{
  ATerm c_46 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_429, term_d_28);
  t = h_7(t);
  c_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_46, c_44);
  t = s_95(t);
  t = fclose_0_0(t);
  t = c_44;
  return(t);
}
ATerm d_7 (ATerm u_43, ATerm v_43, ATerm t)
{
  ATerm d_46 = NULL;
  t = SSL_write_term_to_stream_baf(u_43, v_43);
  d_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_46);
  return(t);
}
ATerm l_8 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_28 = ATgetArgument(t, 0);
      if(match_cons(e_28, sym_Stream_1))
        {
          r_10 = ATgetArgument(e_28, 0);
        }
      else
        _fail(t);
      s_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_7(r_10, s_10, t);
  return(t);
}
ATerm o_8 (ATerm t)
{
  ATerm n_11 = NULL,o_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_28 = ATgetArgument(t, 0);
      if(match_cons(f_28, sym_Stream_1))
        {
          t_11 = ATgetArgument(f_28, 0);
        }
      else
        _fail(t);
      u_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(t_11, u_11, t);
  n_11 = t;
  t = term_g_28;
  o_11 = t;
  t = n_11;
  if(match_cons(t, sym_Stream_1))
    {
      s_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_g_28, n_11);
  t = b_7(o_11, s_11, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL,v_47 = NULL,w_47 = NULL,t_18 = NULL,s_18 = NULL;
  i_46 = t;
  if(match_cons(t, sym__2))
    {
      p_46 = ATgetArgument(t, 0);
      q_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_46);
  o_46 = t;
  t = p_46;
  {
    ATerm h_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_8 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((h_46 != NULL) && (h_46 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                h_46 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(k_8, t);
        ;
        LocalPopChoice(i_28);
      }
    else
      {
        t = h_28;
        t = term_j_28;
        h_46 = t;
      }
    r_46 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_46, q_46);
    s_18 = t;
    t = SSLsetAnnotations(s_18, o_46);
    t = i_46;
    if(match_cons(t, sym__2))
      {
        k_46 = ATgetArgument(t, 0);
        l_46 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(i_46);
    j_46 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_46, (ATerm) ATmakeAppl(sym__2, not_null(h_46), l_46));
    t_18 = t;
    t = SSLsetAnnotations(t_18, j_46);
    n_46 = t;
    if(match_cons(t, sym__2))
      {
        v_47 = ATgetArgument(t, 0);
        w_47 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm k_28 = t;
      int l_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_10 = NULL,m_10 = NULL,n_10 = NULL,p_10 = NULL,q_10 = NULL,u_18 = NULL;
          t = SSLgetAnnotations(n_46);
          c_10 = t;
          t = v_47;
          t = fetch_1_0(l_8, t);
          m_10 = t;
          t = w_47;
          if(match_cons(t, sym__2))
            {
              p_10 = ATgetArgument(t, 0);
              q_10 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_7(m_8, p_10, q_10, t);
          n_10 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_10, n_10);
          u_18 = t;
          t = SSLsetAnnotations(u_18, c_10);
          ;
          LocalPopChoice(l_28);
        }
      else
        {
          t = k_28;
          {
            ATerm b_11 = NULL,g_11 = NULL,h_11 = NULL,m_11 = NULL,v_18 = NULL;
            t = SSLgetAnnotations(n_46);
            b_11 = t;
            t = w_47;
            if(match_cons(t, sym__2))
              {
                h_11 = ATgetArgument(t, 0);
                m_11 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = e_7(o_8, h_11, m_11, t);
            g_11 = t;
            t = (ATerm) ATmakeAppl(sym__2, v_47, g_11);
            v_18 = t;
            t = SSLsetAnnotations(v_18, b_11);
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
ATerm apply_strategy_1_0 (ATerm u_98 (ATerm), ATerm t)
{
  ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL;
  d_48 = t;
  t = dtime_0_0(t);
  t = d_48;
  t = u_98(t);
  c_48 = t;
  t = dtime_0_0(t);
  z_47 = t;
  t = c_48;
  if(match_cons(t, sym__2))
    {
      a_48 = ATgetArgument(t, 0);
      b_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_48), (ATerm) ATmakeAppl(sym_Runtime_1, z_47)), b_48);
  return(t);
}
ATerm r_48 (ATerm l_48, ATerm t)
{
  t = SSL_fclose(l_48);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_48 = NULL,p_48 = NULL;
  p_48 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_48 = ATgetArgument(t, 0);
      {
        ATerm m_28 = t;
        int n_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_48);
            ;
            LocalPopChoice(n_28);
          }
        else
          {
            t = m_28;
            t = r_48(p_48, t);
          }
      }
    }
  else
    {
      t = r_48(p_48, t);
    }
  return(t);
}
ATerm f_7 (ATerm a_44, ATerm t)
{
  t = SSL_read_term_from_stream(a_44);
  return(t);
}
ATerm g_7 (ATerm m_40, ATerm n_40, ATerm t)
{
  ATerm s_48 = NULL;
  t = SSL_fopen(m_40, n_40);
  s_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_48);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_48 = NULL;
  t = SSL_stdin_stream();
  t_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_48);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_48 = NULL;
  t = SSL_stdout_stream();
  u_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_48);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_48 = NULL;
  t = SSL_stderr_stream();
  v_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_48);
  return(t);
}
ATerm q_50 (ATerm b_49, ATerm t)
{
  ATerm c_49 = NULL;
  t = SSL_explode_term(b_49);
  if(match_cons(t, sym__2))
    {
      ATerm o_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_28 = ATgetArgument(t, 1);
        if(((ATgetType(p_28) == AT_LIST) && !(ATisEmpty(p_28))))
          {
            c_49 = ATgetFirst((ATermList) p_28);
            {
              ATerm q_28 = (ATerm) ATgetNext((ATermList) p_28);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_49;
  if(match_cons(t, sym_stderr_0))
    {
      t = c_49;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = c_49;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = c_49;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm r_50 (ATerm f_49, ATerm g_49, ATerm m_49, ATerm t)
{
  ATerm n_49 = NULL,o_49 = NULL,p_49 = NULL,s_49 = NULL,b_19 = NULL;
  t = SSLgetAnnotations(m_49);
  p_49 = t;
  t = f_49;
  if(match_cons(t, sym_Path_1))
    {
      s_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_49, g_49);
  b_19 = t;
  t = SSLsetAnnotations(b_19, p_49);
  if(match_cons(t, sym__2))
    {
      n_49 = ATgetArgument(t, 0);
      o_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7(n_49, o_49, t);
  return(t);
}
ATerm s_50 (ATerm u_49, ATerm v_49, ATerm x_49, ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL,g_50 = NULL,j_50 = NULL,c_19 = NULL;
  t = SSLgetAnnotations(x_49);
  g_50 = t;
  t = SSL_is_string(u_49);
  j_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_50, v_49);
  c_19 = t;
  t = SSLsetAnnotations(c_19, g_50);
  if(match_cons(t, sym__2))
    {
      b_50 = ATgetArgument(t, 0);
      c_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7(b_50, c_50, t);
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL;
  n_50 = t;
  if(match_cons(t, sym__2))
    {
      o_50 = ATgetArgument(t, 0);
      p_50 = ATgetArgument(t, 1);
      {
        ATerm r_28 = t;
        int s_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_50(n_50, t);
            ;
            LocalPopChoice(s_28);
          }
        else
          {
            t = r_28;
            {
              ATerm t_28 = t;
              int u_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_50(o_50, p_50, n_50, t);
                  ;
                  LocalPopChoice(u_28);
                }
              else
                {
                  t = t_28;
                  t = s_50(o_50, p_50, n_50, t);
                }
            }
          }
      }
    }
  else
    {
      t = q_50(n_50, t);
    }
  return(t);
}
ATerm p_8 (ATerm t)
{
  t = term_v_28;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_50 = NULL,u_50 = NULL,v_50 = NULL;
  ATerm w_28 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_50 = NULL;
      w_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_50, term_y_28);
      t = h_7(t);
      ;
      LocalPopChoice(x_28);
    }
  else
    {
      t = w_28;
      t = debug_1_0(p_8, t);
      _fail(t);
    }
  u_50 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_7(v_50, t);
  t_50 = t;
  t = u_50;
  t = fclose_0_0(t);
  t = t_50;
  return(t);
}
ATerm fetch_1_0 (ATerm f_83 (ATerm), ATerm t)
{
  ATerm k_52 (ATerm t)
  {
    ATerm e_52 = NULL,f_52 = NULL,j_52 = NULL;
    e_52 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_52 = ATgetFirst((ATermList) t);
        j_52 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm z_28 = t;
      int a_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_13 = NULL,g_13 = NULL,h_19 = NULL;
          t = SSLgetAnnotations(e_52);
          c_13 = t;
          t = f_52;
          t = f_83(t);
          g_13 = t;
          t = (ATerm) ATinsert(CheckATermList(j_52), g_13);
          h_19 = t;
          t = SSLsetAnnotations(h_19, c_13);
          ;
          LocalPopChoice(a_29);
        }
      else
        {
          t = z_28;
          {
            ATerm v_13 = NULL,z_13 = NULL,i_19 = NULL;
            t = SSLgetAnnotations(e_52);
            v_13 = t;
            t = j_52;
            t = k_52(t);
            z_13 = t;
            t = (ATerm) ATinsert(CheckATermList(z_13), f_52);
            i_19 = t;
            t = SSLsetAnnotations(i_19, v_13);
          }
        }
    }
    return(t);
  }
  t = k_52(t);
  return(t);
}
ATerm a_7 (ATerm z_34, ATerm a_35, ATerm t)
{
  t = SSL_strcat(z_34, a_35);
  return(t);
}
ATerm debug_1_0 (ATerm q_95 (ATerm), ATerm t)
{
  ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL;
  n_52 = t;
  t = q_95(t);
  o_52 = t;
  t = term_h_13;
  p_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_52), o_52);
  q_52 = t;
  t = SSL_printnl(p_52, q_52);
  t = n_52;
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm b_29 = t;
  int c_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(c_29);
    }
  else
    {
      t = b_29;
    }
  return(t);
}
ATerm t_8 (ATerm t)
{
  t = term_h_29;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm i_29 = t;
  int j_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_52 = NULL;
      x_52 = t;
      t = SSL_is_string(x_52);
      ;
      LocalPopChoice(j_29);
    }
  else
    {
      t = i_29;
      {
        ATerm l_29 = t;
        int m_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(s_8, t);
            ;
            LocalPopChoice(m_29);
          }
        else
          {
            t = l_29;
            {
              ATerm d_53 = NULL,e_53 = NULL,f_53 = NULL;
              d_53 = t;
              if(match_cons(t, sym_Path_1))
                {
                  e_53 = ATgetArgument(t, 0);
                  t = e_53;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      e_53 = ATgetArgument(t, 0);
                      t = e_53;
                      {
                        ATerm n_29 = t;
                        int o_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(o_29);
                          }
                        else
                          {
                            t = n_29;
                            t = debug_1_0(t_8, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm j_53 = NULL,k_53 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          e_53 = ATgetArgument(t, 0);
                          f_53 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = e_53;
                      t = eval_config_0_0(t);
                      j_53 = t;
                      t = f_53;
                      t = eval_config_0_0(t);
                      k_53 = t;
                      t = (ATerm) ATmakeAppl(sym__2, j_53, k_53);
                      t = a_7(j_53, k_53, t);
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
  ATerm o_53 = NULL,p_53 = NULL;
  o_53 = t;
  t = term_p_29;
  p_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_29, o_53);
  t = k_7(p_53, o_53, t);
  {
    ATerm s_29 = t;
    int t_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_53 = NULL,r_53 = NULL;
        t = eval_config_0_0(t);
        q_53 = t;
        t = term_p_29;
        r_53 = t;
        t = SSL_table_put(r_53, o_53, q_53);
        t = q_53;
        ;
        LocalPopChoice(t_29);
      }
    else
      {
        t = s_29;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm d_97 (ATerm), ATerm t)
{
  ATerm v_53 = NULL;
  v_53 = t;
  {
    ATerm u_29 = t;
    int v_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_53 = NULL;
        t = term_h_20;
        t = get_config_0_0(t);
        x_53 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_53, term_w_29);
        t = geq_0_0(t);
        t = v_53;
        t = d_97(t);
        ;
        LocalPopChoice(v_29);
      }
    else
      {
        t = u_29;
        t = v_53;
      }
  }
  return(t);
}
ATerm u_8 (ATerm t)
{
  ATerm a_54 = NULL;
  a_54 = t;
  if(match_string(t, "-k"))
    {
      t = a_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = a_54;
    }
  return(t);
}
ATerm v_8 (ATerm t)
{
  ATerm b_54 = NULL,c_54 = NULL,d_54 = NULL;
  b_54 = t;
  t = SSL_string_to_int(b_54);
  c_54 = t;
  t = term_x_29;
  d_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_29, c_54);
  t = n_7(d_54, c_54, t);
  t = b_54;
  return(t);
}
ATerm w_8 (ATerm t)
{
  t = term_a_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_8, v_8, w_8, t);
  return(t);
}
ATerm g_9 (ATerm t)
{
  ATerm f_54 = NULL;
  f_54 = t;
  if(match_string(t, "-S"))
    {
      t = f_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = f_54;
    }
  return(t);
}
ATerm h_9 (ATerm t)
{
  ATerm g_54 = NULL,h_54 = NULL;
  t = term_h_20;
  g_54 = t;
  t = term_b_30;
  h_54 = t;
  t = term_e_30;
  t = n_7(g_54, h_54, t);
  t = term_f_30;
  return(t);
}
ATerm i_9 (ATerm t)
{
  t = term_g_30;
  return(t);
}
ATerm j_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_9 (ATerm t)
{
  ATerm i_54 = NULL,j_54 = NULL,k_54 = NULL;
  i_54 = t;
  t = SSL_string_to_int(i_54);
  j_54 = t;
  t = term_h_20;
  k_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_20, j_54);
  t = n_7(k_54, j_54, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, i_54);
  return(t);
}
ATerm n_9 (ATerm t)
{
  t = term_h_30;
  return(t);
}
ATerm o_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_9 (ATerm t)
{
  ATerm l_54 = NULL,m_54 = NULL;
  t = term_i_30;
  l_54 = t;
  t = term_f_13;
  m_54 = t;
  t = term_j_30;
  t = n_7(l_54, m_54, t);
  t = term_k_30;
  return(t);
}
ATerm q_9 (ATerm t)
{
  t = term_l_30;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_30 = t;
  int n_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_9, h_9, i_9, t);
      ;
      LocalPopChoice(n_30);
    }
  else
    {
      t = m_30;
      {
        ATerm o_30 = t;
        int p_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(j_9, k_9, n_9, t);
            ;
            LocalPopChoice(p_30);
          }
        else
          {
            t = o_30;
            t = Option_3_0(o_9, p_9, q_9, t);
          }
      }
    }
  return(t);
}
ATerm n_7 (ATerm b_45, ATerm c_45, ATerm t)
{
  ATerm n_54 = NULL;
  t = term_p_29;
  n_54 = t;
  t = SSL_table_put(n_54, b_45, c_45);
  t = (ATerm) ATmakeAppl(sym__3, term_p_29, b_45, c_45);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm q_54 = NULL,r_54 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_54 = NULL,t_54 = NULL,u_54 = NULL;
      t = term_f_13;
      t = d_0(t);
      s_54 = t;
      t = term_r_30;
      t_54 = t;
      t = term_s_30;
      u_54 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_30, term_s_30, s_54);
      t = l_7(t_54, u_54, s_54, t);
      _fail(t);
    }
  else
    {
      ATerm x_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_54 = ATgetFirst((ATermList) t);
          r_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_54;
      t = b_0(t);
      t = term_f_13;
      t = c_0(t);
      x_54 = t;
      t = (ATerm) ATinsert(CheckATermList(r_54), x_54);
    }
  return(t);
}
ATerm t_9 (ATerm t)
{
  ATerm z_54 = NULL;
  z_54 = t;
  if(match_string(t, "-o"))
    {
      t = z_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = z_54;
    }
  return(t);
}
ATerm u_9 (ATerm t)
{
  ATerm a_55 = NULL,b_55 = NULL;
  a_55 = t;
  t = term_t_30;
  b_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_30, a_55);
  t = n_7(b_55, a_55, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_55);
  return(t);
}
ATerm v_9 (ATerm t)
{
  t = term_u_30;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_9, u_9, v_9, t);
  return(t);
}
ATerm l_7 (ATerm z_49, ATerm a_50, ATerm y_49, ATerm t)
{
  ATerm d_55 = NULL,e_55 = NULL,f_55 = NULL;
  d_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_49, a_50);
  {
    ATerm v_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_30 = ATgetArgument(t, 0);
            ATerm a_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_49, a_50);
        t = k_7(z_49, a_50, t);
        ;
        LocalPopChoice(x_30);
      }
    else
      {
        t = v_30;
        t = (ATerm) ATempty;
      }
    e_55 = t;
    t = (ATerm) ATinsert(CheckATermList(e_55), y_49);
    f_55 = t;
    t = SSL_table_put(z_49, a_50, f_55);
    t = d_55;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm m_55 = NULL,n_55 = NULL,u_55 = NULL,v_55 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_55 = NULL,x_55 = NULL,y_55 = NULL;
      t = term_f_13;
      t = l_0(t);
      w_55 = t;
      t = term_r_30;
      x_55 = t;
      t = term_s_30;
      y_55 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_30, term_s_30, w_55);
      t = l_7(x_55, y_55, w_55, t);
      _fail(t);
    }
  else
    {
      ATerm c_56 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_55 = ATgetFirst((ATermList) t);
          n_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_55;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_55 = ATgetFirst((ATermList) t);
          v_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_55;
      t = h_0(t);
      t = u_55;
      t = j_0(t);
      c_56 = t;
      t = (ATerm) ATinsert(CheckATermList(v_55), c_56);
    }
  return(t);
}
ATerm w_9 (ATerm t)
{
  ATerm e_56 = NULL;
  e_56 = t;
  if(match_string(t, "-i"))
    {
      t = e_56;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_56;
    }
  return(t);
}
ATerm x_9 (ATerm t)
{
  ATerm f_56 = NULL,g_56 = NULL;
  f_56 = t;
  t = term_c_31;
  g_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_31, f_56);
  t = n_7(g_56, f_56, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_56);
  return(t);
}
ATerm z_9 (ATerm t)
{
  t = term_e_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_9, x_9, z_9, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_56 = NULL,i_56 = NULL,j_56 = NULL,k_56 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_13;
  t = whoami_0_0(t);
  h_56 = t;
  t = term_h_13;
  j_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_f_31), h_56);
  k_56 = t;
  t = SSL_printnl(j_56, k_56);
  t = term_n_13;
  i_56 = t;
  t = SSL_exit(i_56);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_g_31;
  t = get_config_0_0(t);
  return(t);
}
ATerm i_7 (ATerm k_37, ATerm l_37, ATerm t)
{
  ATerm i_31 = t;
  int k_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(k_37, l_37);
      ;
      LocalPopChoice(k_31);
    }
  else
    {
      t = i_31;
      t = SSL_addr(k_37, l_37);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm y_88 (ATerm), ATerm z_88 (ATerm), ATerm t)
{
  ATerm m_56 = NULL,r_56 = NULL,s_56 = NULL;
  m_56 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_56;
      t = y_88(t);
    }
  else
    {
      ATerm v_56 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_56 = ATgetFirst((ATermList) t);
          s_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_56;
      t = foldr_2_0(y_88, z_88, t);
      v_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_56, v_56);
      t = z_88(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm a_10 (ATerm t)
{
  t = term_b_30;
  return(t);
}
ATerm b_10 (ATerm t)
{
  ATerm f_15 = NULL,h_15 = NULL;
  if(match_cons(t, sym__2))
    {
      f_15 = ATgetArgument(t, 0);
      h_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7(f_15, h_15, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_56 = NULL,v_14 = NULL,x_14 = NULL;
  t = times_0_0(t);
  x_14 = t;
  t = SSL_explode_term(x_14);
  if(match_cons(t, sym__2))
    {
      ATerm l_31 = ATgetArgument(t, 0);
      v_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_14;
  t = foldr_2_0(a_10, b_10, t);
  y_56 = t;
  t = SSL_TicksToSeconds(y_56);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_57 = NULL,k_57 = NULL,l_57 = NULL;
  j_57 = t;
  if(match_cons(t, sym__2))
    {
      k_57 = ATgetArgument(t, 0);
      l_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_31 = t;
    int o_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_57;
        if((k_57 != t))
          {
            _fail(t);
          }
        t = j_57;
        ;
        LocalPopChoice(o_31);
      }
    else
      {
        t = n_31;
        t = (ATerm) ATmakeAppl(sym__2, k_57, l_57);
        {
          ATerm q_31 = t;
          int r_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_57, l_57);
              ;
              LocalPopChoice(r_31);
            }
          else
            {
              t = q_31;
              t = SSL_gtr(k_57, l_57);
            }
          t = (ATerm) ATmakeAppl(sym__2, k_57, l_57);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_97 (ATerm), ATerm t)
{
  ATerm p_57 = NULL;
  p_57 = t;
  {
    ATerm t_31 = t;
    int u_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_57 = NULL;
        t = term_h_20;
        t = get_config_0_0(t);
        r_57 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_57, term_n_13);
        t = geq_0_0(t);
        t = p_57;
        t = c_97(t);
        ;
        LocalPopChoice(u_31);
      }
    else
      {
        t = t_31;
        t = p_57;
      }
  }
  return(t);
}
ATerm d_10 (ATerm t)
{
  ATerm t_57 = NULL,u_57 = NULL,w_57 = NULL,x_57 = NULL;
  t = run_time_0_0(t);
  t_57 = t;
  t = term_f_13;
  t = whoami_0_0(t);
  u_57 = t;
  t = term_h_13;
  w_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_31), t_57), term_x_31), u_57);
  x_57 = t;
  t = SSL_printnl(w_57, x_57);
  t = (ATerm) ATmakeAppl(sym__2, term_h_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_31), t_57), term_x_31), u_57));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(d_10, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm y_57 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_30;
  y_57 = t;
  t = SSL_exit(y_57);
  return(t);
}
ATerm h_10 (ATerm t)
{
  ATerm g_58 = NULL,h_58 = NULL;
  h_58 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = h_58;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          g_58 = ATgetArgument(t, 0);
          {
            ATerm h_16 = NULL,l_19 = NULL;
            t = SSLgetAnnotations(h_58);
            h_16 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, g_58);
            l_19 = t;
            t = SSLsetAnnotations(l_19, h_16);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = h_58;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_99 (ATerm), ATerm t)
{
  ATerm a_32 = t;
  int c_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_32;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_32);
    }
  else
    {
      t = a_32;
      t = fetch_1_0(h_10, t);
    }
  t = s_99(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm k_58 = NULL,l_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_58 = ATgetFirst((ATermList) t);
      l_58 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_58 = NULL,q_58 = NULL;
        ATerm i_10 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(p_58)), not_null(q_58));
          return(t);
        }
        t = l_58;
        t = f_0(t);
        if(((p_58 != NULL) && (p_58 != t)))
          _fail(t);
        else
          p_58 = t;
        t = k_58;
        t = e_0(t);
        if(((q_58 != NULL) && (q_58 != t)))
          _fail(t);
        else
          q_58 = t;
        t = l_58;
        t = reverse_acc_2_0(e_0, i_10, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_13;
      t = f_0(t);
    }
  return(t);
}
ATerm k_7 (ATerm q_51, ATerm r_51, ATerm t)
{
  t = SSL_table_get(q_51, r_51);
  return(t);
}
ATerm j_10 (ATerm t)
{
  ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL,n_19 = NULL;
  w_58 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_58);
  u_58 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, v_58);
  n_19 = t;
  t = SSLsetAnnotations(n_19, u_58);
  return(t);
}
ATerm l_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_10 (ATerm t)
{
  ATerm y_58 = NULL;
  y_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_58), term_e_32);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_58 = NULL,t_58 = NULL;
  ATerm f_32 = t;
  int g_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_31;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_32);
    }
  else
    {
      t = f_32;
      t = fetch_1_0(j_10, t);
    }
  t = term_h_32;
  t = echo_0_0(t);
  t = term_r_30;
  s_58 = t;
  t = term_s_30;
  t_58 = t;
  t = term_i_32;
  t = k_7(s_58, t_58, t);
  t = reverse_acc_2_0(_id, l_10, t);
  t = map_1_0(t_10, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_59 = NULL,b_59 = NULL,c_59 = NULL;
  a_59 = t;
  {
    ATerm j_32 = t;
    int k_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_59;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm l_32 = ATgetFirst((ATermList) t);
                ATerm m_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_59;
          }
        ;
        LocalPopChoice(k_32);
      }
    else
      {
        t = j_32;
        t = (ATerm) ATinsert(ATempty, a_59);
      }
    b_59 = t;
    t = term_j_28;
    c_59 = t;
    t = SSL_printnl(c_59, b_59);
    t = a_59;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_g_31;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm u_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_10 (ATerm t)
{
  ATerm g_59 = NULL,h_59 = NULL;
  t = term_n_32;
  g_59 = t;
  t = term_f_13;
  h_59 = t;
  t = term_o_32;
  t = n_7(g_59, h_59, t);
  return(t);
}
ATerm w_10 (ATerm t)
{
  t = term_p_32;
  return(t);
}
ATerm x_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_10 (ATerm t)
{
  ATerm i_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL;
  t = term_n_32;
  k_59 = t;
  t = term_f_13;
  l_59 = t;
  t = term_o_32;
  t = n_7(k_59, l_59, t);
  t = term_q_32;
  i_59 = t;
  t = term_f_13;
  j_59 = t;
  t = term_r_32;
  t = n_7(i_59, j_59, t);
  t = term_s_32;
  return(t);
}
ATerm z_10 (ATerm t)
{
  t = term_t_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_32 = t;
  int y_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_10, v_10, w_10, t);
      ;
      LocalPopChoice(y_32);
    }
  else
    {
      t = u_32;
      t = Option_3_0(x_10, y_10, z_10, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_101 (ATerm), ATerm t)
{
  ATerm q_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL,v_59 = NULL,w_59 = NULL,p_19 = NULL;
  q_59 = t;
  {
    ATerm z_32 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_33;
        t = v_101(t);
        ;
        LocalPopChoice(d_33);
      }
    else
      {
        t = z_32;
      }
    t = q_59;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_59 = ATgetFirst((ATermList) t);
        t_59 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(q_59);
    r_59 = t;
    t = term_g_31;
    w_59 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_g_31, s_59);
    t = n_7(w_59, s_59, t);
    t = t_59;
    {
      ATerm g_60 (ATerm t)
      {
        ATerm f_33 = t;
        int g_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_33 = t;
            int i_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_59 = NULL;
                z_59 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = z_59;
                ;
                LocalPopChoice(i_33);
              }
            else
              {
                t = h_33;
                t = v_101(t);
                t = Cons_2_0(_id, g_60, t);
              }
            ;
            LocalPopChoice(g_33);
          }
        else
          {
            t = f_33;
            {
              ATerm c_60 = NULL,d_60 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_60 = ATgetFirst((ATermList) t);
                  d_60 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(d_60), (ATerm) ATmakeAppl(sym_Undefined_1, c_60));
            }
          }
        return(t);
      }
      t = g_60(t);
      v_59 = t;
      t = (ATerm) ATinsert(CheckATermList(v_59), (ATerm) ATmakeAppl(sym_Program_1, s_59));
      p_19 = t;
      t = SSLsetAnnotations(p_19, r_59);
    }
  }
  return(t);
}
ATerm c_11 (ATerm t)
{
  ATerm s_60 = NULL;
  s_60 = t;
  if(match_string(t, "--help"))
    {
      t = s_60;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = s_60;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = s_60;
        }
    }
  return(t);
}
ATerm d_11 (ATerm t)
{
  ATerm t_60 = NULL,u_60 = NULL;
  t = term_d_32;
  t_60 = t;
  t = term_f_13;
  u_60 = t;
  t = term_j_33;
  t = n_7(t_60, u_60, t);
  t = term_k_33;
  return(t);
}
ATerm e_11 (ATerm t)
{
  t = term_l_33;
  return(t);
}
ATerm f_11 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_101 (ATerm), ATerm t)
{
  ATerm l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL,q_60 = NULL,r_60 = NULL;
  n_60 = t;
  t = term_r_30;
  p_60 = t;
  t = term_s_30;
  q_60 = t;
  t = (ATerm) ATempty;
  r_60 = t;
  t = SSL_table_put(p_60, q_60, r_60);
  t = n_60;
  {
    ATerm a_11 (ATerm t)
    {
      ATerm m_33 = t;
      int n_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_101(t);
          ;
          LocalPopChoice(n_33);
        }
      else
        {
          t = m_33;
          {
            ATerm o_33 = t;
            int p_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_11, d_11, e_11, t);
                ;
                LocalPopChoice(p_33);
              }
            else
              {
                t = o_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_11, t);
    {
      ATerm q_33 = t;
      int t_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_61 = NULL;
          b_61 = t;
          {
            ATerm v_33 = t;
            int w_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_16 = NULL;
                t = b_61;
                {
                  ATerm x_33 = t;
                  int b_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_d_32;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(b_34);
                    }
                  else
                    {
                      t = x_33;
                      t = fetch_1_0(f_11, t);
                    }
                  t = b_61;
                  t = default_system_usage_0_0(t);
                  t = term_b_30;
                  t_16 = t;
                  t = SSL_exit(t_16);
                }
                ;
                LocalPopChoice(w_33);
              }
            else
              {
                t = v_33;
                {
                  ATerm f_17 = NULL;
                  t = term_n_32;
                  t = get_config_0_0(t);
                  t = b_61;
                  t = default_system_about_0_0(t);
                  t = term_b_30;
                  f_17 = t;
                  t = SSL_exit(f_17);
                }
              }
          }
          ;
          LocalPopChoice(t_33);
        }
      else
        {
          t = q_33;
          {
            ATerm c_34 = t;
            int d_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_61 = NULL,d_61 = NULL,e_61 = NULL;
                ATerm i_11 (ATerm t)
                {
                  ATerm f_61 = NULL,g_61 = NULL,j_61 = NULL,t_19 = NULL;
                  j_61 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      g_61 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(j_61);
                  f_61 = t;
                  t = g_61;
                  if(((l_60 != NULL) && (l_60 != t)))
                    _fail(t);
                  else
                    l_60 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, g_61);
                  t_19 = t;
                  t = SSLsetAnnotations(t_19, f_61);
                  return(t);
                }
                t = fetch_1_0(i_11, t);
                t = term_h_13;
                d_61 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_60)), term_g_34);
                e_61 = t;
                t = SSL_printnl(d_61, e_61);
                t = (ATerm) ATmakeAppl(sym__2, term_h_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_60)), term_g_34));
                t = default_system_usage_0_0(t);
                t = term_n_13;
                c_61 = t;
                t = SSL_exit(c_61);
                ;
                LocalPopChoice(d_34);
              }
            else
              {
                t = c_34;
              }
          }
        }
      m_60 = t;
      t = term_r_30;
      o_60 = t;
      t = SSL_table_destroy(o_60);
      t = m_60;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_99 (ATerm), ATerm v_99 (ATerm), ATerm w_99 (ATerm), ATerm x_99 (ATerm), ATerm t)
{
  ATerm o_61 = NULL,p_61 = NULL,q_61 = NULL,r_61 = NULL;
  t = parse_options_1_0(u_99, t);
  o_61 = t;
  t = term_h_34;
  r_61 = t;
  t = SSL_table_create(r_61);
  t = term_h_34;
  p_61 = t;
  t = term_i_34;
  q_61 = t;
  t = SSL_table_put(p_61, q_61, o_61);
  t = o_61;
  t = w_99(t);
  {
    ATerm j_34 = t;
    int k_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_99, t);
        ;
        LocalPopChoice(k_34);
      }
    else
      {
        t = j_34;
        {
          ATerm l_34 = t;
          int o_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_99(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(o_34);
            }
          else
            {
              t = l_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm i_12 (ATerm t)
{
  t = if_verbose2_1_0(o_12, t);
  return(t);
}
ATerm l_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_12 (ATerm t)
{
  ATerm s_61 = NULL,t_61 = NULL;
  t = term_q_34;
  s_61 = t;
  t = term_f_13;
  t_61 = t;
  t = term_s_34;
  t = n_7(s_61, t_61, t);
  t = term_v_34;
  return(t);
}
ATerm n_12 (ATerm t)
{
  t = term_w_34;
  return(t);
}
ATerm o_12 (ATerm t)
{
  ATerm u_61 = NULL,v_61 = NULL,w_61 = NULL,x_61 = NULL;
  u_61 = t;
  t = term_g_31;
  t = get_config_0_0(t);
  v_61 = t;
  t = term_h_13;
  w_61 = t;
  t = (ATerm) ATinsert(ATempty, v_61);
  x_61 = t;
  t = SSL_printnl(w_61, x_61);
  t = u_61;
  return(t);
}
ATerm iowrap_3_0 (ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm t)
{
  ATerm h_12 (ATerm t)
  {
    ATerm x_34 = t;
    int y_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_99(t);
        ;
        LocalPopChoice(y_34);
      }
    else
      {
        t = x_34;
        {
          ATerm b_35 = t;
          int c_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(c_35);
            }
          else
            {
              t = b_35;
              {
                ATerm g_35 = t;
                int i_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(i_35);
                  }
                else
                  {
                    t = g_35;
                    {
                      ATerm l_35 = t;
                      int o_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(l_12, m_12, n_12, t);
                          ;
                          LocalPopChoice(o_35);
                        }
                      else
                        {
                          t = l_35;
                          {
                            ATerm p_35 = t;
                            int q_35 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(q_35);
                              }
                            else
                              {
                                t = p_35;
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
  ATerm j_12 (ATerm t)
  {
    ATerm y_61 = NULL,z_61 = NULL,a_62 = NULL;
    z_61 = t;
    {
      ATerm r_35 = t;
      int s_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_12 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((y_61 != NULL) && (y_61 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_61 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(p_12, t);
          ;
          LocalPopChoice(s_35);
        }
      else
        {
          t = r_35;
          t = term_t_35;
          y_61 = t;
        }
      t = not_null(y_61);
      t = ReadFromFile_0_0(t);
      a_62 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_61, a_62);
      t = apply_strategy_1_0(d_99, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(h_12, f_99, i_12, j_12, t);
  return(t);
}
ATerm q_12 (ATerm t)
{
  ATerm b_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL,z_19 = NULL,y_19 = NULL,x_19 = NULL,v_19 = NULL;
  p_62 = t;
  if(match_cons(t, sym__2))
    {
      c_62 = ATgetArgument(t, 0);
      d_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_62);
  b_62 = t;
  t = d_62;
  if(match_cons(t, sym_Specification_1))
    {
      f_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_62);
  e_62 = t;
  t = f_62;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_62 = ATgetFirst((ATermList) t);
      j_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_62);
  h_62 = t;
  t = i_62;
  if(match_cons(t, sym_Signature_1))
    {
      n_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_62);
  m_62 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, n_62);
  v_19 = t;
  t = SSLsetAnnotations(v_19, m_62);
  o_62 = t;
  t = j_62;
  t = Cons_2_0(r_12, t_12, t);
  k_62 = t;
  t = (ATerm) ATinsert(CheckATermList(k_62), o_62);
  x_19 = t;
  t = SSLsetAnnotations(x_19, h_62);
  l_62 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, l_62);
  y_19 = t;
  t = SSLsetAnnotations(y_19, e_62);
  g_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_62, g_62);
  z_19 = t;
  t = SSLsetAnnotations(z_19, b_62);
  return(t);
}
ATerm r_12 (ATerm t)
{
  ATerm q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL,w_19 = NULL;
  t_62 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      r_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_62);
  q_62 = t;
  t = r_62;
  t = map_1_0(u_12, t);
  s_62 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, s_62);
  w_19 = t;
  t = SSLsetAnnotations(w_19, q_62);
  return(t);
}
ATerm t_12 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm u_12 (ATerm t)
{
  t = scope_2_0(v_12, b_13, t);
  return(t);
}
ATerm v_12 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm b_13 (ATerm t)
{
  t = scope_2_0(d_13, cp_0_0, t);
  return(t);
}
ATerm d_13 (ATerm t)
{
  t = term_s_13;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(q_12, _fail, default_usage_0_0, t);
  return(t);
}

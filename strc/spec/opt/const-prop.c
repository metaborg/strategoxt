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
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_t_35;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_u_34;
ATerm term_n_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_a_33;
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
ATerm term_c_32;
ATerm term_x_31;
ATerm term_v_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_e_31;
ATerm term_c_31;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_r_29;
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
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym__2, term_h_20, term_z_29);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_29);
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
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym__2, term_q_30, term_r_30);
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
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym__2, term_c_32, term_f_13);
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(sym__2, term_u_34, term_f_13);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm a_0 (ATerm);
ATerm o_0 (ATerm);
ATerm p_0 (ATerm);
ATerm q_0 (ATerm);
ATerm c_6 (ATerm p_74 (ATerm), ATerm w_18, ATerm x_18, ATerm);
ATerm v_0 (ATerm);
ATerm d_6 (ATerm n_74 (ATerm), ATerm);
ATerm w_0 (ATerm);
ATerm x_0 (ATerm);
ATerm exec_maybe_1_0 (ATerm g_74 (ATerm), ATerm);
ATerm k_2 (ATerm);
ATerm f_6 (ATerm q_74 (ATerm), ATerm);
ATerm l_2 (ATerm);
ATerm u_7 (ATerm t_4, ATerm u_4, ATerm v_4, ATerm);
ATerm isect_CurrentTerm_0_0 (ATerm);
ATerm j_3 (ATerm);
ATerm j_11 (ATerm c_9, ATerm f_9, ATerm l_9, ATerm);
ATerm isect_Binding_0_0 (ATerm);
ATerm g_6 (ATerm v_50, ATerm u_50, ATerm);
ATerm save_CurrentTerm_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_Binding_0_0 (ATerm);
ATerm prop_abstract_choice_2_0 (ATerm u_74 (ATerm), ATerm v_74 (ATerm), ATerm);
ATerm prop_choice_1_0 (ATerm t_74 (ATerm), ATerm);
ATerm o_4 (ATerm);
ATerm w_4 (ATerm);
ATerm prop_traversal_1_0 (ATerm t_0 (ATerm), ATerm);
ATerm z_4 (ATerm);
ATerm b_5 (ATerm);
ATerm d_5 (ATerm);
ATerm g_5 (ATerm);
ATerm prop_call_1_0 (ATerm s_0 (ATerm), ATerm);
ATerm m_5 (ATerm);
ATerm t_5 (ATerm);
ATerm y_5 (ATerm);
ATerm p_6 (ATerm);
ATerm h_6 (ATerm o_74 (ATerm), ATerm r_18, ATerm);
ATerm q_6 (ATerm);
ATerm prop_build_0_0 (ATerm);
ATerm i_6 (ATerm l_93 (ATerm), ATerm r_38, ATerm p_38, ATerm);
ATerm oncetd_1_0 (ATerm u_77 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm q_96 (ATerm), ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm j_6 (ATerm k_19, ATerm l_19, ATerm);
ATerm lookup_0_0 (ATerm);
ATerm t_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm);
ATerm u_6 (ATerm x_104 (ATerm), ATerm h_55, ATerm i_55, ATerm k_55, ATerm j_55, ATerm);
ATerm at_end_1_0 (ATerm x_82 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm n_26 (ATerm a_26, ATerm);
ATerm conc_0_0 (ATerm);
ATerm genzip_4_0 (ATerm k_84 (ATerm), ATerm l_84 (ATerm), ATerm m_84 (ATerm), ATerm n_84 (ATerm), ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm n_6 (ATerm d_603, ATerm i_603, ATerm j_56, ATerm);
ATerm while_not_2_0 (ATerm h_76 (ATerm), ATerm i_76 (ATerm), ATerm);
ATerm for_3_0 (ATerm k_76 (ATerm), ATerm l_76 (ATerm), ATerm m_76 (ATerm), ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm y_7 (ATerm);
ATerm a_39 (ATerm c_33, ATerm d_33, ATerm e_33, ATerm);
ATerm b_39 (ATerm y_33, ATerm z_33, ATerm a_34, ATerm);
ATerm e_39 (ATerm k_34, ATerm l_34, ATerm m_34, ATerm);
ATerm f_39 (ATerm h_35, ATerm l_35, ATerm o_35, ATerm);
ATerm i_39 (ATerm a_36, ATerm b_36, ATerm c_36, ATerm);
ATerm z_7 (ATerm);
ATerm prop_pattern_match_0_0 (ATerm);
ATerm CurrentTerm_0_0 (ATerm);
ATerm x_6 (ATerm d_50, ATerm e_50, ATerm);
ATerm Binding_0_0 (ATerm);
ATerm alltd_1_0 (ATerm i_78 (ATerm), ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm prop_match_0_0 (ATerm);
ATerm cp_0_0 (ATerm);
ATerm y_6 (ATerm x_49, ATerm y_49, ATerm);
ATerm end_scope_1_0 (ATerm i_93 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm l_75 (ATerm), ATerm m_75 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm h_93 (ATerm), ATerm);
ATerm scope_2_0 (ATerm j_93 (ATerm), ATerm k_93 (ATerm), ATerm);
ATerm map_1_0 (ATerm h_82 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm a_61 (ATerm), ATerm b_61 (ATerm), ATerm);
ATerm b_7 (ATerm d_40, ATerm e_40, ATerm);
ATerm c_7 (ATerm r_43, ATerm s_43, ATerm);
ATerm e_7 (ATerm e_95 (ATerm), ATerm t_428, ATerm v_43, ATerm);
ATerm d_7 (ATerm n_43, ATerm o_43, ATerm);
ATerm l_8 (ATerm);
ATerm m_8 (ATerm);
ATerm o_8 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm g_98 (ATerm), ATerm);
ATerm r_48 (ATerm l_48, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm f_7 (ATerm t_43, ATerm);
ATerm g_7 (ATerm f_40, ATerm g_40, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm q_50 (ATerm g_49, ATerm);
ATerm r_50 (ATerm k_49, ATerm l_49, ATerm m_49, ATerm);
ATerm y_50 (ATerm b_50, ATerm c_50, ATerm f_50, ATerm);
ATerm h_7 (ATerm);
ATerm p_8 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm r_82 (ATerm), ATerm);
ATerm a_7 (ATerm s_34, ATerm t_34, ATerm);
ATerm debug_1_0 (ATerm c_95 (ATerm), ATerm);
ATerm s_8 (ATerm);
ATerm t_8 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm p_96 (ATerm), ATerm);
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
ATerm n_7 (ATerm u_44, ATerm v_44, ATerm);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm t_9 (ATerm);
ATerm u_9 (ATerm);
ATerm v_9 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm l_7 (ATerm s_49, ATerm t_49, ATerm r_49, ATerm);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm w_9 (ATerm);
ATerm x_9 (ATerm);
ATerm z_9 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm i_7 (ATerm d_37, ATerm e_37, ATerm);
ATerm foldr_2_0 (ATerm k_88 (ATerm), ATerm l_88 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm a_10 (ATerm);
ATerm b_10 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm o_96 (ATerm), ATerm);
ATerm d_10 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm h_10 (ATerm);
ATerm need_help_1_0 (ATerm e_99 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm k_7 (ATerm j_51, ATerm k_51, ATerm);
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
ATerm parse_options_p__1_0 (ATerm h_101 (ATerm), ATerm);
ATerm c_11 (ATerm);
ATerm d_11 (ATerm);
ATerm e_11 (ATerm);
ATerm f_11 (ATerm);
ATerm parse_options_1_0 (ATerm g_101 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm g_99 (ATerm), ATerm h_99 (ATerm), ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm);
ATerm i_12 (ATerm);
ATerm l_12 (ATerm);
ATerm m_12 (ATerm);
ATerm n_12 (ATerm);
ATerm o_12 (ATerm);
ATerm iowrap_3_0 (ATerm p_98 (ATerm), ATerm q_98 (ATerm), ATerm r_98 (ATerm), ATerm);
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
ATerm o_0 (ATerm t)
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
  t = i_6(p_0, v_1, w_1, t);
  t = u_1;
  return(t);
}
ATerm p_0 (ATerm t)
{
  t = term_s_13;
  return(t);
}
ATerm q_0 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm c_6 (ATerm p_74 (ATerm), ATerm w_18, ATerm x_18, ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    ATerm g_1 = NULL,i_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL,s_1 = NULL,n_0 = NULL;
    g_1 = t;
    t = x_18;
    t = map_1_0(o_0, t);
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
    t = i_6(q_0, q_1, s_1, t);
    t = o_1;
    t = p_74(t);
    p_1 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, l_1, m_1, n_1, p_1);
    n_0 = t;
    t = SSLsetAnnotations(n_0, i_1);
    return(t);
  }
  t = scope_2_0(a_0, c_0, t);
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm d_6 (ATerm n_74 (ATerm), ATerm t)
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
  t = exec_maybe_1_0(n_74, t);
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
ATerm exec_maybe_1_0 (ATerm g_74 (ATerm), ATerm t)
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
  t = g_74(t);
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
ATerm f_6 (ATerm q_74 (ATerm), ATerm t)
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
      t = q_74(t);
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
    t = q_74(t);
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
        ATerm a_14 = t;
        int f_14 = stack_ptr;
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
            LocalPopChoice(f_14);
            t = l_5;
            {
              ATerm i_14 = t;
              int l_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm m_14 = ATgetArgument(t, 0);
                      o_5 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(l_14);
                  t = i_5;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = q_5;
                    }
                  else
                    {
                      ATerm o_14 = t;
                      int p_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = u_7(i_5, o_5, q_5, t);
                          ;
                          LocalPopChoice(p_14);
                        }
                      else
                        {
                          t = o_14;
                          t = q_5;
                        }
                    }
                }
              else
                {
                  t = i_14;
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
            t = a_14;
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
        ATerm e_0 = NULL;
        t = term_x_13;
        e_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_13, t_4);
        t = k_7(e_0, t_4, t);
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
              ATerm o_15 = t;
              int p_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm q_15 = ATgetArgument(t, 0);
                      k_10 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(p_15);
                  t = e_10;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = o_10;
                    }
                  else
                    {
                      ATerm r_15 = t;
                      int a_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = j_11(e_10, k_10, o_10, t);
                          ;
                          LocalPopChoice(a_16);
                        }
                      else
                        {
                          t = r_15;
                          t = o_10;
                        }
                    }
                }
              else
                {
                  t = o_15;
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
    ATerm b_16 = t;
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
        t = b_16;
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
ATerm g_6 (ATerm v_50, ATerm u_50, ATerm t)
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
    t = SSL_table_put(v_50, l_11, p_11);
    t = (ATerm) ATmakeAppl(sym__3, v_50, l_11, p_11);
    return(t);
  }
  t = u_50;
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
ATerm prop_abstract_choice_2_0 (ATerm u_74 (ATerm), ATerm v_74 (ATerm), ATerm t)
{
  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL;
  c_12 = t;
  t = save_Binding_0_0(t);
  w_11 = t;
  t = save_CurrentTerm_0_0(t);
  x_11 = t;
  t = c_12;
  t = u_74(t);
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
  t = v_74(t);
  a_12 = t;
  t = y_11;
  t = isect_Binding_0_0(t);
  t = z_11;
  t = isect_CurrentTerm_0_0(t);
  t = a_12;
  return(t);
}
ATerm prop_choice_1_0 (ATerm t_74 (ATerm), ATerm t)
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
            t = t_74(t);
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
            t = t_74(t);
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
          ATerm t_16 = t;
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
                  t = t_74(t);
                  r_13 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, r_13, q_13);
                  x_5 = t;
                  t = SSLsetAnnotations(x_5, o_13);
                  return(t);
                }
                ATerm h_4 (ATerm t)
                {
                  ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,g_14 = NULL,z_5 = NULL;
                  g_14 = t;
                  if(match_cons(t, sym_GChoice_2))
                    {
                      c_14 = ATgetArgument(t, 0);
                      d_14 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(g_14);
                  b_14 = t;
                  t = d_14;
                  t = t_74(t);
                  e_14 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, c_14, e_14);
                  z_5 = t;
                  t = SSLsetAnnotations(z_5, b_14);
                  return(t);
                }
                t = k_12;
                t = prop_abstract_choice_2_0(g_4, h_4, t);
              }
            }
          else
            {
              t = t_16;
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
                        ATerm j_14 = NULL,k_14 = NULL,n_14 = NULL,r_14 = NULL,w_14 = NULL,a_6 = NULL;
                        w_14 = t;
                        if(match_cons(t, sym_LChoice_2))
                          {
                            k_14 = ATgetArgument(t, 0);
                            n_14 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(w_14);
                        j_14 = t;
                        t = k_14;
                        t = t_74(t);
                        r_14 = t;
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, r_14, n_14);
                        a_6 = t;
                        t = SSLsetAnnotations(a_6, j_14);
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
                        t = t_74(t);
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
                        ATerm g_15 = NULL,i_15 = NULL,n_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,c_16 = NULL,l_6 = NULL,k_6 = NULL;
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
                        t = t_74(t);
                        y_15 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_15, w_15, x_15);
                        k_6 = t;
                        t = SSLsetAnnotations(k_6, u_15);
                        z_15 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            i_15 = ATgetArgument(t, 0);
                            n_15 = ATgetArgument(t, 1);
                            s_15 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(z_15);
                        g_15 = t;
                        t = n_15;
                        t = t_74(t);
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
                        t = t_74(t);
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
ATerm prop_traversal_1_0 (ATerm t_0 (ATerm), ATerm t)
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
          t = exec_maybe_1_0(t_0, t);
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
          t = exec_maybe_1_0(t_0, t);
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
                                    ATerm s_18 = ATgetArgument(t, 0);
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
                                    ATerm z_18 = ATgetArgument(t, 0);
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
ATerm prop_call_1_0 (ATerm s_0 (ATerm), ATerm t)
{
  ATerm u_20 = NULL;
  u_20 = t;
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_PrimT_3))
          {
            ATerm c_19 = ATgetArgument(t, 0);
            ATerm f_19 = ATgetArgument(t, 1);
            ATerm g_19 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(b_19);
        {
          ATerm m_2 = NULL,o_2 = NULL,q_2 = NULL,s_2 = NULL,u_2 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,y_14 = NULL;
          t = (ATerm) ATempty;
          m_2 = t;
          t = term_u_13;
          o_2 = t;
          t = term_y_13;
          t = i_6(z_4, m_2, o_2, t);
          t = u_20;
          if(match_cons(t, sym_PrimT_3))
            {
              s_2 = ATgetArgument(t, 0);
              u_2 = ATgetArgument(t, 1);
              c_3 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(u_20);
          q_2 = t;
          t = u_2;
          {
            ATerm a_5 (ATerm t)
            {
              t = exec_maybe_1_0(s_0, t);
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
        t = a_19;
        {
          ATerm m_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,q_16 = NULL;
          if(match_cons(t, sym_CallT_3))
            {
              ATerm j_19 = ATgetArgument(t, 0);
              ATerm m_19 = ATgetArgument(t, 1);
              ATerm o_19 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATempty;
          m_3 = t;
          t = term_u_13;
          p_3 = t;
          t = term_y_13;
          t = i_6(d_5, m_3, p_3, t);
          t = u_20;
          if(match_cons(t, sym_CallT_3))
            {
              r_3 = ATgetArgument(t, 0);
              s_3 = ATgetArgument(t, 1);
              t_3 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(u_20);
          q_3 = t;
          t = s_3;
          {
            ATerm f_5 (ATerm t)
            {
              t = exec_maybe_1_0(s_0, t);
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
  ATerm z_21 = NULL,f_22 = NULL,h_22 = NULL;
  z_21 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, z_21);
  f_22 = t;
  t = term_u_13;
  h_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, z_21), term_u_13);
  t = i_6(y_5, f_22, h_22, t);
  t = z_21;
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
ATerm h_6 (ATerm o_74 (ATerm), ATerm r_18, ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm h_21 = NULL,j_21 = NULL,l_21 = NULL,r_21 = NULL,x_21 = NULL,y_21 = NULL,z_16 = NULL;
    h_21 = t;
    t = r_18;
    t = map_1_0(t_5, t);
    t = h_21;
    if(match_cons(t, sym_Scope_2))
      {
        l_21 = ATgetArgument(t, 0);
        r_21 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(h_21);
    j_21 = t;
    t = r_21;
    t = o_74(t);
    x_21 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, l_21, x_21);
    z_16 = t;
    t = SSLsetAnnotations(z_16, j_21);
    y_21 = t;
    {
      ATerm q_19 = t;
      int s_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_22 = NULL,v_22 = NULL,w_22 = NULL;
          t = CurrentTerm_0_0(t);
          {
            ATerm e_6 (ATerm t)
            {
              ATerm x_22 = NULL;
              ATerm o_6 (ATerm t)
              {
                if(((x_22 != NULL) && (x_22 != t)))
                  _fail(t);
                else
                  x_22 = t;
                return(t);
              }
              if(match_cons(t, sym_Var_1))
                {
                  if(((x_22 != NULL) && (x_22 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    x_22 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = r_18;
              t = fetch_1_0(o_6, t);
              return(t);
            }
            t = oncetd_1_0(e_6, t);
            n_22 = t;
            t = (ATerm) ATempty;
            v_22 = t;
            t = term_u_13;
            w_22 = t;
            t = term_y_13;
            t = i_6(p_6, v_22, w_22, t);
            t = n_22;
          }
          ;
          LocalPopChoice(s_19);
        }
      else
        {
          t = q_19;
        }
      t = y_21;
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
  ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL,b_17 = NULL;
  j_23 = t;
  if(match_cons(t, sym_Build_1))
    {
      e_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_23);
  d_23 = t;
  t = e_23;
  t = alltd_1_0(Binding_0_0, t);
  h_23 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, h_23);
  b_17 = t;
  t = SSLsetAnnotations(b_17, d_23);
  i_23 = t;
  if(match_cons(t, sym_Build_1))
    {
      a_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  b_23 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_u_19, a_23);
  c_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_u_19, a_23));
  t = i_6(q_6, b_23, c_23, t);
  t = i_23;
  return(t);
}
ATerm i_6 (ATerm l_93 (ATerm), ATerm r_38, ATerm p_38, ATerm t)
{
  ATerm k_23 = NULL,m_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL;
  r_23 = t;
  t = l_93(t);
  k_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_23, r_38, p_38);
  t = l_7(k_23, r_38, p_38, t);
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
        m_23 = ATgetFirst((ATermList) t);
        q_23 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_c_20;
    s_23 = t;
    t = (ATerm) ATinsert(CheckATermList(q_23), (ATerm) ATinsert(CheckATermList(m_23), r_38));
    t_23 = t;
    t = SSL_table_put(k_23, s_23, t_23);
    t = r_23;
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm u_77 (ATerm), ATerm t)
{
  ATerm v_23 (ATerm t)
  {
    ATerm d_20 = t;
    int e_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_77(t);
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
ATerm if_verbose3_1_0 (ATerm q_96 (ATerm), ATerm t)
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
        t = q_96(t);
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
ATerm j_6 (ATerm k_19, ATerm l_19, ATerm t)
{
  ATerm e_24 = NULL,g_24 = NULL,h_24 = NULL;
  e_24 = t;
  t = l_19;
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
    t = (ATerm) ATmakeAppl(sym_Var_1, k_19);
    g_24 = t;
    t = (ATerm) ATmakeAppl(sym_Defined_2, term_m_20, l_19);
    h_24 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, k_19), (ATerm) ATmakeAppl(sym_Defined_2, term_m_20, l_19));
    t = i_6(s_6, g_24, h_24, t);
    t = e_24;
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm i_27 = NULL,k_27 = NULL,l_27 = NULL,n_27 = NULL,o_27 = NULL,q_27 = NULL,r_27 = NULL;
  l_27 = t;
  if(match_cons(t, sym__2))
    {
      n_27 = ATgetArgument(t, 0);
      o_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_27;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_27 = ATgetFirst((ATermList) t);
      r_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_27;
  if(match_cons(t, sym__2))
    {
      i_27 = ATgetArgument(t, 0);
      k_27 = ATgetArgument(t, 1);
      {
        ATerm n_20 = t;
        int o_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_27;
            if((n_27 != t))
              {
                _fail(t);
              }
            t = k_27;
            ;
            LocalPopChoice(o_20);
          }
        else
          {
            t = n_20;
            t = (ATerm) ATmakeAppl(sym__2, n_27, r_27);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, n_27, r_27);
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
  ATerm x_30 = NULL,y_30 = NULL,z_30 = NULL,d_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_20 = ATgetArgument(t, 0);
      if(((ATgetType(r_20) == AT_LIST) && !(ATisEmpty(r_20))))
        {
          x_30 = ATgetFirst((ATermList) r_20);
          y_30 = (ATerm) ATgetNext((ATermList) r_20);
        }
      else
        _fail(t);
      {
        ATerm s_20 = ATgetArgument(t, 1);
        if(((ATgetType(s_20) == AT_LIST) && !(ATisEmpty(s_20))))
          {
            z_30 = ATgetFirst((ATermList) s_20);
            d_31 = (ATerm) ATgetNext((ATermList) s_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_30, z_30), (ATerm) ATmakeAppl(sym__2, y_30, d_31));
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm f_31 = NULL,i_31 = NULL;
  if(match_cons(t, sym__2))
    {
      f_31 = ATgetArgument(t, 0);
      i_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_31), f_31);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm a_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL;
  a_30 = t;
  {
    ATerm t_20 = t;
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
        t = a_30;
      }
    else
      {
        t = t_20;
        {
          ATerm s_30 = NULL;
          if(match_cons(t, sym__3))
            {
              d_30 = ATgetArgument(t, 0);
              e_30 = ATgetArgument(t, 1);
              f_30 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, d_30, e_30);
          t = genzip_4_0(t_6, v_6, w_6, _id, t);
          s_30 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_30, f_30);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm t)
{
  ATerm o_31 = NULL,q_31 = NULL;
  ATerm j_7 (ATerm t)
  {
    ATerm x_4 = NULL;
    t = l_101(t);
    x_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_4, not_null(q_31));
    t = lookup_0_0(t);
    t = m_101(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((q_31 != NULL) && (q_31 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_31 = ATgetArgument(t, 0);
      o_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_31;
  t = alltd_1_0(j_7, t);
  return(t);
}
ATerm u_6 (ATerm x_104 (ATerm), ATerm h_55, ATerm i_55, ATerm k_55, ATerm j_55, ATerm t)
{
  ATerm t_31 = NULL,w_31 = NULL;
  t = h_55;
  t = x_104(t);
  t = (ATerm) ATmakeAppl(sym__2, h_55, i_55);
  {
    ATerm y_20 = t;
    if((PushChoice() == 0))
      {
        ATerm y_31 = NULL,z_31 = NULL;
        if(match_cons(t, sym__2))
          {
            y_31 = ATgetArgument(t, 0);
            z_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_31;
        {
          ATerm m_7 (ATerm t)
          {
            if((y_31 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1_0(m_7, t);
          t = (ATerm) ATmakeAppl(sym__2, y_31, z_31);
        }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_20;
      }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, h_55, i_55)), (ATerm) ATmakeAppl(sym__2, j_55, k_55));
    t = substitute_2_0(x_104, _id, t);
    if(match_cons(t, sym__2))
      {
        t_31 = ATgetArgument(t, 0);
        w_31 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, w_31, (ATerm) ATinsert(CheckATermList(t_31), (ATerm) ATmakeAppl(sym__2, h_55, i_55)));
  }
  return(t);
}
ATerm at_end_1_0 (ATerm x_82 (ATerm), ATerm t)
{
  ATerm w_25 (ATerm t)
  {
    ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL;
    v_25 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_25 = ATgetFirst((ATermList) t);
        u_25 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm i_4 = NULL,l_4 = NULL,k_17 = NULL;
          t = SSLgetAnnotations(v_25);
          i_4 = t;
          t = u_25;
          t = w_25(t);
          l_4 = t;
          t = (ATerm) ATinsert(CheckATermList(l_4), t_25);
          k_17 = t;
          t = SSLsetAnnotations(k_17, i_4);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_25;
        t = x_82(t);
      }
    return(t);
  }
  t = w_25(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_24 = NULL,s_24 = NULL,t_24 = NULL;
  q_24 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_24;
    }
  else
    {
      ATerm o_7 (ATerm t)
      {
        t = not_null(t_24);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_24 = ATgetFirst((ATermList) t);
          if(((t_24 != NULL) && (t_24 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            t_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_24;
      t = at_end_1_0(o_7, t);
    }
  return(t);
}
ATerm n_26 (ATerm a_26, ATerm t)
{
  ATerm c_26 = NULL;
  t = SSL_explode_term(a_26);
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
  ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL;
  h_26 = t;
  if(match_cons(t, sym__2))
    {
      f_26 = ATgetArgument(t, 0);
      g_26 = ATgetArgument(t, 1);
      {
        ATerm a_21 = t;
        int b_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_7 (ATerm t)
            {
              t = g_26;
              return(t);
            }
            t = f_26;
            t = at_end_1_0(q_7, t);
            ;
            LocalPopChoice(b_21);
          }
        else
          {
            t = a_21;
            t = n_26(h_26, t);
          }
      }
    }
  else
    {
      t = n_26(h_26, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm k_84 (ATerm), ATerm l_84 (ATerm), ATerm m_84 (ATerm), ATerm n_84 (ATerm), ATerm t)
{
  ATerm p_29 (ATerm t)
  {
    ATerm c_21 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_84(t);
        ;
        LocalPopChoice(d_21);
      }
    else
      {
        t = c_21;
        {
          ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,n_29 = NULL,o_29 = NULL,o_17 = NULL;
          t = l_84(t);
          o_29 = t;
          if(match_cons(t, sym__2))
            {
              a_29 = ATgetArgument(t, 0);
              b_29 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_29);
          z_28 = t;
          t = a_29;
          t = n_84(t);
          c_29 = t;
          t = b_29;
          t = p_29(t);
          n_29 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_29, n_29);
          o_17 = t;
          t = SSLsetAnnotations(o_17, z_28);
          t = m_84(t);
        }
      }
    return(t);
  }
  t = p_29(t);
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
  ATerm w_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_21 = ATgetArgument(t, 0);
      if(((ATgetType(g_21) == AT_LIST) && !(ATisEmpty(g_21))))
        {
          w_26 = ATgetFirst((ATermList) g_21);
          y_26 = (ATerm) ATgetNext((ATermList) g_21);
        }
      else
        _fail(t);
      {
        ATerm i_21 = ATgetArgument(t, 1);
        if(((ATgetType(i_21) == AT_LIST) && !(ATisEmpty(i_21))))
          {
            z_26 = ATgetFirst((ATermList) i_21);
            a_27 = (ATerm) ATgetNext((ATermList) i_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_26, z_26), (ATerm) ATmakeAppl(sym__2, y_26, a_27));
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL;
  if(match_cons(t, sym__2))
    {
      b_27 = ATgetArgument(t, 0);
      c_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_27), b_27);
  return(t);
}
ATerm n_6 (ATerm d_603, ATerm i_603, ATerm j_56, ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL,u_26 = NULL;
  t = SSL_explode_term(i_603);
  if(match_cons(t, sym__2))
    {
      p_26 = ATgetArgument(t, 0);
      r_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(d_603);
  if(match_cons(t, sym__2))
    {
      if((p_26 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      q_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_26, r_26);
  t = genzip_4_0(r_7, s_7, t_7, _id, t);
  u_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_26, j_56);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm h_76 (ATerm), ATerm i_76 (ATerm), ATerm t)
{
  ATerm d_32 (ATerm t)
  {
    ATerm k_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_76(t);
        ;
        LocalPopChoice(m_21);
      }
    else
      {
        t = k_21;
        t = i_76(t);
        t = d_32(t);
      }
    return(t);
  }
  t = d_32(t);
  return(t);
}
ATerm for_3_0 (ATerm k_76 (ATerm), ATerm l_76 (ATerm), ATerm m_76 (ATerm), ATerm t)
{
  t = k_76(t);
  t = while_not_2_0(l_76, m_76, t);
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm x_32 = NULL;
  x_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_32, (ATerm) ATempty);
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm y_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_21 = ATgetArgument(t, 0);
      if(((ATgetType(n_21) != AT_LIST) || !(ATisEmpty(n_21))))
        _fail(t);
      y_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_32;
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL,o_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL;
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
      i_37 = ATgetFirst((ATermList) t);
      o_37 = (ATerm) ATgetNext((ATermList) t);
      t = i_37;
      if(match_cons(t, sym__2))
        {
          j_37 = ATgetArgument(t, 0);
          k_37 = ATgetArgument(t, 1);
          {
            ATerm o_21 = t;
            int p_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = a_39(t_37, u_37, s_37, t);
                ;
                LocalPopChoice(p_21);
              }
            else
              {
                t = o_21;
                {
                  ATerm q_21 = t;
                  int s_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = s_37;
                      t = u_6(z_7, j_37, k_37, o_37, u_37, t);
                      ;
                      LocalPopChoice(s_21);
                    }
                  else
                    {
                      t = q_21;
                      {
                        ATerm t_21 = t;
                        int u_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = b_39(t_37, u_37, s_37, t);
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
                                  t = e_39(t_37, u_37, s_37, t);
                                  ;
                                  LocalPopChoice(w_21);
                                }
                              else
                                {
                                  t = v_21;
                                  {
                                    ATerm a_22 = t;
                                    int b_22 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = f_39(t_37, u_37, s_37, t);
                                        ;
                                        LocalPopChoice(b_22);
                                      }
                                    else
                                      {
                                        t = a_22;
                                        t = i_39(t_37, u_37, s_37, t);
                                      }
                                  }
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
              t = a_39(t_37, u_37, s_37, t);
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
                    t = b_39(t_37, u_37, s_37, t);
                    ;
                    LocalPopChoice(g_22);
                  }
                else
                  {
                    t = e_22;
                    {
                      ATerm i_22 = t;
                      int j_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = e_39(t_37, u_37, s_37, t);
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
                                t = f_39(t_37, u_37, s_37, t);
                                ;
                                LocalPopChoice(l_22);
                              }
                            else
                              {
                                t = k_22;
                                t = i_39(t_37, u_37, s_37, t);
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
      int o_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_39(t_37, u_37, s_37, t);
          ;
          LocalPopChoice(o_22);
        }
      else
        {
          t = m_22;
          {
            ATerm p_22 = t;
            int q_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = b_39(t_37, u_37, s_37, t);
                ;
                LocalPopChoice(q_22);
              }
            else
              {
                t = p_22;
                {
                  ATerm r_22 = t;
                  int s_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = e_39(t_37, u_37, s_37, t);
                      ;
                      LocalPopChoice(s_22);
                    }
                  else
                    {
                      t = r_22;
                      {
                        ATerm t_22 = t;
                        int u_22 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = f_39(t_37, u_37, s_37, t);
                            ;
                            LocalPopChoice(u_22);
                          }
                        else
                          {
                            t = t_22;
                            t = i_39(t_37, u_37, s_37, t);
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
ATerm a_39 (ATerm c_33, ATerm d_33, ATerm e_33, ATerm t)
{
  ATerm h_33 = NULL,p_33 = NULL,q_33 = NULL,q_17 = NULL;
  t = SSLgetAnnotations(e_33);
  h_33 = t;
  t = c_33;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_22 = ATgetFirst((ATermList) t);
      if(match_cons(y_22, sym__2))
        {
          p_33 = ATgetArgument(y_22, 0);
          if((p_33 != ATgetArgument(y_22, 1)))
            {
              _fail(ATgetArgument(y_22, 1));
            }
        }
      else
        _fail(t);
      q_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_33, d_33);
  q_17 = t;
  t = SSLsetAnnotations(q_17, h_33);
  return(t);
}
ATerm b_39 (ATerm y_33, ATerm z_33, ATerm a_34, ATerm t)
{
  ATerm b_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL,r_17 = NULL;
  t = SSLgetAnnotations(a_34);
  b_34 = t;
  t = y_33;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_22 = ATgetFirst((ATermList) t);
      if(match_cons(z_22, sym__2))
        {
          f_34 = ATgetArgument(z_22, 0);
          g_34 = ATgetArgument(z_22, 1);
        }
      else
        _fail(t);
      h_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_6(f_34, g_34, h_34, t);
  e_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_34, z_33);
  r_17 = t;
  t = SSLsetAnnotations(r_17, b_34);
  return(t);
}
ATerm e_39 (ATerm k_34, ATerm l_34, ATerm m_34, ATerm t)
{
  ATerm v_34 = NULL,a_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL,u_17 = NULL;
  t = SSLgetAnnotations(m_34);
  v_34 = t;
  t = k_34;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_23 = ATgetFirst((ATermList) t);
      if(match_cons(f_23, sym__2))
        {
          ATerm g_23 = ATgetArgument(f_23, 0);
          if(match_cons(g_23, sym_As_2))
            {
              a_35 = ATgetArgument(g_23, 0);
              c_35 = ATgetArgument(g_23, 1);
            }
          else
            _fail(t);
          d_35 = ATgetArgument(f_23, 1);
        }
      else
        _fail(t);
      e_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(CheckATermList(e_35), (ATerm) ATmakeAppl(sym__2, c_35, d_35)), (ATerm) ATmakeAppl(sym__2, a_35, d_35)), l_34);
  u_17 = t;
  t = SSLsetAnnotations(u_17, v_34);
  return(t);
}
ATerm f_39 (ATerm h_35, ATerm l_35, ATerm o_35, ATerm t)
{
  ATerm p_35 = NULL,v_35 = NULL,v_17 = NULL;
  t = SSLgetAnnotations(o_35);
  p_35 = t;
  t = h_35;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_23 = ATgetFirst((ATermList) t);
      if(match_cons(l_23, sym__2))
        {
          ATerm n_23 = ATgetArgument(l_23, 0);
          if(!(match_cons(n_23, sym_Wld_0)))
            _fail(t);
          {
            ATerm o_23 = ATgetArgument(l_23, 1);
          }
        }
      else
        _fail(t);
      v_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_35, l_35);
  v_17 = t;
  t = SSLsetAnnotations(v_17, p_35);
  return(t);
}
ATerm i_39 (ATerm a_36, ATerm b_36, ATerm c_36, ATerm t)
{
  ATerm d_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL,q_36 = NULL,w_36 = NULL,y_17 = NULL,x_17 = NULL;
  t = SSLgetAnnotations(c_36);
  d_36 = t;
  t = a_36;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_23 = ATgetFirst((ATermList) t);
      if(match_cons(p_23, sym__2))
        {
          k_36 = ATgetArgument(p_23, 0);
          l_36 = ATgetArgument(p_23, 1);
        }
      else
        _fail(t);
      m_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_36;
  {
    ATerm w_23 = t;
    if((PushChoice() == 0))
      {
        ATerm b_37 = NULL,c_37 = NULL,f_37 = NULL,w_17 = NULL;
        f_37 = t;
        if(match_cons(t, sym_Var_1))
          {
            c_37 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_37);
        b_37 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, c_37);
        w_17 = t;
        t = SSLsetAnnotations(w_17, b_37);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_23;
      }
    t = l_36;
    if(match_cons(t, sym_Var_1))
      {
        w_36 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(l_36);
    q_36 = t;
    t = (ATerm) ATmakeAppl(sym_Var_1, w_36);
    x_17 = t;
    t = SSLsetAnnotations(x_17, q_36);
    t = (ATerm) ATmakeAppl(sym__2, m_36, b_36);
    y_17 = t;
    t = SSLsetAnnotations(y_17, d_36);
  }
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm h_38 = NULL,v_38 = NULL,w_38 = NULL,z_17 = NULL;
  w_38 = t;
  if(match_cons(t, sym_Var_1))
    {
      v_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_38);
  h_38 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_38);
  z_17 = t;
  t = SSLsetAnnotations(z_17, h_38);
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
        int f_24 = stack_ptr;
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
            LocalPopChoice(f_24);
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
ATerm x_6 (ATerm d_50, ATerm e_50, ATerm t)
{
  ATerm n_39 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_50, e_50);
  t = k_7(d_50, e_50, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_39 = ATgetFirst((ATermList) t);
      {
        ATerm k_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = n_39;
  return(t);
}
ATerm Binding_0_0 (ATerm t)
{
  ATerm l_40 = NULL;
  l_40 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, term_s_13, l_40);
        t = x_6(p_7, l_40, t);
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
              t = (ATerm) ATmakeAppl(sym__2, term_s_13, l_40);
              t = x_6(x_7, l_40, t);
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
                t = (ATerm) ATmakeAppl(sym__2, term_s_13, l_40);
                t = x_6(d_8, l_40, t);
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
ATerm alltd_1_0 (ATerm i_78 (ATerm), ATerm t)
{
  ATerm t_40 (ATerm t)
  {
    ATerm u_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_78(t);
        ;
        LocalPopChoice(v_24);
      }
    else
      {
        t = u_24;
        t = SRTS_all(t_40, t);
      }
    return(t);
  }
  t = t_40(t);
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm w_24 = t;
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
      t = w_24;
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
              int s_25 = stack_ptr;
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
                  LocalPopChoice(s_25);
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
                          ATerm b_26 = t;
                          int d_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = prop_traversal_1_0(cp_0_0, t);
                              ;
                              LocalPopChoice(d_26);
                            }
                          else
                            {
                              t = b_26;
                              {
                                ATerm e_26 = t;
                                int i_26 = stack_ptr;
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
                                    LocalPopChoice(i_26);
                                  }
                                else
                                  {
                                    t = e_26;
                                    {
                                      ATerm j_26 = t;
                                      int k_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = prop_choice_1_0(cp_0_0, t);
                                          ;
                                          LocalPopChoice(k_26);
                                        }
                                      else
                                        {
                                          t = j_26;
                                          {
                                            ATerm l_26 = t;
                                            int m_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm q_43 = NULL,w_43 = NULL,y_43 = NULL;
                                                q_43 = t;
                                                {
                                                  ATerm o_26 = t;
                                                  int s_26 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_Let_2))
                                                        {
                                                          ATerm t_26 = ATgetArgument(t, 0);
                                                          ATerm v_26 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(s_26);
                                                      t = q_43;
                                                      t = f_6(cp_0_0, t);
                                                    }
                                                  else
                                                    {
                                                      t = o_26;
                                                      {
                                                        ATerm x_26 = t;
                                                        int d_27 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm e_27 = ATgetArgument(t, 0);
                                                                ATerm f_27 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(d_27);
                                                            {
                                                              ATerm y_8 = NULL,z_8 = NULL,d_9 = NULL,e_9 = NULL,l_18 = NULL;
                                                              t = q_43;
                                                              if(match_cons(t, sym_Rec_2))
                                                                {
                                                                  z_8 = ATgetArgument(t, 0);
                                                                  d_9 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSLgetAnnotations(q_43);
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
                                                            t = x_26;
                                                            {
                                                              ATerm g_27 = t;
                                                              int h_27 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_Not_1))
                                                                    {
                                                                      ATerm j_27 = ATgetArgument(t, 0);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(h_27);
                                                                  t = q_43;
                                                                  t = d_6(cp_0_0, t);
                                                                }
                                                              else
                                                                {
                                                                  t = g_27;
                                                                  if(match_cons(t, sym_SDefT_4))
                                                                    {
                                                                      w_43 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm m_27 = ATgetArgument(t, 1);
                                                                      }
                                                                      y_43 = ATgetArgument(t, 2);
                                                                      {
                                                                        ATerm p_27 = ATgetArgument(t, 3);
                                                                      }
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  t = q_43;
                                                                  t = c_6(cp_0_0, w_43, y_43, t);
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
ATerm y_6 (ATerm x_49, ATerm y_49, ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL;
  f_44 = t;
  {
    ATerm s_27 = t;
    int t_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, x_49, y_49);
        t = k_7(x_49, y_49, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm u_27 = ATgetFirst((ATermList) t);
            e_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(t_27);
        t = SSL_table_put(x_49, y_49, e_44);
        t = (ATerm) ATmakeAppl(sym__3, x_49, y_49, e_44);
      }
    else
      {
        t = s_27;
        t = SSL_table_remove(x_49, y_49);
        t = (ATerm) ATmakeAppl(sym__2, x_49, y_49);
      }
    t = f_44;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm i_93 (ATerm), ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL;
  j_44 = t;
  t = i_93(t);
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
ATerm restore_always_2_0 (ATerm l_75 (ATerm), ATerm m_75 (ATerm), ATerm t)
{
  ATerm x_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_75(t);
      t = m_75(t);
      ;
      LocalPopChoice(y_27);
    }
  else
    {
      t = x_27;
      t = m_75(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm h_93 (ATerm), ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL;
  p_44 = t;
  t = h_93(t);
  o_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_44, term_c_20);
  {
    ATerm z_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_44 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm b_28 = ATgetArgument(t, 0);
            ATerm c_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_c_20;
        y_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_44, term_c_20);
        t = k_7(o_44, y_44, t);
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
ATerm scope_2_0 (ATerm j_93 (ATerm), ATerm k_93 (ATerm), ATerm t)
{
  ATerm h_8 (ATerm t)
  {
    t = end_scope_1_0(j_93, t);
    return(t);
  }
  t = begin_scope_1_0(j_93, t);
  t = restore_always_2_0(k_93, h_8, t);
  return(t);
}
ATerm map_1_0 (ATerm h_82 (ATerm), ATerm t)
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
        t = h_82(t);
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
ATerm Cons_2_0 (ATerm a_61 (ATerm), ATerm b_61 (ATerm), ATerm t)
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
  t = a_61(t);
  x_45 = t;
  t = w_45;
  t = b_61(t);
  y_45 = t;
  t = (ATerm) ATinsert(CheckATermList(y_45), x_45);
  q_18 = t;
  t = SSLsetAnnotations(q_18, u_45);
  return(t);
}
ATerm b_7 (ATerm d_40, ATerm e_40, ATerm t)
{
  ATerm a_46 = NULL;
  t = SSL_fputc(d_40, e_40);
  a_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_46);
  return(t);
}
ATerm c_7 (ATerm r_43, ATerm s_43, ATerm t)
{
  ATerm b_46 = NULL;
  t = SSL_write_term_to_stream_text(r_43, s_43);
  b_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_46);
  return(t);
}
ATerm e_7 (ATerm e_95 (ATerm), ATerm t_428, ATerm v_43, ATerm t)
{
  ATerm c_46 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_428, term_d_28);
  t = h_7(t);
  c_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_46, v_43);
  t = e_95(t);
  t = fclose_0_0(t);
  t = v_43;
  return(t);
}
ATerm d_7 (ATerm n_43, ATerm o_43, ATerm t)
{
  ATerm d_46 = NULL;
  t = SSL_write_term_to_stream_baf(n_43, o_43);
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
  ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,p_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL,v_46 = NULL,v_47 = NULL,w_47 = NULL,u_18 = NULL,t_18 = NULL;
  i_46 = t;
  if(match_cons(t, sym__2))
    {
      t_46 = ATgetArgument(t, 0);
      u_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_46);
  s_46 = t;
  t = t_46;
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
    v_46 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_46, u_46);
    t_18 = t;
    t = SSLsetAnnotations(t_18, s_46);
    t = i_46;
    if(match_cons(t, sym__2))
      {
        k_46 = ATgetArgument(t, 0);
        p_46 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(i_46);
    j_46 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_46, (ATerm) ATmakeAppl(sym__2, not_null(h_46), p_46));
    u_18 = t;
    t = SSLsetAnnotations(u_18, j_46);
    r_46 = t;
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
          ATerm c_10 = NULL,m_10 = NULL,n_10 = NULL,p_10 = NULL,q_10 = NULL,v_18 = NULL;
          t = SSLgetAnnotations(r_46);
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
          v_18 = t;
          t = SSLsetAnnotations(v_18, c_10);
          ;
          LocalPopChoice(l_28);
        }
      else
        {
          t = k_28;
          {
            ATerm b_11 = NULL,g_11 = NULL,h_11 = NULL,m_11 = NULL,y_18 = NULL;
            t = SSLgetAnnotations(r_46);
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
            y_18 = t;
            t = SSLsetAnnotations(y_18, b_11);
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
ATerm apply_strategy_1_0 (ATerm g_98 (ATerm), ATerm t)
{
  ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL;
  d_48 = t;
  t = dtime_0_0(t);
  t = d_48;
  t = g_98(t);
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
ATerm f_7 (ATerm t_43, ATerm t)
{
  t = SSL_read_term_from_stream(t_43);
  return(t);
}
ATerm g_7 (ATerm f_40, ATerm g_40, ATerm t)
{
  ATerm s_48 = NULL;
  t = SSL_fopen(f_40, g_40);
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
ATerm q_50 (ATerm g_49, ATerm t)
{
  ATerm h_49 = NULL;
  t = SSL_explode_term(g_49);
  if(match_cons(t, sym__2))
    {
      ATerm o_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_28 = ATgetArgument(t, 1);
        if(((ATgetType(p_28) == AT_LIST) && !(ATisEmpty(p_28))))
          {
            h_49 = ATgetFirst((ATermList) p_28);
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
  t = h_49;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_49;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_49;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_49;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm r_50 (ATerm k_49, ATerm l_49, ATerm m_49, ATerm t)
{
  ATerm n_49 = NULL,o_49 = NULL,q_49 = NULL,z_49 = NULL,d_19 = NULL;
  t = SSLgetAnnotations(m_49);
  q_49 = t;
  t = k_49;
  if(match_cons(t, sym_Path_1))
    {
      z_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_49, l_49);
  d_19 = t;
  t = SSLsetAnnotations(d_19, q_49);
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
ATerm y_50 (ATerm b_50, ATerm c_50, ATerm f_50, ATerm t)
{
  ATerm g_50 = NULL,h_50 = NULL,i_50 = NULL,l_50 = NULL,e_19 = NULL;
  t = SSLgetAnnotations(f_50);
  i_50 = t;
  t = SSL_is_string(b_50);
  l_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_50, c_50);
  e_19 = t;
  t = SSLsetAnnotations(e_19, i_50);
  if(match_cons(t, sym__2))
    {
      g_50 = ATgetArgument(t, 0);
      h_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7(g_50, h_50, t);
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
                  t = y_50(o_50, p_50, n_50, t);
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
  ATerm z_50 = NULL,a_51 = NULL,b_51 = NULL;
  ATerm w_28 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_51 = NULL;
      c_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_51, term_y_28);
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
  a_51 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_7(b_51, t);
  z_50 = t;
  t = a_51;
  t = fclose_0_0(t);
  t = z_50;
  return(t);
}
ATerm fetch_1_0 (ATerm r_82 (ATerm), ATerm t)
{
  ATerm k_52 (ATerm t)
  {
    ATerm h_52 = NULL,i_52 = NULL,j_52 = NULL;
    h_52 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_52 = ATgetFirst((ATermList) t);
        j_52 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm d_29 = t;
      int e_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_13 = NULL,g_13 = NULL,h_19 = NULL;
          t = SSLgetAnnotations(h_52);
          c_13 = t;
          t = i_52;
          t = r_82(t);
          g_13 = t;
          t = (ATerm) ATinsert(CheckATermList(j_52), g_13);
          h_19 = t;
          t = SSLsetAnnotations(h_19, c_13);
          ;
          LocalPopChoice(e_29);
        }
      else
        {
          t = d_29;
          {
            ATerm v_13 = NULL,z_13 = NULL,i_19 = NULL;
            t = SSLgetAnnotations(h_52);
            v_13 = t;
            t = j_52;
            t = k_52(t);
            z_13 = t;
            t = (ATerm) ATinsert(CheckATermList(z_13), i_52);
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
ATerm a_7 (ATerm s_34, ATerm t_34, ATerm t)
{
  t = SSL_strcat(s_34, t_34);
  return(t);
}
ATerm debug_1_0 (ATerm c_95 (ATerm), ATerm t)
{
  ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL;
  n_52 = t;
  t = c_95(t);
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
  ATerm f_29 = t;
  int g_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(g_29);
    }
  else
    {
      t = f_29;
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
        ATerm k_29 = t;
        int l_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(s_8, t);
            ;
            LocalPopChoice(l_29);
          }
        else
          {
            t = k_29;
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
                        ATerm m_29 = t;
                        int q_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(q_29);
                          }
                        else
                          {
                            t = m_29;
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
  t = term_r_29;
  p_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_29, o_53);
  t = k_7(p_53, o_53, t);
  {
    ATerm s_29 = t;
    int t_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_53 = NULL,r_53 = NULL;
        t = eval_config_0_0(t);
        q_53 = t;
        t = term_r_29;
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
ATerm if_verbose2_1_0 (ATerm p_96 (ATerm), ATerm t)
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
        t = p_96(t);
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
  t = term_y_29;
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
  t = term_z_29;
  h_54 = t;
  t = term_b_30;
  t = n_7(g_54, h_54, t);
  t = term_c_30;
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
ATerm n_7 (ATerm u_44, ATerm v_44, ATerm t)
{
  ATerm n_54 = NULL;
  t = term_r_29;
  n_54 = t;
  t = SSL_table_put(n_54, u_44, v_44);
  t = (ATerm) ATmakeAppl(sym__3, term_r_29, u_44, v_44);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm q_54 = NULL,r_54 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_54 = NULL,t_54 = NULL,u_54 = NULL;
      t = term_f_13;
      t = f_0(t);
      s_54 = t;
      t = term_q_30;
      t_54 = t;
      t = term_r_30;
      u_54 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_30, term_r_30, s_54);
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
      t = d_0(t);
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
ATerm l_7 (ATerm s_49, ATerm t_49, ATerm r_49, ATerm t)
{
  ATerm d_55 = NULL,e_55 = NULL,f_55 = NULL;
  d_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_49, t_49);
  {
    ATerm v_30 = t;
    int w_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_31 = ATgetArgument(t, 0);
            ATerm b_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, s_49, t_49);
        t = k_7(s_49, t_49, t);
        ;
        LocalPopChoice(w_30);
      }
    else
      {
        t = v_30;
        t = (ATerm) ATempty;
      }
    e_55 = t;
    t = (ATerm) ATinsert(CheckATermList(e_55), r_49);
    f_55 = t;
    t = SSL_table_put(s_49, t_49, f_55);
    t = d_55;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_55 = NULL,x_55 = NULL,y_55 = NULL;
      t = term_f_13;
      t = r_0(t);
      w_55 = t;
      t = term_q_30;
      x_55 = t;
      t = term_r_30;
      y_55 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_30, term_r_30, w_55);
      t = l_7(x_55, y_55, w_55, t);
      _fail(t);
    }
  else
    {
      ATerm c_56 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_55 = ATgetFirst((ATermList) t);
          t_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_55;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_55 = ATgetFirst((ATermList) t);
          v_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_55;
      t = l_0(t);
      t = u_55;
      t = m_0(t);
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
  ATerm f_56 = NULL,k_56 = NULL;
  f_56 = t;
  t = term_c_31;
  k_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_31, f_56);
  t = n_7(k_56, f_56, t);
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
  ATerm l_56 = NULL,m_56 = NULL,n_56 = NULL,o_56 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_13;
  t = whoami_0_0(t);
  l_56 = t;
  t = term_h_13;
  n_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_31), l_56);
  o_56 = t;
  t = SSL_printnl(n_56, o_56);
  t = term_n_13;
  m_56 = t;
  t = SSL_exit(m_56);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_h_31;
  t = get_config_0_0(t);
  return(t);
}
ATerm i_7 (ATerm d_37, ATerm e_37, ATerm t)
{
  ATerm j_31 = t;
  int k_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(d_37, e_37);
      ;
      LocalPopChoice(k_31);
    }
  else
    {
      t = j_31;
      t = SSL_addr(d_37, e_37);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm k_88 (ATerm), ATerm l_88 (ATerm), ATerm t)
{
  ATerm q_56 = NULL,r_56 = NULL,s_56 = NULL;
  q_56 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_56;
      t = k_88(t);
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
      t = foldr_2_0(k_88, l_88, t);
      v_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_56, v_56);
      t = l_88(t);
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
  t = term_z_29;
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
    ATerm m_31 = t;
    int n_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_57;
        if((k_57 != t))
          {
            _fail(t);
          }
        t = j_57;
        ;
        LocalPopChoice(n_31);
      }
    else
      {
        t = m_31;
        t = (ATerm) ATmakeAppl(sym__2, k_57, l_57);
        {
          ATerm p_31 = t;
          int r_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_57, l_57);
              ;
              LocalPopChoice(r_31);
            }
          else
            {
              t = p_31;
              t = SSL_gtr(k_57, l_57);
            }
          t = (ATerm) ATmakeAppl(sym__2, k_57, l_57);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm o_96 (ATerm), ATerm t)
{
  ATerm p_57 = NULL;
  p_57 = t;
  {
    ATerm s_31 = t;
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
        t = o_96(t);
        ;
        LocalPopChoice(u_31);
      }
    else
      {
        t = s_31;
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
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_31), t_57), term_v_31), u_57);
  x_57 = t;
  t = SSL_printnl(w_57, x_57);
  t = (ATerm) ATmakeAppl(sym__2, term_h_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_31), t_57), term_v_31), u_57));
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
  t = term_z_29;
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
            ATerm h_16 = NULL,n_19 = NULL;
            t = SSLgetAnnotations(h_58);
            h_16 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, g_58);
            n_19 = t;
            t = SSLsetAnnotations(n_19, h_16);
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
ATerm need_help_1_0 (ATerm e_99 (ATerm), ATerm t)
{
  ATerm a_32 = t;
  int b_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_32;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_32);
    }
  else
    {
      t = a_32;
      t = fetch_1_0(h_10, t);
    }
  t = e_99(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
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
        t = j_0(t);
        if(((p_58 != NULL) && (p_58 != t)))
          _fail(t);
        else
          p_58 = t;
        t = k_58;
        t = h_0(t);
        if(((q_58 != NULL) && (q_58 != t)))
          _fail(t);
        else
          q_58 = t;
        t = l_58;
        t = reverse_acc_2_0(h_0, i_10, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_13;
      t = j_0(t);
    }
  return(t);
}
ATerm k_7 (ATerm j_51, ATerm k_51, ATerm t)
{
  t = SSL_table_get(j_51, k_51);
  return(t);
}
ATerm j_10 (ATerm t)
{
  ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL,p_19 = NULL;
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
  p_19 = t;
  t = SSLsetAnnotations(p_19, u_58);
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
      t = term_h_31;
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
  t = term_q_30;
  s_58 = t;
  t = term_r_30;
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
  t = term_h_31;
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
  int v_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_10, v_10, w_10, t);
      ;
      LocalPopChoice(v_32);
    }
  else
    {
      t = u_32;
      t = Option_3_0(x_10, y_10, z_10, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_101 (ATerm), ATerm t)
{
  ATerm q_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL,v_59 = NULL,w_59 = NULL,r_19 = NULL;
  q_59 = t;
  {
    ATerm w_32 = t;
    int z_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_33;
        t = h_101(t);
        ;
        LocalPopChoice(z_32);
      }
    else
      {
        t = w_32;
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
    t = term_h_31;
    w_59 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_h_31, s_59);
    t = n_7(w_59, s_59, t);
    t = t_59;
    {
      ATerm g_60 (ATerm t)
      {
        ATerm b_33 = t;
        int f_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_33 = t;
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
                t = g_33;
                t = h_101(t);
                t = Cons_2_0(_id, g_60, t);
              }
            ;
            LocalPopChoice(f_33);
          }
        else
          {
            t = b_33;
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
      r_19 = t;
      t = SSLsetAnnotations(r_19, r_59);
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
  t = term_c_32;
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
ATerm parse_options_1_0 (ATerm g_101 (ATerm), ATerm t)
{
  ATerm l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL,q_60 = NULL,r_60 = NULL;
  n_60 = t;
  t = term_q_30;
  p_60 = t;
  t = term_r_30;
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
          t = g_101(t);
          ;
          LocalPopChoice(n_33);
        }
      else
        {
          t = m_33;
          {
            ATerm o_33 = t;
            int r_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_11, d_11, e_11, t);
                ;
                LocalPopChoice(r_33);
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
      ATerm s_33 = t;
      int t_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_61 = NULL;
          d_61 = t;
          {
            ATerm u_33 = t;
            int v_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_16 = NULL;
                t = d_61;
                {
                  ATerm w_33 = t;
                  int x_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_c_32;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(x_33);
                    }
                  else
                    {
                      t = w_33;
                      t = fetch_1_0(f_11, t);
                    }
                  t = d_61;
                  t = default_system_usage_0_0(t);
                  t = term_z_29;
                  u_16 = t;
                  t = SSL_exit(u_16);
                }
                ;
                LocalPopChoice(v_33);
              }
            else
              {
                t = u_33;
                {
                  ATerm f_17 = NULL;
                  t = term_n_32;
                  t = get_config_0_0(t);
                  t = d_61;
                  t = default_system_about_0_0(t);
                  t = term_z_29;
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
          t = s_33;
          {
            ATerm c_34 = t;
            int d_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_61 = NULL,f_61 = NULL,g_61 = NULL;
                ATerm i_11 (ATerm t)
                {
                  ATerm h_61 = NULL,i_61 = NULL,j_61 = NULL,t_19 = NULL;
                  j_61 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      i_61 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(j_61);
                  h_61 = t;
                  t = i_61;
                  if(((l_60 != NULL) && (l_60 != t)))
                    _fail(t);
                  else
                    l_60 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, i_61);
                  t_19 = t;
                  t = SSLsetAnnotations(t_19, h_61);
                  return(t);
                }
                t = fetch_1_0(i_11, t);
                t = term_h_13;
                f_61 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_60)), term_i_34);
                g_61 = t;
                t = SSL_printnl(f_61, g_61);
                t = (ATerm) ATmakeAppl(sym__2, term_h_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_60)), term_i_34));
                t = default_system_usage_0_0(t);
                t = term_n_13;
                e_61 = t;
                t = SSL_exit(e_61);
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
      t = term_q_30;
      o_60 = t;
      t = SSL_table_destroy(o_60);
      t = m_60;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm g_99 (ATerm), ATerm h_99 (ATerm), ATerm i_99 (ATerm), ATerm j_99 (ATerm), ATerm t)
{
  ATerm o_61 = NULL,p_61 = NULL,q_61 = NULL,r_61 = NULL;
  t = parse_options_1_0(g_99, t);
  o_61 = t;
  t = term_j_34;
  r_61 = t;
  t = SSL_table_create(r_61);
  t = term_j_34;
  p_61 = t;
  t = term_n_34;
  q_61 = t;
  t = SSL_table_put(p_61, q_61, o_61);
  t = o_61;
  t = i_99(t);
  {
    ATerm o_34 = t;
    int p_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(h_99, t);
        ;
        LocalPopChoice(p_34);
      }
    else
      {
        t = o_34;
        {
          ATerm q_34 = t;
          int r_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_99(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(r_34);
            }
          else
            {
              t = q_34;
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
  t = term_u_34;
  s_61 = t;
  t = term_f_13;
  t_61 = t;
  t = term_w_34;
  t = n_7(s_61, t_61, t);
  t = term_x_34;
  return(t);
}
ATerm n_12 (ATerm t)
{
  t = term_y_34;
  return(t);
}
ATerm o_12 (ATerm t)
{
  ATerm u_61 = NULL,v_61 = NULL,w_61 = NULL,x_61 = NULL;
  u_61 = t;
  t = term_h_31;
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
ATerm iowrap_3_0 (ATerm p_98 (ATerm), ATerm q_98 (ATerm), ATerm r_98 (ATerm), ATerm t)
{
  ATerm h_12 (ATerm t)
  {
    ATerm z_34 = t;
    int b_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_98(t);
        ;
        LocalPopChoice(b_35);
      }
    else
      {
        t = z_34;
        {
          ATerm f_35 = t;
          int g_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(g_35);
            }
          else
            {
              t = f_35;
              {
                ATerm i_35 = t;
                int j_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(j_35);
                  }
                else
                  {
                    t = i_35;
                    {
                      ATerm k_35 = t;
                      int m_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(l_12, m_12, n_12, t);
                          ;
                          LocalPopChoice(m_35);
                        }
                      else
                        {
                          t = k_35;
                          {
                            ATerm n_35 = t;
                            int q_35 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(q_35);
                              }
                            else
                              {
                                t = n_35;
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
      t = apply_strategy_1_0(p_98, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(h_12, r_98, i_12, j_12, t);
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

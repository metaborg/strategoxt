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
ATerm term_b_36;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_i_33;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_z_29;
ATerm term_u_29;
ATerm term_k_29;
ATerm term_f_29;
ATerm term_c_29;
ATerm term_g_28;
ATerm term_d_28;
ATerm term_a_28;
ATerm term_n_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_w_24;
ATerm term_d_24;
ATerm term_q_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_b_20;
ATerm term_m_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_a_14;
ATerm term_y_13;
ATerm term_t_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_n_13;
void init_constant_terms (void)
{
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_d_14);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym__2, term_e_14, (ATerm) ATempty);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("no match with current term: ", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("strat: ", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("current: ", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym__2, term_l_20, term_i_30);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_30);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(sym__2, term_n_30, term_n_13);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym__2, term_y_30, term_z_30);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(sym__2, term_p_32, term_n_13);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym__2, term_v_32, term_n_13);
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(sym__2, term_c_32, term_n_13);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym__2, term_c_35, term_n_13);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm a_0 (ATerm);
ATerm o_0 (ATerm);
ATerm p_0 (ATerm);
ATerm q_0 (ATerm);
ATerm c_6 (ATerm k_74 (ATerm), ATerm v_18, ATerm w_18, ATerm);
ATerm v_0 (ATerm);
ATerm w_0 (ATerm);
ATerm exec_maybe_1_0 (ATerm b_74 (ATerm), ATerm);
ATerm g_6 (ATerm g_93 (ATerm), ATerm n_38, ATerm l_38, ATerm);
ATerm r_1 (ATerm);
ATerm d_6 (ATerm l_74 (ATerm), ATerm);
ATerm k_2 (ATerm);
ATerm d_8 (ATerm z_4, ATerm b_5, ATerm c_5, ATerm);
ATerm isect_CurrentTerm_0_0 (ATerm);
ATerm l_2 (ATerm);
ATerm c_11 (ATerm g_9, ATerm j_9, ATerm p_9, ATerm);
ATerm isect_Binding_0_0 (ATerm);
ATerm e_6 (ATerm r_50, ATerm q_50, ATerm);
ATerm save_CurrentTerm_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm save_Binding_0_0 (ATerm);
ATerm prop_abstract_choice_2_0 (ATerm p_74 (ATerm), ATerm q_74 (ATerm), ATerm);
ATerm prop_choice_1_0 (ATerm o_74 (ATerm), ATerm);
ATerm o_4 (ATerm);
ATerm q_4 (ATerm);
ATerm prop_traversal_1_0 (ATerm t_0 (ATerm), ATerm);
ATerm w_4 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm j_5 (ATerm);
ATerm prop_call_1_0 (ATerm s_0 (ATerm), ATerm);
ATerm q_5 (ATerm);
ATerm b_6 (ATerm);
ATerm j_6 (ATerm);
ATerm n_6 (ATerm);
ATerm f_6 (ATerm j_74 (ATerm), ATerm q_18, ATerm);
ATerm o_6 (ATerm);
ATerm prop_build_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm p_77 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm l_96 (ATerm), ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm h_6 (ATerm j_19, ATerm k_19, ATerm);
ATerm lookup_0_0 (ATerm);
ATerm s_6 (ATerm);
ATerm w_6 (ATerm);
ATerm f_7 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm g_101 (ATerm), ATerm h_101 (ATerm), ATerm);
ATerm r_6 (ATerm s_104 (ATerm), ATerm d_55, ATerm e_55, ATerm g_55, ATerm f_55, ATerm);
ATerm at_end_1_0 (ATerm s_82 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm x_25 (ATerm p_25, ATerm);
ATerm conc_0_0 (ATerm);
ATerm genzip_4_0 (ATerm f_84 (ATerm), ATerm g_84 (ATerm), ATerm h_84 (ATerm), ATerm i_84 (ATerm), ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm l_6 (ATerm x_598, ATerm c_599, ATerm f_56, ATerm);
ATerm while_not_2_0 (ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm);
ATerm for_3_0 (ATerm f_76 (ATerm), ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm);
ATerm r_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm u_37 (ATerm o_32, ATerm r_32, ATerm s_32, ATerm);
ATerm z_37 (ATerm e_33, ATerm f_33, ATerm g_33, ATerm);
ATerm b_38 (ATerm b_34, ATerm c_34, ATerm d_34, ATerm);
ATerm q_38 (ATerm x_34, ATerm z_34, ATerm a_35, ATerm);
ATerm u_38 (ATerm n_35, ATerm q_35, ATerm r_35, ATerm);
ATerm v_7 (ATerm);
ATerm prop_pattern_match_0_0 (ATerm);
ATerm CurrentTerm_0_0 (ATerm);
ATerm u_6 (ATerm z_49, ATerm a_50, ATerm);
ATerm Binding_0_0 (ATerm);
ATerm alltd_1_0 (ATerm d_78 (ATerm), ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm b_8 (ATerm);
ATerm prop_match_0_0 (ATerm);
ATerm c_8 (ATerm);
ATerm cp_0_0 (ATerm);
ATerm v_6 (ATerm t_49, ATerm u_49, ATerm);
ATerm end_scope_1_0 (ATerm d_93 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm g_75 (ATerm), ATerm h_75 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm c_93 (ATerm), ATerm);
ATerm scope_2_0 (ATerm e_93 (ATerm), ATerm f_93 (ATerm), ATerm);
ATerm map_1_0 (ATerm c_82 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm w_60 (ATerm), ATerm x_60 (ATerm), ATerm);
ATerm y_6 (ATerm z_39, ATerm a_40, ATerm);
ATerm z_6 (ATerm n_43, ATerm o_43, ATerm);
ATerm b_7 (ATerm z_94 (ATerm), ATerm n_424, ATerm r_43, ATerm);
ATerm a_7 (ATerm j_43, ATerm k_43, ATerm);
ATerm k_8 (ATerm);
ATerm l_8 (ATerm);
ATerm n_8 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm b_98 (ATerm), ATerm);
ATerm s_48 (ATerm m_48, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm c_7 (ATerm p_43, ATerm);
ATerm d_7 (ATerm b_40, ATerm c_40, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm x_50 (ATerm h_49, ATerm);
ATerm y_50 (ATerm m_49, ATerm q_49, ATerm r_49, ATerm);
ATerm z_50 (ATerm e_50, ATerm f_50, ATerm g_50, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm o_8 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm m_82 (ATerm), ATerm);
ATerm x_6 (ATerm p_34, ATerm q_34, ATerm);
ATerm debug_1_0 (ATerm x_94 (ATerm), ATerm);
ATerm r_8 (ATerm);
ATerm s_8 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm k_96 (ATerm), ATerm);
ATerm t_8 (ATerm);
ATerm u_8 (ATerm);
ATerm w_8 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm c_9 (ATerm);
ATerm d_9 (ATerm);
ATerm f_9 (ATerm);
ATerm h_9 (ATerm);
ATerm o_9 (ATerm);
ATerm q_9 (ATerm);
ATerm r_9 (ATerm);
ATerm s_9 (ATerm);
ATerm t_9 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm j_7 (ATerm q_44, ATerm r_44, ATerm);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm u_9 (ATerm);
ATerm w_9 (ATerm);
ATerm x_9 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm h_7 (ATerm o_49, ATerm p_49, ATerm n_49, ATerm);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm y_9 (ATerm);
ATerm d_10 (ATerm);
ATerm f_10 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm e_7 (ATerm z_36, ATerm a_37, ATerm);
ATerm foldr_2_0 (ATerm f_88 (ATerm), ATerm g_88 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm g_10 (ATerm);
ATerm i_10 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm j_96 (ATerm), ATerm);
ATerm k_10 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm l_10 (ATerm);
ATerm need_help_1_0 (ATerm z_98 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm g_7 (ATerm f_51, ATerm g_51, ATerm);
ATerm o_10 (ATerm);
ATerm p_10 (ATerm);
ATerm r_10 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm t_10 (ATerm);
ATerm u_10 (ATerm);
ATerm w_10 (ATerm);
ATerm x_10 (ATerm);
ATerm y_10 (ATerm);
ATerm z_10 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm c_101 (ATerm), ATerm);
ATerm b_11 (ATerm);
ATerm n_11 (ATerm);
ATerm a_12 (ATerm);
ATerm b_12 (ATerm);
ATerm parse_options_1_0 (ATerm b_101 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm b_99 (ATerm), ATerm c_99 (ATerm), ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm);
ATerm g_12 (ATerm);
ATerm i_12 (ATerm);
ATerm j_12 (ATerm);
ATerm v_12 (ATerm);
ATerm w_12 (ATerm);
ATerm iowrap_3_0 (ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm m_98 (ATerm), ATerm);
ATerm f_13 (ATerm);
ATerm g_13 (ATerm);
ATerm h_13 (ATerm);
ATerm i_13 (ATerm);
ATerm k_13 (ATerm);
ATerm l_13 (ATerm);
ATerm m_13 (ATerm);
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
  t = term_n_13;
  t = whoami_0_0(t);
  z_0 = t;
  t = term_q_13;
  d_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_13), z_0), term_r_13);
  f_1 = t;
  t = SSL_printnl(d_1, f_1);
  t = term_y_13;
  c_1 = t;
  t = SSL_exit(c_1);
  t = y_0;
  return(t);
}
ATerm a_0 (ATerm t)
{
  t = term_a_14;
  return(t);
}
ATerm o_0 (ATerm t)
{
  ATerm t_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      t_1 = ATgetArgument(t, 0);
      {
        ATerm b_14 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, t_1);
  v_1 = t;
  t = term_d_14;
  w_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, t_1), term_d_14);
  t = g_6(p_0, v_1, w_1, t);
  t = u_1;
  return(t);
}
ATerm p_0 (ATerm t)
{
  t = term_a_14;
  return(t);
}
ATerm q_0 (ATerm t)
{
  t = term_e_14;
  return(t);
}
ATerm c_6 (ATerm k_74 (ATerm), ATerm v_18, ATerm w_18, ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    ATerm g_1 = NULL,i_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL,s_1 = NULL,n_0 = NULL;
    g_1 = t;
    t = w_18;
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
    t = term_d_14;
    s_1 = t;
    t = term_f_14;
    t = g_6(q_0, q_1, s_1, t);
    t = o_1;
    t = k_74(t);
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
  t = term_e_14;
  return(t);
}
ATerm w_0 (ATerm t)
{
  t = term_e_14;
  return(t);
}
ATerm exec_maybe_1_0 (ATerm b_74 (ATerm), ATerm t)
{
  ATerm x_1 = NULL,y_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL;
  z_1 = t;
  t = (ATerm) ATempty;
  e_2 = t;
  t = term_d_14;
  f_2 = t;
  t = term_f_14;
  t = g_6(v_0, e_2, f_2, t);
  t = z_1;
  t = save_Binding_0_0(t);
  x_1 = t;
  t = z_1;
  t = b_74(t);
  y_1 = t;
  t = (ATerm) ATempty;
  c_2 = t;
  t = term_d_14;
  d_2 = t;
  t = term_f_14;
  t = g_6(w_0, c_2, d_2, t);
  t = term_a_14;
  b_2 = t;
  t = SSL_table_destroy(b_2);
  t = term_a_14;
  a_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_14, x_1);
  t = e_6(a_2, x_1, t);
  t = y_1;
  return(t);
}
ATerm g_6 (ATerm g_93 (ATerm), ATerm n_38, ATerm l_38, ATerm t)
{
  ATerm g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL,p_2 = NULL,r_2 = NULL;
  j_2 = t;
  t = g_93(t);
  g_2 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_2, n_38, l_38);
  t = h_7(g_2, n_38, l_38, t);
  {
    ATerm i_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_2 = NULL;
        t = term_m_14;
        t_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_2, term_m_14);
        t = g_7(g_2, t_2, t);
        ;
        LocalPopChoice(j_14);
      }
    else
      {
        t = i_14;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_2 = ATgetFirst((ATermList) t);
        i_2 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_m_14;
    p_2 = t;
    t = (ATerm) ATinsert(CheckATermList(i_2), (ATerm) ATinsert(CheckATermList(h_2), n_38));
    r_2 = t;
    t = SSL_table_put(g_2, p_2, r_2);
    t = j_2;
  }
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_e_14;
  return(t);
}
ATerm d_6 (ATerm l_74 (ATerm), ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,i_3 = NULL,n_3 = NULL,o_3 = NULL,z_3 = NULL,y_4 = NULL;
  y_2 = t;
  t = save_Binding_0_0(t);
  x_2 = t;
  t = save_CurrentTerm_0_0(t);
  w_2 = t;
  t = y_2;
  if(match_cons(t, sym_Let_2))
    {
      a_3 = ATgetArgument(t, 0);
      b_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_2);
  z_2 = t;
  t = a_3;
  {
    ATerm x_0 (ATerm t)
    {
      ATerm a_4 = NULL,c_4 = NULL,d_4 = NULL,f_4 = NULL,g_4 = NULL;
      a_4 = t;
      t = (ATerm) ATempty;
      f_4 = t;
      t = term_d_14;
      g_4 = t;
      t = term_f_14;
      t = g_6(r_1, f_4, g_4, t);
      t = term_a_14;
      d_4 = t;
      t = SSL_table_destroy(d_4);
      t = term_a_14;
      c_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_a_14, x_2);
      t = e_6(c_4, x_2, t);
      t = a_4;
      t = l_74(t);
      return(t);
    }
    t = map_1_0(x_0, t);
    c_3 = t;
    t = term_e_14;
    z_3 = t;
    t = SSL_table_destroy(z_3);
    t = term_e_14;
    o_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_e_14, w_2);
    t = e_6(o_3, w_2, t);
    t = term_a_14;
    n_3 = t;
    t = SSL_table_destroy(n_3);
    t = term_a_14;
    i_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_a_14, x_2);
    t = e_6(i_3, x_2, t);
    t = b_3;
    t = l_74(t);
    d_3 = t;
    t = (ATerm) ATmakeAppl(sym_Let_2, c_3, d_3);
    y_4 = t;
    t = SSLsetAnnotations(y_4, z_2);
  }
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm l_5 = NULL,m_5 = NULL,p_5 = NULL,t_5 = NULL,i_6 = NULL;
  i_6 = t;
  if(match_cons(t, sym__2))
    {
      l_5 = ATgetArgument(t, 0);
      m_5 = ATgetArgument(t, 1);
      t = m_5;
      {
        ATerm s_14 = t;
        int t_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                p_5 = ATgetFirst((ATermList) t);
                {
                  ATerm v_14 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(t_14);
            t = p_5;
            {
              ATerm x_14 = t;
              int y_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm z_14 = ATgetArgument(t, 0);
                      t_5 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(y_14);
                  t = l_5;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = i_6;
                    }
                  else
                    {
                      ATerm a_15 = t;
                      int c_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = d_8(l_5, t_5, i_6, t);
                          ;
                          LocalPopChoice(c_15);
                        }
                      else
                        {
                          t = a_15;
                          t = i_6;
                        }
                    }
                }
              else
                {
                  t = x_14;
                  t = l_5;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = i_6;
                    }
                  else
                    {
                      t = i_6;
                    }
                }
            }
          }
        else
          {
            t = s_14;
            t = l_5;
            if(match_cons(t, sym_Scopes_0))
              {
                t = i_6;
              }
            else
              {
                t = i_6;
              }
          }
      }
    }
  else
    {
      t = i_6;
    }
  return(t);
}
ATerm d_8 (ATerm z_4, ATerm b_5, ATerm c_5, ATerm t)
{
  t = c_5;
  {
    ATerm d_15 = t;
    int h_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 = NULL;
        t = term_e_14;
        e_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_14, z_4);
        t = g_7(e_0, z_4, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm i_15 = ATgetFirst((ATermList) t);
            if(match_cons(i_15, sym_Defined_2))
              {
                ATerm g_16 = ATgetArgument(i_15, 0);
                if((b_5 != ATgetArgument(i_15, 1)))
                  {
                    _fail(ATgetArgument(i_15, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm u_15 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = c_5;
        ;
        LocalPopChoice(h_15);
      }
    else
      {
        t = d_15;
        t = (ATerm) ATmakeAppl(sym__2, z_4, (ATerm) ATinsert(ATempty, term_d_14));
      }
  }
  return(t);
}
ATerm isect_CurrentTerm_0_0 (ATerm t)
{
  ATerm t_4 = NULL,u_4 = NULL,v_4 = NULL;
  t = map_1_0(k_2, t);
  t_4 = t;
  t = term_e_14;
  v_4 = t;
  t = SSL_table_destroy(v_4);
  t = term_e_14;
  u_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_14, t_4);
  t = e_6(u_4, t_4, t);
  t = t_4;
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm e_10 = NULL,h_10 = NULL,j_10 = NULL,m_10 = NULL,s_10 = NULL;
  s_10 = t;
  if(match_cons(t, sym__2))
    {
      e_10 = ATgetArgument(t, 0);
      h_10 = ATgetArgument(t, 1);
      t = h_10;
      {
        ATerm h_16 = t;
        int i_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_10 = ATgetFirst((ATermList) t);
                {
                  ATerm j_16 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(i_16);
            t = j_10;
            {
              ATerm k_16 = t;
              int l_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm m_16 = ATgetArgument(t, 0);
                      m_10 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(l_16);
                  t = e_10;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = s_10;
                    }
                  else
                    {
                      ATerm n_16 = t;
                      int o_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = c_11(e_10, m_10, s_10, t);
                          ;
                          LocalPopChoice(o_16);
                        }
                      else
                        {
                          t = n_16;
                          t = s_10;
                        }
                    }
                }
              else
                {
                  t = k_16;
                  t = e_10;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = s_10;
                    }
                  else
                    {
                      t = s_10;
                    }
                }
            }
          }
        else
          {
            t = h_16;
            t = e_10;
            if(match_cons(t, sym_Scopes_0))
              {
                t = s_10;
              }
            else
              {
                t = s_10;
              }
          }
      }
    }
  else
    {
      t = s_10;
    }
  return(t);
}
ATerm c_11 (ATerm g_9, ATerm j_9, ATerm p_9, ATerm t)
{
  t = p_9;
  {
    ATerm p_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_0 = NULL;
        t = term_a_14;
        u_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_a_14, g_9);
        t = g_7(u_0, g_9, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_16 = ATgetFirst((ATermList) t);
            if(match_cons(s_16, sym_Defined_2))
              {
                ATerm u_16 = ATgetArgument(s_16, 0);
                if((j_9 != ATgetArgument(s_16, 1)))
                  {
                    _fail(ATgetArgument(s_16, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm t_16 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = p_9;
        ;
        LocalPopChoice(r_16);
      }
    else
      {
        t = p_16;
        t = (ATerm) ATmakeAppl(sym__2, g_9, (ATerm) ATinsert(ATempty, term_d_14));
      }
  }
  return(t);
}
ATerm isect_Binding_0_0 (ATerm t)
{
  ATerm v_8 = NULL,y_8 = NULL,e_9 = NULL;
  t = map_1_0(l_2, t);
  v_8 = t;
  t = term_a_14;
  e_9 = t;
  t = SSL_table_destroy(e_9);
  t = term_a_14;
  y_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_14, v_8);
  t = e_6(y_8, v_8, t);
  t = v_8;
  return(t);
}
ATerm e_6 (ATerm r_50, ATerm q_50, ATerm t)
{
  ATerm j_3 (ATerm t)
  {
    ATerm e_11 = NULL,i_11 = NULL;
    if(match_cons(t, sym__2))
      {
        e_11 = ATgetArgument(t, 0);
        i_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(r_50, e_11, i_11);
    t = (ATerm) ATmakeAppl(sym__3, r_50, e_11, i_11);
    return(t);
  }
  t = q_50;
  t = map_1_0(j_3, t);
  return(t);
}
ATerm save_CurrentTerm_0_0 (ATerm t)
{
  t = term_e_14;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm j_11 = NULL;
  ATerm k_3 (ATerm t)
  {
    ATerm k_11 = NULL,o_11 = NULL;
    k_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_11), k_11);
    t = g_7(not_null(j_11), k_11, t);
    o_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_11, o_11);
    return(t);
  }
  if(((j_11 != NULL) && (j_11 != t)))
    _fail(t);
  else
    j_11 = t;
  t = SSL_table_keys(j_11);
  t = map_1_0(k_3, t);
  return(t);
}
ATerm save_Binding_0_0 (ATerm t)
{
  t = term_a_14;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm prop_abstract_choice_2_0 (ATerm p_74 (ATerm), ATerm q_74 (ATerm), ATerm t)
{
  ATerm p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL;
  v_11 = t;
  t = save_Binding_0_0(t);
  p_11 = t;
  t = save_CurrentTerm_0_0(t);
  q_11 = t;
  t = v_11;
  t = p_74(t);
  u_11 = t;
  t = save_Binding_0_0(t);
  r_11 = t;
  t = term_a_14;
  z_11 = t;
  t = SSL_table_destroy(z_11);
  t = term_a_14;
  y_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_14, p_11);
  t = e_6(y_11, p_11, t);
  t = p_11;
  t = save_CurrentTerm_0_0(t);
  s_11 = t;
  t = term_e_14;
  x_11 = t;
  t = SSL_table_destroy(x_11);
  t = term_e_14;
  w_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_14, q_11);
  t = e_6(w_11, q_11, t);
  t = u_11;
  t = q_74(t);
  t_11 = t;
  t = r_11;
  t = isect_Binding_0_0(t);
  t = s_11;
  t = isect_CurrentTerm_0_0(t);
  t = t_11;
  return(t);
}
ATerm prop_choice_1_0 (ATerm o_74 (ATerm), ATerm t)
{
  ATerm d_12 = NULL;
  d_12 = t;
  {
    ATerm w_16 = t;
    int x_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Choice_2))
          {
            ATerm b_17 = ATgetArgument(t, 0);
            ATerm c_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(x_16);
        {
          ATerm l_3 (ATerm t)
          {
            ATerm l_12 = NULL,p_12 = NULL,t_12 = NULL,y_12 = NULL,z_12 = NULL,h_5 = NULL;
            z_12 = t;
            if(match_cons(t, sym_Choice_2))
              {
                p_12 = ATgetArgument(t, 0);
                t_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(z_12);
            l_12 = t;
            t = p_12;
            t = o_74(t);
            y_12 = t;
            t = (ATerm) ATmakeAppl(sym_Choice_2, y_12, t_12);
            h_5 = t;
            t = SSLsetAnnotations(h_5, l_12);
            return(t);
          }
          ATerm b_4 (ATerm t)
          {
            ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,i_5 = NULL;
            e_13 = t;
            if(match_cons(t, sym_Choice_2))
              {
                b_13 = ATgetArgument(t, 0);
                c_13 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(e_13);
            a_13 = t;
            t = c_13;
            t = o_74(t);
            d_13 = t;
            t = (ATerm) ATmakeAppl(sym_Choice_2, b_13, d_13);
            i_5 = t;
            t = SSLsetAnnotations(i_5, a_13);
            return(t);
          }
          t = d_12;
          t = prop_abstract_choice_2_0(l_3, b_4, t);
        }
      }
    else
      {
        t = w_16;
        {
          ATerm d_17 = t;
          int e_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_GChoice_2))
                {
                  ATerm f_17 = ATgetArgument(t, 0);
                  ATerm g_17 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(e_17);
              {
                ATerm e_4 (ATerm t)
                {
                  ATerm j_13 = NULL,p_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,k_5 = NULL;
                  w_13 = t;
                  if(match_cons(t, sym_GChoice_2))
                    {
                      p_13 = ATgetArgument(t, 0);
                      u_13 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(w_13);
                  j_13 = t;
                  t = p_13;
                  t = o_74(t);
                  v_13 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, v_13, u_13);
                  k_5 = t;
                  t = SSLsetAnnotations(k_5, j_13);
                  return(t);
                }
                ATerm h_4 (ATerm t)
                {
                  ATerm x_13 = NULL,z_13 = NULL,c_14 = NULL,g_14 = NULL,k_14 = NULL,r_5 = NULL;
                  k_14 = t;
                  if(match_cons(t, sym_GChoice_2))
                    {
                      z_13 = ATgetArgument(t, 0);
                      c_14 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(k_14);
                  x_13 = t;
                  t = c_14;
                  t = o_74(t);
                  g_14 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, z_13, g_14);
                  r_5 = t;
                  t = SSLsetAnnotations(r_5, x_13);
                  return(t);
                }
                t = d_12;
                t = prop_abstract_choice_2_0(e_4, h_4, t);
              }
            }
          else
            {
              t = d_17;
              {
                ATerm h_17 = t;
                int i_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_LChoice_2))
                      {
                        ATerm k_17 = ATgetArgument(t, 0);
                        ATerm m_17 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(i_17);
                    {
                      ATerm i_4 (ATerm t)
                      {
                        ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,v_5 = NULL;
                        r_14 = t;
                        if(match_cons(t, sym_LChoice_2))
                          {
                            o_14 = ATgetArgument(t, 0);
                            p_14 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(r_14);
                        n_14 = t;
                        t = o_14;
                        t = o_74(t);
                        q_14 = t;
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, q_14, p_14);
                        v_5 = t;
                        t = SSLsetAnnotations(v_5, n_14);
                        return(t);
                      }
                      ATerm k_4 (ATerm t)
                      {
                        ATerm u_14 = NULL,w_14 = NULL,b_15 = NULL,e_15 = NULL,f_15 = NULL,w_5 = NULL;
                        f_15 = t;
                        if(match_cons(t, sym_LChoice_2))
                          {
                            w_14 = ATgetArgument(t, 0);
                            b_15 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(f_15);
                        u_14 = t;
                        t = b_15;
                        t = o_74(t);
                        e_15 = t;
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, w_14, e_15);
                        w_5 = t;
                        t = SSLsetAnnotations(w_5, u_14);
                        return(t);
                      }
                      t = d_12;
                      t = prop_abstract_choice_2_0(i_4, k_4, t);
                    }
                  }
                else
                  {
                    t = h_17;
                    {
                      ATerm l_4 (ATerm t)
                      {
                        ATerm g_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,y_5 = NULL,x_5 = NULL;
                        x_15 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            q_15 = ATgetArgument(t, 0);
                            r_15 = ATgetArgument(t, 1);
                            s_15 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(x_15);
                        p_15 = t;
                        t = q_15;
                        t = o_74(t);
                        v_15 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, v_15, r_15, s_15);
                        x_5 = t;
                        t = SSLsetAnnotations(x_5, p_15);
                        w_15 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            l_15 = ATgetArgument(t, 0);
                            m_15 = ATgetArgument(t, 1);
                            n_15 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(w_15);
                        g_15 = t;
                        t = m_15;
                        t = o_74(t);
                        o_15 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, l_15, o_15, n_15);
                        y_5 = t;
                        t = SSLsetAnnotations(y_5, g_15);
                        return(t);
                      }
                      ATerm n_4 (ATerm t)
                      {
                        ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,z_5 = NULL;
                        d_16 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            z_15 = ATgetArgument(t, 0);
                            a_16 = ATgetArgument(t, 1);
                            b_16 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(d_16);
                        y_15 = t;
                        t = b_16;
                        t = o_74(t);
                        c_16 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, z_15, a_16, c_16);
                        z_5 = t;
                        t = SSLsetAnnotations(z_5, y_15);
                        return(t);
                      }
                      if(match_cons(t, sym_GuardedLChoice_3))
                        {
                          ATerm n_17 = ATgetArgument(t, 0);
                          ATerm s_17 = ATgetArgument(t, 1);
                          ATerm t_17 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = d_12;
                      t = prop_abstract_choice_2_0(l_4, n_4, t);
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
  t = term_e_14;
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_e_14;
  return(t);
}
ATerm prop_traversal_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm v_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_17 = NULL,a_1 = NULL,b_1 = NULL,e_1 = NULL,h_1 = NULL,j_1 = NULL,k_1 = NULL,g_8 = NULL;
      a_17 = t;
      if(match_cons(t, sym_Cong_2))
        {
          ATerm f_18 = ATgetArgument(t, 0);
          ATerm g_18 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      a_1 = t;
      t = term_d_14;
      b_1 = t;
      t = term_f_14;
      t = g_6(o_4, a_1, b_1, t);
      t = a_17;
      if(match_cons(t, sym_Cong_2))
        {
          h_1 = ATgetArgument(t, 0);
          j_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_17);
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
        g_8 = t;
        t = SSLsetAnnotations(g_8, e_1);
      }
      ;
      LocalPopChoice(x_17);
    }
  else
    {
      t = v_17;
      {
        ATerm l_17 = NULL,o_17 = NULL,p_17 = NULL;
        ATerm r_4 (ATerm t)
        {
          t = exec_maybe_1_0(t_0, t);
          return(t);
        }
        ATerm h_18 = t;
        int i_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_All_1))
              {
                ATerm j_18 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            ;
            LocalPopChoice(i_18);
          }
        else
          {
            t = h_18;
            {
              ATerm q_17 = NULL;
              q_17 = t;
              {
                ATerm k_18 = t;
                int l_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_One_1))
                      {
                        ATerm m_18 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(l_18);
                    t = q_17;
                  }
                else
                  {
                    t = k_18;
                    {
                      ATerm o_18 = t;
                      int t_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Some_1))
                            {
                              ATerm u_18 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(t_18);
                          t = q_17;
                        }
                      else
                        {
                          t = o_18;
                          {
                            ATerm x_18 = t;
                            int z_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_Thread_1))
                                  {
                                    ATerm b_19 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(z_18);
                                t = q_17;
                              }
                            else
                              {
                                t = x_18;
                                if(match_cons(t, sym_Bagof_1))
                                  {
                                    ATerm g_19 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = q_17;
                              }
                          }
                        }
                    }
                  }
              }
            }
          }
        l_17 = t;
        t = (ATerm) ATempty;
        o_17 = t;
        t = term_d_14;
        p_17 = t;
        t = term_f_14;
        t = g_6(q_4, o_17, p_17, t);
        t = l_17;
        t = SRTS_one(r_4, t);
      }
    }
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_e_14;
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL,h_3 = NULL,z_9 = NULL;
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
  z_9 = t;
  t = SSLsetAnnotations(z_9, f_3);
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_e_14;
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL,y_3 = NULL,d_11 = NULL;
  t = Binding_0_0(t);
  y_3 = t;
  if(match_cons(t, sym_Var_1))
    {
      x_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_3);
  w_3 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, x_3);
  d_11 = t;
  t = SSLsetAnnotations(d_11, w_3);
  return(t);
}
ATerm prop_call_1_0 (ATerm s_0 (ATerm), ATerm t)
{
  ATerm w_20 = NULL;
  w_20 = t;
  {
    ATerm h_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_PrimT_3))
          {
            ATerm l_19 = ATgetArgument(t, 0);
            ATerm o_19 = ATgetArgument(t, 1);
            ATerm p_19 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(i_19);
        {
          ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL,q_2 = NULL,s_2 = NULL,u_2 = NULL,v_2 = NULL,e_3 = NULL,c_10 = NULL;
          t = (ATerm) ATempty;
          m_2 = t;
          t = term_d_14;
          n_2 = t;
          t = term_f_14;
          t = g_6(w_4, m_2, n_2, t);
          t = w_20;
          if(match_cons(t, sym_PrimT_3))
            {
              q_2 = ATgetArgument(t, 0);
              s_2 = ATgetArgument(t, 1);
              u_2 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_20);
          o_2 = t;
          t = s_2;
          {
            ATerm x_4 (ATerm t)
            {
              t = exec_maybe_1_0(s_0, t);
              return(t);
            }
            t = map_1_0(x_4, t);
            v_2 = t;
            t = u_2;
            t = alltd_1_0(d_5, t);
            e_3 = t;
            t = (ATerm) ATmakeAppl(sym_PrimT_3, q_2, v_2, e_3);
            c_10 = t;
            t = SSLsetAnnotations(c_10, o_2);
          }
        }
      }
    else
      {
        t = h_19;
        {
          ATerm m_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,t_15 = NULL;
          if(match_cons(t, sym_CallT_3))
            {
              ATerm s_19 = ATgetArgument(t, 0);
              ATerm t_19 = ATgetArgument(t, 1);
              ATerm v_19 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATempty;
          m_3 = t;
          t = term_d_14;
          p_3 = t;
          t = term_f_14;
          t = g_6(e_5, m_3, p_3, t);
          t = w_20;
          if(match_cons(t, sym_CallT_3))
            {
              r_3 = ATgetArgument(t, 0);
              s_3 = ATgetArgument(t, 1);
              t_3 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_20);
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
            t = alltd_1_0(j_5, t);
            v_3 = t;
            t = (ATerm) ATmakeAppl(sym_CallT_3, r_3, u_3, v_3);
            t_15 = t;
            t = SSLsetAnnotations(t_15, q_3);
          }
        }
      }
  }
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = term_a_14;
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm f_22 = NULL,m_22 = NULL,n_22 = NULL;
  f_22 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, f_22);
  m_22 = t;
  t = term_d_14;
  n_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, f_22), term_d_14);
  t = g_6(j_6, m_22, n_22, t);
  t = f_22;
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = term_a_14;
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = term_e_14;
  return(t);
}
ATerm f_6 (ATerm j_74 (ATerm), ATerm q_18, ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL,z_21 = NULL,a_22 = NULL,q_16 = NULL;
    k_21 = t;
    t = q_18;
    t = map_1_0(b_6, t);
    t = k_21;
    if(match_cons(t, sym_Scope_2))
      {
        m_21 = ATgetArgument(t, 0);
        n_21 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(k_21);
    l_21 = t;
    t = n_21;
    t = j_74(t);
    z_21 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, m_21, z_21);
    q_16 = t;
    t = SSLsetAnnotations(q_16, l_21);
    a_22 = t;
    {
      ATerm x_19 = t;
      int z_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL;
          t = CurrentTerm_0_0(t);
          {
            ATerm k_6 (ATerm t)
            {
              ATerm r_22 = NULL;
              ATerm m_6 (ATerm t)
              {
                if(((r_22 != NULL) && (r_22 != t)))
                  _fail(t);
                else
                  r_22 = t;
                return(t);
              }
              if(match_cons(t, sym_Var_1))
                {
                  if(((r_22 != NULL) && (r_22 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    r_22 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = q_18;
              t = fetch_1_0(m_6, t);
              return(t);
            }
            t = oncetd_1_0(k_6, t);
            o_22 = t;
            t = (ATerm) ATempty;
            p_22 = t;
            t = term_d_14;
            q_22 = t;
            t = term_f_14;
            t = g_6(n_6, p_22, q_22, t);
            t = o_22;
          }
          ;
          LocalPopChoice(z_19);
        }
      else
        {
          t = x_19;
        }
      t = a_22;
    }
    return(t);
  }
  t = scope_2_0(q_5, a_6, t);
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = term_e_14;
  return(t);
}
ATerm prop_build_0_0 (ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,v_16 = NULL;
  d_23 = t;
  if(match_cons(t, sym_Build_1))
    {
      a_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_23);
  x_22 = t;
  t = a_23;
  t = alltd_1_0(Binding_0_0, t);
  b_23 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, b_23);
  v_16 = t;
  t = SSLsetAnnotations(v_16, x_22);
  c_23 = t;
  if(match_cons(t, sym_Build_1))
    {
      u_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  v_22 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_b_20, u_22);
  w_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_b_20, u_22));
  t = g_6(o_6, v_22, w_22, t);
  t = c_23;
  return(t);
}
ATerm oncetd_1_0 (ATerm p_77 (ATerm), ATerm t)
{
  ATerm j_23 (ATerm t)
  {
    ATerm h_20 = t;
    int i_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_77(t);
        ;
        LocalPopChoice(i_20);
      }
    else
      {
        t = h_20;
        t = SRTS_one(j_23, t);
      }
    return(t);
  }
  t = j_23(t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm l_96 (ATerm), ATerm t)
{
  ATerm l_23 = NULL;
  l_23 = t;
  {
    ATerm j_20 = t;
    int k_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_23 = NULL;
        t = term_l_20;
        t = get_config_0_0(t);
        n_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_23, term_m_20);
        t = geq_0_0(t);
        t = l_23;
        t = l_96(t);
        ;
        LocalPopChoice(k_20);
      }
    else
      {
        t = j_20;
        t = l_23;
      }
  }
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm u_23 = NULL;
  u_23 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = u_23;
    }
  else
    {
      if(match_cons(t, sym_As_2))
        {
          ATerm n_20 = ATgetArgument(t, 0);
          ATerm o_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_23;
    }
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = term_a_14;
  return(t);
}
ATerm h_6 (ATerm j_19, ATerm k_19, ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL;
  r_23 = t;
  t = k_19;
  {
    ATerm p_20 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(p_6, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_20;
      }
    t = (ATerm) ATmakeAppl(sym_Var_1, j_19);
    s_23 = t;
    t = (ATerm) ATmakeAppl(sym_Defined_2, term_q_20, k_19);
    t_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, j_19), (ATerm) ATmakeAppl(sym_Defined_2, term_q_20, k_19));
    t = g_6(q_6, s_23, t_23, t);
    t = r_23;
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL,e_27 = NULL,f_27 = NULL,h_27 = NULL;
  y_26 = t;
  if(match_cons(t, sym__2))
    {
      z_26 = ATgetArgument(t, 0);
      e_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_27;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_27 = ATgetFirst((ATermList) t);
      h_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = f_27;
  if(match_cons(t, sym__2))
    {
      w_26 = ATgetArgument(t, 0);
      x_26 = ATgetArgument(t, 1);
      {
        ATerm r_20 = t;
        int s_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_26;
            if((z_26 != t))
              {
                _fail(t);
              }
            t = x_26;
            ;
            LocalPopChoice(s_20);
          }
        else
          {
            t = r_20;
            t = (ATerm) ATmakeAppl(sym__2, z_26, h_27);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, z_26, h_27);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm s_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_20 = ATgetArgument(t, 0);
      if(((ATgetType(t_20) != AT_LIST) || !(ATisEmpty(t_20))))
        _fail(t);
      {
        ATerm u_20 = ATgetArgument(t, 1);
        if(((ATgetType(u_20) != AT_LIST) || !(ATisEmpty(u_20))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL,g_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_20 = ATgetArgument(t, 0);
      if(((ATgetType(v_20) == AT_LIST) && !(ATisEmpty(v_20))))
        {
          b_30 = ATgetFirst((ATermList) v_20);
          c_30 = (ATerm) ATgetNext((ATermList) v_20);
        }
      else
        _fail(t);
      {
        ATerm x_20 = ATgetArgument(t, 1);
        if(((ATgetType(x_20) == AT_LIST) && !(ATisEmpty(x_20))))
          {
            d_30 = ATgetFirst((ATermList) x_20);
            g_30 = (ATerm) ATgetNext((ATermList) x_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_30, d_30), (ATerm) ATmakeAppl(sym__2, c_30, g_30));
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm h_30 = NULL,p_30 = NULL;
  if(match_cons(t, sym__2))
    {
      h_30 = ATgetArgument(t, 0);
      p_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_30), h_30);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm a_29 = NULL,m_29 = NULL,n_29 = NULL,p_29 = NULL;
  a_29 = t;
  {
    ATerm y_20 = t;
    int z_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_21 = ATgetArgument(t, 0);
            ATerm b_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(z_20);
        t = a_29;
      }
    else
      {
        t = y_20;
        {
          ATerm a_30 = NULL;
          if(match_cons(t, sym__3))
            {
              m_29 = ATgetArgument(t, 0);
              n_29 = ATgetArgument(t, 1);
              p_29 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, m_29, n_29);
          t = genzip_4_0(s_6, w_6, f_7, _id, t);
          a_30 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_30, p_29);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm g_101 (ATerm), ATerm h_101 (ATerm), ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL;
  ATerm i_7 (ATerm t)
  {
    ATerm s_4 = NULL;
    t = g_101(t);
    s_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_4, not_null(x_30));
    t = lookup_0_0(t);
    t = h_101(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((x_30 != NULL) && (x_30 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_30 = ATgetArgument(t, 0);
      w_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_30;
  t = alltd_1_0(i_7, t);
  return(t);
}
ATerm r_6 (ATerm s_104 (ATerm), ATerm d_55, ATerm e_55, ATerm g_55, ATerm f_55, ATerm t)
{
  ATerm c_31 = NULL,f_31 = NULL;
  t = d_55;
  t = s_104(t);
  t = (ATerm) ATmakeAppl(sym__2, d_55, e_55);
  {
    ATerm c_21 = t;
    if((PushChoice() == 0))
      {
        ATerm h_31 = NULL,l_31 = NULL;
        if(match_cons(t, sym__2))
          {
            h_31 = ATgetArgument(t, 0);
            l_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_31;
        {
          ATerm l_7 (ATerm t)
          {
            if((h_31 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1_0(l_7, t);
          t = (ATerm) ATmakeAppl(sym__2, h_31, l_31);
        }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_21;
      }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, d_55, e_55)), (ATerm) ATmakeAppl(sym__2, f_55, g_55));
    t = substitute_2_0(s_104, _id, t);
    if(match_cons(t, sym__2))
      {
        c_31 = ATgetArgument(t, 0);
        f_31 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, f_31, (ATerm) ATinsert(CheckATermList(c_31), (ATerm) ATmakeAppl(sym__2, d_55, e_55)));
  }
  return(t);
}
ATerm at_end_1_0 (ATerm s_82 (ATerm), ATerm t)
{
  ATerm j_25 (ATerm t)
  {
    ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL;
    f_25 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_25 = ATgetFirst((ATermList) t);
        e_25 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm j_4 = NULL,m_4 = NULL,z_16 = NULL;
          t = SSLgetAnnotations(f_25);
          j_4 = t;
          t = e_25;
          t = j_25(t);
          m_4 = t;
          t = (ATerm) ATinsert(CheckATermList(m_4), d_25);
          z_16 = t;
          t = SSLsetAnnotations(z_16, j_4);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_25;
        t = s_82(t);
      }
    return(t);
  }
  t = j_25(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm c_24 = NULL,f_24 = NULL,g_24 = NULL;
  c_24 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_24;
    }
  else
    {
      ATerm m_7 (ATerm t)
      {
        t = not_null(g_24);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_24 = ATgetFirst((ATermList) t);
          if(((g_24 != NULL) && (g_24 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            g_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_24;
      t = at_end_1_0(m_7, t);
    }
  return(t);
}
ATerm x_25 (ATerm p_25, ATerm t)
{
  ATerm q_25 = NULL;
  t = SSL_explode_term(p_25);
  if(match_cons(t, sym__2))
    {
      ATerm d_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_25;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL;
  u_25 = t;
  if(match_cons(t, sym__2))
    {
      s_25 = ATgetArgument(t, 0);
      t_25 = ATgetArgument(t, 1);
      {
        ATerm e_21 = t;
        int f_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_7 (ATerm t)
            {
              t = t_25;
              return(t);
            }
            t = s_25;
            t = at_end_1_0(n_7, t);
            ;
            LocalPopChoice(f_21);
          }
        else
          {
            t = e_21;
            t = x_25(u_25, t);
          }
      }
    }
  else
    {
      t = x_25(u_25, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm f_84 (ATerm), ATerm g_84 (ATerm), ATerm h_84 (ATerm), ATerm i_84 (ATerm), ATerm t)
{
  ATerm x_28 (ATerm t)
  {
    ATerm g_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_84(t);
        ;
        LocalPopChoice(h_21);
      }
    else
      {
        t = g_21;
        {
          ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,u_17 = NULL;
          t = g_84(t);
          w_28 = t;
          if(match_cons(t, sym__2))
            {
              s_28 = ATgetArgument(t, 0);
              t_28 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_28);
          r_28 = t;
          t = s_28;
          t = i_84(t);
          u_28 = t;
          t = t_28;
          t = x_28(t);
          v_28 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_28, v_28);
          u_17 = t;
          t = SSLsetAnnotations(u_17, r_28);
          t = h_84(t);
        }
      }
    return(t);
  }
  t = x_28(t);
  return(t);
}
ATerm o_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_21 = ATgetArgument(t, 0);
      if(((ATgetType(i_21) != AT_LIST) || !(ATisEmpty(i_21))))
        _fail(t);
      {
        ATerm j_21 = ATgetArgument(t, 1);
        if(((ATgetType(j_21) != AT_LIST) || !(ATisEmpty(j_21))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm h_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_21 = ATgetArgument(t, 0);
      if(((ATgetType(o_21) == AT_LIST) && !(ATisEmpty(o_21))))
        {
          h_26 = ATgetFirst((ATermList) o_21);
          k_26 = (ATerm) ATgetNext((ATermList) o_21);
        }
      else
        _fail(t);
      {
        ATerm p_21 = ATgetArgument(t, 1);
        if(((ATgetType(p_21) == AT_LIST) && !(ATisEmpty(p_21))))
          {
            l_26 = ATgetFirst((ATermList) p_21);
            m_26 = (ATerm) ATgetNext((ATermList) p_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_26, l_26), (ATerm) ATmakeAppl(sym__2, k_26, m_26));
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL;
  if(match_cons(t, sym__2))
    {
      n_26 = ATgetArgument(t, 0);
      o_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_26), n_26);
  return(t);
}
ATerm l_6 (ATerm x_598, ATerm c_599, ATerm f_56, ATerm t)
{
  ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL;
  t = SSL_explode_term(c_599);
  if(match_cons(t, sym__2))
    {
      b_26 = ATgetArgument(t, 0);
      d_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(x_598);
  if(match_cons(t, sym__2))
    {
      if((b_26 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      c_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_26, d_26);
  t = genzip_4_0(o_7, p_7, q_7, _id, t);
  e_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_26, f_56);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm t)
{
  ATerm q_31 (ATerm t)
  {
    ATerm q_21 = t;
    int r_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_76(t);
        ;
        LocalPopChoice(r_21);
      }
    else
      {
        t = q_21;
        t = d_76(t);
        t = q_31(t);
      }
    return(t);
  }
  t = q_31(t);
  return(t);
}
ATerm for_3_0 (ATerm f_76 (ATerm), ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm t)
{
  t = f_76(t);
  t = while_not_2_0(g_76, h_76, t);
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm f_32 = NULL;
  f_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_32, (ATerm) ATempty);
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm m_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_21 = ATgetArgument(t, 0);
      if(((ATgetType(s_21) != AT_LIST) || !(ATisEmpty(s_21))))
        _fail(t);
      m_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_32;
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm n_36 = NULL,u_36 = NULL,y_36 = NULL,b_37 = NULL,c_37 = NULL,f_37 = NULL,g_37 = NULL;
  c_37 = t;
  if(match_cons(t, sym__2))
    {
      f_37 = ATgetArgument(t, 0);
      g_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_37;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_36 = ATgetFirst((ATermList) t);
      b_37 = (ATerm) ATgetNext((ATermList) t);
      t = n_36;
      if(match_cons(t, sym__2))
        {
          u_36 = ATgetArgument(t, 0);
          y_36 = ATgetArgument(t, 1);
          {
            ATerm t_21 = t;
            int u_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = u_37(f_37, g_37, c_37, t);
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
                      t = c_37;
                      t = r_6(v_7, u_36, y_36, b_37, g_37, t);
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
                            t = z_37(f_37, g_37, c_37, t);
                            ;
                            LocalPopChoice(y_21);
                          }
                        else
                          {
                            t = x_21;
                            {
                              ATerm b_22 = t;
                              int c_22 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = b_38(f_37, g_37, c_37, t);
                                  ;
                                  LocalPopChoice(c_22);
                                }
                              else
                                {
                                  t = b_22;
                                  {
                                    ATerm d_22 = t;
                                    int e_22 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = q_38(f_37, g_37, c_37, t);
                                        ;
                                        LocalPopChoice(e_22);
                                      }
                                    else
                                      {
                                        t = d_22;
                                        t = u_38(f_37, g_37, c_37, t);
                                      }
                                  }
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
          ATerm g_22 = t;
          int h_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_37(f_37, g_37, c_37, t);
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
                    t = z_37(f_37, g_37, c_37, t);
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
                          t = b_38(f_37, g_37, c_37, t);
                          ;
                          LocalPopChoice(l_22);
                        }
                      else
                        {
                          t = k_22;
                          {
                            ATerm s_22 = t;
                            int t_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = q_38(f_37, g_37, c_37, t);
                                ;
                                LocalPopChoice(t_22);
                              }
                            else
                              {
                                t = s_22;
                                t = u_38(f_37, g_37, c_37, t);
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
      ATerm y_22 = t;
      int z_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_37(f_37, g_37, c_37, t);
          ;
          LocalPopChoice(z_22);
        }
      else
        {
          t = y_22;
          {
            ATerm e_23 = t;
            int f_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = z_37(f_37, g_37, c_37, t);
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
                      t = b_38(f_37, g_37, c_37, t);
                      ;
                      LocalPopChoice(h_23);
                    }
                  else
                    {
                      t = g_23;
                      {
                        ATerm i_23 = t;
                        int k_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = q_38(f_37, g_37, c_37, t);
                            ;
                            LocalPopChoice(k_23);
                          }
                        else
                          {
                            t = i_23;
                            t = u_38(f_37, g_37, c_37, t);
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
ATerm u_37 (ATerm o_32, ATerm r_32, ATerm s_32, ATerm t)
{
  ATerm t_32 = NULL,z_32 = NULL,a_33 = NULL,w_17 = NULL;
  t = SSLgetAnnotations(s_32);
  t_32 = t;
  t = o_32;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_23 = ATgetFirst((ATermList) t);
      if(match_cons(m_23, sym__2))
        {
          z_32 = ATgetArgument(m_23, 0);
          if((z_32 != ATgetArgument(m_23, 1)))
            {
              _fail(ATgetArgument(m_23, 1));
            }
        }
      else
        _fail(t);
      a_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_33, r_32);
  w_17 = t;
  t = SSLsetAnnotations(w_17, t_32);
  return(t);
}
ATerm z_37 (ATerm e_33, ATerm f_33, ATerm g_33, ATerm t)
{
  ATerm n_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,y_17 = NULL;
  t = SSLgetAnnotations(g_33);
  n_33 = t;
  t = e_33;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_23 = ATgetFirst((ATermList) t);
      if(match_cons(o_23, sym__2))
        {
          x_33 = ATgetArgument(o_23, 0);
          y_33 = ATgetArgument(o_23, 1);
        }
      else
        _fail(t);
      z_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_6(x_33, y_33, z_33, t);
  w_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_33, f_33);
  y_17 = t;
  t = SSLsetAnnotations(y_17, n_33);
  return(t);
}
ATerm b_38 (ATerm b_34, ATerm c_34, ATerm d_34, ATerm t)
{
  ATerm e_34 = NULL,j_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,z_17 = NULL;
  t = SSLgetAnnotations(d_34);
  e_34 = t;
  t = b_34;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_23 = ATgetFirst((ATermList) t);
      if(match_cons(p_23, sym__2))
        {
          ATerm q_23 = ATgetArgument(p_23, 0);
          if(match_cons(q_23, sym_As_2))
            {
              j_34 = ATgetArgument(q_23, 0);
              s_34 = ATgetArgument(q_23, 1);
            }
          else
            _fail(t);
          t_34 = ATgetArgument(p_23, 1);
        }
      else
        _fail(t);
      u_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(CheckATermList(u_34), (ATerm) ATmakeAppl(sym__2, s_34, t_34)), (ATerm) ATmakeAppl(sym__2, j_34, t_34)), c_34);
  z_17 = t;
  t = SSLsetAnnotations(z_17, e_34);
  return(t);
}
ATerm q_38 (ATerm x_34, ATerm z_34, ATerm a_35, ATerm t)
{
  ATerm b_35 = NULL,i_35 = NULL,a_18 = NULL;
  t = SSLgetAnnotations(a_35);
  b_35 = t;
  t = x_34;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_23 = ATgetFirst((ATermList) t);
      if(match_cons(v_23, sym__2))
        {
          ATerm w_23 = ATgetArgument(v_23, 0);
          if(!(match_cons(w_23, sym_Wld_0)))
            _fail(t);
          {
            ATerm x_23 = ATgetArgument(v_23, 1);
          }
        }
      else
        _fail(t);
      i_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_35, z_34);
  a_18 = t;
  t = SSLsetAnnotations(a_18, b_35);
  return(t);
}
ATerm u_38 (ATerm n_35, ATerm q_35, ATerm r_35, ATerm t)
{
  ATerm s_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,d_36 = NULL,d_18 = NULL,c_18 = NULL;
  t = SSLgetAnnotations(r_35);
  s_35 = t;
  t = n_35;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_23 = ATgetFirst((ATermList) t);
      if(match_cons(y_23, sym__2))
        {
          x_35 = ATgetArgument(y_23, 0);
          y_35 = ATgetArgument(y_23, 1);
        }
      else
        _fail(t);
      z_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_35;
  {
    ATerm z_23 = t;
    if((PushChoice() == 0))
      {
        ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL,b_18 = NULL;
        j_36 = t;
        if(match_cons(t, sym_Var_1))
          {
            i_36 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_36);
        h_36 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, i_36);
        b_18 = t;
        t = SSLsetAnnotations(b_18, h_36);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_23;
      }
    t = y_35;
    if(match_cons(t, sym_Var_1))
      {
        d_36 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(y_35);
    a_36 = t;
    t = (ATerm) ATmakeAppl(sym_Var_1, d_36);
    c_18 = t;
    t = SSLsetAnnotations(c_18, a_36);
    t = (ATerm) ATmakeAppl(sym__2, z_35, q_35);
    d_18 = t;
    t = SSLsetAnnotations(d_18, s_35);
  }
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL,e_18 = NULL;
  t_37 = t;
  if(match_cons(t, sym_Var_1))
    {
      s_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_37);
  r_37 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, s_37);
  e_18 = t;
  t = SSLsetAnnotations(e_18, r_37);
  return(t);
}
ATerm prop_pattern_match_0_0 (ATerm t)
{
  t = for_3_0(r_7, t_7, u_7, t);
  return(t);
}
ATerm CurrentTerm_0_0 (ATerm t)
{
  ATerm a_24 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_38 = NULL,a_5 = NULL,g_5 = NULL;
      t = (ATerm) ATempty;
      a_5 = t;
      t = term_e_14;
      g_5 = t;
      t = term_d_24;
      t = u_6(g_5, a_5, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm e_24 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) e_24) != ATmakeSymbol("i_0", 0, ATtrue)))
            _fail(t);
          x_38 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_38;
      ;
      LocalPopChoice(b_24);
    }
  else
    {
      t = a_24;
      {
        ATerm h_24 = t;
        int i_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_38 = NULL,n_5 = NULL,o_5 = NULL;
            t = (ATerm) ATempty;
            n_5 = t;
            t = term_e_14;
            o_5 = t;
            t = term_d_24;
            t = u_6(o_5, n_5, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm j_24 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) j_24) != ATmakeSymbol("g_0", 0, ATtrue)))
                  _fail(t);
                y_38 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = y_38;
            ;
            LocalPopChoice(i_24);
          }
        else
          {
            t = h_24;
            {
              ATerm s_5 = NULL,u_5 = NULL;
              t = (ATerm) ATempty;
              s_5 = t;
              t = term_e_14;
              u_5 = t;
              t = term_d_24;
              t = u_6(u_5, s_5, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
            }
          }
      }
    }
  return(t);
}
ATerm u_6 (ATerm z_49, ATerm a_50, ATerm t)
{
  ATerm b_39 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_49, a_50);
  t = g_7(z_49, a_50, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_39 = ATgetFirst((ATermList) t);
      {
        ATerm k_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = b_39;
  return(t);
}
ATerm Binding_0_0 (ATerm t)
{
  ATerm u_39 = NULL;
  u_39 = t;
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
        ATerm t_6 = NULL,k_7 = NULL;
        t = term_a_14;
        k_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_a_14, u_39);
        t = u_6(k_7, u_39, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm o_24 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) o_24) != ATmakeSymbol("k_0", 0, ATtrue)))
              _fail(t);
            t_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_6;
        ;
        LocalPopChoice(n_24);
      }
    else
      {
        t = m_24;
        {
          ATerm p_24 = t;
          int q_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_7 = NULL;
              t = term_a_14;
              s_7 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_a_14, u_39);
              t = u_6(s_7, u_39, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
              ;
              LocalPopChoice(q_24);
            }
          else
            {
              t = p_24;
              {
                ATerm a_8 = NULL;
                t = term_a_14;
                a_8 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_a_14, u_39);
                t = u_6(a_8, u_39, t);
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
ATerm alltd_1_0 (ATerm d_78 (ATerm), ATerm t)
{
  ATerm i_40 (ATerm t)
  {
    ATerm r_24 = t;
    int s_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_78(t);
        ;
        LocalPopChoice(s_24);
      }
    else
      {
        t = r_24;
        t = SRTS_all(i_40, t);
      }
    return(t);
  }
  t = i_40(t);
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm t_24 = t;
  int u_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_8 = NULL,i_8 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm v_24 = ATgetArgument(t, 0);
          if(match_cons(v_24, sym_Var_1))
            {
              h_8 = ATgetArgument(v_24, 0);
            }
          else
            _fail(t);
          i_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_6(h_8, i_8, t);
      ;
      LocalPopChoice(u_24);
    }
  else
    {
      t = t_24;
    }
  return(t);
}
ATerm x_7 (ATerm t)
{
  t = debug_1_0(y_7, t);
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = term_w_24;
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm g_41 = NULL;
  g_41 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = g_41;
    }
  else
    {
      if(match_cons(t, sym_As_2))
        {
          ATerm x_24 = ATgetArgument(t, 0);
          ATerm y_24 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_41;
    }
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_e_14;
  return(t);
}
ATerm prop_match_0_0 (ATerm t)
{
  ATerm n_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,n_18 = NULL;
  z_40 = t;
  if(match_cons(t, sym_Match_1))
    {
      r_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_40);
  q_40 = t;
  t = r_40;
  t = alltd_1_0(Binding_0_0, t);
  x_40 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, x_40);
  n_18 = t;
  t = SSLsetAnnotations(n_18, q_40);
  y_40 = t;
  if(match_cons(t, sym_Match_1))
    {
      p_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = CurrentTerm_0_0(t);
        n_40 = t;
        t = y_40;
        {
          ATerm b_25 = t;
          int c_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, p_40, n_40));
              t = prop_pattern_match_0_0(t);
              t = map_1_0(w_7, t);
              t = y_40;
              ;
              LocalPopChoice(c_25);
            }
          else
            {
              t = b_25;
              t = (ATerm) ATmakeAppl(sym__4, term_g_25, y_40, term_h_25, n_40);
              t = if_verbose3_1_0(x_7, t);
              t = term_i_25;
            }
        }
        ;
        LocalPopChoice(a_25);
      }
    else
      {
        t = z_24;
        {
          ATerm k_25 = t;
          int l_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_41 = NULL,d_41 = NULL;
              t = p_40;
              {
                ATerm m_25 = t;
                if((PushChoice() == 0))
                  {
                    t = oncetd_1_0(z_7, t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = m_25;
                  }
                t = (ATerm) ATempty;
                c_41 = t;
                t = (ATerm) ATmakeAppl(sym_Defined_2, term_n_25, p_40);
                d_41 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_n_25, p_40));
                t = g_6(b_8, c_41, d_41, t);
                t = y_40;
              }
              ;
              LocalPopChoice(l_25);
            }
          else
            {
              t = k_25;
            }
        }
      }
  }
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = term_e_14;
  return(t);
}
ATerm cp_0_0 (ATerm t)
{
  ATerm o_25 = t;
  int r_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = prop_match_0_0(t);
      ;
      LocalPopChoice(r_25);
    }
  else
    {
      t = o_25;
      {
        ATerm v_25 = t;
        int w_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = prop_build_0_0(t);
            ;
            LocalPopChoice(w_25);
          }
        else
          {
            t = v_25;
            {
              ATerm y_25 = t;
              int z_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_42 = NULL,h_42 = NULL;
                  d_42 = t;
                  if(match_cons(t, sym_Scope_2))
                    {
                      h_42 = ATgetArgument(t, 0);
                      {
                        ATerm a_26 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  t = d_42;
                  t = f_6(cp_0_0, h_42, t);
                  ;
                  LocalPopChoice(z_25);
                }
              else
                {
                  t = y_25;
                  {
                    ATerm f_26 = t;
                    int g_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = prop_call_1_0(cp_0_0, t);
                        ;
                        LocalPopChoice(g_26);
                      }
                    else
                      {
                        t = f_26;
                        {
                          ATerm i_26 = t;
                          int j_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = prop_traversal_1_0(cp_0_0, t);
                              ;
                              LocalPopChoice(j_26);
                            }
                          else
                            {
                              t = i_26;
                              {
                                ATerm p_26 = t;
                                int q_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL,m_8 = NULL,p_8 = NULL,q_8 = NULL,p_18 = NULL;
                                    y_42 = t;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        z_42 = ATgetArgument(t, 0);
                                        a_43 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(y_42);
                                    m_8 = t;
                                    t = z_42;
                                    t = cp_0_0(t);
                                    p_8 = t;
                                    t = a_43;
                                    t = cp_0_0(t);
                                    q_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, p_8, q_8);
                                    p_18 = t;
                                    t = SSLsetAnnotations(p_18, m_8);
                                    ;
                                    LocalPopChoice(q_26);
                                  }
                                else
                                  {
                                    t = p_26;
                                    {
                                      ATerm r_26 = t;
                                      int s_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = prop_choice_1_0(cp_0_0, t);
                                          ;
                                          LocalPopChoice(s_26);
                                        }
                                      else
                                        {
                                          t = r_26;
                                          {
                                            ATerm t_26 = t;
                                            int u_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm v_43 = NULL,w_43 = NULL,y_43 = NULL;
                                                v_43 = t;
                                                {
                                                  ATerm v_26 = t;
                                                  int a_27 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_Let_2))
                                                        {
                                                          ATerm b_27 = ATgetArgument(t, 0);
                                                          ATerm c_27 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(a_27);
                                                      t = v_43;
                                                      t = d_6(cp_0_0, t);
                                                    }
                                                  else
                                                    {
                                                      t = v_26;
                                                      {
                                                        ATerm d_27 = t;
                                                        int g_27 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm i_27 = ATgetArgument(t, 0);
                                                                ATerm j_27 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(g_27);
                                                            {
                                                              ATerm x_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,r_18 = NULL;
                                                              t = v_43;
                                                              if(match_cons(t, sym_Rec_2))
                                                                {
                                                                  z_8 = ATgetArgument(t, 0);
                                                                  a_9 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSLgetAnnotations(v_43);
                                                              x_8 = t;
                                                              t = a_9;
                                                              t = exec_maybe_1_0(cp_0_0, t);
                                                              b_9 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Rec_2, z_8, b_9);
                                                              r_18 = t;
                                                              t = SSLsetAnnotations(r_18, x_8);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = d_27;
                                                            {
                                                              ATerm k_27 = t;
                                                              int l_27 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_Not_1))
                                                                    {
                                                                      ATerm m_27 = ATgetArgument(t, 0);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(l_27);
                                                                  {
                                                                    ATerm i_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL,s_18 = NULL;
                                                                    t = (ATerm) ATempty;
                                                                    i_9 = t;
                                                                    t = term_d_14;
                                                                    k_9 = t;
                                                                    t = term_f_14;
                                                                    t = g_6(c_8, i_9, k_9, t);
                                                                    t = v_43;
                                                                    if(match_cons(t, sym_Not_1))
                                                                      {
                                                                        m_9 = ATgetArgument(t, 0);
                                                                      }
                                                                    else
                                                                      _fail(t);
                                                                    t = SSLgetAnnotations(v_43);
                                                                    l_9 = t;
                                                                    t = m_9;
                                                                    t = exec_maybe_1_0(cp_0_0, t);
                                                                    n_9 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Not_1, n_9);
                                                                    s_18 = t;
                                                                    t = SSLsetAnnotations(s_18, l_9);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  t = k_27;
                                                                  if(match_cons(t, sym_SDefT_4))
                                                                    {
                                                                      w_43 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm n_27 = ATgetArgument(t, 1);
                                                                      }
                                                                      y_43 = ATgetArgument(t, 2);
                                                                      {
                                                                        ATerm o_27 = ATgetArgument(t, 3);
                                                                      }
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  t = v_43;
                                                                  t = c_6(cp_0_0, w_43, y_43, t);
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                                ;
                                                LocalPopChoice(u_26);
                                              }
                                            else
                                              {
                                                t = t_26;
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
ATerm v_6 (ATerm t_49, ATerm u_49, ATerm t)
{
  ATerm f_44 = NULL,g_44 = NULL;
  g_44 = t;
  {
    ATerm p_27 = t;
    int q_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_49, u_49);
        t = g_7(t_49, u_49, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_27 = ATgetFirst((ATermList) t);
            f_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(q_27);
        t = SSL_table_put(t_49, u_49, f_44);
        t = (ATerm) ATmakeAppl(sym__3, t_49, u_49, f_44);
      }
    else
      {
        t = p_27;
        t = SSL_table_remove(t_49, u_49);
        t = (ATerm) ATmakeAppl(sym__2, t_49, u_49);
      }
    t = g_44;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm d_93 (ATerm), ATerm t)
{
  ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL;
  k_44 = t;
  t = d_93(t);
  j_44 = t;
  {
    ATerm s_27 = t;
    int t_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_44 = NULL;
        t = term_m_14;
        m_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_44, term_m_14);
        t = g_7(j_44, m_44, t);
        ;
        LocalPopChoice(t_27);
      }
    else
      {
        t = s_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_44 = ATgetFirst((ATermList) t);
        h_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_m_14;
    l_44 = t;
    t = SSL_table_put(j_44, l_44, h_44);
    t = i_44;
    {
      ATerm e_8 (ATerm t)
      {
        ATerm n_44 = NULL;
        n_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_44, n_44);
        t = v_6(j_44, n_44, t);
        return(t);
      }
      t = map_1_0(e_8, t);
      t = k_44;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm g_75 (ATerm), ATerm h_75 (ATerm), ATerm t)
{
  ATerm u_27 = t;
  int v_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_75(t);
      t = h_75(t);
      ;
      LocalPopChoice(v_27);
    }
  else
    {
      t = u_27;
      t = h_75(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm c_93 (ATerm), ATerm t)
{
  ATerm p_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL;
  s_44 = t;
  t = c_93(t);
  p_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_44, term_m_14);
  {
    ATerm w_27 = t;
    int x_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_45 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm y_27 = ATgetArgument(t, 0);
            ATerm z_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_m_14;
        e_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_44, term_m_14);
        t = g_7(p_44, e_45, t);
        ;
        LocalPopChoice(x_27);
      }
    else
      {
        t = w_27;
        t = (ATerm) ATempty;
      }
    t_44 = t;
    t = term_m_14;
    u_44 = t;
    t = (ATerm) ATinsert(CheckATermList(t_44), (ATerm) ATempty);
    v_44 = t;
    t = SSL_table_put(p_44, u_44, v_44);
    t = s_44;
  }
  return(t);
}
ATerm scope_2_0 (ATerm e_93 (ATerm), ATerm f_93 (ATerm), ATerm t)
{
  ATerm f_8 (ATerm t)
  {
    t = end_scope_1_0(e_93, t);
    return(t);
  }
  t = begin_scope_1_0(e_93, t);
  t = restore_always_2_0(f_93, f_8, t);
  return(t);
}
ATerm map_1_0 (ATerm c_82 (ATerm), ATerm t)
{
  ATerm t_45 (ATerm t)
  {
    ATerm q_45 = NULL,r_45 = NULL,s_45 = NULL;
    q_45 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_45;
      }
    else
      {
        ATerm v_9 = NULL,a_10 = NULL,b_10 = NULL,y_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_45 = ATgetFirst((ATermList) t);
            s_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_45);
        v_9 = t;
        t = r_45;
        t = c_82(t);
        a_10 = t;
        t = s_45;
        t = t_45(t);
        b_10 = t;
        t = (ATerm) ATinsert(CheckATermList(b_10), a_10);
        y_18 = t;
        t = SSLsetAnnotations(y_18, v_9);
      }
    return(t);
  }
  t = t_45(t);
  return(t);
}
ATerm Cons_2_0 (ATerm w_60 (ATerm), ATerm x_60 (ATerm), ATerm t)
{
  ATerm v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL,a_19 = NULL;
  a_46 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_45 = ATgetFirst((ATermList) t);
      x_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_46);
  v_45 = t;
  t = w_45;
  t = w_60(t);
  y_45 = t;
  t = x_45;
  t = x_60(t);
  z_45 = t;
  t = (ATerm) ATinsert(CheckATermList(z_45), y_45);
  a_19 = t;
  t = SSLsetAnnotations(a_19, v_45);
  return(t);
}
ATerm y_6 (ATerm z_39, ATerm a_40, ATerm t)
{
  ATerm b_46 = NULL;
  t = SSL_fputc(z_39, a_40);
  b_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_46);
  return(t);
}
ATerm z_6 (ATerm n_43, ATerm o_43, ATerm t)
{
  ATerm c_46 = NULL;
  t = SSL_write_term_to_stream_text(n_43, o_43);
  c_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_46);
  return(t);
}
ATerm b_7 (ATerm z_94 (ATerm), ATerm n_424, ATerm r_43, ATerm t)
{
  ATerm d_46 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_424, term_a_28);
  t = open_stream_0_0(t);
  d_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_46, r_43);
  t = z_94(t);
  t = fclose_0_0(t);
  t = r_43;
  return(t);
}
ATerm a_7 (ATerm j_43, ATerm k_43, ATerm t)
{
  ATerm e_46 = NULL;
  t = SSL_write_term_to_stream_baf(j_43, k_43);
  e_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_46);
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
  ATerm l_11 = NULL,m_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_28 = ATgetArgument(t, 0);
      if(match_cons(b_28, sym_Stream_1))
        {
          l_11 = ATgetArgument(b_28, 0);
        }
      else
        _fail(t);
      m_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(l_11, m_11, t);
  return(t);
}
ATerm n_8 (ATerm t)
{
  ATerm o_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,u_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_28 = ATgetArgument(t, 0);
      if(match_cons(c_28, sym_Stream_1))
        {
          s_12 = ATgetArgument(c_28, 0);
        }
      else
        _fail(t);
      u_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(s_12, u_12, t);
  o_12 = t;
  t = term_d_28;
  q_12 = t;
  t = o_12;
  if(match_cons(t, sym_Stream_1))
    {
      r_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_d_28, o_12);
  t = y_6(q_12, r_12, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL,w_47 = NULL,x_47 = NULL,d_19 = NULL,c_19 = NULL;
  n_46 = t;
  if(match_cons(t, sym__2))
    {
      u_46 = ATgetArgument(t, 0);
      v_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_46);
  t_46 = t;
  t = u_46;
  {
    ATerm e_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_8 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((m_46 != NULL) && (m_46 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                m_46 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(j_8, t);
        ;
        LocalPopChoice(f_28);
      }
    else
      {
        t = e_28;
        t = term_g_28;
        m_46 = t;
      }
    w_46 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_46, v_46);
    c_19 = t;
    t = SSLsetAnnotations(c_19, t_46);
    t = n_46;
    if(match_cons(t, sym__2))
      {
        p_46 = ATgetArgument(t, 0);
        q_46 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(n_46);
    o_46 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_46, (ATerm) ATmakeAppl(sym__2, not_null(m_46), q_46));
    d_19 = t;
    t = SSLsetAnnotations(d_19, o_46);
    s_46 = t;
    if(match_cons(t, sym__2))
      {
        w_47 = ATgetArgument(t, 0);
        x_47 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm h_28 = t;
      int i_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_10 = NULL,v_10 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,e_19 = NULL;
          t = SSLgetAnnotations(s_46);
          q_10 = t;
          t = w_47;
          t = fetch_1_0(k_8, t);
          v_10 = t;
          t = x_47;
          if(match_cons(t, sym__2))
            {
              g_11 = ATgetArgument(t, 0);
              h_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_7(l_8, g_11, h_11, t);
          f_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_10, f_11);
          e_19 = t;
          t = SSLsetAnnotations(e_19, q_10);
          ;
          LocalPopChoice(i_28);
        }
      else
        {
          t = h_28;
          {
            ATerm e_12 = NULL,k_12 = NULL,m_12 = NULL,n_12 = NULL,f_19 = NULL;
            t = SSLgetAnnotations(s_46);
            e_12 = t;
            t = x_47;
            if(match_cons(t, sym__2))
              {
                m_12 = ATgetArgument(t, 0);
                n_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = b_7(n_8, m_12, n_12, t);
            k_12 = t;
            t = (ATerm) ATmakeAppl(sym__2, w_47, k_12);
            f_19 = t;
            t = SSLsetAnnotations(f_19, e_12);
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
ATerm apply_strategy_1_0 (ATerm b_98 (ATerm), ATerm t)
{
  ATerm a_48 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL,e_48 = NULL;
  e_48 = t;
  t = dtime_0_0(t);
  t = e_48;
  t = b_98(t);
  d_48 = t;
  t = dtime_0_0(t);
  a_48 = t;
  t = d_48;
  if(match_cons(t, sym__2))
    {
      b_48 = ATgetArgument(t, 0);
      c_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_48), (ATerm) ATmakeAppl(sym_Runtime_1, a_48)), c_48);
  return(t);
}
ATerm s_48 (ATerm m_48, ATerm t)
{
  t = SSL_fclose(m_48);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_48 = NULL,q_48 = NULL;
  q_48 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_48 = ATgetArgument(t, 0);
      {
        ATerm j_28 = t;
        int k_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_48);
            ;
            LocalPopChoice(k_28);
          }
        else
          {
            t = j_28;
            t = s_48(q_48, t);
          }
      }
    }
  else
    {
      t = s_48(q_48, t);
    }
  return(t);
}
ATerm c_7 (ATerm p_43, ATerm t)
{
  t = SSL_read_term_from_stream(p_43);
  return(t);
}
ATerm d_7 (ATerm b_40, ATerm c_40, ATerm t)
{
  ATerm t_48 = NULL;
  t = SSL_fopen(b_40, c_40);
  t_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_48);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_48 = NULL;
  t = SSL_stdin_stream();
  u_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_48);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_48 = NULL;
  t = SSL_stdout_stream();
  v_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_48);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_49 = NULL;
  t = SSL_stderr_stream();
  b_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_49);
  return(t);
}
ATerm x_50 (ATerm h_49, ATerm t)
{
  ATerm i_49 = NULL;
  t = SSL_explode_term(h_49);
  if(match_cons(t, sym__2))
    {
      ATerm l_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_28 = ATgetArgument(t, 1);
        if(((ATgetType(m_28) == AT_LIST) && !(ATisEmpty(m_28))))
          {
            i_49 = ATgetFirst((ATermList) m_28);
            {
              ATerm n_28 = (ATerm) ATgetNext((ATermList) m_28);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_49;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_49;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_49;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_49;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm y_50 (ATerm m_49, ATerm q_49, ATerm r_49, ATerm t)
{
  ATerm v_49 = NULL,w_49 = NULL,x_49 = NULL,c_50 = NULL,m_19 = NULL;
  t = SSLgetAnnotations(r_49);
  x_49 = t;
  t = m_49;
  if(match_cons(t, sym_Path_1))
    {
      c_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_50, q_49);
  m_19 = t;
  t = SSLsetAnnotations(m_19, x_49);
  if(match_cons(t, sym__2))
    {
      v_49 = ATgetArgument(t, 0);
      w_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_7(v_49, w_49, t);
  return(t);
}
ATerm z_50 (ATerm e_50, ATerm f_50, ATerm g_50, ATerm t)
{
  ATerm h_50 = NULL,i_50 = NULL,j_50 = NULL,m_50 = NULL,n_19 = NULL;
  t = SSLgetAnnotations(g_50);
  j_50 = t;
  t = SSL_is_string(e_50);
  m_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_50, f_50);
  n_19 = t;
  t = SSLsetAnnotations(n_19, j_50);
  if(match_cons(t, sym__2))
    {
      h_50 = ATgetArgument(t, 0);
      i_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_7(h_50, i_50, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_28 = ATgetArgument(t, 0);
      ATerm p_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  u_50 = t;
  if(match_cons(t, sym__2))
    {
      v_50 = ATgetArgument(t, 0);
      w_50 = ATgetArgument(t, 1);
      {
        ATerm q_28 = t;
        int y_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_50(u_50, t);
            ;
            LocalPopChoice(y_28);
          }
        else
          {
            t = q_28;
            {
              ATerm z_28 = t;
              int b_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_50(v_50, w_50, u_50, t);
                  ;
                  LocalPopChoice(b_29);
                }
              else
                {
                  t = z_28;
                  t = z_50(v_50, w_50, u_50, t);
                }
            }
          }
      }
    }
  else
    {
      t = x_50(u_50, t);
    }
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = term_c_29;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_51 = NULL,b_51 = NULL,c_51 = NULL;
  ATerm d_29 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_51 = NULL;
      d_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_51, term_f_29);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(e_29);
    }
  else
    {
      t = d_29;
      t = debug_1_0(o_8, t);
      _fail(t);
    }
  b_51 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_7(c_51, t);
  a_51 = t;
  t = b_51;
  t = fclose_0_0(t);
  t = a_51;
  return(t);
}
ATerm fetch_1_0 (ATerm m_82 (ATerm), ATerm t)
{
  ATerm l_52 (ATerm t)
  {
    ATerm i_52 = NULL,j_52 = NULL,k_52 = NULL;
    i_52 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_52 = ATgetFirst((ATermList) t);
        k_52 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm g_29 = t;
      int h_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_13 = NULL,s_13 = NULL,q_19 = NULL;
          t = SSLgetAnnotations(i_52);
          o_13 = t;
          t = j_52;
          t = m_82(t);
          s_13 = t;
          t = (ATerm) ATinsert(CheckATermList(k_52), s_13);
          q_19 = t;
          t = SSLsetAnnotations(q_19, o_13);
          ;
          LocalPopChoice(h_29);
        }
      else
        {
          t = g_29;
          {
            ATerm h_14 = NULL,l_14 = NULL,r_19 = NULL;
            t = SSLgetAnnotations(i_52);
            h_14 = t;
            t = k_52;
            t = l_52(t);
            l_14 = t;
            t = (ATerm) ATinsert(CheckATermList(l_14), j_52);
            r_19 = t;
            t = SSLsetAnnotations(r_19, h_14);
          }
        }
    }
    return(t);
  }
  t = l_52(t);
  return(t);
}
ATerm x_6 (ATerm p_34, ATerm q_34, ATerm t)
{
  t = SSL_strcat(p_34, q_34);
  return(t);
}
ATerm debug_1_0 (ATerm x_94 (ATerm), ATerm t)
{
  ATerm o_52 = NULL,p_52 = NULL,q_52 = NULL,r_52 = NULL;
  o_52 = t;
  t = x_94(t);
  p_52 = t;
  t = term_q_13;
  q_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_52), p_52);
  r_52 = t;
  t = SSL_printnl(q_52, r_52);
  t = o_52;
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm i_29 = t;
  int j_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(j_29);
    }
  else
    {
      t = i_29;
    }
  return(t);
}
ATerm s_8 (ATerm t)
{
  t = term_k_29;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm l_29 = t;
  int o_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_52 = NULL;
      y_52 = t;
      t = SSL_is_string(y_52);
      ;
      LocalPopChoice(o_29);
    }
  else
    {
      t = l_29;
      {
        ATerm q_29 = t;
        int r_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(r_8, t);
            ;
            LocalPopChoice(r_29);
          }
        else
          {
            t = q_29;
            {
              ATerm e_53 = NULL,f_53 = NULL,g_53 = NULL;
              e_53 = t;
              if(match_cons(t, sym_Path_1))
                {
                  f_53 = ATgetArgument(t, 0);
                  t = f_53;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      f_53 = ATgetArgument(t, 0);
                      t = f_53;
                      {
                        ATerm s_29 = t;
                        int t_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(t_29);
                          }
                        else
                          {
                            t = s_29;
                            t = debug_1_0(s_8, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm k_53 = NULL,l_53 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          f_53 = ATgetArgument(t, 0);
                          g_53 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = f_53;
                      t = eval_config_0_0(t);
                      k_53 = t;
                      t = g_53;
                      t = eval_config_0_0(t);
                      l_53 = t;
                      t = (ATerm) ATmakeAppl(sym__2, k_53, l_53);
                      t = x_6(k_53, l_53, t);
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
  ATerm p_53 = NULL,q_53 = NULL;
  p_53 = t;
  t = term_u_29;
  q_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_29, p_53);
  t = g_7(q_53, p_53, t);
  {
    ATerm v_29 = t;
    int w_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_53 = NULL,s_53 = NULL;
        t = eval_config_0_0(t);
        r_53 = t;
        t = term_u_29;
        s_53 = t;
        t = SSL_table_put(s_53, p_53, r_53);
        t = r_53;
        ;
        LocalPopChoice(w_29);
      }
    else
      {
        t = v_29;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm k_96 (ATerm), ATerm t)
{
  ATerm w_53 = NULL;
  w_53 = t;
  {
    ATerm x_29 = t;
    int y_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_53 = NULL;
        t = term_l_20;
        t = get_config_0_0(t);
        y_53 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_53, term_z_29);
        t = geq_0_0(t);
        t = w_53;
        t = k_96(t);
        ;
        LocalPopChoice(y_29);
      }
    else
      {
        t = x_29;
        t = w_53;
      }
  }
  return(t);
}
ATerm t_8 (ATerm t)
{
  ATerm b_54 = NULL;
  b_54 = t;
  if(match_string(t, "-k"))
    {
      t = b_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = b_54;
    }
  return(t);
}
ATerm u_8 (ATerm t)
{
  ATerm c_54 = NULL,d_54 = NULL,e_54 = NULL;
  c_54 = t;
  t = SSL_string_to_int(c_54);
  d_54 = t;
  t = term_e_30;
  e_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_30, d_54);
  t = j_7(e_54, d_54, t);
  t = c_54;
  return(t);
}
ATerm w_8 (ATerm t)
{
  t = term_f_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_8, u_8, w_8, t);
  return(t);
}
ATerm c_9 (ATerm t)
{
  ATerm g_54 = NULL;
  g_54 = t;
  if(match_string(t, "-S"))
    {
      t = g_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = g_54;
    }
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm h_54 = NULL,i_54 = NULL;
  t = term_l_20;
  h_54 = t;
  t = term_i_30;
  i_54 = t;
  t = term_j_30;
  t = j_7(h_54, i_54, t);
  t = term_k_30;
  return(t);
}
ATerm f_9 (ATerm t)
{
  t = term_l_30;
  return(t);
}
ATerm h_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_9 (ATerm t)
{
  ATerm j_54 = NULL,k_54 = NULL,l_54 = NULL;
  j_54 = t;
  t = SSL_string_to_int(j_54);
  k_54 = t;
  t = term_l_20;
  l_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_20, k_54);
  t = j_7(l_54, k_54, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, j_54);
  return(t);
}
ATerm q_9 (ATerm t)
{
  t = term_m_30;
  return(t);
}
ATerm r_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_9 (ATerm t)
{
  ATerm m_54 = NULL,n_54 = NULL;
  t = term_n_30;
  m_54 = t;
  t = term_n_13;
  n_54 = t;
  t = term_o_30;
  t = j_7(m_54, n_54, t);
  t = term_q_30;
  return(t);
}
ATerm t_9 (ATerm t)
{
  t = term_r_30;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_30 = t;
  int t_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_9, d_9, f_9, t);
      ;
      LocalPopChoice(t_30);
    }
  else
    {
      t = s_30;
      {
        ATerm u_30 = t;
        int v_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(h_9, o_9, q_9, t);
            ;
            LocalPopChoice(v_30);
          }
        else
          {
            t = u_30;
            t = Option_3_0(r_9, s_9, t_9, t);
          }
      }
    }
  return(t);
}
ATerm j_7 (ATerm q_44, ATerm r_44, ATerm t)
{
  ATerm o_54 = NULL;
  t = term_u_29;
  o_54 = t;
  t = SSL_table_put(o_54, q_44, r_44);
  t = (ATerm) ATmakeAppl(sym__3, term_u_29, q_44, r_44);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm r_54 = NULL,s_54 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_54 = NULL,u_54 = NULL,v_54 = NULL;
      t = term_n_13;
      t = f_0(t);
      t_54 = t;
      t = term_y_30;
      u_54 = t;
      t = term_z_30;
      v_54 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_30, term_z_30, t_54);
      t = h_7(u_54, v_54, t_54, t);
      _fail(t);
    }
  else
    {
      ATerm y_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_54 = ATgetFirst((ATermList) t);
          s_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_54;
      t = b_0(t);
      t = term_n_13;
      t = d_0(t);
      y_54 = t;
      t = (ATerm) ATinsert(CheckATermList(s_54), y_54);
    }
  return(t);
}
ATerm u_9 (ATerm t)
{
  ATerm a_55 = NULL;
  a_55 = t;
  if(match_string(t, "-o"))
    {
      t = a_55;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = a_55;
    }
  return(t);
}
ATerm w_9 (ATerm t)
{
  ATerm b_55 = NULL,c_55 = NULL;
  b_55 = t;
  t = term_a_31;
  c_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_31, b_55);
  t = j_7(c_55, b_55, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, b_55);
  return(t);
}
ATerm x_9 (ATerm t)
{
  t = term_b_31;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_9, w_9, x_9, t);
  return(t);
}
ATerm h_7 (ATerm o_49, ATerm p_49, ATerm n_49, ATerm t)
{
  ATerm k_55 = NULL,l_55 = NULL,m_55 = NULL;
  k_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_49, p_49);
  {
    ATerm d_31 = t;
    int e_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_31 = ATgetArgument(t, 0);
            ATerm i_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_49, p_49);
        t = g_7(o_49, p_49, t);
        ;
        LocalPopChoice(e_31);
      }
    else
      {
        t = d_31;
        t = (ATerm) ATempty;
      }
    l_55 = t;
    t = (ATerm) ATinsert(CheckATermList(l_55), n_49);
    m_55 = t;
    t = SSL_table_put(o_49, p_49, m_55);
    t = k_55;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL;
      t = term_n_13;
      t = r_0(t);
      x_55 = t;
      t = term_y_30;
      y_55 = t;
      t = term_z_30;
      z_55 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_30, term_z_30, x_55);
      t = h_7(y_55, z_55, x_55, t);
      _fail(t);
    }
  else
    {
      ATerm h_56 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_55 = ATgetFirst((ATermList) t);
          u_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_55;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_55 = ATgetFirst((ATermList) t);
          w_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_55;
      t = l_0(t);
      t = v_55;
      t = m_0(t);
      h_56 = t;
      t = (ATerm) ATinsert(CheckATermList(w_55), h_56);
    }
  return(t);
}
ATerm y_9 (ATerm t)
{
  ATerm j_56 = NULL;
  j_56 = t;
  if(match_string(t, "-i"))
    {
      t = j_56;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = j_56;
    }
  return(t);
}
ATerm d_10 (ATerm t)
{
  ATerm k_56 = NULL,l_56 = NULL;
  k_56 = t;
  t = term_j_31;
  l_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_31, k_56);
  t = j_7(l_56, k_56, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, k_56);
  return(t);
}
ATerm f_10 (ATerm t)
{
  t = term_k_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_9, d_10, f_10, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_56 = NULL,n_56 = NULL,o_56 = NULL,p_56 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_13;
  t = whoami_0_0(t);
  m_56 = t;
  t = term_q_13;
  o_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_31), m_56);
  p_56 = t;
  t = SSL_printnl(o_56, p_56);
  t = term_y_13;
  n_56 = t;
  t = SSL_exit(n_56);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_n_31;
  t = get_config_0_0(t);
  return(t);
}
ATerm e_7 (ATerm z_36, ATerm a_37, ATerm t)
{
  ATerm o_31 = t;
  int p_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(z_36, a_37);
      ;
      LocalPopChoice(p_31);
    }
  else
    {
      t = o_31;
      t = SSL_addr(z_36, a_37);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm f_88 (ATerm), ATerm g_88 (ATerm), ATerm t)
{
  ATerm r_56 = NULL,s_56 = NULL,t_56 = NULL;
  r_56 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_56;
      t = f_88(t);
    }
  else
    {
      ATerm w_56 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_56 = ATgetFirst((ATermList) t);
          t_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_56;
      t = foldr_2_0(f_88, g_88, t);
      w_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_56, w_56);
      t = g_88(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm g_10 (ATerm t)
{
  t = term_i_30;
  return(t);
}
ATerm i_10 (ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL;
  if(match_cons(t, sym__2))
    {
      e_16 = ATgetArgument(t, 0);
      f_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_7(e_16, f_16, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_56 = NULL,j_15 = NULL,k_15 = NULL;
  t = times_0_0(t);
  k_15 = t;
  t = SSL_explode_term(k_15);
  if(match_cons(t, sym__2))
    {
      ATerm r_31 = ATgetArgument(t, 0);
      j_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_15;
  t = foldr_2_0(g_10, i_10, t);
  z_56 = t;
  t = SSL_TicksToSeconds(z_56);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_57 = NULL,l_57 = NULL,m_57 = NULL;
  k_57 = t;
  if(match_cons(t, sym__2))
    {
      l_57 = ATgetArgument(t, 0);
      m_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_31 = t;
    int t_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_57;
        if((l_57 != t))
          {
            _fail(t);
          }
        t = k_57;
        ;
        LocalPopChoice(t_31);
      }
    else
      {
        t = s_31;
        t = (ATerm) ATmakeAppl(sym__2, l_57, m_57);
        {
          ATerm u_31 = t;
          int v_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_57, m_57);
              ;
              LocalPopChoice(v_31);
            }
          else
            {
              t = u_31;
              t = SSL_gtr(l_57, m_57);
            }
          t = (ATerm) ATmakeAppl(sym__2, l_57, m_57);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_96 (ATerm), ATerm t)
{
  ATerm q_57 = NULL;
  q_57 = t;
  {
    ATerm w_31 = t;
    int x_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_57 = NULL;
        t = term_l_20;
        t = get_config_0_0(t);
        s_57 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_57, term_y_13);
        t = geq_0_0(t);
        t = q_57;
        t = j_96(t);
        ;
        LocalPopChoice(x_31);
      }
    else
      {
        t = w_31;
        t = q_57;
      }
  }
  return(t);
}
ATerm k_10 (ATerm t)
{
  ATerm u_57 = NULL,v_57 = NULL,x_57 = NULL,y_57 = NULL;
  t = run_time_0_0(t);
  u_57 = t;
  t = term_n_13;
  t = whoami_0_0(t);
  v_57 = t;
  t = term_q_13;
  x_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_31), u_57), term_y_31), v_57);
  y_57 = t;
  t = SSL_printnl(x_57, y_57);
  t = (ATerm) ATmakeAppl(sym__2, term_q_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_31), u_57), term_y_31), v_57));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(k_10, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_57 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_30;
  z_57 = t;
  t = SSL_exit(z_57);
  return(t);
}
ATerm l_10 (ATerm t)
{
  ATerm h_58 = NULL,i_58 = NULL;
  i_58 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = i_58;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          h_58 = ATgetArgument(t, 0);
          {
            ATerm y_16 = NULL,u_19 = NULL;
            t = SSLgetAnnotations(i_58);
            y_16 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, h_58);
            u_19 = t;
            t = SSLsetAnnotations(u_19, y_16);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = i_58;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm z_98 (ATerm), ATerm t)
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
      t = fetch_1_0(l_10, t);
    }
  t = z_98(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm l_58 = NULL,m_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_58 = ATgetFirst((ATermList) t);
      m_58 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_58 = NULL,r_58 = NULL;
        ATerm n_10 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(q_58)), not_null(r_58));
          return(t);
        }
        t = m_58;
        t = j_0(t);
        if(((q_58 != NULL) && (q_58 != t)))
          _fail(t);
        else
          q_58 = t;
        t = l_58;
        t = h_0(t);
        if(((r_58 != NULL) && (r_58 != t)))
          _fail(t);
        else
          r_58 = t;
        t = m_58;
        t = reverse_acc_2_0(h_0, n_10, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_13;
      t = j_0(t);
    }
  return(t);
}
ATerm g_7 (ATerm f_51, ATerm g_51, ATerm t)
{
  t = SSL_table_get(f_51, g_51);
  return(t);
}
ATerm o_10 (ATerm t)
{
  ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL,w_19 = NULL;
  x_58 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_58);
  v_58 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, w_58);
  w_19 = t;
  t = SSLsetAnnotations(w_19, v_58);
  return(t);
}
ATerm p_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_10 (ATerm t)
{
  ATerm z_58 = NULL;
  z_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_58), term_d_32);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_58 = NULL,u_58 = NULL;
  ATerm e_32 = t;
  int g_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_31;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_32);
    }
  else
    {
      t = e_32;
      t = fetch_1_0(o_10, t);
    }
  t = term_h_32;
  t = echo_0_0(t);
  t = term_y_30;
  t_58 = t;
  t = term_z_30;
  u_58 = t;
  t = term_i_32;
  t = g_7(t_58, u_58, t);
  t = reverse_acc_2_0(_id, p_10, t);
  t = map_1_0(r_10, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_59 = NULL,c_59 = NULL,d_59 = NULL;
  b_59 = t;
  {
    ATerm j_32 = t;
    int k_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_59;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm l_32 = ATgetFirst((ATermList) t);
                ATerm n_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_59;
          }
        ;
        LocalPopChoice(k_32);
      }
    else
      {
        t = j_32;
        t = (ATerm) ATinsert(ATempty, b_59);
      }
    c_59 = t;
    t = term_g_28;
    d_59 = t;
    t = SSL_printnl(d_59, c_59);
    t = b_59;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_n_31;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm t_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_10 (ATerm t)
{
  ATerm h_59 = NULL,i_59 = NULL;
  t = term_p_32;
  h_59 = t;
  t = term_n_13;
  i_59 = t;
  t = term_q_32;
  t = j_7(h_59, i_59, t);
  return(t);
}
ATerm w_10 (ATerm t)
{
  t = term_u_32;
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
  ATerm j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL;
  t = term_p_32;
  l_59 = t;
  t = term_n_13;
  m_59 = t;
  t = term_q_32;
  t = j_7(l_59, m_59, t);
  t = term_v_32;
  j_59 = t;
  t = term_n_13;
  k_59 = t;
  t = term_w_32;
  t = j_7(j_59, k_59, t);
  t = term_x_32;
  return(t);
}
ATerm z_10 (ATerm t)
{
  t = term_y_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_33 = t;
  int c_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_10, u_10, w_10, t);
      ;
      LocalPopChoice(c_33);
    }
  else
    {
      t = b_33;
      t = Option_3_0(x_10, y_10, z_10, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_101 (ATerm), ATerm t)
{
  ATerm r_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL,w_59 = NULL,x_59 = NULL,y_19 = NULL;
  r_59 = t;
  {
    ATerm d_33 = t;
    int h_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_33;
        t = c_101(t);
        ;
        LocalPopChoice(h_33);
      }
    else
      {
        t = d_33;
      }
    t = r_59;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_59 = ATgetFirst((ATermList) t);
        u_59 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(r_59);
    s_59 = t;
    t = term_n_31;
    x_59 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_n_31, t_59);
    t = j_7(x_59, t_59, t);
    t = u_59;
    {
      ATerm h_60 (ATerm t)
      {
        ATerm j_33 = t;
        int k_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_33 = t;
            int m_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_60 = NULL;
                a_60 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = a_60;
                ;
                LocalPopChoice(m_33);
              }
            else
              {
                t = l_33;
                t = c_101(t);
                t = Cons_2_0(_id, h_60, t);
              }
            ;
            LocalPopChoice(k_33);
          }
        else
          {
            t = j_33;
            {
              ATerm d_60 = NULL,e_60 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_60 = ATgetFirst((ATermList) t);
                  e_60 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(e_60), (ATerm) ATmakeAppl(sym_Undefined_1, d_60));
            }
          }
        return(t);
      }
      t = h_60(t);
      w_59 = t;
      t = (ATerm) ATinsert(CheckATermList(w_59), (ATerm) ATmakeAppl(sym_Program_1, t_59));
      y_19 = t;
      t = SSLsetAnnotations(y_19, s_59);
    }
  }
  return(t);
}
ATerm b_11 (ATerm t)
{
  ATerm t_60 = NULL;
  t_60 = t;
  if(match_string(t, "--help"))
    {
      t = t_60;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_60;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_60;
        }
    }
  return(t);
}
ATerm n_11 (ATerm t)
{
  ATerm u_60 = NULL,v_60 = NULL;
  t = term_c_32;
  u_60 = t;
  t = term_n_13;
  v_60 = t;
  t = term_o_33;
  t = j_7(u_60, v_60, t);
  t = term_p_33;
  return(t);
}
ATerm a_12 (ATerm t)
{
  t = term_q_33;
  return(t);
}
ATerm b_12 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm b_101 (ATerm), ATerm t)
{
  ATerm m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL;
  o_60 = t;
  t = term_y_30;
  q_60 = t;
  t = term_z_30;
  r_60 = t;
  t = (ATerm) ATempty;
  s_60 = t;
  t = SSL_table_put(q_60, r_60, s_60);
  t = o_60;
  {
    ATerm a_11 (ATerm t)
    {
      ATerm r_33 = t;
      int s_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_101(t);
          ;
          LocalPopChoice(s_33);
        }
      else
        {
          t = r_33;
          {
            ATerm t_33 = t;
            int u_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_11, n_11, a_12, t);
                ;
                LocalPopChoice(u_33);
              }
            else
              {
                t = t_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_11, t);
    {
      ATerm v_33 = t;
      int a_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_61 = NULL;
          e_61 = t;
          {
            ATerm f_34 = t;
            int g_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_17 = NULL;
                t = e_61;
                {
                  ATerm h_34 = t;
                  int i_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_c_32;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(i_34);
                    }
                  else
                    {
                      t = h_34;
                      t = fetch_1_0(b_12, t);
                    }
                  t = e_61;
                  t = default_system_usage_0_0(t);
                  t = term_i_30;
                  j_17 = t;
                  t = SSL_exit(j_17);
                }
                ;
                LocalPopChoice(g_34);
              }
            else
              {
                t = f_34;
                {
                  ATerm r_17 = NULL;
                  t = term_p_32;
                  t = get_config_0_0(t);
                  t = e_61;
                  t = default_system_about_0_0(t);
                  t = term_i_30;
                  r_17 = t;
                  t = SSL_exit(r_17);
                }
              }
          }
          ;
          LocalPopChoice(a_34);
        }
      else
        {
          t = v_33;
          {
            ATerm k_34 = t;
            int l_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_61 = NULL,g_61 = NULL,h_61 = NULL;
                ATerm c_12 (ATerm t)
                {
                  ATerm i_61 = NULL,j_61 = NULL,k_61 = NULL,a_20 = NULL;
                  k_61 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      j_61 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(k_61);
                  i_61 = t;
                  t = j_61;
                  if(((m_60 != NULL) && (m_60 != t)))
                    _fail(t);
                  else
                    m_60 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, j_61);
                  a_20 = t;
                  t = SSLsetAnnotations(a_20, i_61);
                  return(t);
                }
                t = fetch_1_0(c_12, t);
                t = term_q_13;
                g_61 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_60)), term_m_34);
                h_61 = t;
                t = SSL_printnl(g_61, h_61);
                t = (ATerm) ATmakeAppl(sym__2, term_q_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_60)), term_m_34));
                t = default_system_usage_0_0(t);
                t = term_y_13;
                f_61 = t;
                t = SSL_exit(f_61);
                ;
                LocalPopChoice(l_34);
              }
            else
              {
                t = k_34;
              }
          }
        }
      n_60 = t;
      t = term_y_30;
      p_60 = t;
      t = SSL_table_destroy(p_60);
      t = n_60;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm b_99 (ATerm), ATerm c_99 (ATerm), ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm t)
{
  ATerm p_61 = NULL,q_61 = NULL,r_61 = NULL,s_61 = NULL;
  t = parse_options_1_0(b_99, t);
  p_61 = t;
  t = term_n_34;
  s_61 = t;
  t = SSL_table_create(s_61);
  t = term_n_34;
  q_61 = t;
  t = term_o_34;
  r_61 = t;
  t = SSL_table_put(q_61, r_61, p_61);
  t = p_61;
  t = d_99(t);
  {
    ATerm r_34 = t;
    int v_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(c_99, t);
        ;
        LocalPopChoice(v_34);
      }
    else
      {
        t = r_34;
        {
          ATerm w_34 = t;
          int y_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_99(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(y_34);
            }
          else
            {
              t = w_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm g_12 (ATerm t)
{
  t = if_verbose2_1_0(w_12, t);
  return(t);
}
ATerm i_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_12 (ATerm t)
{
  ATerm t_61 = NULL,u_61 = NULL;
  t = term_c_35;
  t_61 = t;
  t = term_n_13;
  u_61 = t;
  t = term_d_35;
  t = j_7(t_61, u_61, t);
  t = term_e_35;
  return(t);
}
ATerm v_12 (ATerm t)
{
  t = term_f_35;
  return(t);
}
ATerm w_12 (ATerm t)
{
  ATerm v_61 = NULL,w_61 = NULL,x_61 = NULL,y_61 = NULL;
  v_61 = t;
  t = term_n_31;
  t = get_config_0_0(t);
  w_61 = t;
  t = term_q_13;
  x_61 = t;
  t = (ATerm) ATinsert(ATempty, w_61);
  y_61 = t;
  t = SSL_printnl(x_61, y_61);
  t = v_61;
  return(t);
}
ATerm iowrap_3_0 (ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm m_98 (ATerm), ATerm t)
{
  ATerm f_12 (ATerm t)
  {
    ATerm g_35 = t;
    int h_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_98(t);
        ;
        LocalPopChoice(h_35);
      }
    else
      {
        t = g_35;
        {
          ATerm j_35 = t;
          int k_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(k_35);
            }
          else
            {
              t = j_35;
              {
                ATerm l_35 = t;
                int m_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(m_35);
                  }
                else
                  {
                    t = l_35;
                    {
                      ATerm o_35 = t;
                      int p_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(i_12, j_12, v_12, t);
                          ;
                          LocalPopChoice(p_35);
                        }
                      else
                        {
                          t = o_35;
                          {
                            ATerm t_35 = t;
                            int u_35 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(u_35);
                              }
                            else
                              {
                                t = t_35;
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
  ATerm h_12 (ATerm t)
  {
    ATerm z_61 = NULL,a_62 = NULL,b_62 = NULL;
    a_62 = t;
    {
      ATerm v_35 = t;
      int w_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_12 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((z_61 != NULL) && (z_61 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  z_61 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(x_12, t);
          ;
          LocalPopChoice(w_35);
        }
      else
        {
          t = v_35;
          t = term_b_36;
          z_61 = t;
        }
      t = not_null(z_61);
      t = ReadFromFile_0_0(t);
      b_62 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_62, b_62);
      t = apply_strategy_1_0(k_98, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(f_12, m_98, g_12, h_12, t);
  return(t);
}
ATerm f_13 (ATerm t)
{
  ATerm c_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL,g_20 = NULL,f_20 = NULL,e_20 = NULL,c_20 = NULL;
  q_62 = t;
  if(match_cons(t, sym__2))
    {
      d_62 = ATgetArgument(t, 0);
      e_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_62);
  c_62 = t;
  t = e_62;
  if(match_cons(t, sym_Specification_1))
    {
      g_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_62);
  f_62 = t;
  t = g_62;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_62 = ATgetFirst((ATermList) t);
      k_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_62);
  i_62 = t;
  t = j_62;
  if(match_cons(t, sym_Signature_1))
    {
      o_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_62);
  n_62 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, o_62);
  c_20 = t;
  t = SSLsetAnnotations(c_20, n_62);
  p_62 = t;
  t = k_62;
  t = Cons_2_0(g_13, h_13, t);
  l_62 = t;
  t = (ATerm) ATinsert(CheckATermList(l_62), p_62);
  e_20 = t;
  t = SSLsetAnnotations(e_20, i_62);
  m_62 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, m_62);
  f_20 = t;
  t = SSLsetAnnotations(f_20, f_62);
  h_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_62, h_62);
  g_20 = t;
  t = SSLsetAnnotations(g_20, c_62);
  return(t);
}
ATerm g_13 (ATerm t)
{
  ATerm r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL,d_20 = NULL;
  u_62 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      s_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_62);
  r_62 = t;
  t = s_62;
  t = map_1_0(i_13, t);
  t_62 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, t_62);
  d_20 = t;
  t = SSLsetAnnotations(d_20, r_62);
  return(t);
}
ATerm h_13 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm i_13 (ATerm t)
{
  t = scope_2_0(k_13, l_13, t);
  return(t);
}
ATerm k_13 (ATerm t)
{
  t = term_e_14;
  return(t);
}
ATerm l_13 (ATerm t)
{
  t = scope_2_0(m_13, cp_0_0, t);
  return(t);
}
ATerm m_13 (ATerm t)
{
  t = term_a_14;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(f_13, _fail, default_usage_0_0, t);
  return(t);
}

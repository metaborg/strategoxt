#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Signature_1;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_As_2;
Symbol sym_Wld_0;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_GChoice_2;
Symbol sym_Choice_2;
Symbol sym_Thread_1;
Symbol sym_All_1;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_Path_2;
Symbol sym_PrimT_3;
Symbol sym_Bagof_1;
Symbol sym_Not_1;
Symbol sym_Rec_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_LChoice_2;
Symbol sym_Seq_2;
Symbol sym_Scope_2;
Symbol sym_Build_1;
Symbol sym_Match_1;
Symbol sym_CallT_3;
Symbol sym_Let_2;
Symbol sym_Fail_0;
Symbol sym_VarDec_2;
Symbol sym_SDefT_4;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
Symbol sym__16;
Symbol sym__17;
Symbol sym__18;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Hashtable_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
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
Symbol sym_Signature_1;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_As_2;
Symbol sym_Wld_0;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_GChoice_2;
Symbol sym_Choice_2;
Symbol sym_Thread_1;
Symbol sym_All_1;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_Path_2;
Symbol sym_PrimT_3;
Symbol sym_Bagof_1;
Symbol sym_Not_1;
Symbol sym_Rec_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_LChoice_2;
Symbol sym_Seq_2;
Symbol sym_Scope_2;
Symbol sym_Build_1;
Symbol sym_Match_1;
Symbol sym_CallT_3;
Symbol sym_Let_2;
Symbol sym_Fail_0;
Symbol sym_VarDec_2;
Symbol sym_SDefT_4;
Symbol sym_Cong_2;
static void init_module_constructors (void)
{
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_GChoice_2 = ATmakeSymbol("GChoice", 2, ATfalse);
  ATprotectSymbol(sym_GChoice_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Bagof_1 = ATmakeSymbol("Bagof", 1, ATfalse);
  ATprotectSymbol(sym_Bagof_1);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
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
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_GChoice_2 = ATmakeSymbol("GChoice", 2, ATfalse);
  ATprotectSymbol(sym_GChoice_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Bagof_1 = ATmakeSymbol("Bagof", 1, ATfalse);
  ATprotectSymbol(sym_Bagof_1);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
}
ATerm term_b_36;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_p_34;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_r_33;
ATerm term_m_33;
ATerm term_g_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_j_32;
ATerm term_h_32;
ATerm term_d_32;
ATerm term_b_32;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_b_29;
ATerm term_y_28;
ATerm term_v_28;
ATerm term_d_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_q_25;
ATerm term_u_24;
ATerm term_y_20;
ATerm term_f_20;
ATerm term_d_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_q_19;
ATerm term_l_19;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_r_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_h_13;
ATerm term_d_13;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_w_13);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym__2, term_a_20, term_b_20);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym__2, term_x_13, (ATerm) ATempty);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("no match with current term: ", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("strat: ", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("current: ", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym__2, term_b_20, term_i_30);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_30);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym__2, term_n_30, term_d_13);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym__2, term_a_20, term_k_31);
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym__2, term_a_20, term_h_32);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym__2, term_w_30, term_x_30);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(sym__2, term_z_32, term_d_13);
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(sym__2, term_c_33, term_d_13);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym__2, term_h_32, term_d_13);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(sym__3, term_w_30, term_x_30, (ATerm) ATempty);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(sym__2, term_a_20, term_z_32);
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(sym__2, term_h_35, term_d_13);
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
static ATerm a_0 (ATerm t);
static ATerm n_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm q_6 (ATerm o_103 (ATerm), ATerm m_23, ATerm n_23, ATerm t);
static ATerm v_0 (ATerm t);
static ATerm r_6 (ATerm m_103 (ATerm), ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
ATerm exec_maybe_1_0 (ATerm f_103 (ATerm), ATerm t);
static ATerm u_1 (ATerm t);
static ATerm t_6 (ATerm p_103 (ATerm), ATerm t);
static ATerm i_2 (ATerm t);
static ATerm g_6 (ATerm s_4, ATerm t_4, ATerm u_4, ATerm t);
ATerm isect_CurrentTerm_0_0 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm z_10 (ATerm g_9, ATerm k_9, ATerm l_9, ATerm t);
ATerm isect_Binding_0_0 (ATerm t);
static ATerm u_6 (ATerm x_59, ATerm w_59, ATerm t);
ATerm save_CurrentTerm_0_0 (ATerm t);
static ATerm v_6 (ATerm t_63, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_Binding_0_0 (ATerm t);
ATerm prop_abstract_choice_2_0 (ATerm t_103 (ATerm), ATerm u_103 (ATerm), ATerm t);
ATerm prop_choice_1_0 (ATerm s_103 (ATerm), ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm prop_traversal_1_0 (ATerm t_0 (ATerm), ATerm t);
static ATerm q_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm prop_call_1_0 (ATerm q_0 (ATerm), ATerm t);
static ATerm k_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm w_6 (ATerm n_103 (ATerm), ATerm h_23, ATerm t);
static ATerm x_5 (ATerm t);
ATerm prop_build_0_0 (ATerm t);
static ATerm x_6 (ATerm c_104 (ATerm), ATerm e_25, ATerm c_25, ATerm t);
ATerm oncetd_1_0 (ATerm p_108 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm m_113 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm v_129 (ATerm), ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm y_6 (ATerm a_24, ATerm b_24, ATerm t);
ATerm lookup_0_0 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm k_134 (ATerm), ATerm l_134 (ATerm), ATerm t);
static ATerm j_7 (ATerm p_139 (ATerm), ATerm s_79, ATerm t_79, ATerm v_79, ATerm u_79, ATerm t);
ATerm at_end_1_0 (ATerm o_114 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm h_27 (ATerm u_26, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm b_116 (ATerm), ATerm c_116 (ATerm), ATerm d_116 (ATerm), ATerm e_116 (ATerm), ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm c_7 (ATerm g_823, ATerm l_823, ATerm u_80, ATerm t);
ATerm while_not_2_0 (ATerm c_107 (ATerm), ATerm d_107 (ATerm), ATerm t);
ATerm for_3_0 (ATerm f_107 (ATerm), ATerm g_107 (ATerm), ATerm h_107 (ATerm), ATerm t);
static ATerm z_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm b_39 (ATerm s_33, ATerm t_33, ATerm u_33, ATerm t);
static ATerm e_39 (ATerm g_34, ATerm j_34, ATerm k_34, ATerm t);
static ATerm f_39 (ATerm b_35, ATerm d_35, ATerm f_35, ATerm t);
static ATerm i_39 (ATerm c_36, ATerm d_36, ATerm e_36, ATerm t);
static ATerm j_39 (ATerm x_36, ATerm y_36, ATerm z_36, ATerm t);
static ATerm f_7 (ATerm t);
ATerm prop_pattern_match_0_0 (ATerm t);
ATerm CurrentTerm_0_0 (ATerm t);
static ATerm m_7 (ATerm f_59, ATerm g_59, ATerm t);
ATerm Binding_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm d_109 (ATerm), ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
ATerm prop_match_0_0 (ATerm t);
ATerm cp_0_0 (ATerm t);
static ATerm n_7 (ATerm z_58, ATerm a_59, ATerm t);
ATerm end_scope_1_0 (ATerm z_103 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm h_106 (ATerm), ATerm i_106 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm y_103 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm a_104 (ATerm), ATerm b_104 (ATerm), ATerm t);
ATerm map_1_0 (ATerm x_113 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm b_90 (ATerm), ATerm c_90 (ATerm), ATerm t);
static ATerm p_7 (ATerm n_53, ATerm o_53, ATerm t);
static ATerm q_7 (ATerm s_37, ATerm t_37, ATerm t);
static ATerm s_7 (ATerm o_113 (ATerm), ATerm l_259, ATerm y_37, ATerm t);
static ATerm r_7 (ATerm o_37, ATerm p_37, ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm l_131 (ATerm), ATerm t);
static ATerm q_50 (ATerm k_50, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm t_7 (ATerm u_37, ATerm t);
static ATerm u_7 (ATerm r_51, ATerm s_51, ATerm t);
static ATerm v_7 (ATerm p_53, ATerm q_53, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm d_52 (ATerm a_51, ATerm t);
static ATerm e_52 (ATerm e_51, ATerm f_51, ATerm g_51, ATerm t);
static ATerm f_52 (ATerm o_51, ATerm p_51, ATerm q_51, ATerm t);
static ATerm w_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm h_114 (ATerm), ATerm t);
static ATerm b_8 (ATerm n_60, ATerm o_60, ATerm t);
ATerm if_verbose2_1_0 (ATerm u_129 (ATerm), ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm e_8 (ATerm l_72, ATerm m_72, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm h_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm c_8 (ATerm u_58, ATerm v_58, ATerm t_58, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm w_9 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm x_7 (ATerm d_57, ATerm e_57, ATerm t);
ATerm foldr_2_0 (ATerm w_120 (ATerm), ATerm x_120 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm t_129 (ATerm), ATerm t);
static ATerm z_9 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm c_10 (ATerm t);
ATerm need_help_1_0 (ATerm j_132 (ATerm), ATerm t);
static ATerm f_8 (ATerm m_63, ATerm n_63, ATerm o_63, ATerm t);
static ATerm g_8 (ATerm p_63, ATerm q_63, ATerm t);
ATerm lookup_table_0_1 (ATerm g_60, ATerm t);
ATerm new_hashtable_0_2 (ATerm u_63, ATerm v_63, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm z_7 (ATerm r_63, ATerm s_63, ATerm t);
static ATerm a_8 (ATerm w_63, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm f_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm r_10 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm h_134 (ATerm), ATerm t);
static ATerm t_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
ATerm parse_options_1_0 (ATerm g_134 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm l_132 (ATerm), ATerm m_132 (ATerm), ATerm n_132 (ATerm), ATerm o_132 (ATerm), ATerm t);
static ATerm b_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm r_11 (ATerm t);
ATerm iowrap_3_0 (ATerm u_131 (ATerm), ATerm v_131 (ATerm), ATerm w_131 (ATerm), ATerm t);
static ATerm y_11 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm c_13 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm y_0 = NULL,z_0 = NULL,c_1 = NULL,d_1 = NULL,f_1 = NULL;
  y_0 = t;
  t = term_d_13;
  t = whoami_0_0(t);
  z_0 = t;
  t = term_h_13;
  d_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_13), z_0), term_j_13);
  f_1 = t;
  t = SSL_printnl(d_1, f_1);
  t = term_l_13;
  c_1 = t;
  t = SSL_exit(c_1);
  t = y_0;
  return(t);
}
static ATerm a_0 (ATerm t)
{
  t = term_r_13;
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm t_1 = NULL,v_1 = NULL,w_1 = NULL,x_1 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      t_1 = ATgetArgument(t, 0);
      {
        ATerm s_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  v_1 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, t_1);
  w_1 = t;
  t = term_w_13;
  x_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, t_1), term_w_13);
  t = x_6(r_0, w_1, x_1, t);
  t = v_1;
  return(t);
}
static ATerm r_0 (ATerm t)
{
  t = term_r_13;
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm q_6 (ATerm o_103 (ATerm), ATerm m_23, ATerm n_23, ATerm t)
{
  static ATerm c_0 (ATerm t);
  static ATerm c_0 (ATerm t)
  {
    ATerm g_1 = NULL,i_1 = NULL,j_1 = NULL,l_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,o_0 = NULL;
    g_1 = t;
    t = n_23;
    t = map_1_0(n_0, t);
    t = g_1;
    if(match_cons(t, sym_SDefT_4))
      {
        j_1 = ATgetArgument(t, 0);
        l_1 = ATgetArgument(t, 1);
        o_1 = ATgetArgument(t, 2);
        p_1 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(g_1);
    i_1 = t;
    t = (ATerm) ATempty;
    r_1 = t;
    t = term_w_13;
    s_1 = t;
    t = term_z_13;
    t = x_6(s_0, r_1, s_1, t);
    t = p_1;
    t = o_103(t);
    q_1 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, j_1, l_1, o_1, q_1);
    o_0 = t;
    t = SSLsetAnnotations(o_0, i_1);
    return(t);
  }
  t = scope_2_0(a_0, c_0, t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm r_6 (ATerm m_103 (ATerm), ATerm t)
{
  ATerm y_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL,x_4 = NULL;
  y_1 = t;
  t = (ATerm) ATempty;
  z_1 = t;
  t = term_w_13;
  a_2 = t;
  t = term_z_13;
  t = x_6(v_0, z_1, a_2, t);
  t = y_1;
  if(match_cons(t, sym_Not_1))
    {
      c_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_1);
  b_2 = t;
  t = c_2;
  t = exec_maybe_1_0(m_103, t);
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym_Not_1, d_2);
  x_4 = t;
  t = SSLsetAnnotations(x_4, b_2);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm exec_maybe_1_0 (ATerm f_103 (ATerm), ATerm t)
{
  ATerm e_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL;
  g_2 = t;
  t = (ATerm) ATempty;
  l_2 = t;
  t = term_w_13;
  m_2 = t;
  t = term_z_13;
  t = x_6(w_0, l_2, m_2, t);
  t = g_2;
  t = save_Binding_0_0(t);
  e_2 = t;
  t = g_2;
  t = f_103(t);
  f_2 = t;
  t = (ATerm) ATempty;
  j_2 = t;
  t = term_w_13;
  k_2 = t;
  t = term_z_13;
  t = x_6(x_0, j_2, k_2, t);
  t = term_r_13;
  t = table_destroy_0_0(t);
  t = term_r_13;
  h_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_13, e_2);
  t = u_6(h_2, e_2, t);
  t = f_2;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm t_6 (ATerm p_103 (ATerm), ATerm t)
{
  ATerm n_2 = NULL,p_2 = NULL,r_2 = NULL,s_2 = NULL,w_2 = NULL,y_2 = NULL,a_3 = NULL,c_3 = NULL,e_3 = NULL,f_3 = NULL,z_4 = NULL;
  r_2 = t;
  t = save_Binding_0_0(t);
  p_2 = t;
  t = save_CurrentTerm_0_0(t);
  n_2 = t;
  t = r_2;
  if(match_cons(t, sym_Let_2))
    {
      w_2 = ATgetArgument(t, 0);
      y_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_2);
  s_2 = t;
  t = w_2;
  {
    static ATerm n_1 (ATerm t);
    static ATerm n_1 (ATerm t)
    {
      ATerm g_3 = NULL,m_3 = NULL,b_4 = NULL,c_4 = NULL;
      g_3 = t;
      t = (ATerm) ATempty;
      b_4 = t;
      t = term_w_13;
      c_4 = t;
      t = term_z_13;
      t = x_6(u_1, b_4, c_4, t);
      t = term_r_13;
      t = table_destroy_0_0(t);
      t = term_r_13;
      m_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_r_13, p_2);
      t = u_6(m_3, p_2, t);
      t = g_3;
      t = p_103(t);
      return(t);
    }
    t = map_1_0(n_1, t);
  }
  a_3 = t;
  t = term_x_13;
  t = table_destroy_0_0(t);
  t = term_x_13;
  f_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_13, n_2);
  t = u_6(f_3, n_2, t);
  t = term_r_13;
  t = table_destroy_0_0(t);
  t = term_r_13;
  e_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_13, p_2);
  t = u_6(e_3, p_2, t);
  t = y_2;
  t = p_103(t);
  c_3 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, a_3, c_3);
  z_4 = t;
  t = SSLsetAnnotations(z_4, s_2);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL,l_5 = NULL,p_5 = NULL;
  p_5 = t;
  if(match_cons(t, sym__2))
    {
      h_5 = ATgetArgument(t, 0);
      i_5 = ATgetArgument(t, 1);
      t = i_5;
      {
        ATerm c_14 = t;
        int i_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_5 = ATgetFirst((ATermList) t);
                {
                  ATerm j_14 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(i_14);
            t = j_5;
            {
              ATerm l_14 = t;
              int n_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm o_14 = ATgetArgument(t, 0);
                      l_5 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(n_14);
                  t = h_5;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = p_5;
                    }
                  else
                    {
                      ATerm p_14 = t;
                      int u_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = g_6(h_5, l_5, p_5, t);
                          LocalPopChoice(u_14);
                        }
                      else
                        {
                          t = p_14;
                          t = p_5;
                        }
                    }
                }
              else
                {
                  t = l_14;
                  t = h_5;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = p_5;
                    }
                  else
                    {
                      t = p_5;
                    }
                }
            }
          }
        else
          {
            t = c_14;
            t = h_5;
            if(match_cons(t, sym_Scopes_0))
              {
                t = p_5;
              }
            else
              {
                t = p_5;
              }
          }
      }
    }
  else
    {
      t = p_5;
    }
  return(t);
}
static ATerm g_6 (ATerm s_4, ATerm t_4, ATerm u_4, ATerm t)
{
  t = u_4;
  {
    ATerm z_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_0 = NULL;
        t = term_x_13;
        i_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_13, s_4);
        t = b_8(i_0, s_4, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm c_15 = ATgetFirst((ATermList) t);
            if(match_cons(c_15, sym_Defined_2))
              {
                ATerm l_15 = ATgetArgument(c_15, 0);
                if((t_4 != ATgetArgument(c_15, 1)))
                  {
                    _fail(ATgetArgument(c_15, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm g_15 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = u_4;
        LocalPopChoice(a_15);
      }
    else
      {
        t = z_14;
        t = (ATerm) ATmakeAppl(sym__2, s_4, (ATerm) ATinsert(ATempty, term_w_13));
      }
  }
  return(t);
}
ATerm isect_CurrentTerm_0_0 (ATerm t)
{
  ATerm p_4 = NULL,r_4 = NULL;
  t = map_1_0(i_2, t);
  p_4 = t;
  t = term_x_13;
  t = table_destroy_0_0(t);
  t = term_x_13;
  r_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_13, p_4);
  t = u_6(r_4, p_4, t);
  t = p_4;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm v_9 = NULL,b_10 = NULL,d_10 = NULL,l_10 = NULL,p_10 = NULL;
  p_10 = t;
  if(match_cons(t, sym__2))
    {
      v_9 = ATgetArgument(t, 0);
      b_10 = ATgetArgument(t, 1);
      t = b_10;
      {
        ATerm m_15 = t;
        int n_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                d_10 = ATgetFirst((ATermList) t);
                {
                  ATerm r_15 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(n_15);
            t = d_10;
            {
              ATerm u_15 = t;
              int w_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm a_16 = ATgetArgument(t, 0);
                      l_10 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(w_15);
                  t = v_9;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = p_10;
                    }
                  else
                    {
                      ATerm b_16 = t;
                      int d_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = z_10(v_9, l_10, p_10, t);
                          LocalPopChoice(d_16);
                        }
                      else
                        {
                          t = b_16;
                          t = p_10;
                        }
                    }
                }
              else
                {
                  t = u_15;
                  t = v_9;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = p_10;
                    }
                  else
                    {
                      t = p_10;
                    }
                }
            }
          }
        else
          {
            t = m_15;
            t = v_9;
            if(match_cons(t, sym_Scopes_0))
              {
                t = p_10;
              }
            else
              {
                t = p_10;
              }
          }
      }
    }
  else
    {
      t = p_10;
    }
  return(t);
}
static ATerm z_10 (ATerm g_9, ATerm k_9, ATerm l_9, ATerm t)
{
  t = l_9;
  {
    ATerm e_16 = t;
    int i_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_0 = NULL;
        t = term_r_13;
        u_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_r_13, g_9);
        t = b_8(u_0, g_9, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm j_16 = ATgetFirst((ATermList) t);
            if(match_cons(j_16, sym_Defined_2))
              {
                ATerm l_16 = ATgetArgument(j_16, 0);
                if((k_9 != ATgetArgument(j_16, 1)))
                  {
                    _fail(ATgetArgument(j_16, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm k_16 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = l_9;
        LocalPopChoice(i_16);
      }
    else
      {
        t = e_16;
        t = (ATerm) ATmakeAppl(sym__2, g_9, (ATerm) ATinsert(ATempty, term_w_13));
      }
  }
  return(t);
}
ATerm isect_Binding_0_0 (ATerm t)
{
  ATerm b_9 = NULL,f_9 = NULL;
  t = map_1_0(j_3, t);
  b_9 = t;
  t = term_r_13;
  t = table_destroy_0_0(t);
  t = term_r_13;
  f_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_13, b_9);
  t = u_6(f_9, b_9, t);
  t = b_9;
  return(t);
}
static ATerm u_6 (ATerm x_59, ATerm w_59, ATerm t)
{
  static ATerm k_3 (ATerm t);
  static ATerm k_3 (ATerm t)
  {
    ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL;
    if(match_cons(t, sym__2))
      {
        i_11 = ATgetArgument(t, 0);
        j_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, x_59, i_11, j_11);
    t = lookup_table_0_1(x_59, t);
    if(match_cons(t, sym_Hashtable_1))
      {
        k_11 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = f_8(i_11, j_11, k_11, t);
    t = (ATerm) ATmakeAppl(sym__3, x_59, i_11, j_11);
    return(t);
  }
  t = w_59;
  t = map_1_0(k_3, t);
  return(t);
}
ATerm save_CurrentTerm_0_0 (ATerm t)
{
  t = term_x_13;
  t = table_getlist_0_0(t);
  return(t);
}
static ATerm v_6 (ATerm t_63, ATerm t)
{
  t = SSL_hashtable_keys(t_63);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm q_11 = NULL,t_11 = NULL;
  static ATerm l_3 (ATerm t);
  static ATerm l_3 (ATerm t)
  {
    ATerm u_11 = NULL,v_11 = NULL;
    u_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_11), u_11);
    t = b_8(not_null(q_11), u_11, t);
    v_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_11, v_11);
    return(t);
  }
  if(((q_11 != NULL) && (q_11 != t)))
    _fail(t);
  else
    q_11 = t;
  t = lookup_table_0_1(q_11, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_6(t_11, t);
  t = map_1_0(l_3, t);
  return(t);
}
ATerm save_Binding_0_0 (ATerm t)
{
  t = term_r_13;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm prop_abstract_choice_2_0 (ATerm t_103 (ATerm), ATerm u_103 (ATerm), ATerm t)
{
  ATerm w_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL;
  i_12 = t;
  t = save_Binding_0_0(t);
  w_11 = t;
  t = save_CurrentTerm_0_0(t);
  a_12 = t;
  t = i_12;
  t = t_103(t);
  h_12 = t;
  t = save_Binding_0_0(t);
  b_12 = t;
  t = term_r_13;
  t = table_destroy_0_0(t);
  t = term_r_13;
  k_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_13, w_11);
  t = u_6(k_12, w_11, t);
  t = w_11;
  t = save_CurrentTerm_0_0(t);
  c_12 = t;
  t = term_x_13;
  t = table_destroy_0_0(t);
  t = term_x_13;
  j_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_13, a_12);
  t = u_6(j_12, a_12, t);
  t = h_12;
  t = u_103(t);
  g_12 = t;
  t = b_12;
  t = isect_Binding_0_0(t);
  t = c_12;
  t = isect_CurrentTerm_0_0(t);
  t = g_12;
  return(t);
}
ATerm prop_choice_1_0 (ATerm s_103 (ATerm), ATerm t)
{
  ATerm m_12 = NULL;
  m_12 = t;
  {
    ATerm m_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Choice_2))
          {
            ATerm o_16 = ATgetArgument(t, 0);
            ATerm p_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(n_16);
        {
          static ATerm y_3 (ATerm t);
          static ATerm z_3 (ATerm t);
          static ATerm y_3 (ATerm t)
          {
            ATerm s_12 = NULL,t_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,d_5 = NULL;
            x_12 = t;
            if(match_cons(t, sym_Choice_2))
              {
                t_12 = ATgetArgument(t, 0);
                v_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(x_12);
            s_12 = t;
            t = t_12;
            t = s_103(t);
            w_12 = t;
            t = (ATerm) ATmakeAppl(sym_Choice_2, w_12, v_12);
            d_5 = t;
            t = SSLsetAnnotations(d_5, s_12);
            return(t);
          }
          static ATerm z_3 (ATerm t)
          {
            ATerm a_13 = NULL,b_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,m_5 = NULL;
            g_13 = t;
            if(match_cons(t, sym_Choice_2))
              {
                b_13 = ATgetArgument(t, 0);
                e_13 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(g_13);
            a_13 = t;
            t = e_13;
            t = s_103(t);
            f_13 = t;
            t = (ATerm) ATmakeAppl(sym_Choice_2, b_13, f_13);
            m_5 = t;
            t = SSLsetAnnotations(m_5, a_13);
            return(t);
          }
          t = m_12;
          t = prop_abstract_choice_2_0(y_3, z_3, t);
        }
      }
    else
      {
        t = m_16;
        {
          ATerm r_16 = t;
          int s_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_GChoice_2))
                {
                  ATerm t_16 = ATgetArgument(t, 0);
                  ATerm u_16 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(s_16);
              {
                static ATerm a_4 (ATerm t);
                static ATerm d_4 (ATerm t);
                static ATerm a_4 (ATerm t)
                {
                  ATerm i_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,n_5 = NULL;
                  p_13 = t;
                  if(match_cons(t, sym_GChoice_2))
                    {
                      m_13 = ATgetArgument(t, 0);
                      n_13 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(p_13);
                  i_13 = t;
                  t = m_13;
                  t = s_103(t);
                  o_13 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, o_13, n_13);
                  n_5 = t;
                  t = SSLsetAnnotations(n_5, i_13);
                  return(t);
                }
                static ATerm d_4 (ATerm t)
                {
                  ATerm q_13 = NULL,u_13 = NULL,y_13 = NULL,a_14 = NULL,b_14 = NULL,q_5 = NULL;
                  b_14 = t;
                  if(match_cons(t, sym_GChoice_2))
                    {
                      u_13 = ATgetArgument(t, 0);
                      y_13 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(b_14);
                  q_13 = t;
                  t = y_13;
                  t = s_103(t);
                  a_14 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, u_13, a_14);
                  q_5 = t;
                  t = SSLsetAnnotations(q_5, q_13);
                  return(t);
                }
                t = m_12;
                t = prop_abstract_choice_2_0(a_4, d_4, t);
              }
            }
          else
            {
              t = r_16;
              {
                ATerm v_16 = t;
                int x_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_LChoice_2))
                      {
                        ATerm z_16 = ATgetArgument(t, 0);
                        ATerm b_17 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(x_16);
                    {
                      static ATerm f_4 (ATerm t);
                      static ATerm g_4 (ATerm t);
                      static ATerm f_4 (ATerm t)
                      {
                        ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL,m_14 = NULL,t_5 = NULL;
                        m_14 = t;
                        if(match_cons(t, sym_LChoice_2))
                          {
                            f_14 = ATgetArgument(t, 0);
                            g_14 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(m_14);
                        e_14 = t;
                        t = f_14;
                        t = s_103(t);
                        h_14 = t;
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, h_14, g_14);
                        t_5 = t;
                        t = SSLsetAnnotations(t_5, e_14);
                        return(t);
                      }
                      static ATerm g_4 (ATerm t)
                      {
                        ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,v_14 = NULL,d_6 = NULL;
                        v_14 = t;
                        if(match_cons(t, sym_LChoice_2))
                          {
                            r_14 = ATgetArgument(t, 0);
                            s_14 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(v_14);
                        q_14 = t;
                        t = s_14;
                        t = s_103(t);
                        t_14 = t;
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, r_14, t_14);
                        d_6 = t;
                        t = SSLsetAnnotations(d_6, q_14);
                        return(t);
                      }
                      t = m_12;
                      t = prop_abstract_choice_2_0(f_4, g_4, t);
                    }
                  }
                else
                  {
                    t = v_16;
                    {
                      static ATerm i_4 (ATerm t);
                      static ATerm j_4 (ATerm t);
                      static ATerm i_4 (ATerm t)
                      {
                        ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,h_6 = NULL,e_6 = NULL;
                        q_15 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            i_15 = ATgetArgument(t, 0);
                            j_15 = ATgetArgument(t, 1);
                            k_15 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(q_15);
                        f_15 = t;
                        t = i_15;
                        t = s_103(t);
                        o_15 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, o_15, j_15, k_15);
                        e_6 = t;
                        t = SSLsetAnnotations(e_6, f_15);
                        p_15 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            x_14 = ATgetArgument(t, 0);
                            y_14 = ATgetArgument(t, 1);
                            d_15 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(p_15);
                        w_14 = t;
                        t = y_14;
                        t = s_103(t);
                        e_15 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, x_14, e_15, d_15);
                        h_6 = t;
                        t = SSLsetAnnotations(h_6, w_14);
                        return(t);
                      }
                      static ATerm j_4 (ATerm t)
                      {
                        ATerm v_15 = NULL,x_15 = NULL,c_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,i_6 = NULL;
                        h_16 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            x_15 = ATgetArgument(t, 0);
                            c_16 = ATgetArgument(t, 1);
                            f_16 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(h_16);
                        v_15 = t;
                        t = f_16;
                        t = s_103(t);
                        g_16 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, x_15, c_16, g_16);
                        i_6 = t;
                        t = SSLsetAnnotations(i_6, v_15);
                        return(t);
                      }
                      if(match_cons(t, sym_GuardedLChoice_3))
                        {
                          ATerm d_17 = ATgetArgument(t, 0);
                          ATerm f_17 = ATgetArgument(t, 1);
                          ATerm g_17 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = m_12;
                      t = prop_abstract_choice_2_0(i_4, j_4, t);
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm prop_traversal_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm h_17 = t;
  int i_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_17 = NULL,a_1 = NULL,b_1 = NULL,e_1 = NULL,h_1 = NULL,k_1 = NULL,m_1 = NULL,m_8 = NULL;
      e_17 = t;
      if(match_cons(t, sym_Cong_2))
        {
          ATerm m_17 = ATgetArgument(t, 0);
          ATerm n_17 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      a_1 = t;
      t = term_w_13;
      b_1 = t;
      t = term_z_13;
      t = x_6(k_4, a_1, b_1, t);
      t = e_17;
      if(match_cons(t, sym_Cong_2))
        {
          h_1 = ATgetArgument(t, 0);
          k_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_17);
      e_1 = t;
      t = k_1;
      {
        static ATerm l_4 (ATerm t);
        static ATerm l_4 (ATerm t)
        {
          t = exec_maybe_1_0(t_0, t);
          return(t);
        }
        t = map_1_0(l_4, t);
      }
      m_1 = t;
      t = (ATerm) ATmakeAppl(sym_Cong_2, h_1, m_1);
      m_8 = t;
      t = SSLsetAnnotations(m_8, e_1);
      LocalPopChoice(i_17);
    }
  else
    {
      t = h_17;
      {
        ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL;
        static ATerm o_4 (ATerm t);
        static ATerm o_4 (ATerm t)
        {
          t = exec_maybe_1_0(t_0, t);
          return(t);
        }
        ATerm p_17 = t;
        int s_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_All_1))
              {
                ATerm t_17 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(s_17);
          }
        else
          {
            t = p_17;
            {
              ATerm o_17 = NULL;
              o_17 = t;
              {
                ATerm u_17 = t;
                int w_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_One_1))
                      {
                        ATerm a_18 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(w_17);
                    t = o_17;
                  }
                else
                  {
                    t = u_17;
                    {
                      ATerm d_18 = t;
                      int j_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Some_1))
                            {
                              ATerm k_18 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(j_18);
                          t = o_17;
                        }
                      else
                        {
                          t = d_18;
                          {
                            ATerm n_18 = t;
                            int p_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_Thread_1))
                                  {
                                    ATerm q_18 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(p_18);
                                t = o_17;
                              }
                            else
                              {
                                t = n_18;
                                if(match_cons(t, sym_Bagof_1))
                                  {
                                    ATerm r_18 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = o_17;
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
        k_17 = t;
        t = term_w_13;
        l_17 = t;
        t = term_z_13;
        t = x_6(m_4, k_17, l_17, t);
        t = j_17;
        t = SRTS_one(o_4, t);
      }
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm d_3 = NULL,h_3 = NULL,i_3 = NULL,p_9 = NULL;
  t = Binding_0_0(t);
  i_3 = t;
  if(match_cons(t, sym_Var_1))
    {
      h_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_3);
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, h_3);
  p_9 = t;
  t = SSLsetAnnotations(p_9, d_3);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL,s_9 = NULL;
  t = Binding_0_0(t);
  x_3 = t;
  if(match_cons(t, sym_Var_1))
    {
      w_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_3);
  v_3 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_3);
  s_9 = t;
  t = SSLsetAnnotations(s_9, v_3);
  return(t);
}
ATerm prop_call_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm w_19 = NULL;
  w_19 = t;
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_PrimT_3))
          {
            ATerm u_18 = ATgetArgument(t, 0);
            ATerm v_18 = ATgetArgument(t, 1);
            ATerm x_18 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(t_18);
        {
          ATerm o_2 = NULL,q_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,x_2 = NULL,z_2 = NULL,b_3 = NULL,r_9 = NULL;
          t = (ATerm) ATempty;
          o_2 = t;
          t = term_w_13;
          q_2 = t;
          t = term_z_13;
          t = x_6(q_4, o_2, q_2, t);
          t = w_19;
          if(match_cons(t, sym_PrimT_3))
            {
              u_2 = ATgetArgument(t, 0);
              v_2 = ATgetArgument(t, 1);
              x_2 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_19);
          t_2 = t;
          t = v_2;
          {
            static ATerm v_4 (ATerm t);
            static ATerm v_4 (ATerm t)
            {
              t = exec_maybe_1_0(q_0, t);
              return(t);
            }
            t = map_1_0(v_4, t);
          }
          z_2 = t;
          t = x_2;
          t = alltd_1_0(w_4, t);
          b_3 = t;
          t = (ATerm) ATmakeAppl(sym_PrimT_3, u_2, z_2, b_3);
          r_9 = t;
          t = SSLsetAnnotations(r_9, t_2);
        }
      }
    else
      {
        t = s_18;
        {
          ATerm n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,g_11 = NULL;
          if(match_cons(t, sym_CallT_3))
            {
              ATerm a_19 = ATgetArgument(t, 0);
              ATerm b_19 = ATgetArgument(t, 1);
              ATerm d_19 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATempty;
          n_3 = t;
          t = term_w_13;
          o_3 = t;
          t = term_z_13;
          t = x_6(y_4, n_3, o_3, t);
          t = w_19;
          if(match_cons(t, sym_CallT_3))
            {
              q_3 = ATgetArgument(t, 0);
              r_3 = ATgetArgument(t, 1);
              s_3 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_19);
          p_3 = t;
          t = r_3;
          {
            static ATerm b_5 (ATerm t);
            static ATerm b_5 (ATerm t)
            {
              t = exec_maybe_1_0(q_0, t);
              return(t);
            }
            t = map_1_0(b_5, t);
          }
          t_3 = t;
          t = s_3;
          t = alltd_1_0(g_5, t);
          u_3 = t;
          t = (ATerm) ATmakeAppl(sym_CallT_3, q_3, t_3, u_3);
          g_11 = t;
          t = SSLsetAnnotations(g_11, p_3);
        }
      }
  }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_r_13;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm q_20 = NULL,u_20 = NULL,v_20 = NULL;
  q_20 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_20);
  u_20 = t;
  t = term_w_13;
  v_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, q_20), term_w_13);
  t = x_6(s_5, u_20, v_20, t);
  t = q_20;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_r_13;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm w_6 (ATerm n_103 (ATerm), ATerm h_23, ATerm t)
{
  static ATerm o_5 (ATerm t);
  static ATerm o_5 (ATerm t)
  {
    ATerm i_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL,y_16 = NULL;
    i_20 = t;
    t = h_23;
    t = map_1_0(r_5, t);
    t = i_20;
    if(match_cons(t, sym_Scope_2))
      {
        m_20 = ATgetArgument(t, 0);
        n_20 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(i_20);
    l_20 = t;
    t = n_20;
    t = n_103(t);
    o_20 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, m_20, o_20);
    y_16 = t;
    t = SSLsetAnnotations(y_16, l_20);
    p_20 = t;
    {
      ATerm f_19 = t;
      int k_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL;
          t = CurrentTerm_0_0(t);
          {
            static ATerm u_5 (ATerm t);
            static ATerm u_5 (ATerm t)
            {
              ATerm c_21 = NULL;
              static ATerm v_5 (ATerm t);
              static ATerm v_5 (ATerm t)
              {
                if(((c_21 != NULL) && (c_21 != t)))
                  _fail(t);
                else
                  c_21 = t;
                return(t);
              }
              if(match_cons(t, sym_Var_1))
                {
                  if(((c_21 != NULL) && (c_21 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    c_21 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = h_23;
              t = fetch_1_0(v_5, t);
              return(t);
            }
            t = oncetd_1_0(u_5, t);
          }
          z_20 = t;
          t = (ATerm) ATempty;
          a_21 = t;
          t = term_w_13;
          b_21 = t;
          t = term_z_13;
          t = x_6(w_5, a_21, b_21, t);
          t = z_20;
          LocalPopChoice(k_19);
        }
      else
        {
          t = f_19;
        }
    }
    t = p_20;
    return(t);
  }
  t = scope_2_0(k_5, o_5, t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm prop_build_0_0 (ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,a_17 = NULL;
  z_21 = t;
  if(match_cons(t, sym_Build_1))
    {
      w_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_21);
  v_21 = t;
  t = w_21;
  t = alltd_1_0(Binding_0_0, t);
  x_21 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, x_21);
  a_17 = t;
  t = SSLsetAnnotations(a_17, v_21);
  y_21 = t;
  if(match_cons(t, sym_Build_1))
    {
      j_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  k_21 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_l_19, j_21);
  u_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_l_19, j_21));
  t = x_6(x_5, k_21, u_21, t);
  t = y_21;
  return(t);
}
static ATerm x_6 (ATerm c_104 (ATerm), ATerm e_25, ATerm c_25, ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL;
  g_22 = t;
  t = c_104(t);
  a_22 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_22, e_25, c_25);
  t = c_8(a_22, e_25, c_25, t);
  {
    ATerm m_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_22 = NULL;
        t = term_q_19;
        q_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_22, term_q_19);
        t = b_8(a_22, q_22, t);
        {
          ATerm r_19 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = r_19;
            }
        }
        LocalPopChoice(n_19);
      }
    else
      {
        t = m_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_22 = ATgetFirst((ATermList) t);
      c_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, a_22, term_q_19, (ATerm) ATinsert(CheckATermList(c_22), (ATerm) ATinsert(CheckATermList(b_22), e_25)));
  t = lookup_table_0_1(a_22, t);
  k_22 = t;
  t = term_q_19;
  h_22 = t;
  t = (ATerm) ATinsert(CheckATermList(c_22), (ATerm) ATinsert(CheckATermList(b_22), e_25));
  i_22 = t;
  t = k_22;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(h_22, i_22, j_22, t);
  t = g_22;
  return(t);
}
ATerm oncetd_1_0 (ATerm p_108 (ATerm), ATerm t)
{
  static ATerm r_22 (ATerm t);
  static ATerm r_22 (ATerm t)
  {
    ATerm u_19 = t;
    int v_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_108(t);
        LocalPopChoice(v_19);
      }
    else
      {
        t = u_19;
        t = SRTS_one(r_22, t);
      }
    return(t);
  }
  t = r_22(t);
  return(t);
}
ATerm debug_1_0 (ATerm m_113 (ATerm), ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL,v_22 = NULL,w_22 = NULL;
  s_22 = t;
  t = m_113(t);
  t_22 = t;
  t = term_h_13;
  v_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_22), t_22);
  w_22 = t;
  t = SSL_printnl(v_22, w_22);
  t = s_22;
  return(t);
}
ATerm if_verbose3_1_0 (ATerm v_129 (ATerm), ATerm t)
{
  ATerm z_22 = NULL;
  z_22 = t;
  {
    ATerm x_19 = t;
    int z_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_23 = NULL,k_23 = NULL,p_23 = NULL;
        t = term_a_20;
        k_23 = t;
        t = term_b_20;
        p_23 = t;
        t = term_d_20;
        t = b_8(k_23, p_23, t);
        c_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_23, term_f_20);
        t = geq_0_0(t);
        t = z_22;
        t = v_129(t);
        LocalPopChoice(z_19);
      }
    else
      {
        t = x_19;
        t = z_22;
      }
  }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm n_24 = NULL;
  n_24 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = n_24;
    }
  else
    {
      if(match_cons(t, sym_As_2))
        {
          ATerm h_20 = ATgetArgument(t, 0);
          ATerm w_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = n_24;
    }
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = term_r_13;
  return(t);
}
static ATerm y_6 (ATerm a_24, ATerm b_24, ATerm t)
{
  ATerm c_24 = NULL,h_24 = NULL,j_24 = NULL;
  c_24 = t;
  t = b_24;
  {
    ATerm x_20 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(y_5, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_20;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, a_24);
  h_24 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_y_20, b_24);
  j_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, a_24), (ATerm) ATmakeAppl(sym_Defined_2, term_y_20, b_24));
  t = x_6(z_5, h_24, j_24, t);
  t = c_24;
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm g_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,q_28 = NULL,r_28 = NULL,t_28 = NULL;
  k_28 = t;
  if(match_cons(t, sym__2))
    {
      l_28 = ATgetArgument(t, 0);
      q_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_28;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_28 = ATgetFirst((ATermList) t);
      t_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_28;
  if(match_cons(t, sym__2))
    {
      g_28 = ATgetArgument(t, 0);
      j_28 = ATgetArgument(t, 1);
      {
        ATerm d_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_28;
            if((l_28 != t))
              {
                _fail(t);
              }
            t = j_28;
            LocalPopChoice(e_21);
          }
        else
          {
            t = d_21;
            t = (ATerm) ATmakeAppl(sym__2, l_28, t_28);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, l_28, t_28);
      t = lookup_0_0(t);
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_21 = ATgetArgument(t, 0);
      if(((ATgetType(f_21) != AT_LIST) || !(ATisEmpty(f_21))))
        _fail(t);
      {
        ATerm g_21 = ATgetArgument(t, 1);
        if(((ATgetType(g_21) != AT_LIST) || !(ATisEmpty(g_21))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm d_31 = NULL,j_31 = NULL,n_31 = NULL,q_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_21 = ATgetArgument(t, 0);
      if(((ATgetType(h_21) == AT_LIST) && !(ATisEmpty(h_21))))
        {
          d_31 = ATgetFirst((ATermList) h_21);
          j_31 = (ATerm) ATgetNext((ATermList) h_21);
        }
      else
        _fail(t);
      {
        ATerm i_21 = ATgetArgument(t, 1);
        if(((ATgetType(i_21) == AT_LIST) && !(ATisEmpty(i_21))))
          {
            n_31 = ATgetFirst((ATermList) i_21);
            q_31 = (ATerm) ATgetNext((ATermList) i_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_31, n_31), (ATerm) ATmakeAppl(sym__2, j_31, q_31));
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL;
  if(match_cons(t, sym__2))
    {
      r_31 = ATgetArgument(t, 0);
      s_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_31), r_31);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm y_29 = NULL,a_30 = NULL,b_30 = NULL,o_30 = NULL;
  y_29 = t;
  {
    ATerm l_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_21 = ATgetArgument(t, 0);
            ATerm o_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(m_21);
        t = y_29;
      }
    else
      {
        t = l_21;
        {
          ATerm b_31 = NULL;
          if(match_cons(t, sym__3))
            {
              a_30 = ATgetArgument(t, 0);
              b_30 = ATgetArgument(t, 1);
              o_30 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, a_30, b_30);
          t = genzip_4_0(a_6, f_6, j_6, _id, t);
          b_31 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_31, o_30);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm k_134 (ATerm), ATerm l_134 (ATerm), ATerm t)
{
  ATerm u_31 = NULL,x_31 = NULL;
  static ATerm k_6 (ATerm t);
  static ATerm k_6 (ATerm t)
  {
    ATerm n_4 = NULL;
    t = k_134(t);
    n_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_4, not_null(x_31));
    t = lookup_0_0(t);
    t = l_134(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((x_31 != NULL) && (x_31 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_31 = ATgetArgument(t, 0);
      u_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_31;
  t = alltd_1_0(k_6, t);
  return(t);
}
static ATerm j_7 (ATerm p_139 (ATerm), ATerm s_79, ATerm t_79, ATerm v_79, ATerm u_79, ATerm t)
{
  ATerm c_32 = NULL,e_32 = NULL;
  t = s_79;
  t = p_139(t);
  t = (ATerm) ATmakeAppl(sym__2, s_79, t_79);
  {
    ATerm p_21 = t;
    if((PushChoice() == 0))
      {
        ATerm i_32 = NULL,m_32 = NULL;
        if(match_cons(t, sym__2))
          {
            i_32 = ATgetArgument(t, 0);
            m_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_32;
        {
          static ATerm l_6 (ATerm t);
          static ATerm l_6 (ATerm t)
          {
            if((i_32 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1_0(l_6, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, i_32, m_32);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, s_79, t_79)), (ATerm) ATmakeAppl(sym__2, u_79, v_79));
  t = substitute_2_0(p_139, _id, t);
  if(match_cons(t, sym__2))
    {
      c_32 = ATgetArgument(t, 0);
      e_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_32, (ATerm) ATinsert(CheckATermList(c_32), (ATerm) ATmakeAppl(sym__2, s_79, t_79)));
  return(t);
}
ATerm at_end_1_0 (ATerm o_114 (ATerm), ATerm t)
{
  static ATerm q_26 (ATerm t);
  static ATerm q_26 (ATerm t)
  {
    ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL;
    p_26 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_26 = ATgetFirst((ATermList) t);
        o_26 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm e_4 = NULL,h_4 = NULL,c_17 = NULL;
          t = SSLgetAnnotations(p_26);
          e_4 = t;
          t = o_26;
          t = q_26(t);
          h_4 = t;
          t = (ATerm) ATinsert(CheckATermList(h_4), n_26);
          c_17 = t;
          t = SSLsetAnnotations(c_17, e_4);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_26;
        t = o_114(t);
      }
    return(t);
  }
  t = q_26(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL;
  l_25 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_25;
    }
  else
    {
      static ATerm m_6 (ATerm t);
      static ATerm m_6 (ATerm t)
      {
        t = not_null(n_25);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_25 = ATgetFirst((ATermList) t);
          if(((n_25 != NULL) && (n_25 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            n_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_25;
      t = at_end_1_0(m_6, t);
    }
  return(t);
}
static ATerm h_27 (ATerm u_26, ATerm t)
{
  ATerm v_26 = NULL;
  t = SSL_explode_term(u_26);
  if(match_cons(t, sym__2))
    {
      ATerm q_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      v_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_26;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL;
  b_27 = t;
  if(match_cons(t, sym__2))
    {
      z_26 = ATgetArgument(t, 0);
      a_27 = ATgetArgument(t, 1);
      {
        ATerm r_21 = t;
        int s_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm n_6 (ATerm t);
            static ATerm n_6 (ATerm t)
            {
              t = a_27;
              return(t);
            }
            t = z_26;
            t = at_end_1_0(n_6, t);
            LocalPopChoice(s_21);
          }
        else
          {
            t = r_21;
            t = h_27(b_27, t);
          }
      }
    }
  else
    {
      t = h_27(b_27, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm b_116 (ATerm), ATerm c_116 (ATerm), ATerm d_116 (ATerm), ATerm e_116 (ATerm), ATerm t)
{
  static ATerm v_29 (ATerm t);
  static ATerm v_29 (ATerm t)
  {
    ATerm t_21 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_116(t);
        LocalPopChoice(d_22);
      }
    else
      {
        t = t_21;
        {
          ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL,q_17 = NULL;
          t = c_116(t);
          q_29 = t;
          if(match_cons(t, sym__2))
            {
              m_29 = ATgetArgument(t, 0);
              n_29 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(q_29);
          l_29 = t;
          t = m_29;
          t = e_116(t);
          o_29 = t;
          t = n_29;
          t = v_29(t);
          p_29 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_29, p_29);
          q_17 = t;
          t = SSLsetAnnotations(q_17, l_29);
          t = d_116(t);
        }
      }
    return(t);
  }
  t = v_29(t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_22 = ATgetArgument(t, 0);
      if(((ATgetType(e_22) != AT_LIST) || !(ATisEmpty(e_22))))
        _fail(t);
      {
        ATerm f_22 = ATgetArgument(t, 1);
        if(((ATgetType(f_22) != AT_LIST) || !(ATisEmpty(f_22))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL,u_27 = NULL,v_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_22 = ATgetArgument(t, 0);
      if(((ATgetType(l_22) == AT_LIST) && !(ATisEmpty(l_22))))
        {
          r_27 = ATgetFirst((ATermList) l_22);
          s_27 = (ATerm) ATgetNext((ATermList) l_22);
        }
      else
        _fail(t);
      {
        ATerm m_22 = ATgetArgument(t, 1);
        if(((ATgetType(m_22) == AT_LIST) && !(ATisEmpty(m_22))))
          {
            u_27 = ATgetFirst((ATermList) m_22);
            v_27 = (ATerm) ATgetNext((ATermList) m_22);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_27, u_27), (ATerm) ATmakeAppl(sym__2, s_27, v_27));
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL;
  if(match_cons(t, sym__2))
    {
      w_27 = ATgetArgument(t, 0);
      x_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_27), w_27);
  return(t);
}
static ATerm c_7 (ATerm g_823, ATerm l_823, ATerm u_80, ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL,m_27 = NULL,p_27 = NULL;
  t = SSL_explode_term(l_823);
  if(match_cons(t, sym__2))
    {
      j_27 = ATgetArgument(t, 0);
      m_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(g_823);
  if(match_cons(t, sym__2))
    {
      if((j_27 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      k_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_27, m_27);
  t = genzip_4_0(o_6, p_6, s_6, _id, t);
  p_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_27, u_80);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm c_107 (ATerm), ATerm d_107 (ATerm), ATerm t)
{
  static ATerm s_32 (ATerm t);
  static ATerm s_32 (ATerm t)
  {
    ATerm n_22 = t;
    int o_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_107(t);
        LocalPopChoice(o_22);
      }
    else
      {
        t = n_22;
        t = d_107(t);
        t = s_32(t);
      }
    return(t);
  }
  t = s_32(t);
  return(t);
}
ATerm for_3_0 (ATerm f_107 (ATerm), ATerm g_107 (ATerm), ATerm h_107 (ATerm), ATerm t)
{
  t = f_107(t);
  t = while_not_2_0(g_107, h_107, t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm f_33 = NULL;
  f_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_33, (ATerm) ATempty);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm l_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_22 = ATgetArgument(t, 0);
      if(((ATgetType(p_22) != AT_LIST) || !(ATisEmpty(p_22))))
        _fail(t);
      l_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_33;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,q_38 = NULL,r_38 = NULL;
  n_38 = t;
  if(match_cons(t, sym__2))
    {
      q_38 = ATgetArgument(t, 0);
      r_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_38 = ATgetFirst((ATermList) t);
      m_38 = (ATerm) ATgetNext((ATermList) t);
      t = e_38;
      if(match_cons(t, sym__2))
        {
          f_38 = ATgetArgument(t, 0);
          l_38 = ATgetArgument(t, 1);
          {
            ATerm u_22 = t;
            int x_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = b_39(q_38, r_38, n_38, t);
                LocalPopChoice(x_22);
              }
            else
              {
                t = u_22;
                {
                  ATerm y_22 = t;
                  int a_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = n_38;
                      t = j_7(f_7, f_38, l_38, m_38, r_38, t);
                      LocalPopChoice(a_23);
                    }
                  else
                    {
                      t = y_22;
                      {
                        ATerm b_23 = t;
                        int d_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = e_39(q_38, r_38, n_38, t);
                            LocalPopChoice(d_23);
                          }
                        else
                          {
                            t = b_23;
                            {
                              ATerm e_23 = t;
                              int f_23 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = f_39(q_38, r_38, n_38, t);
                                  LocalPopChoice(f_23);
                                }
                              else
                                {
                                  t = e_23;
                                  {
                                    ATerm g_23 = t;
                                    int i_23 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = i_39(q_38, r_38, n_38, t);
                                        LocalPopChoice(i_23);
                                      }
                                    else
                                      {
                                        t = g_23;
                                        t = j_39(q_38, r_38, n_38, t);
                                      }
                                  }
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
          ATerm j_23 = t;
          int l_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_39(q_38, r_38, n_38, t);
              LocalPopChoice(l_23);
            }
          else
            {
              t = j_23;
              {
                ATerm o_23 = t;
                int q_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = e_39(q_38, r_38, n_38, t);
                    LocalPopChoice(q_23);
                  }
                else
                  {
                    t = o_23;
                    {
                      ATerm r_23 = t;
                      int s_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = f_39(q_38, r_38, n_38, t);
                          LocalPopChoice(s_23);
                        }
                      else
                        {
                          t = r_23;
                          {
                            ATerm t_23 = t;
                            int u_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = i_39(q_38, r_38, n_38, t);
                                LocalPopChoice(u_23);
                              }
                            else
                              {
                                t = t_23;
                                t = j_39(q_38, r_38, n_38, t);
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
      ATerm v_23 = t;
      int w_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_39(q_38, r_38, n_38, t);
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
                t = e_39(q_38, r_38, n_38, t);
                LocalPopChoice(y_23);
              }
            else
              {
                t = x_23;
                {
                  ATerm z_23 = t;
                  int d_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = f_39(q_38, r_38, n_38, t);
                      LocalPopChoice(d_24);
                    }
                  else
                    {
                      t = z_23;
                      {
                        ATerm e_24 = t;
                        int f_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = i_39(q_38, r_38, n_38, t);
                            LocalPopChoice(f_24);
                          }
                        else
                          {
                            t = e_24;
                            t = j_39(q_38, r_38, n_38, t);
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
static ATerm b_39 (ATerm s_33, ATerm t_33, ATerm u_33, ATerm t)
{
  ATerm v_33 = NULL,b_34 = NULL,c_34 = NULL,y_17 = NULL;
  t = SSLgetAnnotations(u_33);
  v_33 = t;
  t = s_33;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_24 = ATgetFirst((ATermList) t);
      if(match_cons(g_24, sym__2))
        {
          b_34 = ATgetArgument(g_24, 0);
          if((b_34 != ATgetArgument(g_24, 1)))
            {
              _fail(ATgetArgument(g_24, 1));
            }
        }
      else
        _fail(t);
      c_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_34, t_33);
  y_17 = t;
  t = SSLsetAnnotations(y_17, v_33);
  return(t);
}
static ATerm e_39 (ATerm g_34, ATerm j_34, ATerm k_34, ATerm t)
{
  ATerm l_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,z_34 = NULL,b_18 = NULL;
  t = SSLgetAnnotations(k_34);
  l_34 = t;
  t = g_34;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_24 = ATgetFirst((ATermList) t);
      if(match_cons(i_24, sym__2))
        {
          t_34 = ATgetArgument(i_24, 0);
          u_34 = ATgetArgument(i_24, 1);
        }
      else
        _fail(t);
      z_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_7(t_34, u_34, z_34, t);
  s_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_34, j_34);
  b_18 = t;
  t = SSLsetAnnotations(b_18, l_34);
  return(t);
}
static ATerm f_39 (ATerm b_35, ATerm d_35, ATerm f_35, ATerm t)
{
  ATerm g_35 = NULL,s_35 = NULL,t_35 = NULL,y_35 = NULL,z_35 = NULL,c_18 = NULL;
  t = SSLgetAnnotations(f_35);
  g_35 = t;
  t = b_35;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_24 = ATgetFirst((ATermList) t);
      if(match_cons(k_24, sym__2))
        {
          ATerm l_24 = ATgetArgument(k_24, 0);
          if(match_cons(l_24, sym_As_2))
            {
              s_35 = ATgetArgument(l_24, 0);
              t_35 = ATgetArgument(l_24, 1);
            }
          else
            _fail(t);
          y_35 = ATgetArgument(k_24, 1);
        }
      else
        _fail(t);
      z_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(CheckATermList(z_35), (ATerm) ATmakeAppl(sym__2, t_35, y_35)), (ATerm) ATmakeAppl(sym__2, s_35, y_35)), d_35);
  c_18 = t;
  t = SSLsetAnnotations(c_18, g_35);
  return(t);
}
static ATerm i_39 (ATerm c_36, ATerm d_36, ATerm e_36, ATerm t)
{
  ATerm f_36 = NULL,v_36 = NULL,e_18 = NULL;
  t = SSLgetAnnotations(e_36);
  f_36 = t;
  t = c_36;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_24 = ATgetFirst((ATermList) t);
      if(match_cons(m_24, sym__2))
        {
          ATerm o_24 = ATgetArgument(m_24, 0);
          if(!(match_cons(o_24, sym_Wld_0)))
            _fail(t);
          {
            ATerm p_24 = ATgetArgument(m_24, 1);
          }
        }
      else
        _fail(t);
      v_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_36, d_36);
  e_18 = t;
  t = SSLsetAnnotations(e_18, f_36);
  return(t);
}
static ATerm j_39 (ATerm x_36, ATerm y_36, ATerm z_36, ATerm t)
{
  ATerm a_37 = NULL,g_37 = NULL,j_37 = NULL,n_37 = NULL,r_37 = NULL,w_37 = NULL,h_18 = NULL,g_18 = NULL;
  t = SSLgetAnnotations(z_36);
  a_37 = t;
  t = x_36;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_24 = ATgetFirst((ATermList) t);
      if(match_cons(q_24, sym__2))
        {
          g_37 = ATgetArgument(q_24, 0);
          j_37 = ATgetArgument(q_24, 1);
        }
      else
        _fail(t);
      n_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_37;
  {
    ATerm r_24 = t;
    if((PushChoice() == 0))
      {
        ATerm a_38 = NULL,b_38 = NULL,c_38 = NULL,f_18 = NULL;
        c_38 = t;
        if(match_cons(t, sym_Var_1))
          {
            b_38 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_38);
        a_38 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, b_38);
        f_18 = t;
        t = SSLsetAnnotations(f_18, a_38);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_24;
      }
  }
  t = j_37;
  if(match_cons(t, sym_Var_1))
    {
      w_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_37);
  r_37 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_37);
  g_18 = t;
  t = SSLsetAnnotations(g_18, r_37);
  t = (ATerm) ATmakeAppl(sym__2, n_37, y_36);
  h_18 = t;
  t = SSLsetAnnotations(h_18, a_37);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL,i_18 = NULL;
  y_38 = t;
  if(match_cons(t, sym_Var_1))
    {
      x_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_38);
  w_38 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, x_38);
  i_18 = t;
  t = SSLsetAnnotations(i_18, w_38);
  return(t);
}
ATerm prop_pattern_match_0_0 (ATerm t)
{
  t = for_3_0(z_6, b_7, d_7, t);
  return(t);
}
ATerm CurrentTerm_0_0 (ATerm t)
{
  ATerm s_24 = t;
  int t_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_39 = NULL,a_5 = NULL,c_5 = NULL;
      t = (ATerm) ATempty;
      a_5 = t;
      t = term_x_13;
      c_5 = t;
      t = term_u_24;
      t = m_7(c_5, a_5, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm v_24 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) v_24) != ATmakeSymbol("j_0", 0, ATtrue)))
            _fail(t);
          l_39 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = l_39;
      LocalPopChoice(t_24);
    }
  else
    {
      t = s_24;
      {
        ATerm w_24 = t;
        int x_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_39 = NULL,e_5 = NULL,f_5 = NULL;
            t = (ATerm) ATempty;
            e_5 = t;
            t = term_x_13;
            f_5 = t;
            t = term_u_24;
            t = m_7(f_5, e_5, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm y_24 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) y_24) != ATmakeSymbol("g_0", 0, ATtrue)))
                  _fail(t);
                o_39 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = o_39;
            LocalPopChoice(x_24);
          }
        else
          {
            t = w_24;
            {
              ATerm r_39 = NULL,b_6 = NULL,c_6 = NULL;
              r_39 = t;
              t = (ATerm) ATempty;
              b_6 = t;
              t = term_x_13;
              c_6 = t;
              t = term_u_24;
              t = m_7(c_6, b_6, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              t = r_39;
              _fail(t);
            }
          }
      }
    }
  return(t);
}
static ATerm m_7 (ATerm f_59, ATerm g_59, ATerm t)
{
  ATerm v_39 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_59, g_59);
  t = b_8(f_59, g_59, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_39 = ATgetFirst((ATermList) t);
      {
        ATerm z_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = v_39;
  return(t);
}
ATerm Binding_0_0 (ATerm t)
{
  ATerm l_41 = NULL;
  l_41 = t;
  if(match_cons(t, sym_Var_1))
    {
      ATerm a_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_25 = t;
    int d_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_7 = NULL,e_7 = NULL;
        t = term_r_13;
        e_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_r_13, l_41);
        t = m_7(e_7, l_41, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm f_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_25) != ATmakeSymbol("l_0", 0, ATtrue)))
              _fail(t);
            a_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_7;
        LocalPopChoice(d_25);
      }
    else
      {
        t = b_25;
        {
          ATerm g_25 = t;
          int h_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_7 = NULL;
              t = term_r_13;
              o_7 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_r_13, l_41);
              t = m_7(o_7, l_41, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              t = l_41;
              _fail(t);
              LocalPopChoice(h_25);
            }
          else
            {
              t = g_25;
              {
                ATerm l_8 = NULL;
                t = term_r_13;
                l_8 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_r_13, l_41);
                t = m_7(l_8, l_41, t);
                if(!(match_cons(t, sym_Undefined_0)))
                  _fail(t);
                t = l_41;
                _fail(t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm d_109 (ATerm), ATerm t)
{
  static ATerm t_41 (ATerm t);
  static ATerm t_41 (ATerm t)
  {
    ATerm i_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_109(t);
        LocalPopChoice(j_25);
      }
    else
      {
        t = i_25;
        t = SRTS_all(t_41, t);
      }
    return(t);
  }
  t = t_41(t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm k_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_8 = NULL,r_8 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm p_25 = ATgetArgument(t, 0);
          if(match_cons(p_25, sym_Var_1))
            {
              q_8 = ATgetArgument(p_25, 0);
            }
          else
            _fail(t);
          r_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_6(q_8, r_8, t);
      LocalPopChoice(o_25);
    }
  else
    {
      t = k_25;
    }
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = debug_1_0(i_7, t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = term_q_25;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm y_42 = NULL;
  y_42 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = y_42;
    }
  else
    {
      if(match_cons(t, sym_As_2))
        {
          ATerm r_25 = ATgetArgument(t, 0);
          ATerm s_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_42;
    }
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm prop_match_0_0 (ATerm t)
{
  ATerm z_41 = NULL,a_42 = NULL,c_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,w_18 = NULL;
  i_42 = t;
  if(match_cons(t, sym_Match_1))
    {
      f_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_42);
  c_42 = t;
  t = f_42;
  t = alltd_1_0(Binding_0_0, t);
  g_42 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, g_42);
  w_18 = t;
  t = SSLsetAnnotations(w_18, c_42);
  h_42 = t;
  if(match_cons(t, sym_Match_1))
    {
      a_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm t_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = CurrentTerm_0_0(t);
        z_41 = t;
        t = h_42;
        {
          ATerm v_25 = t;
          int w_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, a_42, z_41));
              t = prop_pattern_match_0_0(t);
              t = map_1_0(g_7, t);
              t = h_42;
              LocalPopChoice(w_25);
            }
          else
            {
              t = v_25;
              t = (ATerm) ATmakeAppl(sym__4, term_x_25, h_42, term_y_25, z_41);
              t = if_verbose3_1_0(h_7, t);
              t = term_z_25;
            }
        }
        LocalPopChoice(u_25);
      }
    else
      {
        t = t_25;
        {
          ATerm a_26 = t;
          int b_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_42 = NULL,u_42 = NULL;
              t = a_42;
              {
                ATerm c_26 = t;
                if((PushChoice() == 0))
                  {
                    t = oncetd_1_0(k_7, t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = c_26;
                  }
              }
              t = (ATerm) ATempty;
              q_42 = t;
              t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_26, a_42);
              u_42 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_d_26, a_42));
              t = x_6(l_7, q_42, u_42, t);
              t = h_42;
              LocalPopChoice(b_26);
            }
          else
            {
              t = a_26;
            }
        }
      }
  }
  return(t);
}
ATerm cp_0_0 (ATerm t)
{
  ATerm e_26 = t;
  int f_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = prop_match_0_0(t);
      LocalPopChoice(f_26);
    }
  else
    {
      t = e_26;
      {
        ATerm g_26 = t;
        int h_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = prop_build_0_0(t);
            LocalPopChoice(h_26);
          }
        else
          {
            t = g_26;
            {
              ATerm i_26 = t;
              int j_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_43 = NULL,t_43 = NULL;
                  s_43 = t;
                  if(match_cons(t, sym_Scope_2))
                    {
                      t_43 = ATgetArgument(t, 0);
                      {
                        ATerm k_26 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  t = s_43;
                  t = w_6(cp_0_0, t_43, t);
                  LocalPopChoice(j_26);
                }
              else
                {
                  t = i_26;
                  {
                    ATerm l_26 = t;
                    int m_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = prop_call_1_0(cp_0_0, t);
                        LocalPopChoice(m_26);
                      }
                    else
                      {
                        t = l_26;
                        {
                          ATerm r_26 = t;
                          int s_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = prop_traversal_1_0(cp_0_0, t);
                              LocalPopChoice(s_26);
                            }
                          else
                            {
                              t = r_26;
                              {
                                ATerm t_26 = t;
                                int w_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm i_44 = NULL,j_44 = NULL,k_44 = NULL,v_8 = NULL,y_8 = NULL,z_8 = NULL,y_18 = NULL;
                                    i_44 = t;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        j_44 = ATgetArgument(t, 0);
                                        k_44 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(i_44);
                                    v_8 = t;
                                    t = j_44;
                                    t = cp_0_0(t);
                                    y_8 = t;
                                    t = k_44;
                                    t = cp_0_0(t);
                                    z_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, y_8, z_8);
                                    y_18 = t;
                                    t = SSLsetAnnotations(y_18, v_8);
                                    LocalPopChoice(w_26);
                                  }
                                else
                                  {
                                    t = t_26;
                                    {
                                      ATerm x_26 = t;
                                      int y_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = prop_choice_1_0(cp_0_0, t);
                                          LocalPopChoice(y_26);
                                        }
                                      else
                                        {
                                          t = x_26;
                                          {
                                            ATerm c_27 = t;
                                            int d_27 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm b_45 = NULL,c_45 = NULL,e_45 = NULL;
                                                b_45 = t;
                                                {
                                                  ATerm e_27 = t;
                                                  int f_27 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_Let_2))
                                                        {
                                                          ATerm g_27 = ATgetArgument(t, 0);
                                                          ATerm i_27 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(f_27);
                                                      t = b_45;
                                                      t = t_6(cp_0_0, t);
                                                    }
                                                  else
                                                    {
                                                      t = e_27;
                                                      {
                                                        ATerm l_27 = t;
                                                        int n_27 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm o_27 = ATgetArgument(t, 0);
                                                                ATerm q_27 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(n_27);
                                                            {
                                                              ATerm i_9 = NULL,j_9 = NULL,m_9 = NULL,q_9 = NULL,z_18 = NULL;
                                                              t = b_45;
                                                              if(match_cons(t, sym_Rec_2))
                                                                {
                                                                  j_9 = ATgetArgument(t, 0);
                                                                  m_9 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSLgetAnnotations(b_45);
                                                              i_9 = t;
                                                              t = m_9;
                                                              t = exec_maybe_1_0(cp_0_0, t);
                                                              q_9 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Rec_2, j_9, q_9);
                                                              z_18 = t;
                                                              t = SSLsetAnnotations(z_18, i_9);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = l_27;
                                                            {
                                                              ATerm t_27 = t;
                                                              int y_27 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_Not_1))
                                                                    {
                                                                      ATerm z_27 = ATgetArgument(t, 0);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(y_27);
                                                                  t = b_45;
                                                                  t = r_6(cp_0_0, t);
                                                                }
                                                              else
                                                                {
                                                                  t = t_27;
                                                                  if(match_cons(t, sym_SDefT_4))
                                                                    {
                                                                      c_45 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm a_28 = ATgetArgument(t, 1);
                                                                      }
                                                                      e_45 = ATgetArgument(t, 2);
                                                                      {
                                                                        ATerm b_28 = ATgetArgument(t, 3);
                                                                      }
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  t = b_45;
                                                                  t = q_6(cp_0_0, c_45, e_45, t);
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                                LocalPopChoice(d_27);
                                              }
                                            else
                                              {
                                                t = c_27;
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
static ATerm n_7 (ATerm z_58, ATerm a_59, ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL;
  o_45 = t;
  {
    ATerm c_28 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, z_58, a_59);
        t = b_8(z_58, a_59, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_28 = ATgetFirst((ATermList) t);
            n_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(d_28);
        {
          ATerm p_45 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, z_58, a_59, n_45);
          t = lookup_table_0_1(z_58, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              p_45 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_8(a_59, n_45, p_45, t);
          t = (ATerm) ATmakeAppl(sym__3, z_58, a_59, n_45);
        }
      }
    else
      {
        t = c_28;
        {
          ATerm t_45 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, z_58, a_59);
          t = lookup_table_0_1(z_58, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              t_45 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_7(a_59, t_45, t);
          t = (ATerm) ATmakeAppl(sym__2, z_58, a_59);
        }
      }
  }
  t = o_45;
  return(t);
}
ATerm end_scope_1_0 (ATerm z_103 (ATerm), ATerm t)
{
  ATerm a_46 = NULL,e_46 = NULL,g_46 = NULL,k_46 = NULL,l_46 = NULL,q_46 = NULL,r_46 = NULL;
  k_46 = t;
  t = z_103(t);
  g_46 = t;
  {
    ATerm f_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_46 = NULL;
        t = term_q_19;
        t_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_46, term_q_19);
        t = b_8(g_46, t_46, t);
        {
          ATerm i_28 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = i_28;
            }
        }
        LocalPopChoice(h_28);
      }
    else
      {
        t = f_28;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_46 = ATgetFirst((ATermList) t);
      a_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, g_46, term_q_19, a_46);
  t = lookup_table_0_1(g_46, t);
  r_46 = t;
  t = term_q_19;
  l_46 = t;
  t = r_46;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(l_46, a_46, q_46, t);
  t = e_46;
  {
    static ATerm y_7 (ATerm t);
    static ATerm y_7 (ATerm t)
    {
      ATerm u_46 = NULL;
      u_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_46, u_46);
      t = n_7(g_46, u_46, t);
      return(t);
    }
    t = map_1_0(y_7, t);
  }
  t = k_46;
  return(t);
}
ATerm restore_always_2_0 (ATerm h_106 (ATerm), ATerm i_106 (ATerm), ATerm t)
{
  ATerm m_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_106(t);
      t = i_106(t);
      LocalPopChoice(n_28);
    }
  else
    {
      t = m_28;
      t = i_106(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm y_103 (ATerm), ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL;
  x_46 = t;
  t = y_103(t);
  w_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_46, term_q_19);
  {
    ATerm o_28 = t;
    int p_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_47 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm s_28 = ATgetArgument(t, 0);
            ATerm u_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_q_19;
        g_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_46, term_q_19);
        t = b_8(w_46, g_47, t);
        LocalPopChoice(p_28);
      }
    else
      {
        t = o_28;
        t = (ATerm) ATempty;
      }
  }
  y_46 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_46, term_q_19, (ATerm) ATinsert(CheckATermList(y_46), (ATerm) ATempty));
  t = lookup_table_0_1(w_46, t);
  c_47 = t;
  t = term_q_19;
  z_46 = t;
  t = (ATerm) ATinsert(CheckATermList(y_46), (ATerm) ATempty);
  a_47 = t;
  t = c_47;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(z_46, a_47, b_47, t);
  t = x_46;
  return(t);
}
ATerm scope_2_0 (ATerm a_104 (ATerm), ATerm b_104 (ATerm), ATerm t)
{
  static ATerm d_8 (ATerm t);
  static ATerm d_8 (ATerm t)
  {
    t = end_scope_1_0(a_104, t);
    return(t);
  }
  t = begin_scope_1_0(a_104, t);
  t = restore_always_2_0(b_104, d_8, t);
  return(t);
}
ATerm map_1_0 (ATerm x_113 (ATerm), ATerm t)
{
  static ATerm v_47 (ATerm t);
  static ATerm v_47 (ATerm t)
  {
    ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL;
    s_47 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_47;
      }
    else
      {
        ATerm a_10 = NULL,g_10 = NULL,h_10 = NULL,c_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_47 = ATgetFirst((ATermList) t);
            u_47 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_47);
        a_10 = t;
        t = t_47;
        t = x_113(t);
        g_10 = t;
        t = u_47;
        t = v_47(t);
        h_10 = t;
        t = (ATerm) ATinsert(CheckATermList(h_10), g_10);
        c_19 = t;
        t = SSLsetAnnotations(c_19, a_10);
      }
    return(t);
  }
  t = v_47(t);
  return(t);
}
ATerm Cons_2_0 (ATerm b_90 (ATerm), ATerm c_90 (ATerm), ATerm t)
{
  ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL,e_19 = NULL;
  c_48 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_47 = ATgetFirst((ATermList) t);
      z_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_48);
  x_47 = t;
  t = y_47;
  t = b_90(t);
  a_48 = t;
  t = z_47;
  t = c_90(t);
  b_48 = t;
  t = (ATerm) ATinsert(CheckATermList(b_48), a_48);
  e_19 = t;
  t = SSLsetAnnotations(e_19, x_47);
  return(t);
}
static ATerm p_7 (ATerm n_53, ATerm o_53, ATerm t)
{
  ATerm d_48 = NULL;
  t = SSL_fputc(n_53, o_53);
  d_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_48);
  return(t);
}
static ATerm q_7 (ATerm s_37, ATerm t_37, ATerm t)
{
  ATerm e_48 = NULL;
  t = SSL_write_term_to_stream_text(s_37, t_37);
  e_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_48);
  return(t);
}
static ATerm s_7 (ATerm o_113 (ATerm), ATerm l_259, ATerm y_37, ATerm t)
{
  ATerm f_48 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_259, term_v_28);
  t = w_7(t);
  f_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_48, y_37);
  t = o_113(t);
  t = fclose_0_0(t);
  t = y_37;
  return(t);
}
static ATerm r_7 (ATerm o_37, ATerm p_37, ATerm t)
{
  ATerm g_48 = NULL;
  t = SSL_write_term_to_stream_baf(o_37, p_37);
  g_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_48);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm h_11 = NULL,l_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_28 = ATgetArgument(t, 0);
      if(match_cons(w_28, sym_Stream_1))
        {
          h_11 = ATgetArgument(w_28, 0);
        }
      else
        _fail(t);
      l_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_7(h_11, l_11, t);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm f_12 = NULL,l_12 = NULL,n_12 = NULL,o_12 = NULL,u_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_28 = ATgetArgument(t, 0);
      if(match_cons(x_28, sym_Stream_1))
        {
          o_12 = ATgetArgument(x_28, 0);
        }
      else
        _fail(t);
      u_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_7(o_12, u_12, t);
  f_12 = t;
  t = term_y_28;
  l_12 = t;
  t = f_12;
  if(match_cons(t, sym_Stream_1))
    {
      n_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_y_28, f_12);
  t = p_7(l_12, n_12, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL,u_49 = NULL,v_49 = NULL,h_19 = NULL,g_19 = NULL;
  l_48 = t;
  if(match_cons(t, sym__2))
    {
      s_48 = ATgetArgument(t, 0);
      t_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_48);
  r_48 = t;
  t = s_48;
  {
    ATerm z_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm h_8 (ATerm t);
        static ATerm h_8 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((k_48 != NULL) && (k_48 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                k_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(h_8, t);
        LocalPopChoice(a_29);
      }
    else
      {
        t = z_28;
        t = term_b_29;
        k_48 = t;
      }
  }
  u_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_48, t_48);
  g_19 = t;
  t = SSLsetAnnotations(g_19, r_48);
  t = l_48;
  if(match_cons(t, sym__2))
    {
      n_48 = ATgetArgument(t, 0);
      o_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_48);
  m_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_48, (ATerm) ATmakeAppl(sym__2, not_null(k_48), o_48));
  h_19 = t;
  t = SSLsetAnnotations(h_19, m_48);
  q_48 = t;
  if(match_cons(t, sym__2))
    {
      u_49 = ATgetArgument(t, 0);
      v_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_29 = t;
    int d_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_10 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL,i_19 = NULL;
        t = SSLgetAnnotations(q_48);
        y_10 = t;
        t = u_49;
        t = fetch_1_0(i_8, t);
        c_11 = t;
        t = v_49;
        if(match_cons(t, sym__2))
          {
            e_11 = ATgetArgument(t, 0);
            f_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_7(j_8, e_11, f_11, t);
        d_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_11, d_11);
        i_19 = t;
        t = SSLsetAnnotations(i_19, y_10);
        LocalPopChoice(d_29);
      }
    else
      {
        t = c_29;
        {
          ATerm s_11 = NULL,z_11 = NULL,d_12 = NULL,e_12 = NULL,j_19 = NULL;
          t = SSLgetAnnotations(q_48);
          s_11 = t;
          t = v_49;
          if(match_cons(t, sym__2))
            {
              d_12 = ATgetArgument(t, 0);
              e_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_7(k_8, d_12, e_12, t);
          z_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_49, z_11);
          j_19 = t;
          t = SSLsetAnnotations(j_19, s_11);
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
ATerm apply_strategy_1_0 (ATerm l_131 (ATerm), ATerm t)
{
  ATerm y_49 = NULL,z_49 = NULL,a_50 = NULL,b_50 = NULL,c_50 = NULL;
  c_50 = t;
  t = dtime_0_0(t);
  t = c_50;
  t = l_131(t);
  b_50 = t;
  t = dtime_0_0(t);
  y_49 = t;
  t = b_50;
  if(match_cons(t, sym__2))
    {
      z_49 = ATgetArgument(t, 0);
      a_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_49), (ATerm) ATmakeAppl(sym_Runtime_1, y_49)), a_50);
  return(t);
}
static ATerm q_50 (ATerm k_50, ATerm t)
{
  t = SSL_fclose(k_50);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_50 = NULL,o_50 = NULL;
  o_50 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_50 = ATgetArgument(t, 0);
      {
        ATerm e_29 = t;
        int f_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_50);
            LocalPopChoice(f_29);
          }
        else
          {
            t = e_29;
            t = q_50(o_50, t);
          }
      }
    }
  else
    {
      t = q_50(o_50, t);
    }
  return(t);
}
static ATerm t_7 (ATerm u_37, ATerm t)
{
  t = SSL_read_term_from_stream(u_37);
  return(t);
}
static ATerm u_7 (ATerm r_51, ATerm s_51, ATerm t)
{
  t = SSL_strcat(r_51, s_51);
  return(t);
}
static ATerm v_7 (ATerm p_53, ATerm q_53, ATerm t)
{
  ATerm r_50 = NULL;
  t = SSL_fopen(p_53, q_53);
  r_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_50);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_50 = NULL;
  t = SSL_stdin_stream();
  s_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_50);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_50 = NULL;
  t = SSL_stdout_stream();
  t_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_50);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_50 = NULL;
  t = SSL_stderr_stream();
  u_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_50);
  return(t);
}
static ATerm d_52 (ATerm a_51, ATerm t)
{
  ATerm b_51 = NULL;
  t = SSL_explode_term(a_51);
  if(match_cons(t, sym__2))
    {
      ATerm g_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_29 = ATgetArgument(t, 1);
        if(((ATgetType(h_29) == AT_LIST) && !(ATisEmpty(h_29))))
          {
            b_51 = ATgetFirst((ATermList) h_29);
            {
              ATerm i_29 = (ATerm) ATgetNext((ATermList) h_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_51;
  if(match_cons(t, sym_stderr_0))
    {
      t = b_51;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_51;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_51;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm e_52 (ATerm e_51, ATerm f_51, ATerm g_51, ATerm t)
{
  ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL,m_51 = NULL,o_19 = NULL;
  t = SSLgetAnnotations(g_51);
  j_51 = t;
  t = e_51;
  if(match_cons(t, sym_Path_1))
    {
      m_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_51, f_51);
  o_19 = t;
  t = SSLsetAnnotations(o_19, j_51);
  if(match_cons(t, sym__2))
    {
      h_51 = ATgetArgument(t, 0);
      i_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_7(h_51, i_51, t);
  return(t);
}
static ATerm f_52 (ATerm o_51, ATerm p_51, ATerm q_51, ATerm t)
{
  ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL,y_51 = NULL,p_19 = NULL;
  t = SSLgetAnnotations(q_51);
  v_51 = t;
  t = SSL_is_string(o_51);
  y_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_51, p_51);
  p_19 = t;
  t = SSLsetAnnotations(p_19, v_51);
  if(match_cons(t, sym__2))
    {
      t_51 = ATgetArgument(t, 0);
      u_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_7(t_51, u_51, t);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm a_52 = NULL,b_52 = NULL,c_52 = NULL;
  a_52 = t;
  if(match_cons(t, sym__2))
    {
      b_52 = ATgetArgument(t, 0);
      c_52 = ATgetArgument(t, 1);
      {
        ATerm j_29 = t;
        int k_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_52(a_52, t);
            LocalPopChoice(k_29);
          }
        else
          {
            t = j_29;
            {
              ATerm r_29 = t;
              int s_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_52(b_52, c_52, a_52, t);
                  LocalPopChoice(s_29);
                }
              else
                {
                  t = r_29;
                  t = f_52(b_52, c_52, a_52, t);
                }
            }
          }
      }
    }
  else
    {
      t = d_52(a_52, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_52 = NULL,i_52 = NULL,j_52 = NULL,o_52 = NULL;
  o_52 = t;
  {
    ATerm t_29 = t;
    int u_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_52, term_w_29);
        t = w_7(t);
        LocalPopChoice(u_29);
      }
    else
      {
        t = t_29;
        {
          ATerm t_13 = NULL,v_13 = NULL;
          t = term_x_29;
          v_13 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_x_29, o_52);
          t = u_7(v_13, o_52, t);
          t_13 = t;
          t = SSL_perror(t_13);
          _fail(t);
        }
      }
  }
  i_52 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(j_52, t);
  h_52 = t;
  t = i_52;
  t = fclose_0_0(t);
  t = h_52;
  return(t);
}
ATerm fetch_1_0 (ATerm h_114 (ATerm), ATerm t)
{
  static ATerm t_53 (ATerm t);
  static ATerm t_53 (ATerm t)
  {
    ATerm k_53 = NULL,l_53 = NULL,m_53 = NULL;
    k_53 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_53 = ATgetFirst((ATermList) t);
        m_53 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm z_29 = t;
      int c_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_14 = NULL,k_14 = NULL,s_19 = NULL;
          t = SSLgetAnnotations(k_53);
          d_14 = t;
          t = l_53;
          t = h_114(t);
          k_14 = t;
          t = (ATerm) ATinsert(CheckATermList(m_53), k_14);
          s_19 = t;
          t = SSLsetAnnotations(s_19, d_14);
          LocalPopChoice(c_30);
        }
      else
        {
          t = z_29;
          {
            ATerm b_15 = NULL,h_15 = NULL,t_19 = NULL;
            t = SSLgetAnnotations(k_53);
            b_15 = t;
            t = m_53;
            t = t_53(t);
            h_15 = t;
            t = (ATerm) ATinsert(CheckATermList(h_15), l_53);
            t_19 = t;
            t = SSLsetAnnotations(t_19, b_15);
          }
        }
    }
    return(t);
  }
  t = t_53(t);
  return(t);
}
static ATerm b_8 (ATerm n_60, ATerm o_60, ATerm t)
{
  ATerm w_53 = NULL;
  t = lookup_table_0_1(n_60, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(o_60, w_53, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm u_129 (ATerm), ATerm t)
{
  ATerm z_53 = NULL;
  z_53 = t;
  {
    ATerm d_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_54 = NULL,c_54 = NULL,d_54 = NULL;
        t = term_a_20;
        c_54 = t;
        t = term_b_20;
        d_54 = t;
        t = term_d_20;
        t = b_8(c_54, d_54, t);
        b_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_54, term_f_30);
        t = geq_0_0(t);
        t = z_53;
        t = u_129(t);
        LocalPopChoice(e_30);
      }
    else
      {
        t = d_30;
        t = z_53;
      }
  }
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm g_54 = NULL;
  g_54 = t;
  if(match_string(t, "-k"))
    {
      t = g_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_54;
    }
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm h_54 = NULL,i_54 = NULL,j_54 = NULL;
  h_54 = t;
  t = SSL_string_to_int(h_54);
  i_54 = t;
  t = term_g_30;
  j_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_30, i_54);
  t = e_8(j_54, i_54, t);
  t = h_54;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_h_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_8, o_8, p_8, t);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm l_54 = NULL;
  l_54 = t;
  if(match_string(t, "-S"))
    {
      t = l_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = l_54;
    }
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm m_54 = NULL,n_54 = NULL;
  t = term_b_20;
  m_54 = t;
  t = term_i_30;
  n_54 = t;
  t = term_j_30;
  t = e_8(m_54, n_54, t);
  t = term_k_30;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_l_30;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm o_54 = NULL,p_54 = NULL,q_54 = NULL;
  o_54 = t;
  t = SSL_string_to_int(o_54);
  p_54 = t;
  t = term_b_20;
  q_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_20, p_54);
  t = e_8(q_54, p_54, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, o_54);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_m_30;
  return(t);
}
static ATerm c_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm s_54 = NULL,t_54 = NULL;
  t = term_n_30;
  s_54 = t;
  t = term_d_13;
  t_54 = t;
  t = term_p_30;
  t = e_8(s_54, t_54, t);
  t = term_q_30;
  return(t);
}
static ATerm e_9 (ATerm t)
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
      t = Option_3_0(s_8, t_8, u_8, t);
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
            t = ArgOption_3_0(w_8, x_8, a_9, t);
            LocalPopChoice(v_30);
          }
        else
          {
            t = u_30;
            t = Option_3_0(c_9, d_9, e_9, t);
          }
      }
    }
  return(t);
}
static ATerm e_8 (ATerm l_72, ATerm m_72, ATerm t)
{
  ATerm u_54 = NULL,v_54 = NULL;
  t = term_a_20;
  u_54 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_20, l_72, m_72);
  t = lookup_table_0_1(u_54, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(l_72, m_72, v_54, t);
  t = (ATerm) ATmakeAppl(sym__3, term_a_20, l_72, m_72);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm z_54 = NULL,a_55 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_55 = NULL,c_55 = NULL,d_55 = NULL;
      t = term_d_13;
      t = e_0(t);
      b_55 = t;
      t = term_w_30;
      c_55 = t;
      t = term_x_30;
      d_55 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_30, term_x_30, b_55);
      t = c_8(c_55, d_55, b_55, t);
      _fail(t);
    }
  else
    {
      ATerm g_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_54 = ATgetFirst((ATermList) t);
          a_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_54;
      t = b_0(t);
      t = term_d_13;
      t = d_0(t);
      g_55 = t;
      t = (ATerm) ATinsert(CheckATermList(a_55), g_55);
    }
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm i_55 = NULL;
  i_55 = t;
  if(match_string(t, "-o"))
    {
      t = i_55;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = i_55;
    }
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm j_55 = NULL,k_55 = NULL;
  j_55 = t;
  t = term_y_30;
  k_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_30, j_55);
  t = e_8(k_55, j_55, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_55);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  t = term_z_30;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_9, n_9, o_9, t);
  return(t);
}
static ATerm c_8 (ATerm u_58, ATerm v_58, ATerm t_58, ATerm t)
{
  ATerm m_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL,q_55 = NULL;
  m_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_58, v_58);
  {
    ATerm a_31 = t;
    int c_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_31 = ATgetArgument(t, 0);
            ATerm f_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_58, v_58);
        t = b_8(u_58, v_58, t);
        LocalPopChoice(c_31);
      }
    else
      {
        t = a_31;
        t = (ATerm) ATempty;
      }
  }
  n_55 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_58, v_58, (ATerm) ATinsert(CheckATermList(n_55), t_58));
  t = lookup_table_0_1(u_58, t);
  q_55 = t;
  t = (ATerm) ATinsert(CheckATermList(n_55), t_58);
  o_55 = t;
  t = q_55;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(v_58, o_55, p_55, t);
  t = m_55;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL,a_56 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_56 = NULL,c_56 = NULL,d_56 = NULL;
      t = term_d_13;
      t = p_0(t);
      b_56 = t;
      t = term_w_30;
      c_56 = t;
      t = term_x_30;
      d_56 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_30, term_x_30, b_56);
      t = c_8(c_56, d_56, b_56, t);
      _fail(t);
    }
  else
    {
      ATerm h_56 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_55 = ATgetFirst((ATermList) t);
          y_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_55;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_55 = ATgetFirst((ATermList) t);
          a_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_55;
      t = k_0(t);
      t = z_55;
      t = m_0(t);
      h_56 = t;
      t = (ATerm) ATinsert(CheckATermList(a_56), h_56);
    }
  return(t);
}
static ATerm t_9 (ATerm t)
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
static ATerm u_9 (ATerm t)
{
  ATerm k_56 = NULL,l_56 = NULL;
  k_56 = t;
  t = term_g_31;
  l_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_31, k_56);
  t = e_8(l_56, k_56, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, k_56);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  t = term_h_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_9, u_9, w_9, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_56 = NULL,n_56 = NULL,o_56 = NULL,p_56 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_13;
  t = whoami_0_0(t);
  m_56 = t;
  t = term_h_13;
  o_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_31), m_56);
  p_56 = t;
  t = SSL_printnl(o_56, p_56);
  t = term_l_13;
  n_56 = t;
  t = SSL_exit(n_56);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm q_56 = NULL,r_56 = NULL;
  t = term_a_20;
  q_56 = t;
  t = term_k_31;
  r_56 = t;
  t = term_l_31;
  t = b_8(q_56, r_56, t);
  return(t);
}
static ATerm x_7 (ATerm d_57, ATerm e_57, ATerm t)
{
  ATerm m_31 = t;
  int o_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(d_57, e_57);
      LocalPopChoice(o_31);
    }
  else
    {
      t = m_31;
      t = SSL_addr(d_57, e_57);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm w_120 (ATerm), ATerm x_120 (ATerm), ATerm t)
{
  ATerm t_56 = NULL,u_56 = NULL,v_56 = NULL;
  t_56 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_56;
      t = w_120(t);
    }
  else
    {
      ATerm y_56 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_56 = ATgetFirst((ATermList) t);
          v_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_56;
      t = foldr_2_0(w_120, x_120, t);
      y_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_56, y_56);
      t = x_120(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm x_9 (ATerm t)
{
  t = term_i_30;
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL;
  if(match_cons(t, sym__2))
    {
      y_15 = ATgetArgument(t, 0);
      z_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_7(y_15, z_15, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_57 = NULL,s_15 = NULL,t_15 = NULL;
  t = times_0_0(t);
  t_15 = t;
  t = SSL_explode_term(t_15);
  if(match_cons(t, sym__2))
    {
      ATerm p_31 = ATgetArgument(t, 0);
      s_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_15;
  t = foldr_2_0(x_9, y_9, t);
  b_57 = t;
  t = SSL_TicksToSeconds(b_57);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_57 = NULL,p_57 = NULL,q_57 = NULL;
  o_57 = t;
  if(match_cons(t, sym__2))
    {
      p_57 = ATgetArgument(t, 0);
      q_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_31 = t;
    int v_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_57;
        if((p_57 != t))
          {
            _fail(t);
          }
        t = o_57;
        LocalPopChoice(v_31);
      }
    else
      {
        t = t_31;
        t = (ATerm) ATmakeAppl(sym__2, p_57, q_57);
        {
          ATerm w_31 = t;
          int y_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_57, q_57);
              LocalPopChoice(y_31);
            }
          else
            {
              t = w_31;
              t = SSL_gtr(p_57, q_57);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, p_57, q_57);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_129 (ATerm), ATerm t)
{
  ATerm u_57 = NULL;
  u_57 = t;
  {
    ATerm z_31 = t;
    int a_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_57 = NULL,x_57 = NULL,y_57 = NULL;
        t = term_a_20;
        x_57 = t;
        t = term_b_20;
        y_57 = t;
        t = term_d_20;
        t = b_8(x_57, y_57, t);
        w_57 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_57, term_l_13);
        t = geq_0_0(t);
        t = u_57;
        t = t_129(t);
        LocalPopChoice(a_32);
      }
    else
      {
        t = z_31;
        t = u_57;
      }
  }
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm a_58 = NULL,b_58 = NULL,d_58 = NULL,e_58 = NULL;
  t = run_time_0_0(t);
  a_58 = t;
  t = term_d_13;
  t = whoami_0_0(t);
  b_58 = t;
  t = term_h_13;
  d_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_32), a_58), term_b_32), b_58);
  e_58 = t;
  t = SSL_printnl(d_58, e_58);
  t = (ATerm) ATmakeAppl(sym__2, term_h_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_32), a_58), term_b_32), b_58));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(z_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_58 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_30;
  f_58 = t;
  t = SSL_exit(f_58);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm q_58 = NULL,r_58 = NULL;
  r_58 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = r_58;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          q_58 = ATgetArgument(t, 0);
          {
            ATerm q_16 = NULL,y_19 = NULL;
            t = SSLgetAnnotations(r_58);
            q_16 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, q_58);
            y_19 = t;
            t = SSLsetAnnotations(y_19, q_16);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = r_58;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_132 (ATerm), ATerm t)
{
  ATerm f_32 = t;
  int g_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_58 = NULL,k_58 = NULL;
      t = term_a_20;
      i_58 = t;
      t = term_h_32;
      k_58 = t;
      t = term_j_32;
      t = b_8(i_58, k_58, t);
      LocalPopChoice(g_32);
    }
  else
    {
      t = f_32;
      t = fetch_1_0(c_10, t);
    }
  t = j_132(t);
  return(t);
}
static ATerm f_8 (ATerm m_63, ATerm n_63, ATerm o_63, ATerm t)
{
  ATerm w_58 = NULL;
  t = SSL_hashtable_put(o_63, m_63, n_63);
  w_58 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_58);
  return(t);
}
static ATerm g_8 (ATerm p_63, ATerm q_63, ATerm t)
{
  t = SSL_hashtable_get(q_63, p_63);
  return(t);
}
ATerm lookup_table_0_1 (ATerm g_60, ATerm t)
{
  ATerm k_59 = NULL;
  t = table_hashtable_0_0(t);
  k_59 = t;
  {
    ATerm k_32 = t;
    int l_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_16 = NULL;
        t = k_59;
        if(match_cons(t, sym_Hashtable_1))
          {
            w_16 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = g_8(g_60, w_16, t);
        LocalPopChoice(l_32);
      }
    else
      {
        t = k_32;
        {
          ATerm r_17 = NULL;
          t = g_60;
          t = table_create_0_0(t);
          t = k_59;
          if(match_cons(t, sym_Hashtable_1))
            {
              r_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_8(g_60, r_17, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm u_63, ATerm v_63, ATerm t)
{
  ATerm n_59 = NULL;
  t = SSL_hashtable_create(u_63, v_63);
  n_59 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_59);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm o_59 = NULL,p_59 = NULL,q_59 = NULL,s_59 = NULL,t_59 = NULL;
  o_59 = t;
  t = term_n_32;
  s_59 = t;
  t = term_o_32;
  t_59 = t;
  t = o_59;
  t = new_hashtable_0_2(s_59, t_59, t);
  p_59 = t;
  t = o_59;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(o_59, p_59, q_59, t);
  t = o_59;
  return(t);
}
static ATerm z_7 (ATerm r_63, ATerm s_63, ATerm t)
{
  ATerm a_60 = NULL;
  t = SSL_hashtable_remove(s_63, r_63);
  a_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_60);
  return(t);
}
static ATerm a_8 (ATerm w_63, ATerm t)
{
  ATerm b_60 = NULL;
  t = SSL_hashtable_destroy(w_63);
  b_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_60);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm c_60 = NULL;
  t = SSL_table_hashtable();
  c_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_60);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm d_60 = NULL,e_60 = NULL,f_60 = NULL,k_60 = NULL;
  d_60 = t;
  t = table_hashtable_0_0(t);
  e_60 = t;
  t = lookup_table_0_1(d_60, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_8(k_60, t);
  t = e_60;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_7(d_60, f_60, t);
  t = d_60;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm m_60 = NULL,p_60 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_60 = ATgetFirst((ATermList) t);
      p_60 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_60 = NULL,u_60 = NULL;
        static ATerm e_10 (ATerm t);
        static ATerm e_10 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(t_60)), not_null(u_60));
          return(t);
        }
        t = p_60;
        t = h_0(t);
        if(((t_60 != NULL) && (t_60 != t)))
          _fail(t);
        else
          t_60 = t;
        t = m_60;
        t = f_0(t);
        if(((u_60 != NULL) && (u_60 != t)))
          _fail(t);
        else
          u_60 = t;
        t = p_60;
        t = reverse_acc_2_0(f_0, e_10, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_13;
      t = h_0(t);
    }
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm a_61 = NULL,b_61 = NULL,c_61 = NULL,c_20 = NULL;
  c_61 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_61);
  a_61 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, b_61);
  c_20 = t;
  t = SSLsetAnnotations(c_20, a_61);
  return(t);
}
static ATerm i_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm e_61 = NULL;
  e_61 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_61), term_p_32);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_60 = NULL,x_60 = NULL;
  ATerm q_32 = t;
  int r_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_60 = NULL,z_60 = NULL;
      t = term_a_20;
      y_60 = t;
      t = term_k_31;
      z_60 = t;
      t = term_l_31;
      t = b_8(y_60, z_60, t);
      LocalPopChoice(r_32);
    }
  else
    {
      t = q_32;
      t = fetch_1_0(f_10, t);
    }
  t = term_t_32;
  t = echo_0_0(t);
  t = term_w_30;
  w_60 = t;
  t = term_x_30;
  x_60 = t;
  t = term_u_32;
  t = b_8(w_60, x_60, t);
  t = reverse_acc_2_0(_id, i_10, t);
  t = map_1_0(j_10, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_61 = NULL,h_61 = NULL,i_61 = NULL;
  g_61 = t;
  {
    ATerm v_32 = t;
    int w_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_61;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_32 = ATgetFirst((ATermList) t);
                ATerm y_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_61;
          }
        LocalPopChoice(w_32);
      }
    else
      {
        t = v_32;
        t = (ATerm) ATinsert(ATempty, g_61);
      }
  }
  h_61 = t;
  t = term_b_29;
  i_61 = t;
  t = SSL_printnl(i_61, h_61);
  t = g_61;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm m_61 = NULL,n_61 = NULL;
  t = term_a_20;
  m_61 = t;
  t = term_k_31;
  n_61 = t;
  t = term_l_31;
  t = b_8(m_61, n_61, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm k_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm o_61 = NULL,p_61 = NULL;
  t = term_z_32;
  o_61 = t;
  t = term_d_13;
  p_61 = t;
  t = term_a_33;
  t = e_8(o_61, p_61, t);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  t = term_b_33;
  return(t);
}
static ATerm o_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm q_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL;
  t = term_z_32;
  s_61 = t;
  t = term_d_13;
  t_61 = t;
  t = term_a_33;
  t = e_8(s_61, t_61, t);
  t = term_c_33;
  q_61 = t;
  t = term_d_13;
  r_61 = t;
  t = term_d_33;
  t = e_8(q_61, r_61, t);
  t = term_e_33;
  return(t);
}
static ATerm r_10 (ATerm t)
{
  t = term_g_33;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm h_33 = t;
  int i_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_10, m_10, n_10, t);
      LocalPopChoice(i_33);
    }
  else
    {
      t = h_33;
      t = Option_3_0(o_10, q_10, r_10, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_134 (ATerm), ATerm t)
{
  ATerm y_61 = NULL,z_61 = NULL,a_62 = NULL,b_62 = NULL,d_62 = NULL,e_62 = NULL,e_20 = NULL;
  y_61 = t;
  {
    ATerm j_33 = t;
    int k_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_33;
        t = h_134(t);
        LocalPopChoice(k_33);
      }
    else
      {
        t = j_33;
      }
  }
  t = y_61;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_62 = ATgetFirst((ATermList) t);
      b_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_61);
  z_61 = t;
  t = term_k_31;
  e_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_31, a_62);
  t = e_8(e_62, a_62, t);
  t = b_62;
  {
    static ATerm o_62 (ATerm t);
    static ATerm o_62 (ATerm t)
    {
      ATerm n_33 = t;
      int o_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_33 = t;
          int q_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_62 = NULL;
              h_62 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_62;
              LocalPopChoice(q_33);
            }
          else
            {
              t = p_33;
              t = h_134(t);
              t = Cons_2_0(_id, o_62, t);
            }
          LocalPopChoice(o_33);
        }
      else
        {
          t = n_33;
          {
            ATerm k_62 = NULL,l_62 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_62 = ATgetFirst((ATermList) t);
                l_62 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(l_62), (ATerm) ATmakeAppl(sym_Undefined_1, k_62));
          }
        }
      return(t);
    }
    t = o_62(t);
  }
  d_62 = t;
  t = (ATerm) ATinsert(CheckATermList(d_62), (ATerm) ATmakeAppl(sym_Program_1, a_62));
  e_20 = t;
  t = SSLsetAnnotations(e_20, z_61);
  return(t);
}
static ATerm t_10 (ATerm t)
{
  ATerm b_63 = NULL;
  b_63 = t;
  if(match_string(t, "--help"))
    {
      t = b_63;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_63;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_63;
        }
    }
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm c_63 = NULL,d_63 = NULL;
  t = term_h_32;
  c_63 = t;
  t = term_d_13;
  d_63 = t;
  t = term_r_33;
  t = e_8(c_63, d_63, t);
  t = term_w_33;
  return(t);
}
static ATerm v_10 (ATerm t)
{
  t = term_x_33;
  return(t);
}
static ATerm w_10 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm g_134 (ATerm), ATerm t)
{
  ATerm t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL,a_63 = NULL;
  v_62 = t;
  t = term_w_30;
  w_62 = t;
  t = term_y_33;
  t = lookup_table_0_1(w_62, t);
  a_63 = t;
  t = term_x_30;
  x_62 = t;
  t = (ATerm) ATempty;
  y_62 = t;
  t = a_63;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(x_62, y_62, z_62, t);
  t = v_62;
  {
    static ATerm s_10 (ATerm t);
    static ATerm s_10 (ATerm t)
    {
      ATerm z_33 = t;
      int a_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_134(t);
          LocalPopChoice(a_34);
        }
      else
        {
          t = z_33;
          {
            ATerm d_34 = t;
            int e_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_10, u_10, v_10, t);
                LocalPopChoice(e_34);
              }
            else
              {
                t = d_34;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_10, t);
  }
  {
    ATerm f_34 = t;
    int h_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_63 = NULL;
        z_63 = t;
        {
          ATerm i_34 = t;
          int m_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_17 = NULL;
              t = z_63;
              {
                ATerm n_34 = t;
                int o_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm x_17 = NULL,z_17 = NULL;
                    t = term_a_20;
                    x_17 = t;
                    t = term_h_32;
                    z_17 = t;
                    t = term_j_32;
                    t = b_8(x_17, z_17, t);
                    LocalPopChoice(o_34);
                  }
                else
                  {
                    t = n_34;
                    t = fetch_1_0(w_10, t);
                  }
              }
              t = z_63;
              t = default_system_usage_0_0(t);
              t = term_i_30;
              v_17 = t;
              t = SSL_exit(v_17);
              LocalPopChoice(m_34);
            }
          else
            {
              t = i_34;
              {
                ATerm l_18 = NULL,m_18 = NULL,o_18 = NULL;
                t = term_a_20;
                m_18 = t;
                t = term_z_32;
                o_18 = t;
                t = term_p_34;
                t = b_8(m_18, o_18, t);
                t = z_63;
                t = default_system_about_0_0(t);
                t = term_i_30;
                l_18 = t;
                t = SSL_exit(l_18);
              }
            }
        }
        LocalPopChoice(h_34);
      }
    else
      {
        t = f_34;
        {
          ATerm q_34 = t;
          int r_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_64 = NULL,b_64 = NULL,c_64 = NULL;
              static ATerm x_10 (ATerm t);
              static ATerm x_10 (ATerm t)
              {
                ATerm d_64 = NULL,e_64 = NULL,f_64 = NULL,g_20 = NULL;
                f_64 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    e_64 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(f_64);
                d_64 = t;
                t = e_64;
                if(((t_62 != NULL) && (t_62 != t)))
                  _fail(t);
                else
                  t_62 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, e_64);
                g_20 = t;
                t = SSLsetAnnotations(g_20, d_64);
                return(t);
              }
              t = fetch_1_0(x_10, t);
              t = term_h_13;
              b_64 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_62)), term_v_34);
              c_64 = t;
              t = SSL_printnl(b_64, c_64);
              t = (ATerm) ATmakeAppl(sym__2, term_h_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_62)), term_v_34));
              t = default_system_usage_0_0(t);
              t = term_l_13;
              a_64 = t;
              t = SSL_exit(a_64);
              LocalPopChoice(r_34);
            }
          else
            {
              t = q_34;
            }
        }
      }
  }
  u_62 = t;
  t = term_w_30;
  t = table_destroy_0_0(t);
  t = u_62;
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_132 (ATerm), ATerm m_132 (ATerm), ATerm n_132 (ATerm), ATerm o_132 (ATerm), ATerm t)
{
  ATerm k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL;
  t = parse_options_1_0(l_132, t);
  k_64 = t;
  t = term_w_34;
  t = table_create_0_0(t);
  t = term_w_34;
  l_64 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_34, term_x_34, k_64);
  t = lookup_table_0_1(l_64, t);
  o_64 = t;
  t = term_x_34;
  m_64 = t;
  t = o_64;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(m_64, k_64, n_64, t);
  t = k_64;
  t = n_132(t);
  {
    ATerm y_34 = t;
    int a_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_132, t);
        LocalPopChoice(a_35);
      }
    else
      {
        t = y_34;
        {
          ATerm c_35 = t;
          int e_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_132(t);
              t = report_success_0_0(t);
              LocalPopChoice(e_35);
            }
          else
            {
              t = c_35;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm b_11 (ATerm t)
{
  t = if_verbose2_1_0(r_11, t);
  return(t);
}
static ATerm n_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm p_64 = NULL,q_64 = NULL;
  t = term_h_35;
  p_64 = t;
  t = term_d_13;
  q_64 = t;
  t = term_i_35;
  t = e_8(p_64, q_64, t);
  t = term_j_35;
  return(t);
}
static ATerm p_11 (ATerm t)
{
  t = term_k_35;
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm r_64 = NULL,s_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL;
  r_64 = t;
  t = term_a_20;
  v_64 = t;
  t = term_k_31;
  w_64 = t;
  t = term_l_31;
  t = b_8(v_64, w_64, t);
  s_64 = t;
  t = term_h_13;
  t_64 = t;
  t = (ATerm) ATinsert(ATempty, s_64);
  u_64 = t;
  t = SSL_printnl(t_64, u_64);
  t = r_64;
  return(t);
}
ATerm iowrap_3_0 (ATerm u_131 (ATerm), ATerm v_131 (ATerm), ATerm w_131 (ATerm), ATerm t)
{
  static ATerm a_11 (ATerm t);
  static ATerm m_11 (ATerm t);
  static ATerm a_11 (ATerm t)
  {
    ATerm l_35 = t;
    int m_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_131(t);
        LocalPopChoice(m_35);
      }
    else
      {
        t = l_35;
        {
          ATerm n_35 = t;
          int o_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(o_35);
            }
          else
            {
              t = n_35;
              {
                ATerm p_35 = t;
                int q_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(q_35);
                  }
                else
                  {
                    t = p_35;
                    {
                      ATerm r_35 = t;
                      int u_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(n_11, o_11, p_11, t);
                          LocalPopChoice(u_35);
                        }
                      else
                        {
                          t = r_35;
                          {
                            ATerm v_35 = t;
                            int w_35 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(w_35);
                              }
                            else
                              {
                                t = v_35;
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
  static ATerm m_11 (ATerm t)
  {
    ATerm x_64 = NULL,y_64 = NULL,z_64 = NULL;
    y_64 = t;
    {
      ATerm x_35 = t;
      int a_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm x_11 (ATerm t);
          static ATerm x_11 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((x_64 != NULL) && (x_64 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  x_64 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(x_11, t);
          LocalPopChoice(a_36);
        }
      else
        {
          t = x_35;
          t = term_b_36;
          x_64 = t;
        }
    }
    t = not_null(x_64);
    t = ReadFromFile_0_0(t);
    z_64 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_64, z_64);
    t = apply_strategy_1_0(u_131, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(a_11, w_131, b_11, m_11, t);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm a_65 = NULL,b_65 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL,k_65 = NULL,l_65 = NULL,m_65 = NULL,n_65 = NULL,o_65 = NULL,t_20 = NULL,s_20 = NULL,r_20 = NULL,j_20 = NULL;
  o_65 = t;
  if(match_cons(t, sym__2))
    {
      b_65 = ATgetArgument(t, 0);
      c_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_65);
  a_65 = t;
  t = c_65;
  if(match_cons(t, sym_Specification_1))
    {
      e_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_65);
  d_65 = t;
  t = e_65;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_65 = ATgetFirst((ATermList) t);
      i_65 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_65);
  g_65 = t;
  t = h_65;
  if(match_cons(t, sym_Signature_1))
    {
      m_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_65);
  l_65 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, m_65);
  j_20 = t;
  t = SSLsetAnnotations(j_20, l_65);
  n_65 = t;
  t = i_65;
  t = Cons_2_0(p_12, q_12, t);
  j_65 = t;
  t = (ATerm) ATinsert(CheckATermList(j_65), n_65);
  r_20 = t;
  t = SSLsetAnnotations(r_20, g_65);
  k_65 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, k_65);
  s_20 = t;
  t = SSLsetAnnotations(s_20, d_65);
  f_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_65, f_65);
  t_20 = t;
  t = SSLsetAnnotations(t_20, a_65);
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm p_65 = NULL,q_65 = NULL,r_65 = NULL,s_65 = NULL,k_20 = NULL;
  s_65 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      q_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_65);
  p_65 = t;
  t = q_65;
  t = map_1_0(r_12, t);
  r_65 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, r_65);
  k_20 = t;
  t = SSLsetAnnotations(k_20, p_65);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm r_12 (ATerm t)
{
  t = scope_2_0(y_12, z_12, t);
  return(t);
}
static ATerm y_12 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm z_12 (ATerm t)
{
  t = scope_2_0(c_13, cp_0_0, t);
  return(t);
}
static ATerm c_13 (ATerm t)
{
  t = term_r_13;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(y_11, _fail, default_usage_0_0, t);
  return(t);
}

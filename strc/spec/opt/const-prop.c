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
ATerm term_a_35;
ATerm term_j_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_c_34;
ATerm term_z_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_q_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_u_31;
ATerm term_s_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_q_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_m_28;
ATerm term_h_28;
ATerm term_e_28;
ATerm term_t_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_b_25;
ATerm term_k_24;
ATerm term_f_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_i_19;
ATerm term_d_19;
ATerm term_i_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_y_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_o_12;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_b_13);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym__2, term_y_19, term_z_19);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym__2, term_c_13, (ATerm) ATempty);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("no match with current term: ", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("strat: ", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("current: ", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym__2, term_y_19, term_x_29);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym__2, term_z_19, term_b_30);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_30);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym__2, term_g_30, term_o_12);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym__2, term_a_32, term_o_12);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym__2, term_e_32, term_o_12);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(sym__2, term_w_32, term_o_12);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(sym__3, term_p_30, term_q_30, (ATerm) ATempty);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym__2, term_y_19, term_w_32);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym__2, term_y_19, term_a_32);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym__2, term_c_34, term_o_12);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
static ATerm a_0 (ATerm t);
static ATerm n_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm h_6 (ATerm p_103 (ATerm), ATerm m_23, ATerm n_23, ATerm t);
static ATerm t_0 (ATerm t);
static ATerm i_6 (ATerm n_103 (ATerm), ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm exec_maybe_1_0 (ATerm g_103 (ATerm), ATerm t);
static ATerm s_1 (ATerm t);
static ATerm k_6 (ATerm q_103 (ATerm), ATerm t);
static ATerm g_2 (ATerm t);
static ATerm c_7 (ATerm q_4, ATerm r_4, ATerm t_4, ATerm t);
ATerm isect_CurrentTerm_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm h_11 (ATerm g_9, ATerm i_9, ATerm j_9, ATerm t);
ATerm isect_Binding_0_0 (ATerm t);
static ATerm l_6 (ATerm x_59, ATerm w_59, ATerm t);
ATerm save_CurrentTerm_0_0 (ATerm t);
static ATerm m_6 (ATerm t_63, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_Binding_0_0 (ATerm t);
ATerm prop_abstract_choice_2_0 (ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm t);
ATerm prop_choice_1_0 (ATerm t_103 (ATerm), ATerm t);
static ATerm i_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm prop_traversal_1_0 (ATerm p_0 (ATerm), ATerm t);
static ATerm o_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm z_4 (ATerm t);
ATerm prop_call_1_0 (ATerm m_0 (ATerm), ATerm t);
static ATerm j_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm n_6 (ATerm o_103 (ATerm), ATerm h_23, ATerm t);
static ATerm x_5 (ATerm t);
ATerm prop_build_0_0 (ATerm t);
static ATerm o_6 (ATerm d_104 (ATerm), ATerm e_25, ATerm c_25, ATerm t);
ATerm oncetd_1_0 (ATerm q_108 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm n_113 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm w_129 (ATerm), ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm p_6 (ATerm a_24, ATerm b_24, ATerm t);
ATerm lookup_0_0 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm z_134 (ATerm), ATerm a_135 (ATerm), ATerm t);
static ATerm a_7 (ATerm e_140 (ATerm), ATerm t_79, ATerm u_79, ATerm w_79, ATerm v_79, ATerm t);
ATerm at_end_1_0 (ATerm p_114 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm h_27 (ATerm t_26, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm c_116 (ATerm), ATerm d_116 (ATerm), ATerm e_116 (ATerm), ATerm f_116 (ATerm), ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm t_6 (ATerm j_824, ATerm o_824, ATerm v_80, ATerm t);
ATerm while_not_2_0 (ATerm d_107 (ATerm), ATerm e_107 (ATerm), ATerm t);
ATerm for_3_0 (ATerm g_107 (ATerm), ATerm h_107 (ATerm), ATerm i_107 (ATerm), ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm c_39 (ATerm h_33, ATerm n_33, ATerm o_33, ATerm t);
static ATerm f_39 (ATerm d_34, ATerm e_34, ATerm h_34, ATerm t);
static ATerm i_39 (ATerm b_35, ATerm c_35, ATerm d_35, ATerm t);
static ATerm l_39 (ATerm z_35, ATerm c_36, ATerm e_36, ATerm t);
static ATerm o_39 (ATerm v_36, ATerm w_36, ATerm z_36, ATerm t);
static ATerm p_7 (ATerm t);
ATerm prop_pattern_match_0_0 (ATerm t);
ATerm CurrentTerm_0_0 (ATerm t);
static ATerm d_7 (ATerm f_59, ATerm g_59, ATerm t);
ATerm Binding_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm e_109 (ATerm), ATerm t);
static ATerm u_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
ATerm prop_match_0_0 (ATerm t);
ATerm cp_0_0 (ATerm t);
static ATerm e_7 (ATerm z_58, ATerm a_59, ATerm t);
ATerm end_scope_1_0 (ATerm a_104 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm i_106 (ATerm), ATerm j_106 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm z_103 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm b_104 (ATerm), ATerm c_104 (ATerm), ATerm t);
ATerm map_1_0 (ATerm y_113 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm c_90 (ATerm), ATerm d_90 (ATerm), ATerm t);
static ATerm g_7 (ATerm n_53, ATerm o_53, ATerm t);
static ATerm h_7 (ATerm s_37, ATerm t_37, ATerm t);
static ATerm j_7 (ATerm p_113 (ATerm), ATerm a_260, ATerm y_37, ATerm t);
static ATerm i_7 (ATerm o_37, ATerm p_37, ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm m_131 (ATerm), ATerm t);
static ATerm z_49 (ATerm t_49, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm k_7 (ATerm u_37, ATerm t);
static ATerm l_7 (ATerm r_51, ATerm s_51, ATerm t);
static ATerm m_7 (ATerm p_53, ATerm q_53, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm k_51 (ATerm j_50, ATerm t);
static ATerm l_51 (ATerm n_50, ATerm o_50, ATerm p_50, ATerm t);
static ATerm m_51 (ATerm x_50, ATerm y_50, ATerm z_50, ATerm t);
static ATerm n_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm i_114 (ATerm), ATerm t);
static ATerm s_7 (ATerm n_60, ATerm o_60, ATerm t);
ATerm if_verbose2_1_0 (ATerm v_129 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm v_7 (ATerm l_72, ATerm m_72, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm c_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm m_9 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm t_7 (ATerm u_58, ATerm v_58, ATerm t_58, ATerm t);
ATerm ArgOption_3_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm o_7 (ATerm d_57, ATerm e_57, ATerm t);
ATerm foldr_2_0 (ATerm x_120 (ATerm), ATerm y_120 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm t_9 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm u_129 (ATerm), ATerm t);
static ATerm x_9 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm w_7 (ATerm m_63, ATerm n_63, ATerm o_63, ATerm t);
static ATerm x_7 (ATerm p_63, ATerm q_63, ATerm t);
ATerm lookup_table_0_1 (ATerm g_60, ATerm t);
ATerm new_hashtable_0_2 (ATerm u_63, ATerm v_63, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm q_7 (ATerm r_63, ATerm s_63, ATerm t);
static ATerm r_7 (ATerm w_63, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm h_10 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm s_134 (ATerm), ATerm t);
static ATerm l_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm p_10 (ATerm t);
ATerm parse_options_3_0 (ATerm p_134 (ATerm), ATerm q_134 (ATerm), ATerm r_134 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm s_132 (ATerm), ATerm t_132 (ATerm), ATerm u_132 (ATerm), ATerm v_132 (ATerm), ATerm w_132 (ATerm), ATerm t);
static ATerm t_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm c_11 (ATerm t);
ATerm iowrap_3_0 (ATerm v_131 (ATerm), ATerm w_131 (ATerm), ATerm x_131 (ATerm), ATerm t);
static ATerm g_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm n_12 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm w_0 = NULL,x_0 = NULL,a_1 = NULL,b_1 = NULL,d_1 = NULL;
  w_0 = t;
  t = term_o_12;
  t = whoami_0_0(t);
  x_0 = t;
  t = term_q_12;
  b_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_12), x_0), term_r_12);
  d_1 = t;
  t = SSL_printnl(b_1, d_1);
  t = term_u_12;
  a_1 = t;
  t = SSL_exit(a_1);
  t = w_0;
  return(t);
}
static ATerm a_0 (ATerm t)
{
  t = term_y_12;
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm r_1 = NULL,t_1 = NULL,u_1 = NULL,v_1 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      r_1 = ATgetArgument(t, 0);
      {
        ATerm a_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t_1 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, r_1);
  u_1 = t;
  t = term_b_13;
  v_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, r_1), term_b_13);
  t = o_6(q_0, u_1, v_1, t);
  t = t_1;
  return(t);
}
static ATerm q_0 (ATerm t)
{
  t = term_y_12;
  return(t);
}
static ATerm r_0 (ATerm t)
{
  t = term_c_13;
  return(t);
}
static ATerm h_6 (ATerm p_103 (ATerm), ATerm m_23, ATerm n_23, ATerm t)
{
  static ATerm c_0 (ATerm t);
  static ATerm c_0 (ATerm t)
  {
    ATerm e_1 = NULL,g_1 = NULL,h_1 = NULL,j_1 = NULL,m_1 = NULL,n_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL,o_0 = NULL;
    e_1 = t;
    t = n_23;
    t = map_1_0(n_0, t);
    t = e_1;
    if(match_cons(t, sym_SDefT_4))
      {
        h_1 = ATgetArgument(t, 0);
        j_1 = ATgetArgument(t, 1);
        m_1 = ATgetArgument(t, 2);
        n_1 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(e_1);
    g_1 = t;
    t = (ATerm) ATempty;
    p_1 = t;
    t = term_b_13;
    q_1 = t;
    t = term_i_13;
    t = o_6(r_0, p_1, q_1, t);
    t = n_1;
    t = p_103(t);
    o_1 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, h_1, j_1, m_1, o_1);
    o_0 = t;
    t = SSLsetAnnotations(o_0, g_1);
    return(t);
  }
  t = scope_2_0(a_0, c_0, t);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  t = term_c_13;
  return(t);
}
static ATerm i_6 (ATerm n_103 (ATerm), ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL,y_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL,s_4 = NULL;
  w_1 = t;
  t = (ATerm) ATempty;
  x_1 = t;
  t = term_b_13;
  y_1 = t;
  t = term_i_13;
  t = o_6(t_0, x_1, y_1, t);
  t = w_1;
  if(match_cons(t, sym_Not_1))
    {
      a_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_1);
  z_1 = t;
  t = a_2;
  t = exec_maybe_1_0(n_103, t);
  b_2 = t;
  t = (ATerm) ATmakeAppl(sym_Not_1, b_2);
  s_4 = t;
  t = SSLsetAnnotations(s_4, z_1);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = term_c_13;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_c_13;
  return(t);
}
ATerm exec_maybe_1_0 (ATerm g_103 (ATerm), ATerm t)
{
  ATerm c_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL;
  e_2 = t;
  t = (ATerm) ATempty;
  j_2 = t;
  t = term_b_13;
  k_2 = t;
  t = term_i_13;
  t = o_6(u_0, j_2, k_2, t);
  t = e_2;
  t = save_Binding_0_0(t);
  c_2 = t;
  t = e_2;
  t = g_103(t);
  d_2 = t;
  t = (ATerm) ATempty;
  h_2 = t;
  t = term_b_13;
  i_2 = t;
  t = term_i_13;
  t = o_6(v_0, h_2, i_2, t);
  t = term_y_12;
  t = table_destroy_0_0(t);
  t = term_y_12;
  f_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_12, c_2);
  t = l_6(f_2, c_2, t);
  t = d_2;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_c_13;
  return(t);
}
static ATerm k_6 (ATerm q_103 (ATerm), ATerm t)
{
  ATerm l_2 = NULL,n_2 = NULL,p_2 = NULL,q_2 = NULL,u_2 = NULL,w_2 = NULL,y_2 = NULL,a_3 = NULL,c_3 = NULL,d_3 = NULL,x_4 = NULL;
  p_2 = t;
  t = save_Binding_0_0(t);
  n_2 = t;
  t = save_CurrentTerm_0_0(t);
  l_2 = t;
  t = p_2;
  if(match_cons(t, sym_Let_2))
    {
      u_2 = ATgetArgument(t, 0);
      w_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_2);
  q_2 = t;
  t = u_2;
  {
    static ATerm l_1 (ATerm t);
    static ATerm l_1 (ATerm t)
    {
      ATerm e_3 = NULL,k_3 = NULL,z_3 = NULL,a_4 = NULL;
      e_3 = t;
      t = (ATerm) ATempty;
      z_3 = t;
      t = term_b_13;
      a_4 = t;
      t = term_i_13;
      t = o_6(s_1, z_3, a_4, t);
      t = term_y_12;
      t = table_destroy_0_0(t);
      t = term_y_12;
      k_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_y_12, n_2);
      t = l_6(k_3, n_2, t);
      t = e_3;
      t = q_103(t);
      return(t);
    }
    t = map_1_0(l_1, t);
  }
  y_2 = t;
  t = term_c_13;
  t = table_destroy_0_0(t);
  t = term_c_13;
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_13, l_2);
  t = l_6(d_3, l_2, t);
  t = term_y_12;
  t = table_destroy_0_0(t);
  t = term_y_12;
  c_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_12, n_2);
  t = l_6(c_3, n_2, t);
  t = w_2;
  t = q_103(t);
  a_3 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, y_2, a_3);
  x_4 = t;
  t = SSLsetAnnotations(x_4, q_2);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm c_5 = NULL,h_5 = NULL,i_5 = NULL,m_5 = NULL,q_5 = NULL;
  q_5 = t;
  if(match_cons(t, sym__2))
    {
      c_5 = ATgetArgument(t, 0);
      h_5 = ATgetArgument(t, 1);
      t = h_5;
      {
        ATerm j_13 = t;
        int k_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_5 = ATgetFirst((ATermList) t);
                {
                  ATerm p_13 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(k_13);
            t = i_5;
            {
              ATerm r_13 = t;
              int t_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm u_13 = ATgetArgument(t, 0);
                      m_5 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(t_13);
                  t = c_5;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = q_5;
                    }
                  else
                    {
                      ATerm a_14 = t;
                      int b_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = c_7(c_5, m_5, q_5, t);
                          LocalPopChoice(b_14);
                        }
                      else
                        {
                          t = a_14;
                          t = q_5;
                        }
                    }
                }
              else
                {
                  t = r_13;
                  t = c_5;
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
            t = j_13;
            t = c_5;
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
static ATerm c_7 (ATerm q_4, ATerm r_4, ATerm t_4, ATerm t)
{
  t = t_4;
  {
    ATerm e_14 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_0 = NULL;
        t = term_c_13;
        i_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_c_13, q_4);
        t = s_7(i_0, q_4, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm l_14 = ATgetFirst((ATermList) t);
            if(match_cons(l_14, sym_Defined_2))
              {
                ATerm r_14 = ATgetArgument(l_14, 0);
                if((r_4 != ATgetArgument(l_14, 1)))
                  {
                    _fail(ATgetArgument(l_14, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm q_14 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = t_4;
        LocalPopChoice(f_14);
      }
    else
      {
        t = e_14;
        t = (ATerm) ATmakeAppl(sym__2, q_4, (ATerm) ATinsert(ATempty, term_b_13));
      }
  }
  return(t);
}
ATerm isect_CurrentTerm_0_0 (ATerm t)
{
  ATerm n_4 = NULL,p_4 = NULL;
  t = map_1_0(g_2, t);
  n_4 = t;
  t = term_c_13;
  t = table_destroy_0_0(t);
  t = term_c_13;
  p_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_13, n_4);
  t = l_6(p_4, n_4, t);
  t = n_4;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm e_10 = NULL,g_10 = NULL,i_10 = NULL,k_10 = NULL,n_10 = NULL;
  n_10 = t;
  if(match_cons(t, sym__2))
    {
      e_10 = ATgetArgument(t, 0);
      g_10 = ATgetArgument(t, 1);
      t = g_10;
      {
        ATerm s_14 = t;
        int t_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_10 = ATgetFirst((ATermList) t);
                {
                  ATerm y_14 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(t_14);
            t = i_10;
            {
              ATerm c_15 = t;
              int e_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm i_15 = ATgetArgument(t, 0);
                      k_10 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(e_15);
                  t = e_10;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = n_10;
                    }
                  else
                    {
                      ATerm j_15 = t;
                      int k_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = h_11(e_10, k_10, n_10, t);
                          LocalPopChoice(k_15);
                        }
                      else
                        {
                          t = j_15;
                          t = n_10;
                        }
                    }
                }
              else
                {
                  t = c_15;
                  t = e_10;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = n_10;
                    }
                  else
                    {
                      t = n_10;
                    }
                }
            }
          }
        else
          {
            t = s_14;
            t = e_10;
            if(match_cons(t, sym_Scopes_0))
              {
                t = n_10;
              }
            else
              {
                t = n_10;
              }
          }
      }
    }
  else
    {
      t = n_10;
    }
  return(t);
}
static ATerm h_11 (ATerm g_9, ATerm i_9, ATerm j_9, ATerm t)
{
  t = j_9;
  {
    ATerm o_15 = t;
    int q_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_0 = NULL;
        t = term_y_12;
        s_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_y_12, g_9);
        t = s_7(s_0, g_9, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm t_15 = ATgetFirst((ATermList) t);
            if(match_cons(t_15, sym_Defined_2))
              {
                ATerm w_15 = ATgetArgument(t_15, 0);
                if((i_9 != ATgetArgument(t_15, 1)))
                  {
                    _fail(ATgetArgument(t_15, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm v_15 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = j_9;
        LocalPopChoice(q_15);
      }
    else
      {
        t = o_15;
        t = (ATerm) ATmakeAppl(sym__2, g_9, (ATerm) ATinsert(ATempty, term_b_13));
      }
  }
  return(t);
}
ATerm isect_Binding_0_0 (ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL;
  t = map_1_0(h_3, t);
  e_9 = t;
  t = term_y_12;
  t = table_destroy_0_0(t);
  t = term_y_12;
  f_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_12, e_9);
  t = l_6(f_9, e_9, t);
  t = e_9;
  return(t);
}
static ATerm l_6 (ATerm x_59, ATerm w_59, ATerm t)
{
  static ATerm i_3 (ATerm t);
  static ATerm i_3 (ATerm t)
  {
    ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL;
    if(match_cons(t, sym__2))
      {
        l_11 = ATgetArgument(t, 0);
        m_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, x_59, l_11, m_11);
    t = lookup_table_0_1(x_59, t);
    if(match_cons(t, sym_Hashtable_1))
      {
        n_11 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = w_7(l_11, m_11, n_11, t);
    t = (ATerm) ATmakeAppl(sym__3, x_59, l_11, m_11);
    return(t);
  }
  t = w_59;
  t = map_1_0(i_3, t);
  return(t);
}
ATerm save_CurrentTerm_0_0 (ATerm t)
{
  t = term_c_13;
  t = table_getlist_0_0(t);
  return(t);
}
static ATerm m_6 (ATerm t_63, ATerm t)
{
  t = SSL_hashtable_keys(t_63);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm s_11 = NULL,t_11 = NULL;
  static ATerm j_3 (ATerm t);
  static ATerm j_3 (ATerm t)
  {
    ATerm x_11 = NULL,y_11 = NULL;
    x_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_11), x_11);
    t = s_7(not_null(s_11), x_11, t);
    y_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_11, y_11);
    return(t);
  }
  if(((s_11 != NULL) && (s_11 != t)))
    _fail(t);
  else
    s_11 = t;
  t = lookup_table_0_1(s_11, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(t_11, t);
  t = map_1_0(j_3, t);
  return(t);
}
ATerm save_Binding_0_0 (ATerm t)
{
  t = term_y_12;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm prop_abstract_choice_2_0 (ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL;
  h_12 = t;
  t = save_Binding_0_0(t);
  z_11 = t;
  t = save_CurrentTerm_0_0(t);
  a_12 = t;
  t = h_12;
  t = u_103(t);
  g_12 = t;
  t = save_Binding_0_0(t);
  b_12 = t;
  t = term_y_12;
  t = table_destroy_0_0(t);
  t = term_y_12;
  j_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_12, z_11);
  t = l_6(j_12, z_11, t);
  t = z_11;
  t = save_CurrentTerm_0_0(t);
  c_12 = t;
  t = term_c_13;
  t = table_destroy_0_0(t);
  t = term_c_13;
  i_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_13, a_12);
  t = l_6(i_12, a_12, t);
  t = g_12;
  t = v_103(t);
  d_12 = t;
  t = b_12;
  t = isect_Binding_0_0(t);
  t = c_12;
  t = isect_CurrentTerm_0_0(t);
  t = d_12;
  return(t);
}
ATerm prop_choice_1_0 (ATerm t_103 (ATerm), ATerm t)
{
  ATerm m_12 = NULL;
  m_12 = t;
  {
    ATerm c_16 = t;
    int d_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Choice_2))
          {
            ATerm f_16 = ATgetArgument(t, 0);
            ATerm h_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(d_16);
        {
          static ATerm w_3 (ATerm t);
          static ATerm x_3 (ATerm t);
          static ATerm w_3 (ATerm t)
          {
            ATerm s_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,z_12 = NULL,d_5 = NULL;
            z_12 = t;
            if(match_cons(t, sym_Choice_2))
              {
                v_12 = ATgetArgument(t, 0);
                w_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(z_12);
            s_12 = t;
            t = v_12;
            t = t_103(t);
            x_12 = t;
            t = (ATerm) ATmakeAppl(sym_Choice_2, x_12, w_12);
            d_5 = t;
            t = SSLsetAnnotations(d_5, s_12);
            return(t);
          }
          static ATerm x_3 (ATerm t)
          {
            ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,g_5 = NULL;
            h_13 = t;
            if(match_cons(t, sym_Choice_2))
              {
                e_13 = ATgetArgument(t, 0);
                f_13 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(h_13);
            d_13 = t;
            t = f_13;
            t = t_103(t);
            g_13 = t;
            t = (ATerm) ATmakeAppl(sym_Choice_2, e_13, g_13);
            g_5 = t;
            t = SSLsetAnnotations(g_5, d_13);
            return(t);
          }
          t = m_12;
          t = prop_abstract_choice_2_0(w_3, x_3, t);
        }
      }
    else
      {
        t = c_16;
        {
          ATerm i_16 = t;
          int j_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_GChoice_2))
                {
                  ATerm k_16 = ATgetArgument(t, 0);
                  ATerm m_16 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(j_16);
              {
                static ATerm y_3 (ATerm t);
                static ATerm b_4 (ATerm t);
                static ATerm y_3 (ATerm t)
                {
                  ATerm l_13 = NULL,m_13 = NULL,q_13 = NULL,s_13 = NULL,v_13 = NULL,k_5 = NULL;
                  v_13 = t;
                  if(match_cons(t, sym_GChoice_2))
                    {
                      m_13 = ATgetArgument(t, 0);
                      q_13 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(v_13);
                  l_13 = t;
                  t = m_13;
                  t = t_103(t);
                  s_13 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, s_13, q_13);
                  k_5 = t;
                  t = SSLsetAnnotations(k_5, l_13);
                  return(t);
                }
                static ATerm b_4 (ATerm t)
                {
                  ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL,d_14 = NULL,g_14 = NULL,l_5 = NULL;
                  g_14 = t;
                  if(match_cons(t, sym_GChoice_2))
                    {
                      x_13 = ATgetArgument(t, 0);
                      y_13 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(g_14);
                  w_13 = t;
                  t = y_13;
                  t = t_103(t);
                  d_14 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, x_13, d_14);
                  l_5 = t;
                  t = SSLsetAnnotations(l_5, w_13);
                  return(t);
                }
                t = m_12;
                t = prop_abstract_choice_2_0(y_3, b_4, t);
              }
            }
          else
            {
              t = i_16;
              {
                ATerm n_16 = t;
                int p_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_LChoice_2))
                      {
                        ATerm q_16 = ATgetArgument(t, 0);
                        ATerm s_16 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(p_16);
                    {
                      static ATerm d_4 (ATerm t);
                      static ATerm e_4 (ATerm t);
                      static ATerm d_4 (ATerm t)
                      {
                        ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,m_14 = NULL,o_5 = NULL;
                        m_14 = t;
                        if(match_cons(t, sym_LChoice_2))
                          {
                            i_14 = ATgetArgument(t, 0);
                            j_14 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(m_14);
                        h_14 = t;
                        t = i_14;
                        t = t_103(t);
                        k_14 = t;
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, k_14, j_14);
                        o_5 = t;
                        t = SSLsetAnnotations(o_5, h_14);
                        return(t);
                      }
                      static ATerm e_4 (ATerm t)
                      {
                        ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL,u_14 = NULL,v_14 = NULL,y_5 = NULL;
                        v_14 = t;
                        if(match_cons(t, sym_LChoice_2))
                          {
                            o_14 = ATgetArgument(t, 0);
                            p_14 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(v_14);
                        n_14 = t;
                        t = p_14;
                        t = t_103(t);
                        u_14 = t;
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, o_14, u_14);
                        y_5 = t;
                        t = SSLsetAnnotations(y_5, n_14);
                        return(t);
                      }
                      t = m_12;
                      t = prop_abstract_choice_2_0(d_4, e_4, t);
                    }
                  }
                else
                  {
                    t = n_16;
                    {
                      static ATerm g_4 (ATerm t);
                      static ATerm h_4 (ATerm t);
                      static ATerm g_4 (ATerm t)
                      {
                        ATerm w_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,n_15 = NULL,p_15 = NULL,u_15 = NULL,x_15 = NULL,y_15 = NULL,a_6 = NULL,z_5 = NULL;
                        y_15 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            h_15 = ATgetArgument(t, 0);
                            n_15 = ATgetArgument(t, 1);
                            p_15 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(y_15);
                        g_15 = t;
                        t = h_15;
                        t = t_103(t);
                        u_15 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, u_15, n_15, p_15);
                        z_5 = t;
                        t = SSLsetAnnotations(z_5, g_15);
                        x_15 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            z_14 = ATgetArgument(t, 0);
                            a_15 = ATgetArgument(t, 1);
                            b_15 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(x_15);
                        w_14 = t;
                        t = a_15;
                        t = t_103(t);
                        f_15 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, z_14, f_15, b_15);
                        a_6 = t;
                        t = SSLsetAnnotations(a_6, w_14);
                        return(t);
                      }
                      static ATerm h_4 (ATerm t)
                      {
                        ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL,e_16 = NULL,g_16 = NULL,o_16 = NULL,b_6 = NULL;
                        o_16 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            a_16 = ATgetArgument(t, 0);
                            b_16 = ATgetArgument(t, 1);
                            e_16 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(o_16);
                        z_15 = t;
                        t = e_16;
                        t = t_103(t);
                        g_16 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, a_16, b_16, g_16);
                        b_6 = t;
                        t = SSLsetAnnotations(b_6, z_15);
                        return(t);
                      }
                      if(match_cons(t, sym_GuardedLChoice_3))
                        {
                          ATerm t_16 = ATgetArgument(t, 0);
                          ATerm v_16 = ATgetArgument(t, 1);
                          ATerm w_16 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = m_12;
                      t = prop_abstract_choice_2_0(g_4, h_4, t);
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_c_13;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_c_13;
  return(t);
}
ATerm prop_traversal_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm x_16 = t;
  int z_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_17 = NULL,y_0 = NULL,z_0 = NULL,c_1 = NULL,f_1 = NULL,i_1 = NULL,k_1 = NULL,k_8 = NULL;
      d_17 = t;
      if(match_cons(t, sym_Cong_2))
        {
          ATerm b_17 = ATgetArgument(t, 0);
          ATerm c_17 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      y_0 = t;
      t = term_b_13;
      z_0 = t;
      t = term_i_13;
      t = o_6(i_4, y_0, z_0, t);
      t = d_17;
      if(match_cons(t, sym_Cong_2))
        {
          f_1 = ATgetArgument(t, 0);
          i_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_17);
      c_1 = t;
      t = i_1;
      {
        static ATerm j_4 (ATerm t);
        static ATerm j_4 (ATerm t)
        {
          t = exec_maybe_1_0(p_0, t);
          return(t);
        }
        t = map_1_0(j_4, t);
      }
      k_1 = t;
      t = (ATerm) ATmakeAppl(sym_Cong_2, f_1, k_1);
      k_8 = t;
      t = SSLsetAnnotations(k_8, c_1);
      LocalPopChoice(z_16);
    }
  else
    {
      t = x_16;
      {
        ATerm i_17 = NULL,j_17 = NULL,m_17 = NULL;
        static ATerm m_4 (ATerm t);
        static ATerm m_4 (ATerm t)
        {
          t = exec_maybe_1_0(p_0, t);
          return(t);
        }
        ATerm g_17 = t;
        int h_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_All_1))
              {
                ATerm l_17 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(h_17);
          }
        else
          {
            t = g_17;
            {
              ATerm n_17 = NULL;
              n_17 = t;
              {
                ATerm o_17 = t;
                int p_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_One_1))
                      {
                        ATerm q_17 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(p_17);
                    t = n_17;
                  }
                else
                  {
                    t = o_17;
                    {
                      ATerm v_17 = t;
                      int w_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Some_1))
                            {
                              ATerm f_18 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(w_17);
                          t = n_17;
                        }
                      else
                        {
                          t = v_17;
                          {
                            ATerm g_18 = t;
                            int h_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_Thread_1))
                                  {
                                    ATerm i_18 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(h_18);
                                t = n_17;
                              }
                            else
                              {
                                t = g_18;
                                if(match_cons(t, sym_Bagof_1))
                                  {
                                    ATerm j_18 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = n_17;
                              }
                          }
                        }
                    }
                  }
              }
            }
          }
        i_17 = t;
        t = (ATerm) ATempty;
        j_17 = t;
        t = term_b_13;
        m_17 = t;
        t = term_i_13;
        t = o_6(k_4, j_17, m_17, t);
        t = i_17;
        t = SRTS_one(m_4, t);
      }
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_c_13;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm b_3 = NULL,f_3 = NULL,g_3 = NULL,s_9 = NULL;
  t = Binding_0_0(t);
  g_3 = t;
  if(match_cons(t, sym_Var_1))
    {
      f_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_3);
  b_3 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, f_3);
  s_9 = t;
  t = SSLsetAnnotations(s_9, b_3);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_c_13;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL,v_3 = NULL,w_9 = NULL;
  t = Binding_0_0(t);
  v_3 = t;
  if(match_cons(t, sym_Var_1))
    {
      u_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_3);
  t_3 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, u_3);
  w_9 = t;
  t = SSLsetAnnotations(w_9, t_3);
  return(t);
}
ATerm prop_call_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  ATerm u_19 = NULL;
  u_19 = t;
  {
    ATerm k_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_PrimT_3))
          {
            ATerm m_18 = ATgetArgument(t, 0);
            ATerm o_18 = ATgetArgument(t, 1);
            ATerm r_18 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(l_18);
        {
          ATerm m_2 = NULL,o_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,v_2 = NULL,x_2 = NULL,z_2 = NULL,u_9 = NULL;
          t = (ATerm) ATempty;
          m_2 = t;
          t = term_b_13;
          o_2 = t;
          t = term_i_13;
          t = o_6(o_4, m_2, o_2, t);
          t = u_19;
          if(match_cons(t, sym_PrimT_3))
            {
              s_2 = ATgetArgument(t, 0);
              t_2 = ATgetArgument(t, 1);
              v_2 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(u_19);
          r_2 = t;
          t = t_2;
          {
            static ATerm u_4 (ATerm t);
            static ATerm u_4 (ATerm t)
            {
              t = exec_maybe_1_0(m_0, t);
              return(t);
            }
            t = map_1_0(u_4, t);
          }
          x_2 = t;
          t = v_2;
          t = alltd_1_0(v_4, t);
          z_2 = t;
          t = (ATerm) ATmakeAppl(sym_PrimT_3, s_2, x_2, z_2);
          u_9 = t;
          t = SSLsetAnnotations(u_9, r_2);
        }
      }
    else
      {
        t = k_18;
        {
          ATerm l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,i_11 = NULL;
          if(match_cons(t, sym_CallT_3))
            {
              ATerm s_18 = ATgetArgument(t, 0);
              ATerm u_18 = ATgetArgument(t, 1);
              ATerm w_18 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATempty;
          l_3 = t;
          t = term_b_13;
          m_3 = t;
          t = term_i_13;
          t = o_6(w_4, l_3, m_3, t);
          t = u_19;
          if(match_cons(t, sym_CallT_3))
            {
              o_3 = ATgetArgument(t, 0);
              p_3 = ATgetArgument(t, 1);
              q_3 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(u_19);
          n_3 = t;
          t = p_3;
          {
            static ATerm y_4 (ATerm t);
            static ATerm y_4 (ATerm t)
            {
              t = exec_maybe_1_0(m_0, t);
              return(t);
            }
            t = map_1_0(y_4, t);
          }
          r_3 = t;
          t = q_3;
          t = alltd_1_0(z_4, t);
          s_3 = t;
          t = (ATerm) ATmakeAppl(sym_CallT_3, o_3, r_3, s_3);
          i_11 = t;
          t = SSLsetAnnotations(i_11, n_3);
        }
      }
  }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_y_12;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm s_20 = NULL,t_20 = NULL,z_20 = NULL;
  s_20 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, s_20);
  t_20 = t;
  t = term_b_13;
  z_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, s_20), term_b_13);
  t = o_6(r_5, t_20, z_20, t);
  t = s_20;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_y_12;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_c_13;
  return(t);
}
static ATerm n_6 (ATerm o_103 (ATerm), ATerm h_23, ATerm t)
{
  static ATerm n_5 (ATerm t);
  static ATerm n_5 (ATerm t)
  {
    ATerm h_20 = NULL,i_20 = NULL,m_20 = NULL,n_20 = NULL,q_20 = NULL,r_20 = NULL,u_16 = NULL;
    h_20 = t;
    t = h_23;
    t = map_1_0(p_5, t);
    t = h_20;
    if(match_cons(t, sym_Scope_2))
      {
        m_20 = ATgetArgument(t, 0);
        n_20 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(h_20);
    i_20 = t;
    t = n_20;
    t = o_103(t);
    q_20 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, m_20, q_20);
    u_16 = t;
    t = SSLsetAnnotations(u_16, i_20);
    r_20 = t;
    {
      ATerm b_19 = t;
      int c_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_21 = NULL,b_21 = NULL,f_21 = NULL;
          t = CurrentTerm_0_0(t);
          {
            static ATerm s_5 (ATerm t);
            static ATerm s_5 (ATerm t)
            {
              ATerm l_21 = NULL;
              static ATerm u_5 (ATerm t);
              static ATerm u_5 (ATerm t)
              {
                if(((l_21 != NULL) && (l_21 != t)))
                  _fail(t);
                else
                  l_21 = t;
                return(t);
              }
              if(match_cons(t, sym_Var_1))
                {
                  if(((l_21 != NULL) && (l_21 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    l_21 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = h_23;
              t = fetch_1_0(u_5, t);
              return(t);
            }
            t = oncetd_1_0(s_5, t);
          }
          a_21 = t;
          t = (ATerm) ATempty;
          b_21 = t;
          t = term_b_13;
          f_21 = t;
          t = term_i_13;
          t = o_6(w_5, b_21, f_21, t);
          t = a_21;
          LocalPopChoice(c_19);
        }
      else
        {
          t = b_19;
        }
    }
    t = r_20;
    return(t);
  }
  t = scope_2_0(j_5, n_5, t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_c_13;
  return(t);
}
ATerm prop_build_0_0 (ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL,u_21 = NULL,x_21 = NULL,y_21 = NULL,y_16 = NULL;
  y_21 = t;
  if(match_cons(t, sym_Build_1))
    {
      s_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_21);
  r_21 = t;
  t = s_21;
  t = alltd_1_0(Binding_0_0, t);
  u_21 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, u_21);
  y_16 = t;
  t = SSLsetAnnotations(y_16, r_21);
  x_21 = t;
  if(match_cons(t, sym_Build_1))
    {
      o_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  p_21 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_19, o_21);
  q_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_d_19, o_21));
  t = o_6(x_5, p_21, q_21, t);
  t = x_21;
  return(t);
}
static ATerm o_6 (ATerm d_104 (ATerm), ATerm e_25, ATerm c_25, ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL,c_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,m_22 = NULL;
  h_22 = t;
  t = d_104(t);
  z_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_21, e_25, c_25);
  t = t_7(z_21, e_25, c_25, t);
  {
    ATerm e_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_22 = NULL;
        t = term_i_19;
        n_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_21, term_i_19);
        t = s_7(z_21, n_22, t);
        {
          ATerm l_19 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = l_19;
            }
        }
        LocalPopChoice(h_19);
      }
    else
      {
        t = e_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_22 = ATgetFirst((ATermList) t);
      c_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, z_21, term_i_19, (ATerm) ATinsert(CheckATermList(c_22), (ATerm) ATinsert(CheckATermList(a_22), e_25)));
  t = lookup_table_0_1(z_21, t);
  m_22 = t;
  t = term_i_19;
  i_22 = t;
  t = (ATerm) ATinsert(CheckATermList(c_22), (ATerm) ATinsert(CheckATermList(a_22), e_25));
  j_22 = t;
  t = m_22;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(i_22, j_22, k_22, t);
  t = h_22;
  return(t);
}
ATerm oncetd_1_0 (ATerm q_108 (ATerm), ATerm t)
{
  static ATerm o_22 (ATerm t);
  static ATerm o_22 (ATerm t)
  {
    ATerm m_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_108(t);
        LocalPopChoice(o_19);
      }
    else
      {
        t = m_19;
        t = SRTS_one(o_22, t);
      }
    return(t);
  }
  t = o_22(t);
  return(t);
}
ATerm debug_1_0 (ATerm n_113 (ATerm), ATerm t)
{
  ATerm r_22 = NULL,t_22 = NULL,u_22 = NULL,w_22 = NULL;
  r_22 = t;
  t = n_113(t);
  t_22 = t;
  t = term_q_12;
  u_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_22), t_22);
  w_22 = t;
  t = SSL_printnl(u_22, w_22);
  t = r_22;
  return(t);
}
ATerm if_verbose3_1_0 (ATerm w_129 (ATerm), ATerm t)
{
  ATerm y_22 = NULL;
  y_22 = t;
  {
    ATerm q_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_23 = NULL,f_23 = NULL,k_23 = NULL;
        t = term_y_19;
        f_23 = t;
        t = term_z_19;
        k_23 = t;
        t = term_a_20;
        t = s_7(f_23, k_23, t);
        c_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_23, term_b_20);
        t = geq_0_0(t);
        t = y_22;
        t = w_129(t);
        LocalPopChoice(x_19);
      }
    else
      {
        t = q_19;
        t = y_22;
      }
  }
  return(t);
}
static ATerm c_6 (ATerm t)
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
          ATerm c_20 = ATgetArgument(t, 0);
          ATerm d_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_24;
    }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = term_y_12;
  return(t);
}
static ATerm p_6 (ATerm a_24, ATerm b_24, ATerm t)
{
  ATerm y_23 = NULL,c_24 = NULL,h_24 = NULL;
  y_23 = t;
  t = b_24;
  {
    ATerm e_20 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(c_6, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_20;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, a_24);
  c_24 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_f_20, b_24);
  h_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, a_24), (ATerm) ATmakeAppl(sym_Defined_2, term_f_20, b_24));
  t = o_6(d_6, c_24, h_24, t);
  t = y_23;
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm j_28 = NULL,l_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,t_28 = NULL,u_28 = NULL;
  o_28 = t;
  if(match_cons(t, sym__2))
    {
      p_28 = ATgetArgument(t, 0);
      q_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_28;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_28 = ATgetFirst((ATermList) t);
      u_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_28;
  if(match_cons(t, sym__2))
    {
      j_28 = ATgetArgument(t, 0);
      l_28 = ATgetArgument(t, 1);
      {
        ATerm g_20 = t;
        int j_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_28;
            if((p_28 != t))
              {
                _fail(t);
              }
            t = l_28;
            LocalPopChoice(j_20);
          }
        else
          {
            t = g_20;
            t = (ATerm) ATmakeAppl(sym__2, p_28, u_28);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, p_28, u_28);
      t = lookup_0_0(t);
    }
  return(t);
}
static ATerm e_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_20 = ATgetArgument(t, 0);
      if(((ATgetType(k_20) != AT_LIST) || !(ATisEmpty(k_20))))
        _fail(t);
      {
        ATerm l_20 = ATgetArgument(t, 1);
        if(((ATgetType(l_20) != AT_LIST) || !(ATisEmpty(l_20))))
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
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL,o_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_20 = ATgetArgument(t, 0);
      if(((ATgetType(o_20) == AT_LIST) && !(ATisEmpty(o_20))))
        {
          k_31 = ATgetFirst((ATermList) o_20);
          l_31 = (ATerm) ATgetNext((ATermList) o_20);
        }
      else
        _fail(t);
      {
        ATerm p_20 = ATgetArgument(t, 1);
        if(((ATgetType(p_20) == AT_LIST) && !(ATisEmpty(p_20))))
          {
            m_31 = ATgetFirst((ATermList) p_20);
            o_31 = (ATerm) ATgetNext((ATermList) p_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_31, m_31), (ATerm) ATmakeAppl(sym__2, l_31, o_31));
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm q_31 = NULL,t_31 = NULL;
  if(match_cons(t, sym__2))
    {
      q_31 = ATgetArgument(t, 0);
      t_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_31), q_31);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm o_30 = NULL,r_30 = NULL,s_30 = NULL,y_30 = NULL;
  o_30 = t;
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
        t = o_30;
      }
    else
      {
        t = u_20;
        {
          ATerm j_31 = NULL;
          if(match_cons(t, sym__3))
            {
              r_30 = ATgetArgument(t, 0);
              s_30 = ATgetArgument(t, 1);
              y_30 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, r_30, s_30);
          t = genzip_4_0(e_6, f_6, g_6, _id, t);
          j_31 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_31, y_30);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm z_134 (ATerm), ATerm a_135 (ATerm), ATerm t)
{
  ATerm z_31 = NULL,d_32 = NULL;
  static ATerm j_6 (ATerm t);
  static ATerm j_6 (ATerm t)
  {
    ATerm l_4 = NULL;
    t = z_134(t);
    l_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_4, not_null(d_32));
    t = lookup_0_0(t);
    t = a_135(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((d_32 != NULL) && (d_32 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_32 = ATgetArgument(t, 0);
      z_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_31;
  t = alltd_1_0(j_6, t);
  return(t);
}
static ATerm a_7 (ATerm e_140 (ATerm), ATerm t_79, ATerm u_79, ATerm w_79, ATerm v_79, ATerm t)
{
  ATerm j_32 = NULL,m_32 = NULL;
  t = t_79;
  t = e_140(t);
  t = (ATerm) ATmakeAppl(sym__2, t_79, u_79);
  {
    ATerm y_20 = t;
    if((PushChoice() == 0))
      {
        ATerm n_32 = NULL,o_32 = NULL;
        if(match_cons(t, sym__2))
          {
            n_32 = ATgetArgument(t, 0);
            o_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_32;
        {
          static ATerm q_6 (ATerm t);
          static ATerm q_6 (ATerm t)
          {
            if((n_32 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1_0(q_6, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, n_32, o_32);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_20;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, t_79, u_79)), (ATerm) ATmakeAppl(sym__2, v_79, w_79));
  t = substitute_2_0(e_140, _id, t);
  if(match_cons(t, sym__2))
    {
      j_32 = ATgetArgument(t, 0);
      m_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_32, (ATerm) ATinsert(CheckATermList(j_32), (ATerm) ATmakeAppl(sym__2, t_79, u_79)));
  return(t);
}
ATerm at_end_1_0 (ATerm p_114 (ATerm), ATerm t)
{
  static ATerm p_26 (ATerm t);
  static ATerm p_26 (ATerm t)
  {
    ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL;
    m_26 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_26 = ATgetFirst((ATermList) t);
        l_26 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm c_4 = NULL,f_4 = NULL,a_17 = NULL;
          t = SSLgetAnnotations(m_26);
          c_4 = t;
          t = l_26;
          t = p_26(t);
          f_4 = t;
          t = (ATerm) ATinsert(CheckATermList(f_4), k_26);
          a_17 = t;
          t = SSLsetAnnotations(a_17, c_4);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_26;
        t = p_114(t);
      }
    return(t);
  }
  t = p_26(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL;
  h_25 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_25;
    }
  else
    {
      static ATerm r_6 (ATerm t);
      static ATerm r_6 (ATerm t)
      {
        t = not_null(j_25);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_25 = ATgetFirst((ATermList) t);
          if(((j_25 != NULL) && (j_25 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            j_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_25;
      t = at_end_1_0(r_6, t);
    }
  return(t);
}
static ATerm h_27 (ATerm t_26, ATerm t)
{
  ATerm w_26 = NULL;
  t = SSL_explode_term(t_26);
  if(match_cons(t, sym__2))
    {
      ATerm c_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      w_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_26;
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
        ATerm d_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm s_6 (ATerm t);
            static ATerm s_6 (ATerm t)
            {
              t = a_27;
              return(t);
            }
            t = z_26;
            t = at_end_1_0(s_6, t);
            LocalPopChoice(e_21);
          }
        else
          {
            t = d_21;
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
ATerm genzip_4_0 (ATerm c_116 (ATerm), ATerm d_116 (ATerm), ATerm e_116 (ATerm), ATerm f_116 (ATerm), ATerm t)
{
  static ATerm t_29 (ATerm t);
  static ATerm t_29 (ATerm t)
  {
    ATerm g_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_116(t);
        LocalPopChoice(h_21);
      }
    else
      {
        t = g_21;
        {
          ATerm i_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL,s_29 = NULL,s_17 = NULL;
          t = d_116(t);
          s_29 = t;
          if(match_cons(t, sym__2))
            {
              m_29 = ATgetArgument(t, 0);
              n_29 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_29);
          i_29 = t;
          t = m_29;
          t = f_116(t);
          o_29 = t;
          t = n_29;
          t = t_29(t);
          p_29 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_29, p_29);
          s_17 = t;
          t = SSLsetAnnotations(s_17, i_29);
          t = e_116(t);
        }
      }
    return(t);
  }
  t = t_29(t);
  return(t);
}
static ATerm u_6 (ATerm t)
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
static ATerm v_6 (ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_21 = ATgetArgument(t, 0);
      if(((ATgetType(k_21) == AT_LIST) && !(ATisEmpty(k_21))))
        {
          t_27 = ATgetFirst((ATermList) k_21);
          u_27 = (ATerm) ATgetNext((ATermList) k_21);
        }
      else
        _fail(t);
      {
        ATerm m_21 = ATgetArgument(t, 1);
        if(((ATgetType(m_21) == AT_LIST) && !(ATisEmpty(m_21))))
          {
            v_27 = ATgetFirst((ATermList) m_21);
            w_27 = (ATerm) ATgetNext((ATermList) m_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_27, v_27), (ATerm) ATmakeAppl(sym__2, u_27, w_27));
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm x_27 = NULL,a_28 = NULL;
  if(match_cons(t, sym__2))
    {
      x_27 = ATgetArgument(t, 0);
      a_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_28), x_27);
  return(t);
}
static ATerm t_6 (ATerm j_824, ATerm o_824, ATerm v_80, ATerm t)
{
  ATerm j_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL;
  t = SSL_explode_term(o_824);
  if(match_cons(t, sym__2))
    {
      j_27 = ATgetArgument(t, 0);
      m_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(j_824);
  if(match_cons(t, sym__2))
    {
      if((j_27 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      l_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_27, m_27);
  t = genzip_4_0(u_6, v_6, x_6, _id, t);
  n_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_27, v_80);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm d_107 (ATerm), ATerm e_107 (ATerm), ATerm t)
{
  static ATerm r_32 (ATerm t);
  static ATerm r_32 (ATerm t)
  {
    ATerm n_21 = t;
    int t_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_107(t);
        LocalPopChoice(t_21);
      }
    else
      {
        t = n_21;
        t = e_107(t);
        t = r_32(t);
      }
    return(t);
  }
  t = r_32(t);
  return(t);
}
ATerm for_3_0 (ATerm g_107 (ATerm), ATerm h_107 (ATerm), ATerm i_107 (ATerm), ATerm t)
{
  t = g_107(t);
  t = while_not_2_0(h_107, i_107, t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm e_33 = NULL;
  e_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_33, (ATerm) ATempty);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm g_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_21 = ATgetArgument(t, 0);
      if(((ATgetType(v_21) != AT_LIST) || !(ATisEmpty(v_21))))
        _fail(t);
      g_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_33;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL,n_38 = NULL,o_38 = NULL,r_38 = NULL;
  n_38 = t;
  if(match_cons(t, sym__2))
    {
      o_38 = ATgetArgument(t, 0);
      r_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_38 = ATgetFirst((ATermList) t);
      f_38 = (ATerm) ATgetNext((ATermList) t);
      t = c_38;
      if(match_cons(t, sym__2))
        {
          d_38 = ATgetArgument(t, 0);
          e_38 = ATgetArgument(t, 1);
          {
            ATerm w_21 = t;
            int b_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = c_39(o_38, r_38, n_38, t);
                LocalPopChoice(b_22);
              }
            else
              {
                t = w_21;
                {
                  ATerm d_22 = t;
                  int e_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = n_38;
                      t = a_7(p_7, d_38, e_38, f_38, r_38, t);
                      LocalPopChoice(e_22);
                    }
                  else
                    {
                      t = d_22;
                      {
                        ATerm f_22 = t;
                        int g_22 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = f_39(o_38, r_38, n_38, t);
                            LocalPopChoice(g_22);
                          }
                        else
                          {
                            t = f_22;
                            {
                              ATerm l_22 = t;
                              int p_22 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = i_39(o_38, r_38, n_38, t);
                                  LocalPopChoice(p_22);
                                }
                              else
                                {
                                  t = l_22;
                                  {
                                    ATerm q_22 = t;
                                    int s_22 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = l_39(o_38, r_38, n_38, t);
                                        LocalPopChoice(s_22);
                                      }
                                    else
                                      {
                                        t = q_22;
                                        t = o_39(o_38, r_38, n_38, t);
                                      }
                                  }
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
          ATerm v_22 = t;
          int x_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_39(o_38, r_38, n_38, t);
              LocalPopChoice(x_22);
            }
          else
            {
              t = v_22;
              {
                ATerm z_22 = t;
                int a_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = f_39(o_38, r_38, n_38, t);
                    LocalPopChoice(a_23);
                  }
                else
                  {
                    t = z_22;
                    {
                      ATerm b_23 = t;
                      int d_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = i_39(o_38, r_38, n_38, t);
                          LocalPopChoice(d_23);
                        }
                      else
                        {
                          t = b_23;
                          {
                            ATerm e_23 = t;
                            int g_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = l_39(o_38, r_38, n_38, t);
                                LocalPopChoice(g_23);
                              }
                            else
                              {
                                t = e_23;
                                t = o_39(o_38, r_38, n_38, t);
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
      ATerm i_23 = t;
      int j_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_39(o_38, r_38, n_38, t);
          LocalPopChoice(j_23);
        }
      else
        {
          t = i_23;
          {
            ATerm l_23 = t;
            int o_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = f_39(o_38, r_38, n_38, t);
                LocalPopChoice(o_23);
              }
            else
              {
                t = l_23;
                {
                  ATerm p_23 = t;
                  int q_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = i_39(o_38, r_38, n_38, t);
                      LocalPopChoice(q_23);
                    }
                  else
                    {
                      t = p_23;
                      {
                        ATerm r_23 = t;
                        int s_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = l_39(o_38, r_38, n_38, t);
                            LocalPopChoice(s_23);
                          }
                        else
                          {
                            t = r_23;
                            t = o_39(o_38, r_38, n_38, t);
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
static ATerm c_39 (ATerm h_33, ATerm n_33, ATerm o_33, ATerm t)
{
  ATerm u_33 = NULL,x_33 = NULL,y_33 = NULL,x_17 = NULL;
  t = SSLgetAnnotations(o_33);
  u_33 = t;
  t = h_33;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_23 = ATgetFirst((ATermList) t);
      if(match_cons(t_23, sym__2))
        {
          x_33 = ATgetArgument(t_23, 0);
          if((x_33 != ATgetArgument(t_23, 1)))
            {
              _fail(ATgetArgument(t_23, 1));
            }
        }
      else
        _fail(t);
      y_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_33, n_33);
  x_17 = t;
  t = SSLsetAnnotations(x_17, u_33);
  return(t);
}
static ATerm f_39 (ATerm d_34, ATerm e_34, ATerm h_34, ATerm t)
{
  ATerm i_34 = NULL,n_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,y_17 = NULL;
  t = SSLgetAnnotations(h_34);
  i_34 = t;
  t = d_34;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_23 = ATgetFirst((ATermList) t);
      if(match_cons(u_23, sym__2))
        {
          r_34 = ATgetArgument(u_23, 0);
          s_34 = ATgetArgument(u_23, 1);
        }
      else
        _fail(t);
      t_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_6(r_34, s_34, t_34, t);
  n_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_34, e_34);
  y_17 = t;
  t = SSLsetAnnotations(y_17, i_34);
  return(t);
}
static ATerm i_39 (ATerm b_35, ATerm c_35, ATerm d_35, ATerm t)
{
  ATerm e_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL,z_17 = NULL;
  t = SSLgetAnnotations(d_35);
  e_35 = t;
  t = b_35;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_23 = ATgetFirst((ATermList) t);
      if(match_cons(v_23, sym__2))
        {
          ATerm w_23 = ATgetArgument(v_23, 0);
          if(match_cons(w_23, sym_As_2))
            {
              r_35 = ATgetArgument(w_23, 0);
              s_35 = ATgetArgument(w_23, 1);
            }
          else
            _fail(t);
          t_35 = ATgetArgument(v_23, 1);
        }
      else
        _fail(t);
      u_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(CheckATermList(u_35), (ATerm) ATmakeAppl(sym__2, s_35, t_35)), (ATerm) ATmakeAppl(sym__2, r_35, t_35)), c_35);
  z_17 = t;
  t = SSLsetAnnotations(z_17, e_35);
  return(t);
}
static ATerm l_39 (ATerm z_35, ATerm c_36, ATerm e_36, ATerm t)
{
  ATerm i_36 = NULL,t_36 = NULL,a_18 = NULL;
  t = SSLgetAnnotations(e_36);
  i_36 = t;
  t = z_35;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_23 = ATgetFirst((ATermList) t);
      if(match_cons(x_23, sym__2))
        {
          ATerm z_23 = ATgetArgument(x_23, 0);
          if(!(match_cons(z_23, sym_Wld_0)))
            _fail(t);
          {
            ATerm d_24 = ATgetArgument(x_23, 1);
          }
        }
      else
        _fail(t);
      t_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_36, c_36);
  a_18 = t;
  t = SSLsetAnnotations(a_18, i_36);
  return(t);
}
static ATerm o_39 (ATerm v_36, ATerm w_36, ATerm z_36, ATerm t)
{
  ATerm a_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL,k_37 = NULL,n_37 = NULL,d_18 = NULL,c_18 = NULL;
  t = SSLgetAnnotations(z_36);
  a_37 = t;
  t = v_36;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_24 = ATgetFirst((ATermList) t);
      if(match_cons(e_24, sym__2))
        {
          f_37 = ATgetArgument(e_24, 0);
          g_37 = ATgetArgument(e_24, 1);
        }
      else
        _fail(t);
      h_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = f_37;
  {
    ATerm f_24 = t;
    if((PushChoice() == 0))
      {
        ATerm v_37 = NULL,w_37 = NULL,z_37 = NULL,b_18 = NULL;
        z_37 = t;
        if(match_cons(t, sym_Var_1))
          {
            w_37 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_37);
        v_37 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, w_37);
        b_18 = t;
        t = SSLsetAnnotations(b_18, v_37);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_24;
      }
  }
  t = g_37;
  if(match_cons(t, sym_Var_1))
    {
      n_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_37);
  k_37 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, n_37);
  c_18 = t;
  t = SSLsetAnnotations(c_18, k_37);
  t = (ATerm) ATmakeAppl(sym__2, h_37, w_36);
  d_18 = t;
  t = SSLsetAnnotations(d_18, a_37);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm y_38 = NULL,a_39 = NULL,b_39 = NULL,e_18 = NULL;
  b_39 = t;
  if(match_cons(t, sym_Var_1))
    {
      a_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_39);
  y_38 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, a_39);
  e_18 = t;
  t = SSLsetAnnotations(e_18, y_38);
  return(t);
}
ATerm prop_pattern_match_0_0 (ATerm t)
{
  t = for_3_0(y_6, z_6, f_7, t);
  return(t);
}
ATerm CurrentTerm_0_0 (ATerm t)
{
  ATerm g_24 = t;
  int j_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_39 = NULL,a_5 = NULL,b_5 = NULL;
      t = (ATerm) ATempty;
      a_5 = t;
      t = term_c_13;
      b_5 = t;
      t = term_k_24;
      t = d_7(b_5, a_5, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm l_24 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) l_24) != ATmakeSymbol("j_0", 0, ATtrue)))
            _fail(t);
          s_39 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = s_39;
      LocalPopChoice(j_24);
    }
  else
    {
      t = g_24;
      {
        ATerm m_24 = t;
        int n_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_39 = NULL,e_5 = NULL,f_5 = NULL;
            t = (ATerm) ATempty;
            e_5 = t;
            t = term_c_13;
            f_5 = t;
            t = term_k_24;
            t = d_7(f_5, e_5, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm o_24 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) o_24) != ATmakeSymbol("g_0", 0, ATtrue)))
                  _fail(t);
                u_39 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = u_39;
            LocalPopChoice(n_24);
          }
        else
          {
            t = m_24;
            {
              ATerm a_40 = NULL,t_5 = NULL,v_5 = NULL;
              a_40 = t;
              t = (ATerm) ATempty;
              t_5 = t;
              t = term_c_13;
              v_5 = t;
              t = term_k_24;
              t = d_7(v_5, t_5, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              t = a_40;
              _fail(t);
            }
          }
      }
    }
  return(t);
}
static ATerm d_7 (ATerm f_59, ATerm g_59, ATerm t)
{
  ATerm c_40 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_59, g_59);
  t = s_7(f_59, g_59, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_40 = ATgetFirst((ATermList) t);
      {
        ATerm p_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = c_40;
  return(t);
}
ATerm Binding_0_0 (ATerm t)
{
  ATerm j_41 = NULL;
  j_41 = t;
  if(match_cons(t, sym_Var_1))
    {
      ATerm q_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm r_24 = t;
    int s_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_6 = NULL,b_7 = NULL;
        t = term_y_12;
        b_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_y_12, j_41);
        t = d_7(b_7, j_41, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm t_24 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) t_24) != ATmakeSymbol("l_0", 0, ATtrue)))
              _fail(t);
            w_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_6;
        LocalPopChoice(s_24);
      }
    else
      {
        t = r_24;
        {
          ATerm u_24 = t;
          int v_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_8 = NULL;
              t = term_y_12;
              c_8 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_y_12, j_41);
              t = d_7(c_8, j_41, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              t = j_41;
              _fail(t);
              LocalPopChoice(v_24);
            }
          else
            {
              t = u_24;
              {
                ATerm j_8 = NULL;
                t = term_y_12;
                j_8 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_y_12, j_41);
                t = d_7(j_8, j_41, t);
                if(!(match_cons(t, sym_Undefined_0)))
                  _fail(t);
                t = j_41;
                _fail(t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm e_109 (ATerm), ATerm t)
{
  static ATerm t_41 (ATerm t);
  static ATerm t_41 (ATerm t)
  {
    ATerm w_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_109(t);
        LocalPopChoice(x_24);
      }
    else
      {
        t = w_24;
        t = SRTS_all(t_41, t);
      }
    return(t);
  }
  t = t_41(t);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm y_24 = t;
  int z_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_8 = NULL,p_8 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm a_25 = ATgetArgument(t, 0);
          if(match_cons(a_25, sym_Var_1))
            {
              o_8 = ATgetArgument(a_25, 0);
            }
          else
            _fail(t);
          p_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_6(o_8, p_8, t);
      LocalPopChoice(z_24);
    }
  else
    {
      t = y_24;
    }
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = debug_1_0(z_7, t);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_b_25;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm x_42 = NULL;
  x_42 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = x_42;
    }
  else
    {
      if(match_cons(t, sym_As_2))
        {
          ATerm d_25 = ATgetArgument(t, 0);
          ATerm f_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_42;
    }
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_c_13;
  return(t);
}
ATerm prop_match_0_0 (ATerm t)
{
  ATerm d_42 = NULL,e_42 = NULL,h_42 = NULL,i_42 = NULL,l_42 = NULL,m_42 = NULL,p_42 = NULL,n_18 = NULL;
  p_42 = t;
  if(match_cons(t, sym_Match_1))
    {
      i_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_42);
  h_42 = t;
  t = i_42;
  t = alltd_1_0(Binding_0_0, t);
  l_42 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, l_42);
  n_18 = t;
  t = SSLsetAnnotations(n_18, h_42);
  m_42 = t;
  if(match_cons(t, sym_Match_1))
    {
      e_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = CurrentTerm_0_0(t);
        d_42 = t;
        t = m_42;
        {
          ATerm l_25 = t;
          int m_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, e_42, d_42));
              t = prop_pattern_match_0_0(t);
              t = map_1_0(u_7, t);
              t = m_42;
              LocalPopChoice(m_25);
            }
          else
            {
              t = l_25;
              t = (ATerm) ATmakeAppl(sym__4, term_n_25, m_42, term_o_25, d_42);
              t = if_verbose3_1_0(y_7, t);
              t = term_p_25;
            }
        }
        LocalPopChoice(k_25);
      }
    else
      {
        t = g_25;
        {
          ATerm q_25 = t;
          int r_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_42 = NULL,v_42 = NULL;
              t = e_42;
              {
                ATerm s_25 = t;
                if((PushChoice() == 0))
                  {
                    t = oncetd_1_0(a_8, t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = s_25;
                  }
              }
              t = (ATerm) ATempty;
              u_42 = t;
              t = (ATerm) ATmakeAppl(sym_Defined_2, term_t_25, e_42);
              v_42 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_t_25, e_42));
              t = o_6(b_8, u_42, v_42, t);
              t = m_42;
              LocalPopChoice(r_25);
            }
          else
            {
              t = q_25;
            }
        }
      }
  }
  return(t);
}
ATerm cp_0_0 (ATerm t)
{
  ATerm u_25 = t;
  int v_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = prop_match_0_0(t);
      LocalPopChoice(v_25);
    }
  else
    {
      t = u_25;
      {
        ATerm w_25 = t;
        int x_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = prop_build_0_0(t);
            LocalPopChoice(x_25);
          }
        else
          {
            t = w_25;
            {
              ATerm y_25 = t;
              int z_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_43 = NULL,n_43 = NULL;
                  m_43 = t;
                  if(match_cons(t, sym_Scope_2))
                    {
                      n_43 = ATgetArgument(t, 0);
                      {
                        ATerm a_26 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  t = m_43;
                  t = n_6(cp_0_0, n_43, t);
                  LocalPopChoice(z_25);
                }
              else
                {
                  t = y_25;
                  {
                    ATerm b_26 = t;
                    int c_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = prop_call_1_0(cp_0_0, t);
                        LocalPopChoice(c_26);
                      }
                    else
                      {
                        t = b_26;
                        {
                          ATerm d_26 = t;
                          int e_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = prop_traversal_1_0(cp_0_0, t);
                              LocalPopChoice(e_26);
                            }
                          else
                            {
                              t = d_26;
                              {
                                ATerm f_26 = t;
                                int g_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm n_44 = NULL,r_44 = NULL,s_44 = NULL,t_8 = NULL,w_8 = NULL,x_8 = NULL,p_18 = NULL;
                                    n_44 = t;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        r_44 = ATgetArgument(t, 0);
                                        s_44 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(n_44);
                                    t_8 = t;
                                    t = r_44;
                                    t = cp_0_0(t);
                                    w_8 = t;
                                    t = s_44;
                                    t = cp_0_0(t);
                                    x_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, w_8, x_8);
                                    p_18 = t;
                                    t = SSLsetAnnotations(p_18, t_8);
                                    LocalPopChoice(g_26);
                                  }
                                else
                                  {
                                    t = f_26;
                                    {
                                      ATerm h_26 = t;
                                      int i_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = prop_choice_1_0(cp_0_0, t);
                                          LocalPopChoice(i_26);
                                        }
                                      else
                                        {
                                          t = h_26;
                                          {
                                            ATerm j_26 = t;
                                            int n_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm g_45 = NULL,h_45 = NULL,j_45 = NULL;
                                                g_45 = t;
                                                {
                                                  ATerm o_26 = t;
                                                  int q_26 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_Let_2))
                                                        {
                                                          ATerm r_26 = ATgetArgument(t, 0);
                                                          ATerm s_26 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(q_26);
                                                      t = g_45;
                                                      t = k_6(cp_0_0, t);
                                                    }
                                                  else
                                                    {
                                                      t = o_26;
                                                      {
                                                        ATerm u_26 = t;
                                                        int v_26 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm x_26 = ATgetArgument(t, 0);
                                                                ATerm y_26 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(v_26);
                                                            {
                                                              ATerm d_9 = NULL,h_9 = NULL,l_9 = NULL,n_9 = NULL,q_18 = NULL;
                                                              t = g_45;
                                                              if(match_cons(t, sym_Rec_2))
                                                                {
                                                                  h_9 = ATgetArgument(t, 0);
                                                                  l_9 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSLgetAnnotations(g_45);
                                                              d_9 = t;
                                                              t = l_9;
                                                              t = exec_maybe_1_0(cp_0_0, t);
                                                              n_9 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Rec_2, h_9, n_9);
                                                              q_18 = t;
                                                              t = SSLsetAnnotations(q_18, d_9);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = u_26;
                                                            {
                                                              ATerm c_27 = t;
                                                              int d_27 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_Not_1))
                                                                    {
                                                                      ATerm e_27 = ATgetArgument(t, 0);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(d_27);
                                                                  t = g_45;
                                                                  t = i_6(cp_0_0, t);
                                                                }
                                                              else
                                                                {
                                                                  t = c_27;
                                                                  if(match_cons(t, sym_SDefT_4))
                                                                    {
                                                                      h_45 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm f_27 = ATgetArgument(t, 1);
                                                                      }
                                                                      j_45 = ATgetArgument(t, 2);
                                                                      {
                                                                        ATerm g_27 = ATgetArgument(t, 3);
                                                                      }
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  t = g_45;
                                                                  t = h_6(cp_0_0, h_45, j_45, t);
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                                LocalPopChoice(n_26);
                                              }
                                            else
                                              {
                                                t = j_26;
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
static ATerm e_7 (ATerm z_58, ATerm a_59, ATerm t)
{
  ATerm p_45 = NULL,q_45 = NULL;
  q_45 = t;
  {
    ATerm i_27 = t;
    int k_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, z_58, a_59);
        t = s_7(z_58, a_59, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_27 = ATgetFirst((ATermList) t);
            p_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(k_27);
        {
          ATerm r_45 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, z_58, a_59, p_45);
          t = lookup_table_0_1(z_58, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              r_45 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_7(a_59, p_45, r_45, t);
          t = (ATerm) ATmakeAppl(sym__3, z_58, a_59, p_45);
        }
      }
    else
      {
        t = i_27;
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
          t = q_7(a_59, t_45, t);
          t = (ATerm) ATmakeAppl(sym__2, z_58, a_59);
        }
      }
  }
  t = q_45;
  return(t);
}
ATerm end_scope_1_0 (ATerm a_104 (ATerm), ATerm t)
{
  ATerm v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL;
  y_45 = t;
  t = a_104(t);
  x_45 = t;
  {
    ATerm p_27 = t;
    int q_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_46 = NULL;
        t = term_i_19;
        c_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_45, term_i_19);
        t = s_7(x_45, c_46, t);
        {
          ATerm r_27 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = r_27;
            }
        }
        LocalPopChoice(q_27);
      }
    else
      {
        t = p_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_45 = ATgetFirst((ATermList) t);
      v_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, x_45, term_i_19, v_45);
  t = lookup_table_0_1(x_45, t);
  b_46 = t;
  t = term_i_19;
  z_45 = t;
  t = b_46;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(z_45, v_45, a_46, t);
  t = w_45;
  {
    static ATerm d_8 (ATerm t);
    static ATerm d_8 (ATerm t)
    {
      ATerm d_46 = NULL;
      d_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_45, d_46);
      t = e_7(x_45, d_46, t);
      return(t);
    }
    t = map_1_0(d_8, t);
  }
  t = y_45;
  return(t);
}
ATerm restore_always_2_0 (ATerm i_106 (ATerm), ATerm j_106 (ATerm), ATerm t)
{
  ATerm s_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_106(t);
      t = j_106(t);
      LocalPopChoice(y_27);
    }
  else
    {
      t = s_27;
      t = j_106(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm z_103 (ATerm), ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL;
  g_46 = t;
  t = z_103(t);
  f_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_46, term_i_19);
  {
    ATerm z_27 = t;
    int b_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_46 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm c_28 = ATgetArgument(t, 0);
            ATerm d_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_i_19;
        p_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_46, term_i_19);
        t = s_7(f_46, p_46, t);
        LocalPopChoice(b_28);
      }
    else
      {
        t = z_27;
        t = (ATerm) ATempty;
      }
  }
  h_46 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_46, term_i_19, (ATerm) ATinsert(CheckATermList(h_46), (ATerm) ATempty));
  t = lookup_table_0_1(f_46, t);
  l_46 = t;
  t = term_i_19;
  i_46 = t;
  t = (ATerm) ATinsert(CheckATermList(h_46), (ATerm) ATempty);
  j_46 = t;
  t = l_46;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(i_46, j_46, k_46, t);
  t = g_46;
  return(t);
}
ATerm scope_2_0 (ATerm b_104 (ATerm), ATerm c_104 (ATerm), ATerm t)
{
  static ATerm e_8 (ATerm t);
  static ATerm e_8 (ATerm t)
  {
    t = end_scope_1_0(b_104, t);
    return(t);
  }
  t = begin_scope_1_0(b_104, t);
  t = restore_always_2_0(c_104, e_8, t);
  return(t);
}
ATerm map_1_0 (ATerm y_113 (ATerm), ATerm t)
{
  static ATerm e_47 (ATerm t);
  static ATerm e_47 (ATerm t)
  {
    ATerm b_47 = NULL,c_47 = NULL,d_47 = NULL;
    b_47 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_47;
      }
    else
      {
        ATerm v_9 = NULL,z_9 = NULL,a_10 = NULL,t_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_47 = ATgetFirst((ATermList) t);
            d_47 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_47);
        v_9 = t;
        t = c_47;
        t = y_113(t);
        z_9 = t;
        t = d_47;
        t = e_47(t);
        a_10 = t;
        t = (ATerm) ATinsert(CheckATermList(a_10), z_9);
        t_18 = t;
        t = SSLsetAnnotations(t_18, v_9);
      }
    return(t);
  }
  t = e_47(t);
  return(t);
}
ATerm Cons_2_0 (ATerm c_90 (ATerm), ATerm d_90 (ATerm), ATerm t)
{
  ATerm g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL,v_18 = NULL;
  l_47 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_47 = ATgetFirst((ATermList) t);
      i_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_47);
  g_47 = t;
  t = h_47;
  t = c_90(t);
  j_47 = t;
  t = i_47;
  t = d_90(t);
  k_47 = t;
  t = (ATerm) ATinsert(CheckATermList(k_47), j_47);
  v_18 = t;
  t = SSLsetAnnotations(v_18, g_47);
  return(t);
}
static ATerm g_7 (ATerm n_53, ATerm o_53, ATerm t)
{
  ATerm m_47 = NULL;
  t = SSL_fputc(n_53, o_53);
  m_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_47);
  return(t);
}
static ATerm h_7 (ATerm s_37, ATerm t_37, ATerm t)
{
  ATerm n_47 = NULL;
  t = SSL_write_term_to_stream_text(s_37, t_37);
  n_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_47);
  return(t);
}
static ATerm j_7 (ATerm p_113 (ATerm), ATerm a_260, ATerm y_37, ATerm t)
{
  ATerm o_47 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_260, term_e_28);
  t = n_7(t);
  o_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_47, y_37);
  t = p_113(t);
  t = fclose_0_0(t);
  t = y_37;
  return(t);
}
static ATerm i_7 (ATerm o_37, ATerm p_37, ATerm t)
{
  ATerm p_47 = NULL;
  t = SSL_write_term_to_stream_baf(o_37, p_37);
  p_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_47);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm d_11 = NULL,e_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_28 = ATgetArgument(t, 0);
      if(match_cons(f_28, sym_Stream_1))
        {
          d_11 = ATgetArgument(f_28, 0);
        }
      else
        _fail(t);
      e_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7(d_11, e_11, t);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL,k_12 = NULL,l_12 = NULL,p_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_28 = ATgetArgument(t, 0);
      if(match_cons(g_28, sym_Stream_1))
        {
          l_12 = ATgetArgument(g_28, 0);
        }
      else
        _fail(t);
      p_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_7(l_12, p_12, t);
  e_12 = t;
  t = term_h_28;
  f_12 = t;
  t = e_12;
  if(match_cons(t, sym_Stream_1))
    {
      k_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_h_28, e_12);
  t = g_7(f_12, k_12, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL,d_49 = NULL,e_49 = NULL,y_18 = NULL,x_18 = NULL;
  u_47 = t;
  if(match_cons(t, sym__2))
    {
      b_48 = ATgetArgument(t, 0);
      c_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_47);
  a_48 = t;
  t = b_48;
  {
    ATerm i_28 = t;
    int k_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm f_8 (ATerm t);
        static ATerm f_8 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((t_47 != NULL) && (t_47 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                t_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(f_8, t);
        LocalPopChoice(k_28);
      }
    else
      {
        t = i_28;
        t = term_m_28;
        t_47 = t;
      }
  }
  d_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_48, c_48);
  x_18 = t;
  t = SSLsetAnnotations(x_18, a_48);
  t = u_47;
  if(match_cons(t, sym__2))
    {
      w_47 = ATgetArgument(t, 0);
      x_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_47);
  v_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_47, (ATerm) ATmakeAppl(sym__2, not_null(t_47), x_47));
  y_18 = t;
  t = SSLsetAnnotations(y_18, v_47);
  z_47 = t;
  if(match_cons(t, sym__2))
    {
      d_49 = ATgetArgument(t, 0);
      e_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_28 = t;
    int r_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,z_10 = NULL,z_18 = NULL;
        t = SSLgetAnnotations(z_47);
        s_10 = t;
        t = d_49;
        t = fetch_1_0(g_8, t);
        v_10 = t;
        t = e_49;
        if(match_cons(t, sym__2))
          {
            x_10 = ATgetArgument(t, 0);
            z_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_7(h_8, x_10, z_10, t);
        w_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_10, w_10);
        z_18 = t;
        t = SSLsetAnnotations(z_18, s_10);
        LocalPopChoice(r_28);
      }
    else
      {
        t = n_28;
        {
          ATerm o_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,a_19 = NULL;
          t = SSLgetAnnotations(z_47);
          o_11 = t;
          t = e_49;
          if(match_cons(t, sym__2))
            {
              v_11 = ATgetArgument(t, 0);
              w_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_7(i_8, v_11, w_11, t);
          u_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_49, u_11);
          a_19 = t;
          t = SSLsetAnnotations(a_19, o_11);
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
ATerm apply_strategy_1_0 (ATerm m_131 (ATerm), ATerm t)
{
  ATerm h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL;
  l_49 = t;
  t = dtime_0_0(t);
  t = l_49;
  t = m_131(t);
  k_49 = t;
  t = dtime_0_0(t);
  h_49 = t;
  t = k_49;
  if(match_cons(t, sym__2))
    {
      i_49 = ATgetArgument(t, 0);
      j_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_49), (ATerm) ATmakeAppl(sym_Runtime_1, h_49)), j_49);
  return(t);
}
static ATerm z_49 (ATerm t_49, ATerm t)
{
  t = SSL_fclose(t_49);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_49 = NULL,x_49 = NULL;
  x_49 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_49 = ATgetArgument(t, 0);
      {
        ATerm s_28 = t;
        int v_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(w_49);
            LocalPopChoice(v_28);
          }
        else
          {
            t = s_28;
            t = z_49(x_49, t);
          }
      }
    }
  else
    {
      t = z_49(x_49, t);
    }
  return(t);
}
static ATerm k_7 (ATerm u_37, ATerm t)
{
  t = SSL_read_term_from_stream(u_37);
  return(t);
}
static ATerm l_7 (ATerm r_51, ATerm s_51, ATerm t)
{
  t = SSL_strcat(r_51, s_51);
  return(t);
}
static ATerm m_7 (ATerm p_53, ATerm q_53, ATerm t)
{
  ATerm a_50 = NULL;
  t = SSL_fopen(p_53, q_53);
  a_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_50);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm b_50 = NULL;
  t = SSL_stdin_stream();
  b_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_50);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm c_50 = NULL;
  t = SSL_stdout_stream();
  c_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_50);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_50 = NULL;
  t = SSL_stderr_stream();
  d_50 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_50);
  return(t);
}
static ATerm k_51 (ATerm j_50, ATerm t)
{
  ATerm k_50 = NULL;
  t = SSL_explode_term(j_50);
  if(match_cons(t, sym__2))
    {
      ATerm w_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_28 = ATgetArgument(t, 1);
        if(((ATgetType(x_28) == AT_LIST) && !(ATisEmpty(x_28))))
          {
            k_50 = ATgetFirst((ATermList) x_28);
            {
              ATerm y_28 = (ATerm) ATgetNext((ATermList) x_28);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_50;
  if(match_cons(t, sym_stderr_0))
    {
      t = k_50;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = k_50;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = k_50;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm l_51 (ATerm n_50, ATerm o_50, ATerm p_50, ATerm t)
{
  ATerm q_50 = NULL,r_50 = NULL,s_50 = NULL,v_50 = NULL,f_19 = NULL;
  t = SSLgetAnnotations(p_50);
  s_50 = t;
  t = n_50;
  if(match_cons(t, sym_Path_1))
    {
      v_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_50, o_50);
  f_19 = t;
  t = SSLsetAnnotations(f_19, s_50);
  if(match_cons(t, sym__2))
    {
      q_50 = ATgetArgument(t, 0);
      r_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(q_50, r_50, t);
  return(t);
}
static ATerm m_51 (ATerm x_50, ATerm y_50, ATerm z_50, ATerm t)
{
  ATerm a_51 = NULL,b_51 = NULL,c_51 = NULL,f_51 = NULL,g_19 = NULL;
  t = SSLgetAnnotations(z_50);
  c_51 = t;
  t = SSL_is_string(x_50);
  f_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_51, y_50);
  g_19 = t;
  t = SSLsetAnnotations(g_19, c_51);
  if(match_cons(t, sym__2))
    {
      a_51 = ATgetArgument(t, 0);
      b_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(a_51, b_51, t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL;
  h_51 = t;
  if(match_cons(t, sym__2))
    {
      i_51 = ATgetArgument(t, 0);
      j_51 = ATgetArgument(t, 1);
      {
        ATerm z_28 = t;
        int a_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_51(h_51, t);
            LocalPopChoice(a_29);
          }
        else
          {
            t = z_28;
            {
              ATerm b_29 = t;
              int c_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_51(i_51, j_51, h_51, t);
                  LocalPopChoice(c_29);
                }
              else
                {
                  t = b_29;
                  t = m_51(i_51, j_51, h_51, t);
                }
            }
          }
      }
    }
  else
    {
      t = k_51(h_51, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_51 = NULL,p_51 = NULL,q_51 = NULL,x_51 = NULL;
  x_51 = t;
  {
    ATerm d_29 = t;
    int e_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, x_51, term_f_29);
        t = n_7(t);
        LocalPopChoice(e_29);
      }
    else
      {
        t = d_29;
        {
          ATerm n_13 = NULL,o_13 = NULL;
          t = term_g_29;
          o_13 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_g_29, x_51);
          t = l_7(o_13, x_51, t);
          n_13 = t;
          t = SSL_perror(n_13);
          _fail(t);
        }
      }
  }
  p_51 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_7(q_51, t);
  o_51 = t;
  t = p_51;
  t = fclose_0_0(t);
  t = o_51;
  return(t);
}
ATerm fetch_1_0 (ATerm i_114 (ATerm), ATerm t)
{
  static ATerm w_52 (ATerm t);
  static ATerm w_52 (ATerm t)
  {
    ATerm t_52 = NULL,u_52 = NULL,v_52 = NULL;
    t_52 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_52 = ATgetFirst((ATermList) t);
        v_52 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_29 = t;
      int j_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_13 = NULL,c_14 = NULL,j_19 = NULL;
          t = SSLgetAnnotations(t_52);
          z_13 = t;
          t = u_52;
          t = i_114(t);
          c_14 = t;
          t = (ATerm) ATinsert(CheckATermList(v_52), c_14);
          j_19 = t;
          t = SSLsetAnnotations(j_19, z_13);
          LocalPopChoice(j_29);
        }
      else
        {
          t = h_29;
          {
            ATerm x_14 = NULL,d_15 = NULL,k_19 = NULL;
            t = SSLgetAnnotations(t_52);
            x_14 = t;
            t = v_52;
            t = w_52(t);
            d_15 = t;
            t = (ATerm) ATinsert(CheckATermList(d_15), u_52);
            k_19 = t;
            t = SSLsetAnnotations(k_19, x_14);
          }
        }
    }
    return(t);
  }
  t = w_52(t);
  return(t);
}
static ATerm s_7 (ATerm n_60, ATerm o_60, ATerm t)
{
  ATerm z_52 = NULL;
  t = lookup_table_0_1(n_60, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_7(o_60, z_52, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm v_129 (ATerm), ATerm t)
{
  ATerm c_53 = NULL;
  c_53 = t;
  {
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_53 = NULL,f_53 = NULL,g_53 = NULL;
        t = term_y_19;
        f_53 = t;
        t = term_z_19;
        g_53 = t;
        t = term_a_20;
        t = s_7(f_53, g_53, t);
        e_53 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_53, term_q_29);
        t = geq_0_0(t);
        t = c_53;
        t = v_129(t);
        LocalPopChoice(l_29);
      }
    else
      {
        t = k_29;
        t = c_53;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_53 = NULL,k_53 = NULL,l_53 = NULL;
  j_53 = t;
  {
    ATerm r_29 = t;
    int u_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_53;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_29 = ATgetFirst((ATermList) t);
                ATerm w_29 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_53;
          }
        LocalPopChoice(u_29);
      }
    else
      {
        t = r_29;
        t = (ATerm) ATinsert(ATempty, j_53);
      }
  }
  k_53 = t;
  t = term_m_28;
  l_53 = t;
  t = SSL_printnl(l_53, k_53);
  t = j_53;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm v_53 = NULL,w_53 = NULL;
  t = term_y_19;
  v_53 = t;
  t = term_x_29;
  w_53 = t;
  t = term_y_29;
  t = s_7(v_53, w_53, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm y_53 = NULL;
  y_53 = t;
  if(match_string(t, "-k"))
    {
      t = y_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = y_53;
    }
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm z_53 = NULL,a_54 = NULL,b_54 = NULL;
  z_53 = t;
  t = SSL_string_to_int(z_53);
  a_54 = t;
  t = term_z_29;
  b_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_29, a_54);
  t = v_7(b_54, a_54, t);
  t = z_53;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_a_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_8, m_8, n_8, t);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm d_54 = NULL;
  d_54 = t;
  if(match_string(t, "-S"))
    {
      t = d_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = d_54;
    }
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm e_54 = NULL,f_54 = NULL;
  t = term_z_19;
  e_54 = t;
  t = term_b_30;
  f_54 = t;
  t = term_c_30;
  t = v_7(e_54, f_54, t);
  t = term_d_30;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = term_e_30;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL;
  g_54 = t;
  t = SSL_string_to_int(g_54);
  h_54 = t;
  t = term_z_19;
  i_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_19, h_54);
  t = v_7(i_54, h_54, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, g_54);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_f_30;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm j_54 = NULL,k_54 = NULL;
  t = term_g_30;
  j_54 = t;
  t = term_o_12;
  k_54 = t;
  t = term_h_30;
  t = v_7(j_54, k_54, t);
  t = term_i_30;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  t = term_j_30;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_30 = t;
  int l_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_8, r_8, s_8, t);
      LocalPopChoice(l_30);
    }
  else
    {
      t = k_30;
      {
        ATerm m_30 = t;
        int n_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(u_8, v_8, y_8, t);
            LocalPopChoice(n_30);
          }
        else
          {
            t = m_30;
            t = Option_3_0(z_8, a_9, b_9, t);
          }
      }
    }
  return(t);
}
static ATerm v_7 (ATerm l_72, ATerm m_72, ATerm t)
{
  ATerm l_54 = NULL,m_54 = NULL;
  t = term_y_19;
  l_54 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_19, l_72, m_72);
  t = lookup_table_0_1(l_54, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(l_72, m_72, m_54, t);
  t = (ATerm) ATmakeAppl(sym__3, term_y_19, l_72, m_72);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm q_54 = NULL,s_54 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_54 = NULL,u_54 = NULL,v_54 = NULL;
      t = term_o_12;
      t = e_0(t);
      t_54 = t;
      t = term_p_30;
      u_54 = t;
      t = term_q_30;
      v_54 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_30, term_q_30, t_54);
      t = t_7(u_54, v_54, t_54, t);
      _fail(t);
    }
  else
    {
      ATerm y_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_54 = ATgetFirst((ATermList) t);
          s_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_54;
      t = b_0(t);
      t = term_o_12;
      t = d_0(t);
      y_54 = t;
      t = (ATerm) ATinsert(CheckATermList(s_54), y_54);
    }
  return(t);
}
static ATerm c_9 (ATerm t)
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
static ATerm k_9 (ATerm t)
{
  ATerm b_55 = NULL,c_55 = NULL;
  b_55 = t;
  t = term_t_30;
  c_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_30, b_55);
  t = v_7(c_55, b_55, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, b_55);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = term_u_30;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_9, k_9, m_9, t);
  return(t);
}
static ATerm t_7 (ATerm u_58, ATerm v_58, ATerm t_58, ATerm t)
{
  ATerm e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL,i_55 = NULL;
  e_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_58, v_58);
  {
    ATerm v_30 = t;
    int w_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_30 = ATgetArgument(t, 0);
            ATerm z_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_58, v_58);
        t = s_7(u_58, v_58, t);
        LocalPopChoice(w_30);
      }
    else
      {
        t = v_30;
        t = (ATerm) ATempty;
      }
  }
  f_55 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_58, v_58, (ATerm) ATinsert(CheckATermList(f_55), t_58));
  t = lookup_table_0_1(u_58, t);
  i_55 = t;
  t = (ATerm) ATinsert(CheckATermList(f_55), t_58);
  g_55 = t;
  t = i_55;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(v_58, g_55, h_55, t);
  t = e_55;
  return(t);
}
ATerm ArgOption_3_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm p_55 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_55 = NULL,u_55 = NULL,v_55 = NULL;
      t = term_o_12;
      t = k_0(t);
      t_55 = t;
      t = term_p_30;
      u_55 = t;
      t = term_q_30;
      v_55 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_30, term_q_30, t_55);
      t = t_7(u_55, v_55, t_55, t);
      _fail(t);
    }
  else
    {
      ATerm z_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_55 = ATgetFirst((ATermList) t);
          q_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_55;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_55 = ATgetFirst((ATermList) t);
          s_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_55;
      t = f_0(t);
      t = r_55;
      t = h_0(t);
      z_55 = t;
      t = (ATerm) ATinsert(CheckATermList(s_55), z_55);
    }
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm b_56 = NULL;
  b_56 = t;
  if(match_string(t, "-i"))
    {
      t = b_56;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_56;
    }
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm c_56 = NULL,d_56 = NULL;
  c_56 = t;
  t = term_a_31;
  d_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_31, c_56);
  t = v_7(d_56, c_56, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_56);
  return(t);
}
static ATerm q_9 (ATerm t)
{
  t = term_b_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_9, p_9, q_9, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_12;
  t = whoami_0_0(t);
  e_56 = t;
  t = term_q_12;
  g_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_31), e_56);
  h_56 = t;
  t = SSL_printnl(g_56, h_56);
  t = term_u_12;
  f_56 = t;
  t = SSL_exit(f_56);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm i_56 = NULL,j_56 = NULL;
  t = term_y_19;
  i_56 = t;
  t = term_x_29;
  j_56 = t;
  t = term_y_29;
  t = s_7(i_56, j_56, t);
  return(t);
}
static ATerm o_7 (ATerm d_57, ATerm e_57, ATerm t)
{
  ATerm d_31 = t;
  int e_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(d_57, e_57);
      LocalPopChoice(e_31);
    }
  else
    {
      t = d_31;
      t = SSL_addr(d_57, e_57);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm x_120 (ATerm), ATerm y_120 (ATerm), ATerm t)
{
  ATerm l_56 = NULL,m_56 = NULL,n_56 = NULL;
  l_56 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_56;
      t = x_120(t);
    }
  else
    {
      ATerm q_56 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_56 = ATgetFirst((ATermList) t);
          n_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_56;
      t = foldr_2_0(x_120, y_120, t);
      q_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_56, q_56);
      t = y_120(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm r_9 (ATerm t)
{
  t = term_b_30;
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL;
  if(match_cons(t, sym__2))
    {
      r_15 = ATgetArgument(t, 0);
      s_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_7(r_15, s_15, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm t_56 = NULL,l_15 = NULL,m_15 = NULL;
  t = times_0_0(t);
  m_15 = t;
  t = SSL_explode_term(m_15);
  if(match_cons(t, sym__2))
    {
      ATerm f_31 = ATgetArgument(t, 0);
      l_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_15;
  t = foldr_2_0(r_9, t_9, t);
  t_56 = t;
  t = SSL_TicksToSeconds(t_56);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_57 = NULL,h_57 = NULL,i_57 = NULL;
  g_57 = t;
  if(match_cons(t, sym__2))
    {
      h_57 = ATgetArgument(t, 0);
      i_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_31 = t;
    int h_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_57;
        if((h_57 != t))
          {
            _fail(t);
          }
        t = g_57;
        LocalPopChoice(h_31);
      }
    else
      {
        t = g_31;
        t = (ATerm) ATmakeAppl(sym__2, h_57, i_57);
        {
          ATerm i_31 = t;
          int n_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_57, i_57);
              LocalPopChoice(n_31);
            }
          else
            {
              t = i_31;
              t = SSL_gtr(h_57, i_57);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, h_57, i_57);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm u_129 (ATerm), ATerm t)
{
  ATerm m_57 = NULL;
  m_57 = t;
  {
    ATerm p_31 = t;
    int r_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_57 = NULL,p_57 = NULL,q_57 = NULL;
        t = term_y_19;
        p_57 = t;
        t = term_z_19;
        q_57 = t;
        t = term_a_20;
        t = s_7(p_57, q_57, t);
        o_57 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_57, term_u_12);
        t = geq_0_0(t);
        t = m_57;
        t = u_129(t);
        LocalPopChoice(r_31);
      }
    else
      {
        t = p_31;
        t = m_57;
      }
  }
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm s_57 = NULL,t_57 = NULL,v_57 = NULL,w_57 = NULL;
  t = run_time_0_0(t);
  s_57 = t;
  t = term_o_12;
  t = whoami_0_0(t);
  t_57 = t;
  t = term_q_12;
  v_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_31), s_57), term_s_31), t_57);
  w_57 = t;
  t = SSL_printnl(v_57, w_57);
  t = (ATerm) ATmakeAppl(sym__2, term_q_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_31), s_57), term_s_31), t_57));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_57 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_30;
  x_57 = t;
  t = SSL_exit(x_57);
  return(t);
}
static ATerm w_7 (ATerm m_63, ATerm n_63, ATerm o_63, ATerm t)
{
  ATerm y_57 = NULL;
  t = SSL_hashtable_put(o_63, m_63, n_63);
  y_57 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_57);
  return(t);
}
static ATerm x_7 (ATerm p_63, ATerm q_63, ATerm t)
{
  t = SSL_hashtable_get(q_63, p_63);
  return(t);
}
ATerm lookup_table_0_1 (ATerm g_60, ATerm t)
{
  ATerm h_58 = NULL;
  t = table_hashtable_0_0(t);
  h_58 = t;
  {
    ATerm v_31 = t;
    int w_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_16 = NULL;
        t = h_58;
        if(match_cons(t, sym_Hashtable_1))
          {
            l_16 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = x_7(g_60, l_16, t);
        LocalPopChoice(w_31);
      }
    else
      {
        t = v_31;
        {
          ATerm r_16 = NULL;
          t = g_60;
          t = table_create_0_0(t);
          t = h_58;
          if(match_cons(t, sym_Hashtable_1))
            {
              r_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_7(g_60, r_16, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm u_63, ATerm v_63, ATerm t)
{
  ATerm l_58 = NULL;
  t = SSL_hashtable_create(u_63, v_63);
  l_58 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_58);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm m_58 = NULL,n_58 = NULL,o_58 = NULL,q_58 = NULL,r_58 = NULL;
  m_58 = t;
  t = term_x_31;
  q_58 = t;
  t = term_y_31;
  r_58 = t;
  t = m_58;
  t = new_hashtable_0_2(q_58, r_58, t);
  n_58 = t;
  t = m_58;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(m_58, n_58, o_58, t);
  t = m_58;
  return(t);
}
static ATerm q_7 (ATerm r_63, ATerm s_63, ATerm t)
{
  ATerm s_58 = NULL;
  t = SSL_hashtable_remove(s_63, r_63);
  s_58 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_58);
  return(t);
}
static ATerm r_7 (ATerm w_63, ATerm t)
{
  ATerm w_58 = NULL;
  t = SSL_hashtable_destroy(w_63);
  w_58 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_58);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm x_58 = NULL;
  t = SSL_table_hashtable();
  x_58 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_58);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL;
  b_59 = t;
  t = table_hashtable_0_0(t);
  c_59 = t;
  t = lookup_table_0_1(b_59, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_7(e_59, t);
  t = c_59;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(b_59, d_59, t);
  t = b_59;
  return(t);
}
static ATerm y_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm h_59 = NULL,i_59 = NULL;
  t = term_a_32;
  h_59 = t;
  t = term_o_12;
  i_59 = t;
  t = term_b_32;
  t = v_7(h_59, i_59, t);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  t = term_c_32;
  return(t);
}
static ATerm d_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL;
  t = term_a_32;
  l_59 = t;
  t = term_o_12;
  m_59 = t;
  t = term_b_32;
  t = v_7(l_59, m_59, t);
  t = term_e_32;
  j_59 = t;
  t = term_o_12;
  k_59 = t;
  t = term_f_32;
  t = v_7(j_59, k_59, t);
  t = term_g_32;
  return(t);
}
static ATerm h_10 (ATerm t)
{
  t = term_h_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_32 = t;
  int k_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_9, b_10, c_10, t);
      LocalPopChoice(k_32);
    }
  else
    {
      t = i_32;
      t = Option_3_0(d_10, f_10, h_10, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_134 (ATerm), ATerm t)
{
  ATerm r_59 = NULL,s_59 = NULL,t_59 = NULL,a_60 = NULL,c_60 = NULL,d_60 = NULL,n_19 = NULL;
  r_59 = t;
  {
    ATerm l_32 = t;
    int p_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_32;
        t = s_134(t);
        LocalPopChoice(p_32);
      }
    else
      {
        t = l_32;
      }
  }
  t = r_59;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_59 = ATgetFirst((ATermList) t);
      a_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_59);
  s_59 = t;
  t = term_x_29;
  d_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_29, t_59);
  t = v_7(d_60, t_59, t);
  t = a_60;
  {
    static ATerm t_60 (ATerm t);
    static ATerm t_60 (ATerm t)
    {
      ATerm s_32 = t;
      int t_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_32 = t;
          int v_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_60 = NULL;
              k_60 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = k_60;
              LocalPopChoice(v_32);
            }
          else
            {
              t = u_32;
              t = s_134(t);
              t = Cons_2_0(_id, t_60, t);
            }
          LocalPopChoice(t_32);
        }
      else
        {
          t = s_32;
          {
            ATerm p_60 = NULL,q_60 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                p_60 = ATgetFirst((ATermList) t);
                q_60 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(q_60), (ATerm) ATmakeAppl(sym_Undefined_1, p_60));
          }
        }
      return(t);
    }
    t = t_60(t);
  }
  c_60 = t;
  t = (ATerm) ATinsert(CheckATermList(c_60), (ATerm) ATmakeAppl(sym_Program_1, t_59));
  n_19 = t;
  t = SSLsetAnnotations(n_19, s_59);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm g_61 = NULL;
  g_61 = t;
  if(match_string(t, "--help"))
    {
      t = g_61;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = g_61;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = g_61;
        }
    }
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm h_61 = NULL,i_61 = NULL;
  t = term_w_32;
  h_61 = t;
  t = term_o_12;
  i_61 = t;
  t = term_x_32;
  t = v_7(h_61, i_61, t);
  t = term_y_32;
  return(t);
}
static ATerm o_10 (ATerm t)
{
  t = term_z_32;
  return(t);
}
static ATerm p_10 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm p_134 (ATerm), ATerm q_134 (ATerm), ATerm r_134 (ATerm), ATerm t)
{
  ATerm y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL,f_61 = NULL;
  a_61 = t;
  t = term_p_30;
  b_61 = t;
  t = term_a_33;
  t = lookup_table_0_1(b_61, t);
  f_61 = t;
  t = term_q_30;
  c_61 = t;
  t = (ATerm) ATempty;
  d_61 = t;
  t = f_61;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(c_61, d_61, e_61, t);
  t = a_61;
  {
    static ATerm j_10 (ATerm t);
    static ATerm j_10 (ATerm t)
    {
      ATerm b_33 = t;
      int c_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_134(t);
          LocalPopChoice(c_33);
        }
      else
        {
          t = b_33;
          {
            ATerm d_33 = t;
            int f_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_10, m_10, o_10, t);
                LocalPopChoice(f_33);
              }
            else
              {
                t = d_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_10, t);
  }
  {
    ATerm i_33 = t;
    int j_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_61 = NULL;
        t_61 = t;
        {
          ATerm k_33 = t;
          int l_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_17 = NULL;
              t = t_61;
              {
                ATerm m_33 = t;
                int p_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_17 = NULL,k_17 = NULL;
                    t = term_y_19;
                    f_17 = t;
                    t = term_w_32;
                    k_17 = t;
                    t = term_q_33;
                    t = s_7(f_17, k_17, t);
                    LocalPopChoice(p_33);
                  }
                else
                  {
                    t = m_33;
                    t = fetch_1_0(p_10, t);
                  }
              }
              t = t_61;
              t = q_134(t);
              t = term_b_30;
              e_17 = t;
              t = SSL_exit(e_17);
              LocalPopChoice(l_33);
            }
          else
            {
              t = k_33;
              {
                ATerm r_17 = NULL,t_17 = NULL,u_17 = NULL;
                t = term_y_19;
                t_17 = t;
                t = term_a_32;
                u_17 = t;
                t = term_r_33;
                t = s_7(t_17, u_17, t);
                t = t_61;
                t = r_134(t);
                t = term_b_30;
                r_17 = t;
                t = SSL_exit(r_17);
              }
            }
        }
        LocalPopChoice(j_33);
      }
    else
      {
        t = i_33;
        {
          ATerm s_33 = t;
          int t_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_61 = NULL,v_61 = NULL,w_61 = NULL;
              static ATerm q_10 (ATerm t);
              static ATerm q_10 (ATerm t)
              {
                ATerm x_61 = NULL,y_61 = NULL,z_61 = NULL,p_19 = NULL;
                z_61 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    y_61 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(z_61);
                x_61 = t;
                t = y_61;
                if(((y_60 != NULL) && (y_60 != t)))
                  _fail(t);
                else
                  y_60 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, y_61);
                p_19 = t;
                t = SSLsetAnnotations(p_19, x_61);
                return(t);
              }
              t = fetch_1_0(q_10, t);
              t = term_q_12;
              v_61 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_60)), term_v_33);
              w_61 = t;
              t = SSL_printnl(v_61, w_61);
              t = (ATerm) ATmakeAppl(sym__2, term_q_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_60)), term_v_33));
              t = q_134(t);
              t = term_u_12;
              u_61 = t;
              t = SSL_exit(u_61);
              LocalPopChoice(t_33);
            }
          else
            {
              t = s_33;
            }
        }
      }
  }
  z_60 = t;
  t = term_p_30;
  t = table_destroy_0_0(t);
  t = z_60;
  return(t);
}
ATerm option_wrap_5_0 (ATerm s_132 (ATerm), ATerm t_132 (ATerm), ATerm u_132 (ATerm), ATerm v_132 (ATerm), ATerm w_132 (ATerm), ATerm t)
{
  ATerm e_62 = NULL,f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL;
  t = parse_options_3_0(s_132, t_132, u_132, t);
  e_62 = t;
  t = term_w_33;
  t = table_create_0_0(t);
  t = term_w_33;
  f_62 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_33, term_z_33, e_62);
  t = lookup_table_0_1(f_62, t);
  i_62 = t;
  t = term_z_33;
  g_62 = t;
  t = i_62;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(g_62, e_62, h_62, t);
  t = e_62;
  t = v_132(t);
  {
    ATerm a_34 = t;
    int b_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_132(t);
        t = report_success_0_0(t);
        LocalPopChoice(b_34);
      }
    else
      {
        t = a_34;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm t_10 (ATerm t)
{
  t = if_verbose2_1_0(c_11, t);
  return(t);
}
static ATerm y_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_11 (ATerm t)
{
  ATerm j_62 = NULL,k_62 = NULL;
  t = term_c_34;
  j_62 = t;
  t = term_o_12;
  k_62 = t;
  t = term_f_34;
  t = v_7(j_62, k_62, t);
  t = term_g_34;
  return(t);
}
static ATerm b_11 (ATerm t)
{
  t = term_j_34;
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm l_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL;
  l_62 = t;
  t = term_y_19;
  p_62 = t;
  t = term_x_29;
  q_62 = t;
  t = term_y_29;
  t = s_7(p_62, q_62, t);
  m_62 = t;
  t = term_q_12;
  n_62 = t;
  t = (ATerm) ATinsert(ATempty, m_62);
  o_62 = t;
  t = SSL_printnl(n_62, o_62);
  t = l_62;
  return(t);
}
ATerm iowrap_3_0 (ATerm v_131 (ATerm), ATerm w_131 (ATerm), ATerm x_131 (ATerm), ATerm t)
{
  static ATerm r_10 (ATerm t);
  static ATerm u_10 (ATerm t);
  static ATerm r_10 (ATerm t)
  {
    ATerm k_34 = t;
    int l_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_131(t);
        LocalPopChoice(l_34);
      }
    else
      {
        t = k_34;
        {
          ATerm m_34 = t;
          int o_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(o_34);
            }
          else
            {
              t = m_34;
              {
                ATerm p_34 = t;
                int q_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(q_34);
                  }
                else
                  {
                    t = p_34;
                    {
                      ATerm u_34 = t;
                      int v_34 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(y_10, a_11, b_11, t);
                          LocalPopChoice(v_34);
                        }
                      else
                        {
                          t = u_34;
                          {
                            ATerm w_34 = t;
                            int x_34 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(x_34);
                              }
                            else
                              {
                                t = w_34;
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
  static ATerm u_10 (ATerm t)
  {
    ATerm r_62 = NULL,s_62 = NULL,t_62 = NULL;
    s_62 = t;
    {
      ATerm y_34 = t;
      int z_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm f_11 (ATerm t);
          static ATerm f_11 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((r_62 != NULL) && (r_62 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_62 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(f_11, t);
          LocalPopChoice(z_34);
        }
      else
        {
          t = y_34;
          t = term_a_35;
          r_62 = t;
        }
    }
    t = not_null(r_62);
    t = ReadFromFile_0_0(t);
    t_62 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_62, t_62);
    t = apply_strategy_1_0(v_131, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_5_0(r_10, x_131, default_system_about_0_0, t_10, u_10, t);
  return(t);
}
static ATerm g_11 (ATerm t)
{
  ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL,e_63 = NULL,f_63 = NULL,g_63 = NULL,h_63 = NULL,i_63 = NULL,w_19 = NULL,v_19 = NULL,t_19 = NULL,r_19 = NULL;
  i_63 = t;
  if(match_cons(t, sym__2))
    {
      v_62 = ATgetArgument(t, 0);
      w_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_63);
  u_62 = t;
  t = w_62;
  if(match_cons(t, sym_Specification_1))
    {
      y_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_62);
  x_62 = t;
  t = y_62;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_63 = ATgetFirst((ATermList) t);
      c_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_62);
  a_63 = t;
  t = b_63;
  if(match_cons(t, sym_Signature_1))
    {
      g_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_63);
  f_63 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, g_63);
  r_19 = t;
  t = SSLsetAnnotations(r_19, f_63);
  h_63 = t;
  t = c_63;
  t = Cons_2_0(j_11, k_11, t);
  d_63 = t;
  t = (ATerm) ATinsert(CheckATermList(d_63), h_63);
  t_19 = t;
  t = SSLsetAnnotations(t_19, a_63);
  e_63 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, e_63);
  v_19 = t;
  t = SSLsetAnnotations(v_19, x_62);
  z_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_62, z_62);
  w_19 = t;
  t = SSLsetAnnotations(w_19, u_62);
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm j_63 = NULL,k_63 = NULL,l_63 = NULL,x_63 = NULL,s_19 = NULL;
  x_63 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      k_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_63);
  j_63 = t;
  t = k_63;
  t = map_1_0(p_11, t);
  l_63 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, l_63);
  s_19 = t;
  t = SSLsetAnnotations(s_19, j_63);
  return(t);
}
static ATerm k_11 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm p_11 (ATerm t)
{
  t = scope_2_0(q_11, r_11, t);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  t = term_c_13;
  return(t);
}
static ATerm r_11 (ATerm t)
{
  t = scope_2_0(n_12, cp_0_0, t);
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = term_y_12;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(g_11, _fail, default_usage_0_0, t);
  return(t);
}

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
ATerm term_c_36;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_w_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_r_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_t_31;
ATerm term_r_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_v_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_s_29;
ATerm term_m_29;
ATerm term_h_29;
ATerm term_d_27;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_k_26;
ATerm term_o_25;
ATerm term_p_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_i_21;
ATerm term_f_21;
ATerm term_b_21;
ATerm term_y_20;
ATerm term_h_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_s_13;
ATerm term_m_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_x_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_q_12;
ATerm term_p_12;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym__2, term_t_12, term_u_12);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym__2, term_d_13, term_f_13);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_b_14);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym__2, term_t_12, term_i_21);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym__2, term_c_14, (ATerm) ATempty);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("no match with current term: ", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("strat: ", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("current: ", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym__2, term_i_21, term_c_31);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_31);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(sym__2, term_h_31, term_p_12);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(sym__2, term_z_32, term_p_12);
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(sym__2, term_c_33, term_p_12);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(sym__2, term_c_34, term_p_12);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym__3, term_d_13, term_f_13, (ATerm) ATempty);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym__2, term_t_12, term_c_34);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(sym__2, term_t_12, term_z_32);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(sym__2, term_h_35, term_p_12);
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm c_0 (ATerm t);
static ATerm n_0 (ATerm t);
static ATerm s_0 (ATerm t);
ATerm default_system_usage_2_0 (ATerm r_136 (ATerm), ATerm s_136 (ATerm), ATerm t);
static ATerm u_0 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm p_6 (ATerm i_104 (ATerm), ATerm n_23, ATerm o_23, ATerm t);
static ATerm d_1 (ATerm t);
static ATerm q_6 (ATerm g_104 (ATerm), ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm exec_maybe_1_0 (ATerm z_103 (ATerm), ATerm t);
static ATerm v_1 (ATerm t);
static ATerm s_6 (ATerm j_104 (ATerm), ATerm t);
static ATerm w_1 (ATerm t);
static ATerm o_9 (ATerm d_6, ATerm e_6, ATerm f_6, ATerm t);
ATerm isect_CurrentTerm_0_0 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm v_12 (ATerm s_10, ATerm u_10, ATerm v_10, ATerm t);
ATerm isect_Binding_0_0 (ATerm t);
static ATerm t_6 (ATerm h_59, ATerm g_59, ATerm t);
ATerm save_CurrentTerm_0_0 (ATerm t);
static ATerm u_6 (ATerm w_62, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_Binding_0_0 (ATerm t);
ATerm prop_abstract_choice_2_0 (ATerm n_104 (ATerm), ATerm o_104 (ATerm), ATerm t);
ATerm prop_choice_1_0 (ATerm m_104 (ATerm), ATerm t);
static ATerm j_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm prop_traversal_1_0 (ATerm t_0 (ATerm), ATerm t);
static ATerm g_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm prop_call_1_0 (ATerm q_0 (ATerm), ATerm t);
static ATerm w_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm v_6 (ATerm h_104 (ATerm), ATerm i_23, ATerm t);
static ATerm c_7 (ATerm t);
ATerm prop_build_0_0 (ATerm t);
static ATerm w_6 (ATerm w_104 (ATerm), ATerm f_25, ATerm d_25, ATerm t);
ATerm oncetd_1_0 (ATerm v_109 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm s_114 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm q_131 (ATerm), ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm x_6 (ATerm b_24, ATerm c_24, ATerm t);
ATerm lookup_0_0 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm k_7 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm t_136 (ATerm), ATerm u_136 (ATerm), ATerm t);
static ATerm i_7 (ATerm w_142 (ATerm), ATerm j_80, ATerm k_80, ATerm m_80, ATerm l_80, ATerm t);
ATerm at_end_1_0 (ATerm t_115 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm z_28 (ATerm j_28, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm g_117 (ATerm), ATerm h_117 (ATerm), ATerm i_117 (ATerm), ATerm j_117 (ATerm), ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm b_7 (ATerm g_838, ATerm l_838, ATerm l_81, ATerm t);
ATerm while_not_2_0 (ATerm i_108 (ATerm), ATerm j_108 (ATerm), ATerm t);
ATerm for_3_0 (ATerm l_108 (ATerm), ATerm m_108 (ATerm), ATerm n_108 (ATerm), ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm f_41 (ATerm b_35, ATerm c_35, ATerm f_35, ATerm t);
static ATerm i_41 (ATerm v_35, ATerm a_36, ATerm b_36, ATerm t);
static ATerm j_41 (ATerm v_36, ATerm w_36, ATerm j_37, ATerm t);
static ATerm k_41 (ATerm e_38, ATerm h_38, ATerm j_38, ATerm t);
static ATerm n_41 (ATerm w_38, ATerm z_38, ATerm a_39, ATerm t);
static ATerm s_8 (ATerm t);
ATerm prop_pattern_match_0_0 (ATerm t);
ATerm CurrentTerm_0_0 (ATerm t);
static ATerm l_7 (ATerm p_58, ATerm q_58, ATerm t);
ATerm Binding_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm j_110 (ATerm), ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
ATerm prop_match_0_0 (ATerm t);
ATerm cp_0_0 (ATerm t);
static ATerm m_7 (ATerm j_58, ATerm k_58, ATerm t);
ATerm end_scope_1_0 (ATerm t_104 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm n_107 (ATerm), ATerm o_107 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm s_104 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm u_104 (ATerm), ATerm v_104 (ATerm), ATerm t);
ATerm map_1_0 (ATerm c_115 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm v_90 (ATerm), ATerm w_90 (ATerm), ATerm t);
static ATerm o_7 (ATerm v_52, ATerm w_52, ATerm t);
static ATerm p_7 (ATerm c_37, ATerm d_37, ATerm t);
static ATerm r_7 (ATerm u_114 (ATerm), ATerm v_265, ATerm i_37, ATerm t);
static ATerm q_7 (ATerm y_36, ATerm z_36, ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm g_133 (ATerm), ATerm t);
static ATerm q_51 (ATerm k_51, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm s_7 (ATerm e_37, ATerm t);
static ATerm t_7 (ATerm b_51, ATerm c_51, ATerm t);
static ATerm u_7 (ATerm x_52, ATerm y_52, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm h_53 (ATerm a_52, ATerm t);
static ATerm i_53 (ATerm e_52, ATerm f_52, ATerm g_52, ATerm t);
static ATerm j_53 (ATerm o_52, ATerm p_52, ATerm q_52, ATerm t);
static ATerm v_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm m_115 (ATerm), ATerm t);
static ATerm a_8 (ATerm x_59, ATerm y_59, ATerm t);
ATerm if_verbose2_1_0 (ATerm p_131 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm d_8 (ATerm o_71, ATerm p_71, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm e_10 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm b_8 (ATerm e_58, ATerm f_58, ATerm d_58, ATerm t);
ATerm ArgOption_3_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm w_7 (ATerm n_56, ATerm o_56, ATerm t);
ATerm foldr_2_0 (ATerm b_122 (ATerm), ATerm c_122 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm k_10 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm o_131 (ATerm), ATerm t);
static ATerm l_10 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm e_8 (ATerm p_62, ATerm q_62, ATerm r_62, ATerm t);
static ATerm f_8 (ATerm s_62, ATerm t_62, ATerm t);
ATerm lookup_table_0_1 (ATerm q_59, ATerm t);
ATerm new_hashtable_0_2 (ATerm x_62, ATerm y_62, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm y_7 (ATerm u_62, ATerm v_62, ATerm t);
static ATerm z_7 (ATerm z_62, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm m_136 (ATerm), ATerm t);
static ATerm a_11 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
ATerm parse_options_3_0 (ATerm j_136 (ATerm), ATerm k_136 (ATerm), ATerm l_136 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm m_134 (ATerm), ATerm n_134 (ATerm), ATerm o_134 (ATerm), ATerm p_134 (ATerm), ATerm q_134 (ATerm), ATerm t);
static ATerm l_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm v_11 (ATerm t);
ATerm iowrap_3_0 (ATerm p_133 (ATerm), ATerm q_133 (ATerm), ATerm r_133 (ATerm), ATerm t);
static ATerm g_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm o_0 = NULL,r_0 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_0 = ATgetFirst((ATermList) t);
      r_0 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_1 = NULL,g_1 = NULL;
        static ATerm a_0 (ATerm t);
        static ATerm a_0 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(f_1)), not_null(g_1));
          return(t);
        }
        t = r_0;
        t = p_0(t);
        if(((f_1 != NULL) && (f_1 != t)))
          _fail(t);
        else
          f_1 = t;
        t = o_0;
        t = m_0(t);
        if(((g_1 != NULL) && (g_1 != t)))
          _fail(t);
        else
          g_1 = t;
        t = r_0;
        t = reverse_acc_2_0(m_0, a_0, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_12;
      t = p_0(t);
    }
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm r_1 = NULL,s_1 = NULL,t_1 = NULL,k_5 = NULL;
  t_1 = t;
  if(match_cons(t, sym_Program_1))
    {
      s_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_1);
  r_1 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, s_1);
  k_5 = t;
  t = SSLsetAnnotations(k_5, r_1);
  return(t);
}
static ATerm n_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm y_1 = NULL;
  y_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_1), term_q_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm r_136 (ATerm), ATerm s_136 (ATerm), ATerm t)
{
  ATerm m_1 = NULL,o_1 = NULL;
  ATerm r_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_1 = NULL,q_1 = NULL;
      t = term_t_12;
      p_1 = t;
      t = term_u_12;
      q_1 = t;
      t = term_x_12;
      t = a_8(p_1, q_1, t);
      LocalPopChoice(s_12);
    }
  else
    {
      t = r_12;
      t = fetch_1_0(c_0, t);
    }
  {
    ATerm y_12 = t;
    int b_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_136(t);
        t = echo_0_0(t);
        LocalPopChoice(b_13);
      }
    else
      {
        t = y_12;
      }
  }
  t = term_c_13;
  t = echo_0_0(t);
  t = term_d_13;
  m_1 = t;
  t = term_f_13;
  o_1 = t;
  t = term_g_13;
  t = a_8(m_1, o_1, t);
  t = reverse_acc_2_0(_id, n_0, t);
  t = map_1_0(s_0, t);
  {
    ATerm k_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_1 = NULL;
        t = s_136(t);
        z_1 = t;
        t = (ATerm) ATinsert(CheckATermList(z_1), term_m_13);
        t = echo_0_0(t);
        LocalPopChoice(l_13);
      }
    else
      {
        t = k_13;
      }
  }
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm f_2 = NULL,g_2 = NULL,h_2 = NULL,o_5 = NULL;
  h_2 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_2);
  f_2 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_2);
  o_5 = t;
  t = SSLsetAnnotations(o_5, f_2);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_2 = NULL;
  c_2 = t;
  {
    ATerm n_13 = t;
    int r_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_2 = NULL,e_2 = NULL;
        t = term_t_12;
        d_2 = t;
        t = term_u_12;
        e_2 = t;
        t = term_x_12;
        t = a_8(d_2, e_2, t);
        LocalPopChoice(r_13);
      }
    else
      {
        t = n_13;
        t = fetch_1_0(u_0, t);
      }
  }
  t = c_2;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_s_13;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm y_2 = NULL,a_3 = NULL,c_3 = NULL,d_3 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      y_2 = ATgetArgument(t, 0);
      {
        ATerm u_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  a_3 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, y_2);
  c_3 = t;
  t = term_b_14;
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, y_2), term_b_14);
  t = w_6(z_0, c_3, d_3, t);
  t = a_3;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = term_s_13;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_c_14;
  return(t);
}
static ATerm p_6 (ATerm i_104 (ATerm), ATerm n_23, ATerm o_23, ATerm t)
{
  static ATerm x_0 (ATerm t);
  static ATerm x_0 (ATerm t)
  {
    ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,p_2 = NULL,r_2 = NULL,s_2 = NULL,v_2 = NULL,s_5 = NULL;
    j_2 = t;
    t = o_23;
    t = map_1_0(y_0, t);
    t = j_2;
    if(match_cons(t, sym_SDefT_4))
      {
        l_2 = ATgetArgument(t, 0);
        m_2 = ATgetArgument(t, 1);
        n_2 = ATgetArgument(t, 2);
        p_2 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(j_2);
    k_2 = t;
    t = (ATerm) ATempty;
    s_2 = t;
    t = term_b_14;
    v_2 = t;
    t = term_h_14;
    t = w_6(a_1, s_2, v_2, t);
    t = p_2;
    t = i_104(t);
    r_2 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, l_2, m_2, n_2, r_2);
    s_5 = t;
    t = SSLsetAnnotations(s_5, k_2);
    return(t);
  }
  t = scope_2_0(w_0, x_0, t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_c_14;
  return(t);
}
static ATerm q_6 (ATerm g_104 (ATerm), ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL,g_3 = NULL,i_3 = NULL,k_3 = NULL,l_3 = NULL,u_5 = NULL;
  e_3 = t;
  t = (ATerm) ATempty;
  f_3 = t;
  t = term_b_14;
  g_3 = t;
  t = term_h_14;
  t = w_6(d_1, f_3, g_3, t);
  t = e_3;
  if(match_cons(t, sym_Not_1))
    {
      k_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_3);
  i_3 = t;
  t = k_3;
  t = exec_maybe_1_0(g_104, t);
  l_3 = t;
  t = (ATerm) ATmakeAppl(sym_Not_1, l_3);
  u_5 = t;
  t = SSLsetAnnotations(u_5, i_3);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_c_14;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_c_14;
  return(t);
}
ATerm exec_maybe_1_0 (ATerm z_103 (ATerm), ATerm t)
{
  ATerm s_3 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL,k_4 = NULL,l_4 = NULL,n_4 = NULL,o_4 = NULL;
  h_4 = t;
  t = (ATerm) ATempty;
  n_4 = t;
  t = term_b_14;
  o_4 = t;
  t = term_h_14;
  t = w_6(k_1, n_4, o_4, t);
  t = h_4;
  t = save_Binding_0_0(t);
  s_3 = t;
  t = h_4;
  t = z_103(t);
  g_4 = t;
  t = (ATerm) ATempty;
  k_4 = t;
  t = term_b_14;
  l_4 = t;
  t = term_h_14;
  t = w_6(l_1, k_4, l_4, t);
  t = term_s_13;
  t = table_destroy_0_0(t);
  t = term_s_13;
  i_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_13, s_3);
  t = t_6(i_4, s_3, t);
  t = g_4;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_c_14;
  return(t);
}
static ATerm s_6 (ATerm j_104 (ATerm), ATerm t)
{
  ATerm p_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,b_5 = NULL,g_6 = NULL;
  s_4 = t;
  t = save_Binding_0_0(t);
  r_4 = t;
  t = save_CurrentTerm_0_0(t);
  p_4 = t;
  t = s_4;
  if(match_cons(t, sym_Let_2))
    {
      u_4 = ATgetArgument(t, 0);
      v_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_4);
  t_4 = t;
  t = u_4;
  {
    static ATerm n_1 (ATerm t);
    static ATerm n_1 (ATerm t)
    {
      ATerm c_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL;
      c_5 = t;
      t = (ATerm) ATempty;
      e_5 = t;
      t = term_b_14;
      f_5 = t;
      t = term_h_14;
      t = w_6(v_1, e_5, f_5, t);
      t = term_s_13;
      t = table_destroy_0_0(t);
      t = term_s_13;
      d_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_s_13, r_4);
      t = t_6(d_5, r_4, t);
      t = c_5;
      t = j_104(t);
      return(t);
    }
    t = map_1_0(n_1, t);
  }
  x_4 = t;
  t = term_c_14;
  t = table_destroy_0_0(t);
  t = term_c_14;
  b_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_14, p_4);
  t = t_6(b_5, p_4, t);
  t = term_s_13;
  t = table_destroy_0_0(t);
  t = term_s_13;
  z_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_13, r_4);
  t = t_6(z_4, r_4, t);
  t = v_4;
  t = j_104(t);
  y_4 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, x_4, y_4);
  g_6 = t;
  t = SSLsetAnnotations(g_6, t_4);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm j_7 = NULL,n_7 = NULL,j_8 = NULL,n_8 = NULL,z_8 = NULL;
  z_8 = t;
  if(match_cons(t, sym__2))
    {
      j_7 = ATgetArgument(t, 0);
      n_7 = ATgetArgument(t, 1);
      t = n_7;
      {
        ATerm i_14 = t;
        int j_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_8 = ATgetFirst((ATermList) t);
                {
                  ATerm k_14 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(j_14);
            t = j_8;
            {
              ATerm m_14 = t;
              int n_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm p_14 = ATgetArgument(t, 0);
                      n_8 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(n_14);
                  t = j_7;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = z_8;
                    }
                  else
                    {
                      ATerm q_14 = t;
                      int r_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = o_9(j_7, n_8, z_8, t);
                          LocalPopChoice(r_14);
                        }
                      else
                        {
                          t = q_14;
                          t = z_8;
                        }
                    }
                }
              else
                {
                  t = m_14;
                  t = j_7;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = z_8;
                    }
                  else
                    {
                      t = z_8;
                    }
                }
            }
          }
        else
          {
            t = i_14;
            t = j_7;
            if(match_cons(t, sym_Scopes_0))
              {
                t = z_8;
              }
            else
              {
                t = z_8;
              }
          }
      }
    }
  else
    {
      t = z_8;
    }
  return(t);
}
static ATerm o_9 (ATerm d_6, ATerm e_6, ATerm f_6, ATerm t)
{
  t = f_6;
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_0 = NULL;
        t = term_c_14;
        i_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_c_14, d_6);
        t = a_8(i_0, d_6, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm a_15 = ATgetFirst((ATermList) t);
            if(match_cons(a_15, sym_Defined_2))
              {
                ATerm l_15 = ATgetArgument(a_15, 0);
                if((e_6 != ATgetArgument(a_15, 1)))
                  {
                    _fail(ATgetArgument(a_15, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm b_15 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = f_6;
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
        t = (ATerm) ATmakeAppl(sym__2, d_6, (ATerm) ATinsert(ATempty, term_b_14));
      }
  }
  return(t);
}
ATerm isect_CurrentTerm_0_0 (ATerm t)
{
  ATerm v_5 = NULL,c_6 = NULL;
  t = map_1_0(w_1, t);
  v_5 = t;
  t = term_c_14;
  t = table_destroy_0_0(t);
  t = term_c_14;
  c_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_14, v_5);
  t = t_6(c_6, v_5, t);
  t = v_5;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,f_12 = NULL,h_12 = NULL,j_12 = NULL;
  j_12 = t;
  if(match_cons(t, sym__2))
    {
      r_11 = ATgetArgument(t, 0);
      s_11 = ATgetArgument(t, 1);
      t = s_11;
      {
        ATerm s_15 = t;
        int t_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_12 = ATgetFirst((ATermList) t);
                {
                  ATerm a_16 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(t_15);
            t = f_12;
            {
              ATerm b_16 = t;
              int c_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm e_16 = ATgetArgument(t, 0);
                      h_12 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(c_16);
                  t = r_11;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = j_12;
                    }
                  else
                    {
                      ATerm m_16 = t;
                      int n_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = v_12(r_11, h_12, j_12, t);
                          LocalPopChoice(n_16);
                        }
                      else
                        {
                          t = m_16;
                          t = j_12;
                        }
                    }
                }
              else
                {
                  t = b_16;
                  t = r_11;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = j_12;
                    }
                  else
                    {
                      t = j_12;
                    }
                }
            }
          }
        else
          {
            t = s_15;
            t = r_11;
            if(match_cons(t, sym_Scopes_0))
              {
                t = j_12;
              }
            else
              {
                t = j_12;
              }
          }
      }
    }
  else
    {
      t = j_12;
    }
  return(t);
}
static ATerm v_12 (ATerm s_10, ATerm u_10, ATerm v_10, ATerm t)
{
  t = v_10;
  {
    ATerm p_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_0 = NULL;
        t = term_s_13;
        v_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_13, s_10);
        t = a_8(v_0, s_10, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm t_16 = ATgetFirst((ATermList) t);
            if(match_cons(t_16, sym_Defined_2))
              {
                ATerm v_16 = ATgetArgument(t_16, 0);
                if((u_10 != ATgetArgument(t_16, 1)))
                  {
                    _fail(ATgetArgument(t_16, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm u_16 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = v_10;
        LocalPopChoice(r_16);
      }
    else
      {
        t = p_16;
        t = (ATerm) ATmakeAppl(sym__2, s_10, (ATerm) ATinsert(ATempty, term_b_14));
      }
  }
  return(t);
}
ATerm isect_Binding_0_0 (ATerm t)
{
  ATerm p_10 = NULL,r_10 = NULL;
  t = map_1_0(x_1, t);
  p_10 = t;
  t = term_s_13;
  t = table_destroy_0_0(t);
  t = term_s_13;
  r_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_13, p_10);
  t = t_6(r_10, p_10, t);
  t = p_10;
  return(t);
}
static ATerm t_6 (ATerm h_59, ATerm g_59, ATerm t)
{
  static ATerm a_2 (ATerm t);
  static ATerm a_2 (ATerm t)
  {
    ATerm z_12 = NULL,a_13 = NULL,e_13 = NULL;
    if(match_cons(t, sym__2))
      {
        z_12 = ATgetArgument(t, 0);
        a_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, h_59, z_12, a_13);
    t = lookup_table_0_1(h_59, t);
    if(match_cons(t, sym_Hashtable_1))
      {
        e_13 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = e_8(z_12, a_13, e_13, t);
    t = (ATerm) ATmakeAppl(sym__3, h_59, z_12, a_13);
    return(t);
  }
  t = g_59;
  t = map_1_0(a_2, t);
  return(t);
}
ATerm save_CurrentTerm_0_0 (ATerm t)
{
  t = term_c_14;
  t = table_getlist_0_0(t);
  return(t);
}
static ATerm u_6 (ATerm w_62, ATerm t)
{
  t = SSL_hashtable_keys(w_62);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm h_13 = NULL,o_13 = NULL;
  static ATerm b_2 (ATerm t);
  static ATerm b_2 (ATerm t)
  {
    ATerm p_13 = NULL,v_13 = NULL;
    p_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_13), p_13);
    t = a_8(not_null(h_13), p_13, t);
    v_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_13, v_13);
    return(t);
  }
  if(((h_13 != NULL) && (h_13 != t)))
    _fail(t);
  else
    h_13 = t;
  t = lookup_table_0_1(h_13, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_6(o_13, t);
  t = map_1_0(b_2, t);
  return(t);
}
ATerm save_Binding_0_0 (ATerm t)
{
  t = term_s_13;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm prop_abstract_choice_2_0 (ATerm n_104 (ATerm), ATerm o_104 (ATerm), ATerm t)
{
  ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL;
  e_14 = t;
  t = save_Binding_0_0(t);
  w_13 = t;
  t = save_CurrentTerm_0_0(t);
  x_13 = t;
  t = e_14;
  t = n_104(t);
  d_14 = t;
  t = save_Binding_0_0(t);
  y_13 = t;
  t = term_s_13;
  t = table_destroy_0_0(t);
  t = term_s_13;
  g_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_13, w_13);
  t = t_6(g_14, w_13, t);
  t = w_13;
  t = save_CurrentTerm_0_0(t);
  z_13 = t;
  t = term_c_14;
  t = table_destroy_0_0(t);
  t = term_c_14;
  f_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_14, x_13);
  t = t_6(f_14, x_13, t);
  t = d_14;
  t = o_104(t);
  a_14 = t;
  t = y_13;
  t = isect_Binding_0_0(t);
  t = z_13;
  t = isect_CurrentTerm_0_0(t);
  t = a_14;
  return(t);
}
ATerm prop_choice_1_0 (ATerm m_104 (ATerm), ATerm t)
{
  ATerm o_14 = NULL;
  o_14 = t;
  {
    ATerm e_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Choice_2))
          {
            ATerm l_17 = ATgetArgument(t, 0);
            ATerm m_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(k_17);
        {
          static ATerm j_3 (ATerm t);
          static ATerm m_3 (ATerm t);
          static ATerm j_3 (ATerm t)
          {
            ATerm s_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL,j_6 = NULL;
            x_14 = t;
            if(match_cons(t, sym_Choice_2))
              {
                u_14 = ATgetArgument(t, 0);
                v_14 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(x_14);
            s_14 = t;
            t = u_14;
            t = m_104(t);
            w_14 = t;
            t = (ATerm) ATmakeAppl(sym_Choice_2, w_14, v_14);
            j_6 = t;
            t = SSLsetAnnotations(j_6, s_14);
            return(t);
          }
          static ATerm m_3 (ATerm t)
          {
            ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL,h_15 = NULL,i_15 = NULL,l_6 = NULL;
            i_15 = t;
            if(match_cons(t, sym_Choice_2))
              {
                d_15 = ATgetArgument(t, 0);
                e_15 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(i_15);
            c_15 = t;
            t = e_15;
            t = m_104(t);
            h_15 = t;
            t = (ATerm) ATmakeAppl(sym_Choice_2, d_15, h_15);
            l_6 = t;
            t = SSLsetAnnotations(l_6, c_15);
            return(t);
          }
          t = o_14;
          t = prop_abstract_choice_2_0(j_3, m_3, t);
        }
      }
    else
      {
        t = e_17;
        {
          ATerm t_17 = t;
          int w_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_GChoice_2))
                {
                  ATerm x_17 = ATgetArgument(t, 0);
                  ATerm b_18 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(w_17);
              {
                static ATerm n_3 (ATerm t);
                static ATerm a_4 (ATerm t);
                static ATerm n_3 (ATerm t)
                {
                  ATerm j_15 = NULL,k_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,m_6 = NULL;
                  p_15 = t;
                  if(match_cons(t, sym_GChoice_2))
                    {
                      k_15 = ATgetArgument(t, 0);
                      n_15 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(p_15);
                  j_15 = t;
                  t = k_15;
                  t = m_104(t);
                  o_15 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, o_15, n_15);
                  m_6 = t;
                  t = SSLsetAnnotations(m_6, j_15);
                  return(t);
                }
                static ATerm a_4 (ATerm t)
                {
                  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,n_6 = NULL;
                  y_15 = t;
                  if(match_cons(t, sym_GChoice_2))
                    {
                      v_15 = ATgetArgument(t, 0);
                      w_15 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(y_15);
                  u_15 = t;
                  t = w_15;
                  t = m_104(t);
                  x_15 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, v_15, x_15);
                  n_6 = t;
                  t = SSLsetAnnotations(n_6, u_15);
                  return(t);
                }
                t = o_14;
                t = prop_abstract_choice_2_0(n_3, a_4, t);
              }
            }
          else
            {
              t = t_17;
              {
                ATerm f_18 = t;
                int g_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_LChoice_2))
                      {
                        ATerm h_18 = ATgetArgument(t, 0);
                        ATerm i_18 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(g_18);
                    {
                      static ATerm b_4 (ATerm t);
                      static ATerm c_4 (ATerm t);
                      static ATerm b_4 (ATerm t)
                      {
                        ATerm z_15 = NULL,d_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,o_6 = NULL;
                        h_16 = t;
                        if(match_cons(t, sym_LChoice_2))
                          {
                            d_16 = ATgetArgument(t, 0);
                            f_16 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(h_16);
                        z_15 = t;
                        t = d_16;
                        t = m_104(t);
                        g_16 = t;
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, g_16, f_16);
                        o_6 = t;
                        t = SSLsetAnnotations(o_6, z_15);
                        return(t);
                      }
                      static ATerm c_4 (ATerm t)
                      {
                        ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,o_16 = NULL,r_6 = NULL;
                        o_16 = t;
                        if(match_cons(t, sym_LChoice_2))
                          {
                            j_16 = ATgetArgument(t, 0);
                            k_16 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(o_16);
                        i_16 = t;
                        t = k_16;
                        t = m_104(t);
                        l_16 = t;
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, j_16, l_16);
                        r_6 = t;
                        t = SSLsetAnnotations(r_6, i_16);
                        return(t);
                      }
                      t = o_14;
                      t = prop_abstract_choice_2_0(b_4, c_4, t);
                    }
                  }
                else
                  {
                    t = f_18;
                    {
                      static ATerm d_4 (ATerm t);
                      static ATerm f_4 (ATerm t);
                      static ATerm d_4 (ATerm t)
                      {
                        ATerm q_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL,z_6 = NULL,y_6 = NULL;
                        i_17 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            b_17 = ATgetArgument(t, 0);
                            c_17 = ATgetArgument(t, 1);
                            d_17 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(i_17);
                        a_17 = t;
                        t = b_17;
                        t = m_104(t);
                        g_17 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, g_17, c_17, d_17);
                        y_6 = t;
                        t = SSLsetAnnotations(y_6, a_17);
                        h_17 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            w_16 = ATgetArgument(t, 0);
                            x_16 = ATgetArgument(t, 1);
                            y_16 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(h_17);
                        q_16 = t;
                        t = x_16;
                        t = m_104(t);
                        z_16 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, w_16, z_16, y_16);
                        z_6 = t;
                        t = SSLsetAnnotations(z_6, q_16);
                        return(t);
                      }
                      static ATerm f_4 (ATerm t)
                      {
                        ATerm j_17 = NULL,n_17 = NULL,q_17 = NULL,r_17 = NULL,u_17 = NULL,v_17 = NULL,a_7 = NULL;
                        v_17 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            n_17 = ATgetArgument(t, 0);
                            q_17 = ATgetArgument(t, 1);
                            r_17 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(v_17);
                        j_17 = t;
                        t = r_17;
                        t = m_104(t);
                        u_17 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, n_17, q_17, u_17);
                        a_7 = t;
                        t = SSLsetAnnotations(a_7, j_17);
                        return(t);
                      }
                      if(match_cons(t, sym_GuardedLChoice_3))
                        {
                          ATerm k_18 = ATgetArgument(t, 0);
                          ATerm m_18 = ATgetArgument(t, 1);
                          ATerm o_18 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = o_14;
                      t = prop_abstract_choice_2_0(d_4, f_4, t);
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_c_14;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_c_14;
  return(t);
}
ATerm prop_traversal_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm q_18 = t;
  int v_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_18 = NULL,b_1 = NULL,c_1 = NULL,e_1 = NULL,h_1 = NULL,i_1 = NULL,j_1 = NULL,w_12 = NULL;
      u_18 = t;
      if(match_cons(t, sym_Cong_2))
        {
          ATerm w_18 = ATgetArgument(t, 0);
          ATerm b_19 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      b_1 = t;
      t = term_b_14;
      c_1 = t;
      t = term_h_14;
      t = w_6(j_4, b_1, c_1, t);
      t = u_18;
      if(match_cons(t, sym_Cong_2))
        {
          h_1 = ATgetArgument(t, 0);
          i_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_18);
      e_1 = t;
      t = i_1;
      {
        static ATerm q_4 (ATerm t);
        static ATerm q_4 (ATerm t)
        {
          t = exec_maybe_1_0(t_0, t);
          return(t);
        }
        t = map_1_0(q_4, t);
      }
      j_1 = t;
      t = (ATerm) ATmakeAppl(sym_Cong_2, h_1, j_1);
      w_12 = t;
      t = SSLsetAnnotations(w_12, e_1);
      LocalPopChoice(v_18);
    }
  else
    {
      t = q_18;
      {
        ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL;
        static ATerm a_5 (ATerm t);
        static ATerm a_5 (ATerm t)
        {
          t = exec_maybe_1_0(t_0, t);
          return(t);
        }
        ATerm h_19 = t;
        int i_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_All_1))
              {
                ATerm j_19 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(i_19);
          }
        else
          {
            t = h_19;
            {
              ATerm a_19 = NULL;
              a_19 = t;
              {
                ATerm k_19 = t;
                int l_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_One_1))
                      {
                        ATerm m_19 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(l_19);
                    t = a_19;
                  }
                else
                  {
                    t = k_19;
                    {
                      ATerm n_19 = t;
                      int o_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Some_1))
                            {
                              ATerm q_19 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(o_19);
                          t = a_19;
                        }
                      else
                        {
                          t = n_19;
                          {
                            ATerm t_19 = t;
                            int u_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_Thread_1))
                                  {
                                    ATerm w_19 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(u_19);
                                t = a_19;
                              }
                            else
                              {
                                t = t_19;
                                if(match_cons(t, sym_Bagof_1))
                                  {
                                    ATerm y_19 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = a_19;
                              }
                          }
                        }
                    }
                  }
              }
            }
          }
        x_18 = t;
        t = (ATerm) ATempty;
        y_18 = t;
        t = term_b_14;
        z_18 = t;
        t = term_h_14;
        t = w_6(w_4, y_18, z_18, t);
        t = x_18;
        t = SRTS_one(a_5, t);
      }
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_c_14;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm z_2 = NULL,b_3 = NULL,h_3 = NULL,m_15 = NULL;
  t = Binding_0_0(t);
  h_3 = t;
  if(match_cons(t, sym_Var_1))
    {
      b_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_3);
  z_2 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, b_3);
  m_15 = t;
  t = SSLsetAnnotations(m_15, z_2);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_c_14;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL,d_18 = NULL;
  t = Binding_0_0(t);
  z_3 = t;
  if(match_cons(t, sym_Var_1))
    {
      y_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_3);
  x_3 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, y_3);
  d_18 = t;
  t = SSLsetAnnotations(d_18, x_3);
  return(t);
}
ATerm prop_call_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm j_21 = NULL;
  j_21 = t;
  {
    ATerm d_20 = t;
    int e_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_PrimT_3))
          {
            ATerm f_20 = ATgetArgument(t, 0);
            ATerm g_20 = ATgetArgument(t, 1);
            ATerm j_20 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(e_20);
        {
          ATerm u_1 = NULL,i_2 = NULL,o_2 = NULL,q_2 = NULL,t_2 = NULL,u_2 = NULL,w_2 = NULL,x_2 = NULL,c_18 = NULL;
          t = (ATerm) ATempty;
          u_1 = t;
          t = term_b_14;
          i_2 = t;
          t = term_h_14;
          t = w_6(g_5, u_1, i_2, t);
          t = j_21;
          if(match_cons(t, sym_PrimT_3))
            {
              q_2 = ATgetArgument(t, 0);
              t_2 = ATgetArgument(t, 1);
              u_2 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_21);
          o_2 = t;
          t = t_2;
          {
            static ATerm h_5 (ATerm t);
            static ATerm h_5 (ATerm t)
            {
              t = exec_maybe_1_0(q_0, t);
              return(t);
            }
            t = map_1_0(h_5, t);
          }
          w_2 = t;
          t = u_2;
          t = alltd_1_0(j_5, t);
          x_2 = t;
          t = (ATerm) ATmakeAppl(sym_PrimT_3, q_2, w_2, x_2);
          c_18 = t;
          t = SSLsetAnnotations(c_18, o_2);
        }
      }
    else
      {
        t = d_20;
        {
          ATerm o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,e_18 = NULL;
          if(match_cons(t, sym_CallT_3))
            {
              ATerm k_20 = ATgetArgument(t, 0);
              ATerm n_20 = ATgetArgument(t, 1);
              ATerm o_20 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATempty;
          o_3 = t;
          t = term_b_14;
          p_3 = t;
          t = term_h_14;
          t = w_6(l_5, o_3, p_3, t);
          t = j_21;
          if(match_cons(t, sym_CallT_3))
            {
              r_3 = ATgetArgument(t, 0);
              t_3 = ATgetArgument(t, 1);
              u_3 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_21);
          q_3 = t;
          t = t_3;
          {
            static ATerm r_5 (ATerm t);
            static ATerm r_5 (ATerm t)
            {
              t = exec_maybe_1_0(q_0, t);
              return(t);
            }
            t = map_1_0(r_5, t);
          }
          v_3 = t;
          t = u_3;
          t = alltd_1_0(t_5, t);
          w_3 = t;
          t = (ATerm) ATmakeAppl(sym_CallT_3, r_3, v_3, w_3);
          e_18 = t;
          t = SSLsetAnnotations(e_18, q_3);
        }
      }
  }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_s_13;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm i_22 = NULL,p_22 = NULL,q_22 = NULL;
  i_22 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, i_22);
  p_22 = t;
  t = term_b_14;
  q_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, i_22), term_b_14);
  t = w_6(b_6, p_22, q_22, t);
  t = i_22;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_s_13;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_c_14;
  return(t);
}
static ATerm v_6 (ATerm h_104 (ATerm), ATerm i_23, ATerm t)
{
  static ATerm x_5 (ATerm t);
  static ATerm x_5 (ATerm t)
  {
    ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL,j_18 = NULL;
    y_21 = t;
    t = i_23;
    t = map_1_0(y_5, t);
    t = y_21;
    if(match_cons(t, sym_Scope_2))
      {
        a_22 = ATgetArgument(t, 0);
        f_22 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(y_21);
    z_21 = t;
    t = f_22;
    t = h_104(t);
    g_22 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, a_22, g_22);
    j_18 = t;
    t = SSLsetAnnotations(j_18, z_21);
    h_22 = t;
    {
      ATerm q_20 = t;
      int s_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL;
          t = CurrentTerm_0_0(t);
          {
            static ATerm h_6 (ATerm t);
            static ATerm h_6 (ATerm t)
            {
              ATerm u_22 = NULL;
              static ATerm i_6 (ATerm t);
              static ATerm i_6 (ATerm t)
              {
                if(((u_22 != NULL) && (u_22 != t)))
                  _fail(t);
                else
                  u_22 = t;
                return(t);
              }
              if(match_cons(t, sym_Var_1))
                {
                  if(((u_22 != NULL) && (u_22 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    u_22 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = i_23;
              t = fetch_1_0(i_6, t);
              return(t);
            }
            t = oncetd_1_0(h_6, t);
          }
          r_22 = t;
          t = (ATerm) ATempty;
          s_22 = t;
          t = term_b_14;
          t_22 = t;
          t = term_h_14;
          t = w_6(k_6, s_22, t_22, t);
          t = r_22;
          LocalPopChoice(s_20);
        }
      else
        {
          t = q_20;
        }
    }
    t = h_22;
    return(t);
  }
  t = scope_2_0(w_5, x_5, t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_c_14;
  return(t);
}
ATerm prop_build_0_0 (ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,g_23 = NULL,k_23 = NULL,l_23 = NULL,l_18 = NULL;
  l_23 = t;
  if(match_cons(t, sym_Build_1))
    {
      e_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_23);
  d_23 = t;
  t = e_23;
  t = alltd_1_0(Binding_0_0, t);
  g_23 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, g_23);
  l_18 = t;
  t = SSLsetAnnotations(l_18, d_23);
  k_23 = t;
  if(match_cons(t, sym_Build_1))
    {
      x_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  y_22 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_y_20, x_22);
  c_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_y_20, x_22));
  t = w_6(c_7, y_22, c_23, t);
  t = k_23;
  return(t);
}
static ATerm w_6 (ATerm w_104 (ATerm), ATerm f_25, ATerm d_25, ATerm t)
{
  ATerm q_23 = NULL,v_23 = NULL,z_23 = NULL,d_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL;
  d_24 = t;
  t = w_104(t);
  q_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_23, f_25, d_25);
  t = b_8(q_23, f_25, d_25, t);
  {
    ATerm z_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_24 = NULL;
        t = term_b_21;
        o_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_23, term_b_21);
        t = a_8(q_23, o_24, t);
        {
          ATerm c_21 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = c_21;
            }
        }
        LocalPopChoice(a_21);
      }
    else
      {
        t = z_20;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_23 = ATgetFirst((ATermList) t);
      z_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, q_23, term_b_21, (ATerm) ATinsert(CheckATermList(z_23), (ATerm) ATinsert(CheckATermList(v_23), f_25)));
  t = lookup_table_0_1(q_23, t);
  l_24 = t;
  t = term_b_21;
  i_24 = t;
  t = (ATerm) ATinsert(CheckATermList(z_23), (ATerm) ATinsert(CheckATermList(v_23), f_25));
  j_24 = t;
  t = l_24;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_8(i_24, j_24, k_24, t);
  t = d_24;
  return(t);
}
ATerm oncetd_1_0 (ATerm v_109 (ATerm), ATerm t)
{
  static ATerm q_24 (ATerm t);
  static ATerm q_24 (ATerm t)
  {
    ATerm d_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_109(t);
        LocalPopChoice(e_21);
      }
    else
      {
        t = d_21;
        t = SRTS_one(q_24, t);
      }
    return(t);
  }
  t = q_24(t);
  return(t);
}
ATerm debug_1_0 (ATerm s_114 (ATerm), ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL,m_25 = NULL,n_25 = NULL;
  j_25 = t;
  t = s_114(t);
  k_25 = t;
  t = term_f_21;
  m_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_25), k_25);
  n_25 = t;
  t = SSL_printnl(m_25, n_25);
  t = j_25;
  return(t);
}
ATerm if_verbose3_1_0 (ATerm q_131 (ATerm), ATerm t)
{
  ATerm q_25 = NULL;
  q_25 = t;
  {
    ATerm g_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL;
        t = term_t_12;
        t_25 = t;
        t = term_i_21;
        u_25 = t;
        t = term_k_21;
        t = a_8(t_25, u_25, t);
        s_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_25, term_l_21);
        t = geq_0_0(t);
        t = q_25;
        t = q_131(t);
        LocalPopChoice(h_21);
      }
    else
      {
        t = g_21;
        t = q_25;
      }
  }
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm o_26 = NULL;
  o_26 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = o_26;
    }
  else
    {
      if(match_cons(t, sym_As_2))
        {
          ATerm m_21 = ATgetArgument(t, 0);
          ATerm n_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = o_26;
    }
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_s_13;
  return(t);
}
static ATerm x_6 (ATerm b_24, ATerm c_24, ATerm t)
{
  ATerm j_26 = NULL,l_26 = NULL,n_26 = NULL;
  j_26 = t;
  t = c_24;
  {
    ATerm o_21 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(d_7, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, b_24);
  l_26 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_21, c_24);
  n_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, b_24), (ATerm) ATmakeAppl(sym_Defined_2, term_p_21, c_24));
  t = w_6(e_7, l_26, n_26, t);
  t = j_26;
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL;
  d_30 = t;
  if(match_cons(t, sym__2))
    {
      e_30 = ATgetArgument(t, 0);
      f_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_30;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_30 = ATgetFirst((ATermList) t);
      h_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_30;
  if(match_cons(t, sym__2))
    {
      b_30 = ATgetArgument(t, 0);
      c_30 = ATgetArgument(t, 1);
      {
        ATerm q_21 = t;
        int r_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_30;
            if((e_30 != t))
              {
                _fail(t);
              }
            t = c_30;
            LocalPopChoice(r_21);
          }
        else
          {
            t = q_21;
            t = (ATerm) ATmakeAppl(sym__2, e_30, h_30);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, e_30, h_30);
      t = lookup_0_0(t);
    }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_21 = ATgetArgument(t, 0);
      if(((ATgetType(s_21) != AT_LIST) || !(ATisEmpty(s_21))))
        _fail(t);
      {
        ATerm t_21 = ATgetArgument(t, 1);
        if(((ATgetType(t_21) != AT_LIST) || !(ATisEmpty(t_21))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm i_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_21 = ATgetArgument(t, 0);
      if(((ATgetType(u_21) == AT_LIST) && !(ATisEmpty(u_21))))
        {
          i_33 = ATgetFirst((ATermList) u_21);
          k_33 = (ATerm) ATgetNext((ATermList) u_21);
        }
      else
        _fail(t);
      {
        ATerm v_21 = ATgetArgument(t, 1);
        if(((ATgetType(v_21) == AT_LIST) && !(ATisEmpty(v_21))))
          {
            l_33 = ATgetFirst((ATermList) v_21);
            m_33 = (ATerm) ATgetNext((ATermList) v_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_33, l_33), (ATerm) ATmakeAppl(sym__2, k_33, m_33));
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL;
  if(match_cons(t, sym__2))
    {
      n_33 = ATgetArgument(t, 0);
      o_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_33), n_33);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm p_32 = NULL,t_32 = NULL,x_32 = NULL,y_32 = NULL;
  p_32 = t;
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_22 = ATgetArgument(t, 0);
            ATerm c_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(x_21);
        t = p_32;
      }
    else
      {
        t = w_21;
        {
          ATerm h_33 = NULL;
          if(match_cons(t, sym__3))
            {
              t_32 = ATgetArgument(t, 0);
              x_32 = ATgetArgument(t, 1);
              y_32 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, t_32, x_32);
          t = genzip_4_0(f_7, h_7, k_7, _id, t);
          h_33 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_33, y_32);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm t_136 (ATerm), ATerm u_136 (ATerm), ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL;
  static ATerm c_8 (ATerm t);
  static ATerm c_8 (ATerm t)
  {
    ATerm i_5 = NULL;
    t = t_136(t);
    i_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_5, not_null(t_33));
    t = lookup_0_0(t);
    t = u_136(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((t_33 != NULL) && (t_33 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_33 = ATgetArgument(t, 0);
      s_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_33;
  t = alltd_1_0(c_8, t);
  return(t);
}
static ATerm i_7 (ATerm w_142 (ATerm), ATerm j_80, ATerm k_80, ATerm m_80, ATerm l_80, ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL;
  t = j_80;
  t = w_142(t);
  t = (ATerm) ATmakeAppl(sym__2, j_80, k_80);
  {
    ATerm d_22 = t;
    if((PushChoice() == 0))
      {
        ATerm a_34 = NULL,b_34 = NULL;
        if(match_cons(t, sym__2))
          {
            a_34 = ATgetArgument(t, 0);
            b_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_34;
        {
          static ATerm g_8 (ATerm t);
          static ATerm g_8 (ATerm t)
          {
            if((a_34 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1_0(g_8, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, a_34, b_34);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_22;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, j_80, k_80)), (ATerm) ATmakeAppl(sym__2, l_80, m_80));
  t = substitute_2_0(w_142, _id, t);
  if(match_cons(t, sym__2))
    {
      x_33 = ATgetArgument(t, 0);
      y_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_33, (ATerm) ATinsert(CheckATermList(x_33), (ATerm) ATmakeAppl(sym__2, j_80, k_80)));
  return(t);
}
ATerm at_end_1_0 (ATerm t_115 (ATerm), ATerm t)
{
  static ATerm b_28 (ATerm t);
  static ATerm b_28 (ATerm t)
  {
    ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL;
    w_27 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_27 = ATgetFirst((ATermList) t);
        v_27 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm e_4 = NULL,m_4 = NULL,n_18 = NULL;
          t = SSLgetAnnotations(w_27);
          e_4 = t;
          t = v_27;
          t = b_28(t);
          m_4 = t;
          t = (ATerm) ATinsert(CheckATermList(m_4), u_27);
          n_18 = t;
          t = SSLsetAnnotations(n_18, e_4);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_27;
        t = t_115(t);
      }
    return(t);
  }
  t = b_28(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
  x_26 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_26;
    }
  else
    {
      static ATerm h_8 (ATerm t);
      static ATerm h_8 (ATerm t)
      {
        t = not_null(z_26);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_26 = ATgetFirst((ATermList) t);
          if(((z_26 != NULL) && (z_26 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            z_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_26;
      t = at_end_1_0(h_8, t);
    }
  return(t);
}
static ATerm z_28 (ATerm j_28, ATerm t)
{
  ATerm n_28 = NULL;
  t = SSL_explode_term(j_28);
  if(match_cons(t, sym__2))
    {
      ATerm e_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      n_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_28;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,u_28 = NULL;
  u_28 = t;
  if(match_cons(t, sym__2))
    {
      q_28 = ATgetArgument(t, 0);
      r_28 = ATgetArgument(t, 1);
      {
        ATerm j_22 = t;
        int k_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm i_8 (ATerm t);
            static ATerm i_8 (ATerm t)
            {
              t = r_28;
              return(t);
            }
            t = q_28;
            t = at_end_1_0(i_8, t);
            LocalPopChoice(k_22);
          }
        else
          {
            t = j_22;
            t = z_28(u_28, t);
          }
      }
    }
  else
    {
      t = z_28(u_28, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm g_117 (ATerm), ATerm h_117 (ATerm), ATerm i_117 (ATerm), ATerm j_117 (ATerm), ATerm t)
{
  static ATerm i_32 (ATerm t);
  static ATerm i_32 (ATerm t)
  {
    ATerm l_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_117(t);
        LocalPopChoice(m_22);
      }
    else
      {
        t = l_22;
        {
          ATerm m_31 = NULL,o_31 = NULL,s_31 = NULL,u_31 = NULL,y_31 = NULL,g_32 = NULL,p_18 = NULL;
          t = h_117(t);
          g_32 = t;
          if(match_cons(t, sym__2))
            {
              o_31 = ATgetArgument(t, 0);
              s_31 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(g_32);
          m_31 = t;
          t = o_31;
          t = j_117(t);
          u_31 = t;
          t = s_31;
          t = i_32(t);
          y_31 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_31, y_31);
          p_18 = t;
          t = SSLsetAnnotations(p_18, m_31);
          t = i_117(t);
        }
      }
    return(t);
  }
  t = i_32(t);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_22 = ATgetArgument(t, 0);
      if(((ATgetType(n_22) != AT_LIST) || !(ATisEmpty(n_22))))
        _fail(t);
      {
        ATerm o_22 = ATgetArgument(t, 1);
        if(((ATgetType(o_22) != AT_LIST) || !(ATisEmpty(o_22))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm k_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_22 = ATgetArgument(t, 0);
      if(((ATgetType(v_22) == AT_LIST) && !(ATisEmpty(v_22))))
        {
          k_29 = ATgetFirst((ATermList) v_22);
          o_29 = (ATerm) ATgetNext((ATermList) v_22);
        }
      else
        _fail(t);
      {
        ATerm w_22 = ATgetArgument(t, 1);
        if(((ATgetType(w_22) == AT_LIST) && !(ATisEmpty(w_22))))
          {
            p_29 = ATgetFirst((ATermList) w_22);
            q_29 = (ATerm) ATgetNext((ATermList) w_22);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_29, p_29), (ATerm) ATmakeAppl(sym__2, o_29, q_29));
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL;
  if(match_cons(t, sym__2))
    {
      u_29 = ATgetArgument(t, 0);
      v_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_29), u_29);
  return(t);
}
static ATerm b_7 (ATerm g_838, ATerm l_838, ATerm l_81, ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL,i_29 = NULL;
  t = SSL_explode_term(l_838);
  if(match_cons(t, sym__2))
    {
      c_29 = ATgetArgument(t, 0);
      e_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(g_838);
  if(match_cons(t, sym__2))
    {
      if((c_29 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      d_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_29, e_29);
  t = genzip_4_0(k_8, l_8, m_8, _id, t);
  i_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_29, l_81);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm i_108 (ATerm), ATerm j_108 (ATerm), ATerm t)
{
  static ATerm i_34 (ATerm t);
  static ATerm i_34 (ATerm t)
  {
    ATerm z_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_108(t);
        LocalPopChoice(a_23);
      }
    else
      {
        t = z_22;
        t = j_108(t);
        t = i_34(t);
      }
    return(t);
  }
  t = i_34(t);
  return(t);
}
ATerm for_3_0 (ATerm l_108 (ATerm), ATerm m_108 (ATerm), ATerm n_108 (ATerm), ATerm t)
{
  t = l_108(t);
  t = while_not_2_0(m_108, n_108, t);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm x_34 = NULL;
  x_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_34, (ATerm) ATempty);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm y_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_23 = ATgetArgument(t, 0);
      if(((ATgetType(b_23) != AT_LIST) || !(ATisEmpty(b_23))))
        _fail(t);
      y_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_34;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm z_39 = NULL,a_40 = NULL,f_40 = NULL,i_40 = NULL,l_40 = NULL,m_40 = NULL,q_40 = NULL;
  l_40 = t;
  if(match_cons(t, sym__2))
    {
      m_40 = ATgetArgument(t, 0);
      q_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_40;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_39 = ATgetFirst((ATermList) t);
      i_40 = (ATerm) ATgetNext((ATermList) t);
      t = z_39;
      if(match_cons(t, sym__2))
        {
          a_40 = ATgetArgument(t, 0);
          f_40 = ATgetArgument(t, 1);
          {
            ATerm f_23 = t;
            int h_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = f_41(m_40, q_40, l_40, t);
                LocalPopChoice(h_23);
              }
            else
              {
                t = f_23;
                {
                  ATerm j_23 = t;
                  int m_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = l_40;
                      t = i_7(s_8, a_40, f_40, i_40, q_40, t);
                      LocalPopChoice(m_23);
                    }
                  else
                    {
                      t = j_23;
                      {
                        ATerm p_23 = t;
                        int r_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = i_41(m_40, q_40, l_40, t);
                            LocalPopChoice(r_23);
                          }
                        else
                          {
                            t = p_23;
                            {
                              ATerm s_23 = t;
                              int t_23 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = j_41(m_40, q_40, l_40, t);
                                  LocalPopChoice(t_23);
                                }
                              else
                                {
                                  t = s_23;
                                  {
                                    ATerm u_23 = t;
                                    int w_23 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = k_41(m_40, q_40, l_40, t);
                                        LocalPopChoice(w_23);
                                      }
                                    else
                                      {
                                        t = u_23;
                                        t = n_41(m_40, q_40, l_40, t);
                                      }
                                  }
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
          ATerm x_23 = t;
          int y_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_41(m_40, q_40, l_40, t);
              LocalPopChoice(y_23);
            }
          else
            {
              t = x_23;
              {
                ATerm a_24 = t;
                int e_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = i_41(m_40, q_40, l_40, t);
                    LocalPopChoice(e_24);
                  }
                else
                  {
                    t = a_24;
                    {
                      ATerm f_24 = t;
                      int g_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = j_41(m_40, q_40, l_40, t);
                          LocalPopChoice(g_24);
                        }
                      else
                        {
                          t = f_24;
                          {
                            ATerm h_24 = t;
                            int m_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = k_41(m_40, q_40, l_40, t);
                                LocalPopChoice(m_24);
                              }
                            else
                              {
                                t = h_24;
                                t = n_41(m_40, q_40, l_40, t);
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
      ATerm n_24 = t;
      int p_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_41(m_40, q_40, l_40, t);
          LocalPopChoice(p_24);
        }
      else
        {
          t = n_24;
          {
            ATerm r_24 = t;
            int s_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = i_41(m_40, q_40, l_40, t);
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
                      t = j_41(m_40, q_40, l_40, t);
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
                            t = k_41(m_40, q_40, l_40, t);
                            LocalPopChoice(w_24);
                          }
                        else
                          {
                            t = v_24;
                            t = n_41(m_40, q_40, l_40, t);
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
static ATerm f_41 (ATerm b_35, ATerm c_35, ATerm f_35, ATerm t)
{
  ATerm g_35 = NULL,o_35 = NULL,p_35 = NULL,r_18 = NULL;
  t = SSLgetAnnotations(f_35);
  g_35 = t;
  t = b_35;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_24 = ATgetFirst((ATermList) t);
      if(match_cons(x_24, sym__2))
        {
          o_35 = ATgetArgument(x_24, 0);
          if((o_35 != ATgetArgument(x_24, 1)))
            {
              _fail(ATgetArgument(x_24, 1));
            }
        }
      else
        _fail(t);
      p_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_35, c_35);
  r_18 = t;
  t = SSLsetAnnotations(r_18, g_35);
  return(t);
}
static ATerm i_41 (ATerm v_35, ATerm a_36, ATerm b_36, ATerm t)
{
  ATerm i_36 = NULL,n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL,s_18 = NULL;
  t = SSLgetAnnotations(b_36);
  i_36 = t;
  t = v_35;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_24 = ATgetFirst((ATermList) t);
      if(match_cons(y_24, sym__2))
        {
          o_36 = ATgetArgument(y_24, 0);
          p_36 = ATgetArgument(y_24, 1);
        }
      else
        _fail(t);
      q_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_7(o_36, p_36, q_36, t);
  n_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_36, a_36);
  s_18 = t;
  t = SSLsetAnnotations(s_18, i_36);
  return(t);
}
static ATerm j_41 (ATerm v_36, ATerm w_36, ATerm j_37, ATerm t)
{
  ATerm k_37 = NULL,y_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL,t_18 = NULL;
  t = SSLgetAnnotations(j_37);
  k_37 = t;
  t = v_36;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_24 = ATgetFirst((ATermList) t);
      if(match_cons(z_24, sym__2))
        {
          ATerm a_25 = ATgetArgument(z_24, 0);
          if(match_cons(a_25, sym_As_2))
            {
              y_37 = ATgetArgument(a_25, 0);
              a_38 = ATgetArgument(a_25, 1);
            }
          else
            _fail(t);
          b_38 = ATgetArgument(z_24, 1);
        }
      else
        _fail(t);
      c_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(CheckATermList(c_38), (ATerm) ATmakeAppl(sym__2, a_38, b_38)), (ATerm) ATmakeAppl(sym__2, y_37, b_38)), w_36);
  t_18 = t;
  t = SSLsetAnnotations(t_18, k_37);
  return(t);
}
static ATerm k_41 (ATerm e_38, ATerm h_38, ATerm j_38, ATerm t)
{
  ATerm m_38 = NULL,s_38 = NULL,c_19 = NULL;
  t = SSLgetAnnotations(j_38);
  m_38 = t;
  t = e_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_25 = ATgetFirst((ATermList) t);
      if(match_cons(b_25, sym__2))
        {
          ATerm c_25 = ATgetArgument(b_25, 0);
          if(!(match_cons(c_25, sym_Wld_0)))
            _fail(t);
          {
            ATerm e_25 = ATgetArgument(b_25, 1);
          }
        }
      else
        _fail(t);
      s_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_38, h_38);
  c_19 = t;
  t = SSLsetAnnotations(c_19, m_38);
  return(t);
}
static ATerm n_41 (ATerm w_38, ATerm z_38, ATerm a_39, ATerm t)
{
  ATerm b_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,l_39 = NULL,m_39 = NULL,f_19 = NULL,e_19 = NULL;
  t = SSLgetAnnotations(a_39);
  b_39 = t;
  t = w_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_25 = ATgetFirst((ATermList) t);
      if(match_cons(g_25, sym__2))
        {
          g_39 = ATgetArgument(g_25, 0);
          h_39 = ATgetArgument(g_25, 1);
        }
      else
        _fail(t);
      i_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_39;
  {
    ATerm h_25 = t;
    if((PushChoice() == 0))
      {
        ATerm r_39 = NULL,w_39 = NULL,y_39 = NULL,d_19 = NULL;
        y_39 = t;
        if(match_cons(t, sym_Var_1))
          {
            w_39 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_39);
        r_39 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, w_39);
        d_19 = t;
        t = SSLsetAnnotations(d_19, r_39);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_25;
      }
  }
  t = h_39;
  if(match_cons(t, sym_Var_1))
    {
      m_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_39);
  l_39 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, m_39);
  e_19 = t;
  t = SSLsetAnnotations(e_19, l_39);
  t = (ATerm) ATmakeAppl(sym__2, i_39, z_38);
  f_19 = t;
  t = SSLsetAnnotations(f_19, b_39);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm c_41 = NULL,d_41 = NULL,e_41 = NULL,g_19 = NULL;
  e_41 = t;
  if(match_cons(t, sym_Var_1))
    {
      d_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_41);
  c_41 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, d_41);
  g_19 = t;
  t = SSLsetAnnotations(g_19, c_41);
  return(t);
}
ATerm prop_pattern_match_0_0 (ATerm t)
{
  t = for_3_0(p_8, q_8, r_8, t);
  return(t);
}
ATerm CurrentTerm_0_0 (ATerm t)
{
  ATerm i_25 = t;
  int l_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_41 = NULL,m_5 = NULL,n_5 = NULL;
      t = (ATerm) ATempty;
      m_5 = t;
      t = term_c_14;
      n_5 = t;
      t = term_o_25;
      t = l_7(n_5, m_5, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm p_25 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) p_25) != ATmakeSymbol("j_0", 0, ATtrue)))
            _fail(t);
          q_41 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = q_41;
      LocalPopChoice(l_25);
    }
  else
    {
      t = i_25;
      {
        ATerm r_25 = t;
        int v_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_41 = NULL,p_5 = NULL,q_5 = NULL;
            t = (ATerm) ATempty;
            p_5 = t;
            t = term_c_14;
            q_5 = t;
            t = term_o_25;
            t = l_7(q_5, p_5, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm w_25 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) w_25) != ATmakeSymbol("g_0", 0, ATtrue)))
                  _fail(t);
                r_41 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = r_41;
            LocalPopChoice(v_25);
          }
        else
          {
            t = r_25;
            {
              ATerm x_41 = NULL,z_5 = NULL,a_6 = NULL;
              x_41 = t;
              t = (ATerm) ATempty;
              z_5 = t;
              t = term_c_14;
              a_6 = t;
              t = term_o_25;
              t = l_7(a_6, z_5, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              t = x_41;
              _fail(t);
            }
          }
      }
    }
  return(t);
}
static ATerm l_7 (ATerm p_58, ATerm q_58, ATerm t)
{
  ATerm z_41 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_58, q_58);
  t = a_8(p_58, q_58, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_41 = ATgetFirst((ATermList) t);
      {
        ATerm x_25 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_41;
  return(t);
}
ATerm Binding_0_0 (ATerm t)
{
  ATerm f_43 = NULL;
  f_43 = t;
  if(match_cons(t, sym_Var_1))
    {
      ATerm y_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_25 = t;
    int a_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_7 = NULL,x_7 = NULL;
        t = term_s_13;
        x_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_13, f_43);
        t = l_7(x_7, f_43, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm b_26 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_26) != ATmakeSymbol("l_0", 0, ATtrue)))
              _fail(t);
            g_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_7;
        LocalPopChoice(a_26);
      }
    else
      {
        t = z_25;
        {
          ATerm c_26 = t;
          int d_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_8 = NULL;
              t = term_s_13;
              o_8 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_s_13, f_43);
              t = l_7(o_8, f_43, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              t = f_43;
              _fail(t);
              LocalPopChoice(d_26);
            }
          else
            {
              t = c_26;
              {
                ATerm v_8 = NULL;
                t = term_s_13;
                v_8 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_s_13, f_43);
                t = l_7(v_8, f_43, t);
                if(!(match_cons(t, sym_Undefined_0)))
                  _fail(t);
                t = f_43;
                _fail(t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm j_110 (ATerm), ATerm t)
{
  static ATerm o_43 (ATerm t);
  static ATerm o_43 (ATerm t)
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_110(t);
        LocalPopChoice(f_26);
      }
    else
      {
        t = e_26;
        t = SRTS_all(o_43, t);
      }
    return(t);
  }
  t = o_43(t);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm g_26 = t;
  int h_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_9 = NULL,d_9 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm i_26 = ATgetArgument(t, 0);
          if(match_cons(i_26, sym_Var_1))
            {
              c_9 = ATgetArgument(i_26, 0);
            }
          else
            _fail(t);
          d_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_6(c_9, d_9, t);
      LocalPopChoice(h_26);
    }
  else
    {
      t = g_26;
    }
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = debug_1_0(w_8, t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  t = term_k_26;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm t_44 = NULL;
  t_44 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = t_44;
    }
  else
    {
      if(match_cons(t, sym_As_2))
        {
          ATerm m_26 = ATgetArgument(t, 0);
          ATerm p_26 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = t_44;
    }
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_c_14;
  return(t);
}
ATerm prop_match_0_0 (ATerm t)
{
  ATerm v_43 = NULL,w_43 = NULL,y_43 = NULL,c_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,p_19 = NULL;
  j_44 = t;
  if(match_cons(t, sym_Match_1))
    {
      c_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_44);
  y_43 = t;
  t = c_44;
  t = alltd_1_0(Binding_0_0, t);
  h_44 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, h_44);
  p_19 = t;
  t = SSLsetAnnotations(p_19, y_43);
  i_44 = t;
  if(match_cons(t, sym_Match_1))
    {
      w_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_26 = t;
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = CurrentTerm_0_0(t);
        v_43 = t;
        t = i_44;
        {
          ATerm s_26 = t;
          int t_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, w_43, v_43));
              t = prop_pattern_match_0_0(t);
              t = map_1_0(t_8, t);
              t = i_44;
              LocalPopChoice(t_26);
            }
          else
            {
              t = s_26;
              t = (ATerm) ATmakeAppl(sym__4, term_u_26, i_44, term_v_26, v_43);
              t = if_verbose3_1_0(u_8, t);
              t = term_w_26;
            }
        }
        LocalPopChoice(r_26);
      }
    else
      {
        t = q_26;
        {
          ATerm a_27 = t;
          int b_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_44 = NULL,s_44 = NULL;
              t = w_43;
              {
                ATerm c_27 = t;
                if((PushChoice() == 0))
                  {
                    t = oncetd_1_0(x_8, t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = c_27;
                  }
              }
              t = (ATerm) ATempty;
              r_44 = t;
              t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_27, w_43);
              s_44 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_d_27, w_43));
              t = w_6(y_8, r_44, s_44, t);
              t = i_44;
              LocalPopChoice(b_27);
            }
          else
            {
              t = a_27;
            }
        }
      }
  }
  return(t);
}
ATerm cp_0_0 (ATerm t)
{
  ATerm e_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = prop_match_0_0(t);
      LocalPopChoice(f_27);
    }
  else
    {
      t = e_27;
      {
        ATerm g_27 = t;
        int h_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = prop_build_0_0(t);
            LocalPopChoice(h_27);
          }
        else
          {
            t = g_27;
            {
              ATerm i_27 = t;
              int j_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_45 = NULL,h_45 = NULL;
                  g_45 = t;
                  if(match_cons(t, sym_Scope_2))
                    {
                      h_45 = ATgetArgument(t, 0);
                      {
                        ATerm k_27 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  t = g_45;
                  t = v_6(cp_0_0, h_45, t);
                  LocalPopChoice(j_27);
                }
              else
                {
                  t = i_27;
                  {
                    ATerm l_27 = t;
                    int m_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = prop_call_1_0(cp_0_0, t);
                        LocalPopChoice(m_27);
                      }
                    else
                      {
                        t = l_27;
                        {
                          ATerm n_27 = t;
                          int o_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = prop_traversal_1_0(cp_0_0, t);
                              LocalPopChoice(o_27);
                            }
                          else
                            {
                              t = n_27;
                              {
                                ATerm p_27 = t;
                                int q_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm m_46 = NULL,n_46 = NULL,o_46 = NULL,p_9 = NULL,t_9 = NULL,u_9 = NULL,r_19 = NULL;
                                    m_46 = t;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        n_46 = ATgetArgument(t, 0);
                                        o_46 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(m_46);
                                    p_9 = t;
                                    t = n_46;
                                    t = cp_0_0(t);
                                    t_9 = t;
                                    t = o_46;
                                    t = cp_0_0(t);
                                    u_9 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, t_9, u_9);
                                    r_19 = t;
                                    t = SSLsetAnnotations(r_19, p_9);
                                    LocalPopChoice(q_27);
                                  }
                                else
                                  {
                                    t = p_27;
                                    {
                                      ATerm r_27 = t;
                                      int s_27 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = prop_choice_1_0(cp_0_0, t);
                                          LocalPopChoice(s_27);
                                        }
                                      else
                                        {
                                          t = r_27;
                                          {
                                            ATerm t_27 = t;
                                            int x_27 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm v_46 = NULL,w_46 = NULL,y_46 = NULL;
                                                v_46 = t;
                                                {
                                                  ATerm y_27 = t;
                                                  int z_27 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_Let_2))
                                                        {
                                                          ATerm a_28 = ATgetArgument(t, 0);
                                                          ATerm c_28 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(z_27);
                                                      t = v_46;
                                                      t = s_6(cp_0_0, t);
                                                    }
                                                  else
                                                    {
                                                      t = y_27;
                                                      {
                                                        ATerm d_28 = t;
                                                        int e_28 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm f_28 = ATgetArgument(t, 0);
                                                                ATerm g_28 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(e_28);
                                                            {
                                                              ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,s_19 = NULL;
                                                              t = v_46;
                                                              if(match_cons(t, sym_Rec_2))
                                                                {
                                                                  b_10 = ATgetArgument(t, 0);
                                                                  c_10 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSLgetAnnotations(v_46);
                                                              a_10 = t;
                                                              t = c_10;
                                                              t = exec_maybe_1_0(cp_0_0, t);
                                                              d_10 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Rec_2, b_10, d_10);
                                                              s_19 = t;
                                                              t = SSLsetAnnotations(s_19, a_10);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = d_28;
                                                            {
                                                              ATerm h_28 = t;
                                                              int i_28 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_Not_1))
                                                                    {
                                                                      ATerm k_28 = ATgetArgument(t, 0);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(i_28);
                                                                  t = v_46;
                                                                  t = q_6(cp_0_0, t);
                                                                }
                                                              else
                                                                {
                                                                  t = h_28;
                                                                  if(match_cons(t, sym_SDefT_4))
                                                                    {
                                                                      w_46 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm l_28 = ATgetArgument(t, 1);
                                                                      }
                                                                      y_46 = ATgetArgument(t, 2);
                                                                      {
                                                                        ATerm m_28 = ATgetArgument(t, 3);
                                                                      }
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  t = v_46;
                                                                  t = p_6(cp_0_0, w_46, y_46, t);
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                                LocalPopChoice(x_27);
                                              }
                                            else
                                              {
                                                t = t_27;
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
static ATerm m_7 (ATerm j_58, ATerm k_58, ATerm t)
{
  ATerm e_47 = NULL,f_47 = NULL;
  f_47 = t;
  {
    ATerm o_28 = t;
    int p_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_58, k_58);
        t = a_8(j_58, k_58, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_28 = ATgetFirst((ATermList) t);
            e_47 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(p_28);
        {
          ATerm g_47 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, j_58, k_58, e_47);
          t = lookup_table_0_1(j_58, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              g_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_8(k_58, e_47, g_47, t);
          t = (ATerm) ATmakeAppl(sym__3, j_58, k_58, e_47);
        }
      }
    else
      {
        t = o_28;
        {
          ATerm i_47 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, j_58, k_58);
          t = lookup_table_0_1(j_58, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              i_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_7(k_58, i_47, t);
          t = (ATerm) ATmakeAppl(sym__2, j_58, k_58);
        }
      }
  }
  t = f_47;
  return(t);
}
ATerm end_scope_1_0 (ATerm t_104 (ATerm), ATerm t)
{
  ATerm k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL;
  n_47 = t;
  t = t_104(t);
  m_47 = t;
  {
    ATerm t_28 = t;
    int v_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_47 = NULL;
        t = term_b_21;
        r_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_47, term_b_21);
        t = a_8(m_47, r_47, t);
        {
          ATerm w_28 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = w_28;
            }
        }
        LocalPopChoice(v_28);
      }
    else
      {
        t = t_28;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_47 = ATgetFirst((ATermList) t);
      k_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, m_47, term_b_21, k_47);
  t = lookup_table_0_1(m_47, t);
  q_47 = t;
  t = term_b_21;
  o_47 = t;
  t = q_47;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_8(o_47, k_47, p_47, t);
  t = l_47;
  {
    static ATerm a_9 (ATerm t);
    static ATerm a_9 (ATerm t)
    {
      ATerm s_47 = NULL;
      s_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_47, s_47);
      t = m_7(m_47, s_47, t);
      return(t);
    }
    t = map_1_0(a_9, t);
  }
  t = n_47;
  return(t);
}
ATerm restore_always_2_0 (ATerm n_107 (ATerm), ATerm o_107 (ATerm), ATerm t)
{
  ATerm x_28 = t;
  int y_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_107(t);
      t = o_107(t);
      LocalPopChoice(y_28);
    }
  else
    {
      t = x_28;
      t = o_107(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm s_104 (ATerm), ATerm t)
{
  ATerm u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL;
  v_47 = t;
  t = s_104(t);
  u_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_47, term_b_21);
  {
    ATerm a_29 = t;
    int b_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_48 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm f_29 = ATgetArgument(t, 0);
            ATerm g_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_b_21;
        e_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_47, term_b_21);
        t = a_8(u_47, e_48, t);
        LocalPopChoice(b_29);
      }
    else
      {
        t = a_29;
        t = (ATerm) ATempty;
      }
  }
  w_47 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_47, term_b_21, (ATerm) ATinsert(CheckATermList(w_47), (ATerm) ATempty));
  t = lookup_table_0_1(u_47, t);
  a_48 = t;
  t = term_b_21;
  x_47 = t;
  t = (ATerm) ATinsert(CheckATermList(w_47), (ATerm) ATempty);
  y_47 = t;
  t = a_48;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_8(x_47, y_47, z_47, t);
  t = v_47;
  return(t);
}
ATerm scope_2_0 (ATerm u_104 (ATerm), ATerm v_104 (ATerm), ATerm t)
{
  static ATerm b_9 (ATerm t);
  static ATerm b_9 (ATerm t)
  {
    t = end_scope_1_0(u_104, t);
    return(t);
  }
  t = begin_scope_1_0(u_104, t);
  t = restore_always_2_0(v_104, b_9, t);
  return(t);
}
ATerm map_1_0 (ATerm c_115 (ATerm), ATerm t)
{
  static ATerm t_48 (ATerm t);
  static ATerm t_48 (ATerm t)
  {
    ATerm q_48 = NULL,r_48 = NULL,s_48 = NULL;
    q_48 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_48;
      }
    else
      {
        ATerm j_10 = NULL,m_10 = NULL,n_10 = NULL,v_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_48 = ATgetFirst((ATermList) t);
            s_48 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_48);
        j_10 = t;
        t = r_48;
        t = c_115(t);
        m_10 = t;
        t = s_48;
        t = t_48(t);
        n_10 = t;
        t = (ATerm) ATinsert(CheckATermList(n_10), m_10);
        v_19 = t;
        t = SSLsetAnnotations(v_19, j_10);
      }
    return(t);
  }
  t = t_48(t);
  return(t);
}
ATerm Cons_2_0 (ATerm v_90 (ATerm), ATerm w_90 (ATerm), ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL,x_19 = NULL;
  a_49 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_48 = ATgetFirst((ATermList) t);
      x_48 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_49);
  v_48 = t;
  t = w_48;
  t = v_90(t);
  y_48 = t;
  t = x_48;
  t = w_90(t);
  z_48 = t;
  t = (ATerm) ATinsert(CheckATermList(z_48), y_48);
  x_19 = t;
  t = SSLsetAnnotations(x_19, v_48);
  return(t);
}
static ATerm o_7 (ATerm v_52, ATerm w_52, ATerm t)
{
  ATerm b_49 = NULL;
  t = SSL_fputc(v_52, w_52);
  b_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_49);
  return(t);
}
static ATerm p_7 (ATerm c_37, ATerm d_37, ATerm t)
{
  ATerm c_49 = NULL;
  t = SSL_write_term_to_stream_text(c_37, d_37);
  c_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_49);
  return(t);
}
static ATerm r_7 (ATerm u_114 (ATerm), ATerm v_265, ATerm i_37, ATerm t)
{
  ATerm d_49 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_265, term_h_29);
  t = v_7(t);
  d_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_49, i_37);
  t = u_114(t);
  t = fclose_0_0(t);
  t = i_37;
  return(t);
}
static ATerm q_7 (ATerm y_36, ATerm z_36, ATerm t)
{
  ATerm e_49 = NULL;
  t = SSL_write_term_to_stream_baf(y_36, z_36);
  e_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_49);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_29 = ATgetArgument(t, 0);
      if(match_cons(j_29, sym_Stream_1))
        {
          m_11 = ATgetArgument(j_29, 0);
        }
      else
        _fail(t);
      n_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_7(m_11, n_11, t);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_29 = ATgetArgument(t, 0);
      if(match_cons(l_29, sym_Stream_1))
        {
          d_12 = ATgetArgument(l_29, 0);
        }
      else
        _fail(t);
      e_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_7(d_12, e_12, t);
  a_12 = t;
  t = term_m_29;
  b_12 = t;
  t = a_12;
  if(match_cons(t, sym_Stream_1))
    {
      c_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_m_29, a_12);
  t = o_7(b_12, c_12, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL,o_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL,s_50 = NULL,t_50 = NULL,a_20 = NULL,z_19 = NULL;
  j_49 = t;
  if(match_cons(t, sym__2))
    {
      q_49 = ATgetArgument(t, 0);
      r_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_49);
  p_49 = t;
  t = q_49;
  {
    ATerm n_29 = t;
    int r_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm e_9 (ATerm t);
        static ATerm e_9 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((i_49 != NULL) && (i_49 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                i_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(e_9, t);
        LocalPopChoice(r_29);
      }
    else
      {
        t = n_29;
        t = term_s_29;
        i_49 = t;
      }
  }
  s_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_49, r_49);
  z_19 = t;
  t = SSLsetAnnotations(z_19, p_49);
  t = j_49;
  if(match_cons(t, sym__2))
    {
      l_49 = ATgetArgument(t, 0);
      m_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_49);
  k_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_49, (ATerm) ATmakeAppl(sym__2, not_null(i_49), m_49));
  a_20 = t;
  t = SSLsetAnnotations(a_20, k_49);
  o_49 = t;
  if(match_cons(t, sym__2))
    {
      s_50 = ATgetArgument(t, 0);
      t_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_29 = t;
    int w_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_11 = NULL,g_11 = NULL,h_11 = NULL,j_11 = NULL,k_11 = NULL,b_20 = NULL;
        t = SSLgetAnnotations(o_49);
        b_11 = t;
        t = s_50;
        t = fetch_1_0(f_9, t);
        g_11 = t;
        t = t_50;
        if(match_cons(t, sym__2))
          {
            j_11 = ATgetArgument(t, 0);
            k_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_7(g_9, j_11, k_11, t);
        h_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_11, h_11);
        b_20 = t;
        t = SSLsetAnnotations(b_20, b_11);
        LocalPopChoice(w_29);
      }
    else
      {
        t = t_29;
        {
          ATerm u_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,c_20 = NULL;
          t = SSLgetAnnotations(o_49);
          u_11 = t;
          t = t_50;
          if(match_cons(t, sym__2))
            {
              y_11 = ATgetArgument(t, 0);
              z_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_7(h_9, y_11, z_11, t);
          x_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_50, x_11);
          c_20 = t;
          t = SSLsetAnnotations(c_20, u_11);
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
ATerm apply_strategy_1_0 (ATerm g_133 (ATerm), ATerm t)
{
  ATerm w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL;
  a_51 = t;
  t = dtime_0_0(t);
  t = a_51;
  t = g_133(t);
  z_50 = t;
  t = dtime_0_0(t);
  w_50 = t;
  t = z_50;
  if(match_cons(t, sym__2))
    {
      x_50 = ATgetArgument(t, 0);
      y_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_50), (ATerm) ATmakeAppl(sym_Runtime_1, w_50)), y_50);
  return(t);
}
static ATerm q_51 (ATerm k_51, ATerm t)
{
  t = SSL_fclose(k_51);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_51 = NULL,o_51 = NULL;
  o_51 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_51 = ATgetArgument(t, 0);
      {
        ATerm x_29 = t;
        int y_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_51);
            LocalPopChoice(y_29);
          }
        else
          {
            t = x_29;
            t = q_51(o_51, t);
          }
      }
    }
  else
    {
      t = q_51(o_51, t);
    }
  return(t);
}
static ATerm s_7 (ATerm e_37, ATerm t)
{
  t = SSL_read_term_from_stream(e_37);
  return(t);
}
static ATerm t_7 (ATerm b_51, ATerm c_51, ATerm t)
{
  t = SSL_strcat(b_51, c_51);
  return(t);
}
static ATerm u_7 (ATerm x_52, ATerm y_52, ATerm t)
{
  ATerm r_51 = NULL;
  t = SSL_fopen(x_52, y_52);
  r_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_51);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_51 = NULL;
  t = SSL_stdin_stream();
  s_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_51);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_51 = NULL;
  t = SSL_stdout_stream();
  t_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_51);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_51 = NULL;
  t = SSL_stderr_stream();
  u_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_51);
  return(t);
}
static ATerm h_53 (ATerm a_52, ATerm t)
{
  ATerm b_52 = NULL;
  t = SSL_explode_term(a_52);
  if(match_cons(t, sym__2))
    {
      ATerm z_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_30 = ATgetArgument(t, 1);
        if(((ATgetType(a_30) == AT_LIST) && !(ATisEmpty(a_30))))
          {
            b_52 = ATgetFirst((ATermList) a_30);
            {
              ATerm i_30 = (ATerm) ATgetNext((ATermList) a_30);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_52;
  if(match_cons(t, sym_stderr_0))
    {
      t = b_52;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_52;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_52;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm i_53 (ATerm e_52, ATerm f_52, ATerm g_52, ATerm t)
{
  ATerm h_52 = NULL,i_52 = NULL,j_52 = NULL,m_52 = NULL,h_20 = NULL;
  t = SSLgetAnnotations(g_52);
  j_52 = t;
  t = e_52;
  if(match_cons(t, sym_Path_1))
    {
      m_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_52, f_52);
  h_20 = t;
  t = SSLsetAnnotations(h_20, j_52);
  if(match_cons(t, sym__2))
    {
      h_52 = ATgetArgument(t, 0);
      i_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_7(h_52, i_52, t);
  return(t);
}
static ATerm j_53 (ATerm o_52, ATerm p_52, ATerm q_52, ATerm t)
{
  ATerm r_52 = NULL,s_52 = NULL,t_52 = NULL,c_53 = NULL,i_20 = NULL;
  t = SSLgetAnnotations(q_52);
  t_52 = t;
  t = SSL_is_string(o_52);
  c_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_53, p_52);
  i_20 = t;
  t = SSLsetAnnotations(i_20, t_52);
  if(match_cons(t, sym__2))
    {
      r_52 = ATgetArgument(t, 0);
      s_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_7(r_52, s_52, t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm e_53 = NULL,f_53 = NULL,g_53 = NULL;
  e_53 = t;
  if(match_cons(t, sym__2))
    {
      f_53 = ATgetArgument(t, 0);
      g_53 = ATgetArgument(t, 1);
      {
        ATerm j_30 = t;
        int k_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_53(e_53, t);
            LocalPopChoice(k_30);
          }
        else
          {
            t = j_30;
            {
              ATerm l_30 = t;
              int m_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_53(f_53, g_53, e_53, t);
                  LocalPopChoice(m_30);
                }
              else
                {
                  t = l_30;
                  t = j_53(f_53, g_53, e_53, t);
                }
            }
          }
      }
    }
  else
    {
      t = h_53(e_53, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_53 = NULL,m_53 = NULL,n_53 = NULL,s_53 = NULL;
  s_53 = t;
  {
    ATerm n_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_53, term_p_30);
        t = v_7(t);
        LocalPopChoice(o_30);
      }
    else
      {
        t = n_30;
        {
          ATerm i_13 = NULL,j_13 = NULL;
          t = term_q_30;
          j_13 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_q_30, s_53);
          t = t_7(j_13, s_53, t);
          i_13 = t;
          t = SSL_perror(i_13);
          _fail(t);
        }
      }
  }
  m_53 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_7(n_53, t);
  l_53 = t;
  t = m_53;
  t = fclose_0_0(t);
  t = l_53;
  return(t);
}
ATerm fetch_1_0 (ATerm m_115 (ATerm), ATerm t)
{
  static ATerm s_54 (ATerm t);
  static ATerm s_54 (ATerm t)
  {
    ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL;
    p_54 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_54 = ATgetFirst((ATermList) t);
        r_54 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm r_30 = t;
      int s_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_13 = NULL,t_13 = NULL,l_20 = NULL;
          t = SSLgetAnnotations(p_54);
          q_13 = t;
          t = q_54;
          t = m_115(t);
          t_13 = t;
          t = (ATerm) ATinsert(CheckATermList(r_54), t_13);
          l_20 = t;
          t = SSLsetAnnotations(l_20, q_13);
          LocalPopChoice(s_30);
        }
      else
        {
          t = r_30;
          {
            ATerm l_14 = NULL,t_14 = NULL,m_20 = NULL;
            t = SSLgetAnnotations(p_54);
            l_14 = t;
            t = r_54;
            t = s_54(t);
            t_14 = t;
            t = (ATerm) ATinsert(CheckATermList(t_14), q_54);
            m_20 = t;
            t = SSLsetAnnotations(m_20, l_14);
          }
        }
    }
    return(t);
  }
  t = s_54(t);
  return(t);
}
static ATerm a_8 (ATerm x_59, ATerm y_59, ATerm t)
{
  ATerm v_54 = NULL;
  t = lookup_table_0_1(x_59, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(y_59, v_54, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm p_131 (ATerm), ATerm t)
{
  ATerm y_54 = NULL;
  y_54 = t;
  {
    ATerm t_30 = t;
    int u_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_55 = NULL,b_55 = NULL,c_55 = NULL;
        t = term_t_12;
        b_55 = t;
        t = term_i_21;
        c_55 = t;
        t = term_k_21;
        t = a_8(b_55, c_55, t);
        a_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_55, term_v_30);
        t = geq_0_0(t);
        t = y_54;
        t = p_131(t);
        LocalPopChoice(u_30);
      }
    else
      {
        t = t_30;
        t = y_54;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm f_55 = NULL,g_55 = NULL,h_55 = NULL;
  f_55 = t;
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = f_55;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_30 = ATgetFirst((ATermList) t);
                ATerm z_30 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = f_55;
          }
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
        t = (ATerm) ATinsert(ATempty, f_55);
      }
  }
  g_55 = t;
  t = term_s_29;
  h_55 = t;
  t = SSL_printnl(h_55, g_55);
  t = f_55;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm l_55 = NULL,m_55 = NULL;
  t = term_t_12;
  l_55 = t;
  t = term_u_12;
  m_55 = t;
  t = term_x_12;
  t = a_8(l_55, m_55, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm o_55 = NULL;
  o_55 = t;
  if(match_string(t, "-k"))
    {
      t = o_55;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_55;
    }
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm p_55 = NULL,q_55 = NULL,r_55 = NULL;
  p_55 = t;
  t = SSL_string_to_int(p_55);
  q_55 = t;
  t = term_a_31;
  r_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_31, q_55);
  t = d_8(r_55, q_55, t);
  t = p_55;
  return(t);
}
static ATerm k_9 (ATerm t)
{
  t = term_b_31;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_9, j_9, k_9, t);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm t_55 = NULL;
  t_55 = t;
  if(match_string(t, "-S"))
    {
      t = t_55;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_55;
    }
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm u_55 = NULL,v_55 = NULL;
  t = term_i_21;
  u_55 = t;
  t = term_c_31;
  v_55 = t;
  t = term_d_31;
  t = d_8(u_55, v_55, t);
  t = term_e_31;
  return(t);
}
static ATerm n_9 (ATerm t)
{
  t = term_f_31;
  return(t);
}
static ATerm q_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm w_55 = NULL,x_55 = NULL,y_55 = NULL;
  w_55 = t;
  t = SSL_string_to_int(w_55);
  x_55 = t;
  t = term_i_21;
  y_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_21, x_55);
  t = d_8(y_55, x_55, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_55);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  t = term_g_31;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm z_55 = NULL,a_56 = NULL;
  t = term_h_31;
  z_55 = t;
  t = term_p_12;
  a_56 = t;
  t = term_i_31;
  t = d_8(z_55, a_56, t);
  t = term_j_31;
  return(t);
}
static ATerm x_9 (ATerm t)
{
  t = term_k_31;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_31 = t;
  int n_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_9, m_9, n_9, t);
      LocalPopChoice(n_31);
    }
  else
    {
      t = l_31;
      {
        ATerm p_31 = t;
        int q_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_9, r_9, s_9, t);
            LocalPopChoice(q_31);
          }
        else
          {
            t = p_31;
            t = Option_3_0(v_9, w_9, x_9, t);
          }
      }
    }
  return(t);
}
static ATerm d_8 (ATerm o_71, ATerm p_71, ATerm t)
{
  ATerm b_56 = NULL,c_56 = NULL;
  t = term_t_12;
  b_56 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_12, o_71, p_71);
  t = lookup_table_0_1(b_56, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_8(o_71, p_71, c_56, t);
  t = (ATerm) ATmakeAppl(sym__3, term_t_12, o_71, p_71);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm g_56 = NULL,h_56 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_56 = NULL,j_56 = NULL,k_56 = NULL;
      t = term_p_12;
      t = e_0(t);
      i_56 = t;
      t = term_d_13;
      j_56 = t;
      t = term_f_13;
      k_56 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_13, term_f_13, i_56);
      t = b_8(j_56, k_56, i_56, t);
      _fail(t);
    }
  else
    {
      ATerm p_56 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_56 = ATgetFirst((ATermList) t);
          h_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_56;
      t = b_0(t);
      t = term_p_12;
      t = d_0(t);
      p_56 = t;
      t = (ATerm) ATinsert(CheckATermList(h_56), p_56);
    }
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm r_56 = NULL;
  r_56 = t;
  if(match_string(t, "-o"))
    {
      t = r_56;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = r_56;
    }
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm s_56 = NULL,t_56 = NULL;
  s_56 = t;
  t = term_r_31;
  t_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_31, s_56);
  t = d_8(t_56, s_56, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, s_56);
  return(t);
}
static ATerm e_10 (ATerm t)
{
  t = term_t_31;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_9, z_9, e_10, t);
  return(t);
}
static ATerm b_8 (ATerm e_58, ATerm f_58, ATerm d_58, ATerm t)
{
  ATerm v_56 = NULL,w_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL;
  v_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_58, f_58);
  {
    ATerm v_31 = t;
    int w_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_31 = ATgetArgument(t, 0);
            ATerm z_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_58, f_58);
        t = a_8(e_58, f_58, t);
        LocalPopChoice(w_31);
      }
    else
      {
        t = v_31;
        t = (ATerm) ATempty;
      }
  }
  w_56 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_58, f_58, (ATerm) ATinsert(CheckATermList(w_56), d_58));
  t = lookup_table_0_1(e_58, t);
  z_56 = t;
  t = (ATerm) ATinsert(CheckATermList(w_56), d_58);
  x_56 = t;
  t = z_56;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_8(f_58, x_56, y_56, t);
  t = v_56;
  return(t);
}
ATerm ArgOption_3_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm g_57 = NULL,h_57 = NULL,i_57 = NULL,j_57 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_57 = NULL,l_57 = NULL,m_57 = NULL;
      t = term_p_12;
      t = k_0(t);
      k_57 = t;
      t = term_d_13;
      l_57 = t;
      t = term_f_13;
      m_57 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_13, term_f_13, k_57);
      t = b_8(l_57, m_57, k_57, t);
      _fail(t);
    }
  else
    {
      ATerm q_57 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_57 = ATgetFirst((ATermList) t);
          h_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_57;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_57 = ATgetFirst((ATermList) t);
          j_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_57;
      t = f_0(t);
      t = i_57;
      t = h_0(t);
      q_57 = t;
      t = (ATerm) ATinsert(CheckATermList(j_57), q_57);
    }
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm s_57 = NULL;
  s_57 = t;
  if(match_string(t, "-i"))
    {
      t = s_57;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = s_57;
    }
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm u_57 = NULL,v_57 = NULL;
  u_57 = t;
  t = term_a_32;
  v_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_32, u_57);
  t = d_8(v_57, u_57, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, u_57);
  return(t);
}
static ATerm h_10 (ATerm t)
{
  t = term_b_32;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_10, g_10, h_10, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_57 = NULL,x_57 = NULL,y_57 = NULL,z_57 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_12;
  t = whoami_0_0(t);
  w_57 = t;
  t = term_f_21;
  y_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_32), w_57);
  z_57 = t;
  t = SSL_printnl(y_57, z_57);
  t = term_d_32;
  x_57 = t;
  t = SSL_exit(x_57);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm a_58 = NULL,b_58 = NULL;
  t = term_t_12;
  a_58 = t;
  t = term_u_12;
  b_58 = t;
  t = term_x_12;
  t = a_8(a_58, b_58, t);
  return(t);
}
static ATerm w_7 (ATerm n_56, ATerm o_56, ATerm t)
{
  ATerm e_32 = t;
  int f_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(n_56, o_56);
      LocalPopChoice(f_32);
    }
  else
    {
      t = e_32;
      t = SSL_addr(n_56, o_56);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm b_122 (ATerm), ATerm c_122 (ATerm), ATerm t)
{
  ATerm g_58 = NULL,h_58 = NULL,l_58 = NULL;
  g_58 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_58;
      t = b_122(t);
    }
  else
    {
      ATerm o_58 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_58 = ATgetFirst((ATermList) t);
          l_58 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_58;
      t = foldr_2_0(b_122, c_122, t);
      o_58 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_58, o_58);
      t = c_122(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm i_10 (ATerm t)
{
  t = term_c_31;
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL;
  if(match_cons(t, sym__2))
    {
      q_15 = ATgetArgument(t, 0);
      r_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_7(q_15, r_15, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm t_58 = NULL,f_15 = NULL,g_15 = NULL;
  t = times_0_0(t);
  g_15 = t;
  t = SSL_explode_term(g_15);
  if(match_cons(t, sym__2))
    {
      ATerm h_32 = ATgetArgument(t, 0);
      f_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_15;
  t = foldr_2_0(i_10, k_10, t);
  t_58 = t;
  t = SSL_TicksToSeconds(t_58);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_59 = NULL,l_59 = NULL,m_59 = NULL;
  k_59 = t;
  if(match_cons(t, sym__2))
    {
      l_59 = ATgetArgument(t, 0);
      m_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_32 = t;
    int k_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_59;
        if((l_59 != t))
          {
            _fail(t);
          }
        t = k_59;
        LocalPopChoice(k_32);
      }
    else
      {
        t = j_32;
        t = (ATerm) ATmakeAppl(sym__2, l_59, m_59);
        {
          ATerm l_32 = t;
          int m_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_59, m_59);
              LocalPopChoice(m_32);
            }
          else
            {
              t = l_32;
              t = SSL_gtr(l_59, m_59);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, l_59, m_59);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm o_131 (ATerm), ATerm t)
{
  ATerm u_59 = NULL;
  u_59 = t;
  {
    ATerm n_32 = t;
    int o_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_59 = NULL,z_59 = NULL,a_60 = NULL;
        t = term_t_12;
        z_59 = t;
        t = term_i_21;
        a_60 = t;
        t = term_k_21;
        t = a_8(z_59, a_60, t);
        w_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_59, term_d_32);
        t = geq_0_0(t);
        t = u_59;
        t = o_131(t);
        LocalPopChoice(o_32);
      }
    else
      {
        t = n_32;
        t = u_59;
      }
  }
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm c_60 = NULL,d_60 = NULL,f_60 = NULL,g_60 = NULL;
  t = run_time_0_0(t);
  c_60 = t;
  t = term_p_12;
  t = whoami_0_0(t);
  d_60 = t;
  t = term_f_21;
  f_60 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_32), c_60), term_q_32), d_60);
  g_60 = t;
  t = SSL_printnl(f_60, g_60);
  t = (ATerm) ATmakeAppl(sym__2, term_f_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_32), c_60), term_q_32), d_60));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(l_10, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm h_60 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_31;
  h_60 = t;
  t = SSL_exit(h_60);
  return(t);
}
static ATerm e_8 (ATerm p_62, ATerm q_62, ATerm r_62, ATerm t)
{
  ATerm i_60 = NULL;
  t = SSL_hashtable_put(r_62, p_62, q_62);
  i_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_60);
  return(t);
}
static ATerm f_8 (ATerm s_62, ATerm t_62, ATerm t)
{
  t = SSL_hashtable_get(t_62, s_62);
  return(t);
}
ATerm lookup_table_0_1 (ATerm q_59, ATerm t)
{
  ATerm r_60 = NULL;
  t = table_hashtable_0_0(t);
  r_60 = t;
  {
    ATerm s_32 = t;
    int u_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_16 = NULL;
        t = r_60;
        if(match_cons(t, sym_Hashtable_1))
          {
            s_16 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = f_8(q_59, s_16, t);
        LocalPopChoice(u_32);
      }
    else
      {
        t = s_32;
        {
          ATerm f_17 = NULL;
          t = q_59;
          t = table_create_0_0(t);
          t = r_60;
          if(match_cons(t, sym_Hashtable_1))
            {
              f_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_8(q_59, f_17, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm x_62, ATerm y_62, ATerm t)
{
  ATerm u_60 = NULL;
  t = SSL_hashtable_create(x_62, y_62);
  u_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_60);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm v_60 = NULL,w_60 = NULL,x_60 = NULL,z_60 = NULL,a_61 = NULL;
  v_60 = t;
  t = term_v_32;
  z_60 = t;
  t = term_w_32;
  a_61 = t;
  t = v_60;
  t = new_hashtable_0_2(z_60, a_61, t);
  w_60 = t;
  t = v_60;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_8(v_60, w_60, x_60, t);
  t = v_60;
  return(t);
}
static ATerm y_7 (ATerm u_62, ATerm v_62, ATerm t)
{
  ATerm b_61 = NULL;
  t = SSL_hashtable_remove(v_62, u_62);
  b_61 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_61);
  return(t);
}
static ATerm z_7 (ATerm z_62, ATerm t)
{
  ATerm c_61 = NULL;
  t = SSL_hashtable_destroy(z_62);
  c_61 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_61);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm d_61 = NULL;
  t = SSL_table_hashtable();
  d_61 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_61);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm e_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL;
  e_61 = t;
  t = table_hashtable_0_0(t);
  f_61 = t;
  t = lookup_table_0_1(e_61, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_7(h_61, t);
  t = f_61;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_7(e_61, g_61, t);
  t = e_61;
  return(t);
}
static ATerm o_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm i_61 = NULL,j_61 = NULL;
  t = term_z_32;
  i_61 = t;
  t = term_p_12;
  j_61 = t;
  t = term_a_33;
  t = d_8(i_61, j_61, t);
  return(t);
}
static ATerm t_10 (ATerm t)
{
  t = term_b_33;
  return(t);
}
static ATerm w_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm k_61 = NULL,l_61 = NULL,m_61 = NULL,n_61 = NULL;
  t = term_z_32;
  m_61 = t;
  t = term_p_12;
  n_61 = t;
  t = term_a_33;
  t = d_8(m_61, n_61, t);
  t = term_c_33;
  k_61 = t;
  t = term_p_12;
  l_61 = t;
  t = term_d_33;
  t = d_8(k_61, l_61, t);
  t = term_e_33;
  return(t);
}
static ATerm y_10 (ATerm t)
{
  t = term_f_33;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_33 = t;
  int j_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_10, q_10, t_10, t);
      LocalPopChoice(j_33);
    }
  else
    {
      t = g_33;
      t = Option_3_0(w_10, x_10, y_10, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_136 (ATerm), ATerm t)
{
  ATerm s_61 = NULL,t_61 = NULL,u_61 = NULL,v_61 = NULL,x_61 = NULL,y_61 = NULL,p_20 = NULL;
  s_61 = t;
  {
    ATerm p_33 = t;
    int q_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_33;
        t = m_136(t);
        LocalPopChoice(q_33);
      }
    else
      {
        t = p_33;
      }
  }
  t = s_61;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_61 = ATgetFirst((ATermList) t);
      v_61 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_61);
  t_61 = t;
  t = term_u_12;
  y_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_12, u_61);
  t = d_8(y_61, u_61, t);
  t = v_61;
  {
    static ATerm i_62 (ATerm t);
    static ATerm i_62 (ATerm t)
    {
      ATerm u_33 = t;
      int v_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_33 = t;
          int z_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_62 = NULL;
              b_62 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = b_62;
              LocalPopChoice(z_33);
            }
          else
            {
              t = w_33;
              t = m_136(t);
              t = Cons_2_0(_id, i_62, t);
            }
          LocalPopChoice(v_33);
        }
      else
        {
          t = u_33;
          {
            ATerm e_62 = NULL,f_62 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                e_62 = ATgetFirst((ATermList) t);
                f_62 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(f_62), (ATerm) ATmakeAppl(sym_Undefined_1, e_62));
          }
        }
      return(t);
    }
    t = i_62(t);
  }
  x_61 = t;
  t = (ATerm) ATinsert(CheckATermList(x_61), (ATerm) ATmakeAppl(sym_Program_1, u_61));
  p_20 = t;
  t = SSLsetAnnotations(p_20, t_61);
  return(t);
}
static ATerm a_11 (ATerm t)
{
  ATerm g_63 = NULL;
  g_63 = t;
  if(match_string(t, "--help"))
    {
      t = g_63;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = g_63;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = g_63;
        }
    }
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm h_63 = NULL,i_63 = NULL;
  t = term_c_34;
  h_63 = t;
  t = term_p_12;
  i_63 = t;
  t = term_d_34;
  t = d_8(h_63, i_63, t);
  t = term_e_34;
  return(t);
}
static ATerm d_11 (ATerm t)
{
  t = term_f_34;
  return(t);
}
static ATerm e_11 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm j_136 (ATerm), ATerm k_136 (ATerm), ATerm l_136 (ATerm), ATerm t)
{
  ATerm n_62 = NULL,o_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL,e_63 = NULL,f_63 = NULL;
  a_63 = t;
  t = term_d_13;
  b_63 = t;
  t = term_g_34;
  t = lookup_table_0_1(b_63, t);
  f_63 = t;
  t = term_f_13;
  c_63 = t;
  t = (ATerm) ATempty;
  d_63 = t;
  t = f_63;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_8(c_63, d_63, e_63, t);
  t = a_63;
  {
    static ATerm z_10 (ATerm t);
    static ATerm z_10 (ATerm t)
    {
      ATerm h_34 = t;
      int j_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_136(t);
          LocalPopChoice(j_34);
        }
      else
        {
          t = h_34;
          {
            ATerm k_34 = t;
            int l_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(a_11, c_11, d_11, t);
                LocalPopChoice(l_34);
              }
            else
              {
                t = k_34;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(z_10, t);
  }
  {
    ATerm m_34 = t;
    int n_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_63 = NULL;
        t_63 = t;
        {
          ATerm o_34 = t;
          int p_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_17 = NULL;
              t = t_63;
              {
                ATerm q_34 = t;
                int r_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_17 = NULL,s_17 = NULL;
                    t = term_t_12;
                    p_17 = t;
                    t = term_c_34;
                    s_17 = t;
                    t = term_s_34;
                    t = a_8(p_17, s_17, t);
                    LocalPopChoice(r_34);
                  }
                else
                  {
                    t = q_34;
                    t = fetch_1_0(e_11, t);
                  }
              }
              t = t_63;
              t = k_136(t);
              t = term_c_31;
              o_17 = t;
              t = SSL_exit(o_17);
              LocalPopChoice(p_34);
            }
          else
            {
              t = o_34;
              {
                ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL;
                t = term_t_12;
                z_17 = t;
                t = term_z_32;
                a_18 = t;
                t = term_t_34;
                t = a_8(z_17, a_18, t);
                t = t_63;
                t = l_136(t);
                t = term_c_31;
                y_17 = t;
                t = SSL_exit(y_17);
              }
            }
        }
        LocalPopChoice(n_34);
      }
    else
      {
        t = m_34;
        {
          ATerm u_34 = t;
          int v_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_63 = NULL,v_63 = NULL,w_63 = NULL;
              static ATerm f_11 (ATerm t);
              static ATerm f_11 (ATerm t)
              {
                ATerm x_63 = NULL,y_63 = NULL,z_63 = NULL,r_20 = NULL;
                z_63 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    y_63 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(z_63);
                x_63 = t;
                t = y_63;
                if(((n_62 != NULL) && (n_62 != t)))
                  _fail(t);
                else
                  n_62 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, y_63);
                r_20 = t;
                t = SSLsetAnnotations(r_20, x_63);
                return(t);
              }
              t = fetch_1_0(f_11, t);
              t = term_f_21;
              v_63 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_62)), term_w_34);
              w_63 = t;
              t = SSL_printnl(v_63, w_63);
              t = (ATerm) ATmakeAppl(sym__2, term_f_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_62)), term_w_34));
              t = k_136(t);
              t = term_d_32;
              u_63 = t;
              t = SSL_exit(u_63);
              LocalPopChoice(v_34);
            }
          else
            {
              t = u_34;
            }
        }
      }
  }
  o_62 = t;
  t = term_d_13;
  t = table_destroy_0_0(t);
  t = o_62;
  return(t);
}
ATerm option_wrap_5_0 (ATerm m_134 (ATerm), ATerm n_134 (ATerm), ATerm o_134 (ATerm), ATerm p_134 (ATerm), ATerm q_134 (ATerm), ATerm t)
{
  ATerm e_64 = NULL,f_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL;
  t = parse_options_3_0(m_134, n_134, o_134, t);
  e_64 = t;
  t = term_z_34;
  t = table_create_0_0(t);
  t = term_z_34;
  f_64 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_34, term_a_35, e_64);
  t = lookup_table_0_1(f_64, t);
  i_64 = t;
  t = term_a_35;
  g_64 = t;
  t = i_64;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_8(g_64, e_64, h_64, t);
  t = e_64;
  t = p_134(t);
  {
    ATerm d_35 = t;
    int e_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_134(t);
        t = report_success_0_0(t);
        LocalPopChoice(e_35);
      }
    else
      {
        t = d_35;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm l_11 (ATerm t)
{
  t = if_verbose2_1_0(v_11, t);
  return(t);
}
static ATerm p_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm j_64 = NULL,k_64 = NULL;
  t = term_h_35;
  j_64 = t;
  t = term_p_12;
  k_64 = t;
  t = term_i_35;
  t = d_8(j_64, k_64, t);
  t = term_j_35;
  return(t);
}
static ATerm t_11 (ATerm t)
{
  t = term_k_35;
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL;
  l_64 = t;
  t = term_t_12;
  p_64 = t;
  t = term_u_12;
  q_64 = t;
  t = term_x_12;
  t = a_8(p_64, q_64, t);
  m_64 = t;
  t = term_f_21;
  n_64 = t;
  t = (ATerm) ATinsert(ATempty, m_64);
  o_64 = t;
  t = SSL_printnl(n_64, o_64);
  t = l_64;
  return(t);
}
ATerm iowrap_3_0 (ATerm p_133 (ATerm), ATerm q_133 (ATerm), ATerm r_133 (ATerm), ATerm t)
{
  static ATerm i_11 (ATerm t);
  static ATerm o_11 (ATerm t);
  static ATerm i_11 (ATerm t)
  {
    ATerm l_35 = t;
    int m_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_133(t);
        LocalPopChoice(m_35);
      }
    else
      {
        t = l_35;
        {
          ATerm n_35 = t;
          int q_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(q_35);
            }
          else
            {
              t = n_35;
              {
                ATerm r_35 = t;
                int s_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(s_35);
                  }
                else
                  {
                    t = r_35;
                    {
                      ATerm t_35 = t;
                      int u_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(p_11, q_11, t_11, t);
                          LocalPopChoice(u_35);
                        }
                      else
                        {
                          t = t_35;
                          {
                            ATerm w_35 = t;
                            int x_35 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(x_35);
                              }
                            else
                              {
                                t = w_35;
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
  static ATerm o_11 (ATerm t)
  {
    ATerm r_64 = NULL,s_64 = NULL,t_64 = NULL;
    s_64 = t;
    {
      ATerm y_35 = t;
      int z_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm w_11 (ATerm t);
          static ATerm w_11 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((r_64 != NULL) && (r_64 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_64 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(w_11, t);
          LocalPopChoice(z_35);
        }
      else
        {
          t = y_35;
          t = term_c_36;
          r_64 = t;
        }
    }
    t = not_null(r_64);
    t = ReadFromFile_0_0(t);
    t_64 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_64, t_64);
    t = apply_strategy_1_0(p_133, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_5_0(i_11, r_133, default_system_about_0_0, l_11, o_11, t);
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm u_64 = NULL,v_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL,b_65 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL,x_20 = NULL,w_20 = NULL,v_20 = NULL,t_20 = NULL;
  i_65 = t;
  if(match_cons(t, sym__2))
    {
      v_64 = ATgetArgument(t, 0);
      w_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_65);
  u_64 = t;
  t = w_64;
  if(match_cons(t, sym_Specification_1))
    {
      y_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_64);
  x_64 = t;
  t = y_64;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_65 = ATgetFirst((ATermList) t);
      c_65 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_64);
  a_65 = t;
  t = b_65;
  if(match_cons(t, sym_Signature_1))
    {
      g_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_65);
  f_65 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, g_65);
  t_20 = t;
  t = SSLsetAnnotations(t_20, f_65);
  h_65 = t;
  t = c_65;
  t = Cons_2_0(i_12, k_12, t);
  d_65 = t;
  t = (ATerm) ATinsert(CheckATermList(d_65), h_65);
  v_20 = t;
  t = SSLsetAnnotations(v_20, a_65);
  e_65 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, e_65);
  w_20 = t;
  t = SSLsetAnnotations(w_20, x_64);
  z_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_64, z_64);
  x_20 = t;
  t = SSLsetAnnotations(x_20, u_64);
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm j_65 = NULL,k_65 = NULL,l_65 = NULL,m_65 = NULL,u_20 = NULL;
  m_65 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      k_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_65);
  j_65 = t;
  t = k_65;
  t = map_1_0(l_12, t);
  l_65 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, l_65);
  u_20 = t;
  t = SSLsetAnnotations(u_20, j_65);
  return(t);
}
static ATerm k_12 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm l_12 (ATerm t)
{
  t = scope_2_0(m_12, n_12, t);
  return(t);
}
static ATerm m_12 (ATerm t)
{
  t = term_c_14;
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = scope_2_0(o_12, cp_0_0, t);
  return(t);
}
static ATerm o_12 (ATerm t)
{
  t = term_s_13;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(g_12, _fail, default_system_usage_0_0, t);
  return(t);
}

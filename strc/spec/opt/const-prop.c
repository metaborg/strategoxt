#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Some_1;
static Symbol sym_Signature_1;
static Symbol sym_Strategies_1;
static Symbol sym_Specification_1;
static Symbol sym_As_2;
static Symbol sym_Wld_0;
static Symbol sym_Var_1;
static Symbol sym_Var_1;
static Symbol sym_GChoice_2;
static Symbol sym_Choice_2;
static Symbol sym_Thread_1;
static Symbol sym_All_1;
static Symbol sym_One_1;
static Symbol sym_Some_1;
static Symbol sym_Path_2;
static Symbol sym_PrimT_3;
static Symbol sym_Bagof_1;
static Symbol sym_Not_1;
static Symbol sym_Rec_2;
static Symbol sym_GuardedLChoice_3;
static Symbol sym_LChoice_2;
static Symbol sym_Seq_2;
static Symbol sym_Scope_2;
static Symbol sym_Build_1;
static Symbol sym_Match_1;
static Symbol sym_CallT_3;
static Symbol sym_Let_2;
static Symbol sym_Fail_0;
static Symbol sym_VarDec_2;
static Symbol sym_SDefT_4;
static Symbol sym_Defined_0;
static Symbol sym_Defined_1;
static Symbol sym_Defined_2;
static Symbol sym_Defined_3;
static Symbol sym_Defined_4;
static Symbol sym_Defined_5;
static Symbol sym_Defined_6;
static Symbol sym_Defined_7;
static Symbol sym_Defined_8;
static Symbol sym_Defined_9;
static Symbol sym_Defined_10;
static Symbol sym_Undefined_0;
static Symbol sym_Scopes_0;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_Some_1;
static Symbol sym_Stream_1;
static Symbol sym_Path_1;
static Symbol sym_stdin_0;
static Symbol sym_stdout_0;
static Symbol sym_stderr_0;
static Symbol sym_Hashtable_1;
static Symbol sym_Var_1;
static Symbol sym_Path_1;
static Symbol sym_Verbose_1;
static Symbol sym_Version_0;
static Symbol sym_Input_1;
static Symbol sym_Output_1;
static Symbol sym_Binary_0;
static Symbol sym_Statistics_0;
static Symbol sym_Help_0;
static Symbol sym_Program_1;
static Symbol sym_Undefined_1;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Some_1;
static Symbol sym_Signature_1;
static Symbol sym_Strategies_1;
static Symbol sym_Specification_1;
static Symbol sym_As_2;
static Symbol sym_Wld_0;
static Symbol sym_Var_1;
static Symbol sym_Var_1;
static Symbol sym_GChoice_2;
static Symbol sym_Choice_2;
static Symbol sym_Thread_1;
static Symbol sym_All_1;
static Symbol sym_One_1;
static Symbol sym_Some_1;
static Symbol sym_Path_2;
static Symbol sym_PrimT_3;
static Symbol sym_Bagof_1;
static Symbol sym_Not_1;
static Symbol sym_Rec_2;
static Symbol sym_GuardedLChoice_3;
static Symbol sym_LChoice_2;
static Symbol sym_Seq_2;
static Symbol sym_Scope_2;
static Symbol sym_Build_1;
static Symbol sym_Match_1;
static Symbol sym_CallT_3;
static Symbol sym_Let_2;
static Symbol sym_Fail_0;
static Symbol sym_VarDec_2;
static Symbol sym_SDefT_4;
static Symbol sym_Cong_2;
static void init_module_constructors (void)
{
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
static ATerm term_b_35;
static ATerm term_z_34;
static ATerm term_y_34;
static ATerm term_j_34;
static ATerm term_h_34;
static ATerm term_g_34;
static ATerm term_b_34;
static ATerm term_a_34;
static ATerm term_h_33;
static ATerm term_g_33;
static ATerm term_f_33;
static ATerm term_e_33;
static ATerm term_d_33;
static ATerm term_y_32;
static ATerm term_q_32;
static ATerm term_n_32;
static ATerm term_j_32;
static ATerm term_i_32;
static ATerm term_h_32;
static ATerm term_g_32;
static ATerm term_f_32;
static ATerm term_c_32;
static ATerm term_b_32;
static ATerm term_y_31;
static ATerm term_x_31;
static ATerm term_n_31;
static ATerm term_m_31;
static ATerm term_k_31;
static ATerm term_f_31;
static ATerm term_z_30;
static ATerm term_v_30;
static ATerm term_u_30;
static ATerm term_t_30;
static ATerm term_q_30;
static ATerm term_p_30;
static ATerm term_o_30;
static ATerm term_n_30;
static ATerm term_m_30;
static ATerm term_l_30;
static ATerm term_e_30;
static ATerm term_w_29;
static ATerm term_v_29;
static ATerm term_q_29;
static ATerm term_p_29;
static ATerm term_i_29;
static ATerm term_c_29;
static ATerm term_b_29;
static ATerm term_w_28;
static ATerm term_v_28;
static ATerm term_u_28;
static ATerm term_t_28;
static ATerm term_s_28;
static ATerm term_p_28;
static ATerm term_o_28;
static ATerm term_r_27;
static ATerm term_q_27;
static ATerm term_h_27;
static ATerm term_g_27;
static ATerm term_f_27;
static ATerm term_y_26;
static ATerm term_u_26;
static ATerm term_q_24;
static ATerm term_m_24;
static ATerm term_l_24;
static ATerm term_i_24;
static ATerm term_a_24;
static ATerm term_g_23;
static ATerm term_f_19;
static ATerm term_b_19;
static ATerm term_a_19;
static ATerm term_z_18;
static ATerm term_y_18;
static ATerm term_v_18;
static ATerm term_r_18;
static ATerm term_o_18;
static ATerm term_h_12;
static ATerm term_g_12;
static ATerm term_e_12;
static ATerm term_x_11;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_e_12);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym__2, term_y_18, term_z_18);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym__2, term_g_12, (ATerm) ATempty);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("no match with current term: ", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("strat: ", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("current: ", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym__2, term_y_18, term_f_27);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(sym__2, term_y_18, term_q_27);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym__2, term_y_18, term_s_28);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym__2, term_y_18, term_v_28);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(sym__2, term_p_29, term_q_29);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym__2, term_z_18, term_m_30);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_30);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(sym__2, term_t_30, term_b_29);
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym__2, term_f_32, term_b_29);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym__2, term_i_32, term_b_29);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym__2, term_d_33, term_b_29);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(sym__3, term_p_29, term_q_29, (ATerm) ATempty);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym__2, term_y_18, term_d_33);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym__2, term_y_18, term_f_32);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(sym__2, term_q_27, term_b_29);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm a_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm j_6 (ATerm n_115 (ATerm), ATerm j_24, ATerm k_24, ATerm t);
static ATerm u_0 (ATerm t);
static ATerm k_6 (ATerm l_115 (ATerm), ATerm t);
static ATerm v_0 (ATerm t);
static ATerm x_0 (ATerm t);
ATerm exec_maybe_1_0 (ATerm e_115 (ATerm), ATerm t);
static ATerm u_1 (ATerm t);
static ATerm m_6 (ATerm o_115 (ATerm), ATerm t);
static ATerm i_2 (ATerm t);
static ATerm p_5 (ATerm f_4, ATerm h_4, ATerm i_4, ATerm t);
ATerm isect_CurrentTerm_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm m_10 (ATerm h_8, ATerm r_8, ATerm t_8, ATerm t);
ATerm isect_Binding_0_0 (ATerm t);
static ATerm n_6 (ATerm h_66, ATerm g_66, ATerm t);
ATerm save_CurrentTerm_0_0 (ATerm t);
static ATerm o_6 (ATerm a_70, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_Binding_0_0 (ATerm t);
ATerm prop_abstract_choice_2_0 (ATerm s_115 (ATerm), ATerm t_115 (ATerm), ATerm t);
ATerm prop_choice_1_0 (ATerm r_115 (ATerm), ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm prop_traversal_1_0 (ATerm w_0 (ATerm), ATerm t);
static ATerm p_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm prop_call_1_0 (ATerm t_0 (ATerm), ATerm t);
static ATerm b_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm p_6 (ATerm m_115 (ATerm), ATerm e_24, ATerm t);
static ATerm m_5 (ATerm t);
ATerm prop_build_0_0 (ATerm t);
static ATerm q_6 (ATerm a_116 (ATerm), ATerm b_26, ATerm z_25, ATerm t);
ATerm oncetd_1_0 (ATerm c_122 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm z_126 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm s_144 (ATerm), ATerm t);
static ATerm n_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm r_6 (ATerm x_24, ATerm y_24, ATerm t);
ATerm lookup_0_0 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm a_150 (ATerm), ATerm b_150 (ATerm), ATerm t);
static ATerm c_7 (ATerm i_156 (ATerm), ATerm y_90, ATerm z_90, ATerm b_91, ATerm a_91, ATerm t);
ATerm at_end_1_0 (ATerm y_127 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm v_26 (ATerm l_26, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm l_129 (ATerm), ATerm m_129 (ATerm), ATerm n_129 (ATerm), ATerm o_129 (ATerm), ATerm t);
static ATerm l_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm v_6 (ATerm d_947, ATerm i_947, ATerm a_92, ATerm t);
ATerm while_not_2_0 (ATerm p_120 (ATerm), ATerm q_120 (ATerm), ATerm t);
ATerm for_3_0 (ATerm s_120 (ATerm), ATerm t_120 (ATerm), ATerm u_120 (ATerm), ATerm t);
static ATerm u_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm y_37 (ATerm m_32, ATerm o_32, ATerm p_32, ATerm t);
static ATerm a_38 (ATerm l_33, ATerm m_33, ATerm n_33, ATerm t);
static ATerm b_38 (ATerm c_34, ATerm d_34, ATerm i_34, ATerm t);
static ATerm d_38 (ATerm c_35, ATerm j_35, ATerm m_35, ATerm t);
static ATerm h_38 (ATerm w_35, ATerm b_36, ATerm f_36, ATerm t);
static ATerm a_7 (ATerm t);
ATerm prop_pattern_match_0_0 (ATerm t);
ATerm CurrentTerm_0_0 (ATerm t);
static ATerm f_7 (ATerm p_65, ATerm q_65, ATerm t);
ATerm Binding_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm q_122 (ATerm), ATerm t);
static ATerm b_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm prop_match_0_0 (ATerm t);
ATerm cp_0_0 (ATerm t);
static ATerm g_7 (ATerm j_65, ATerm k_65, ATerm t);
ATerm end_scope_1_0 (ATerm x_115 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm u_119 (ATerm), ATerm v_119 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm w_115 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm y_115 (ATerm), ATerm z_115 (ATerm), ATerm t);
ATerm map_1_0 (ATerm j_127 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm b_92 (ATerm), ATerm c_92 (ATerm), ATerm t);
static ATerm h_7 (ATerm s_59, ATerm t_59, ATerm t);
static ATerm i_7 (ATerm v_43, ATerm w_43, ATerm t);
static ATerm k_7 (ATerm b_127 (ATerm), ATerm u_305, ATerm b_44, ATerm t);
static ATerm j_7 (ATerm r_43, ATerm s_43, ATerm t);
static ATerm c_8 (ATerm t);
static ATerm e_8 (ATerm t);
ATerm output_1_0 (ATerm u_147 (ATerm), ATerm t);
static ATerm q_47 (ATerm k_47, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm l_7 (ATerm x_43, ATerm t);
static ATerm m_7 (ATerm y_57, ATerm z_57, ATerm t);
static ATerm n_7 (ATerm u_59, ATerm v_59, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm b_49 (ATerm a_48, ATerm t);
static ATerm c_49 (ATerm e_48, ATerm f_48, ATerm g_48, ATerm t);
static ATerm d_49 (ATerm o_48, ATerm p_48, ATerm q_48, ATerm t);
static ATerm o_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm v_147 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm i_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
ATerm default_system_usage_2_0 (ATerm t_149 (ATerm), ATerm u_149 (ATerm), ATerm t);
static ATerm n_8 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm u_8 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm n_9 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm x_7 (ATerm y_79, ATerm z_79, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm v_7 (ATerm e_65, ATerm f_65, ATerm d_65, ATerm t);
ATerm ArgOption_3_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm p_7 (ATerm n_63, ATerm o_63, ATerm t);
ATerm foldr_2_0 (ATerm g_134 (ATerm), ATerm h_134 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm q_144 (ATerm), ATerm t);
static ATerm b_10 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm y_7 (ATerm t_69, ATerm u_69, ATerm v_69, ATerm t);
ATerm lookup_table_0_1 (ATerm q_66, ATerm t);
ATerm new_hashtable_0_2 (ATerm b_70, ATerm c_70, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm r_7 (ATerm y_69, ATerm z_69, ATerm t);
static ATerm s_7 (ATerm d_70, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm r_127 (ATerm), ATerm t);
static ATerm z_7 (ATerm w_69, ATerm x_69, ATerm t);
static ATerm u_7 (ATerm x_66, ATerm y_66, ATerm t);
static ATerm c_10 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm i_10 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm o_149 (ATerm), ATerm t);
static ATerm l_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm u_10 (ATerm t);
ATerm parse_options_3_0 (ATerm l_149 (ATerm), ATerm m_149 (ATerm), ATerm n_149 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm o_147 (ATerm), ATerm p_147 (ATerm), ATerm q_147 (ATerm), ATerm r_147 (ATerm), ATerm s_147 (ATerm), ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm w_11 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  t = term_x_11;
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      o_1 = ATgetArgument(t, 0);
      {
        ATerm y_11 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  p_1 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, o_1);
  q_1 = t;
  t = term_e_12;
  r_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, o_1), term_e_12);
  t = q_6(q_0, q_1, r_1, t);
  t = p_1;
  return(t);
}
static ATerm q_0 (ATerm t)
{
  t = term_x_11;
  return(t);
}
static ATerm r_0 (ATerm t)
{
  t = term_g_12;
  return(t);
}
static ATerm j_6 (ATerm n_115 (ATerm), ATerm j_24, ATerm k_24, ATerm t)
{
  static ATerm c_0 (ATerm t);
  static ATerm c_0 (ATerm t)
  {
    ATerm y_0 = NULL,z_0 = NULL,c_1 = NULL,d_1 = NULL,f_1 = NULL,g_1 = NULL,i_1 = NULL,j_1 = NULL,l_1 = NULL,n_0 = NULL;
    y_0 = t;
    t = k_24;
    t = map_1_0(p_0, t);
    t = y_0;
    if(match_cons(t, sym_SDefT_4))
      {
        c_1 = ATgetArgument(t, 0);
        d_1 = ATgetArgument(t, 1);
        f_1 = ATgetArgument(t, 2);
        g_1 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(y_0);
    z_0 = t;
    t = (ATerm) ATempty;
    j_1 = t;
    t = term_e_12;
    l_1 = t;
    t = term_h_12;
    t = q_6(r_0, j_1, l_1, t);
    t = g_1;
    t = n_115(t);
    i_1 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, c_1, d_1, f_1, i_1);
    n_0 = t;
    t = SSLsetAnnotations(n_0, z_0);
    return(t);
  }
  t = scope_2_0(a_0, c_0, t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = term_g_12;
  return(t);
}
static ATerm k_6 (ATerm l_115 (ATerm), ATerm t)
{
  ATerm s_1 = NULL,t_1 = NULL,v_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL,o_4 = NULL;
  s_1 = t;
  t = (ATerm) ATempty;
  t_1 = t;
  t = term_e_12;
  v_1 = t;
  t = term_h_12;
  t = q_6(u_0, t_1, v_1, t);
  t = s_1;
  if(match_cons(t, sym_Not_1))
    {
      x_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_1);
  w_1 = t;
  t = x_1;
  t = exec_maybe_1_0(l_115, t);
  y_1 = t;
  t = (ATerm) ATmakeAppl(sym_Not_1, y_1);
  o_4 = t;
  t = SSLsetAnnotations(o_4, w_1);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_g_12;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = term_g_12;
  return(t);
}
ATerm exec_maybe_1_0 (ATerm e_115 (ATerm), ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL;
  b_2 = t;
  t = (ATerm) ATempty;
  f_2 = t;
  t = term_e_12;
  g_2 = t;
  t = term_h_12;
  t = q_6(v_0, f_2, g_2, t);
  t = b_2;
  t = save_Binding_0_0(t);
  z_1 = t;
  t = b_2;
  t = e_115(t);
  a_2 = t;
  t = (ATerm) ATempty;
  d_2 = t;
  t = term_e_12;
  e_2 = t;
  t = term_h_12;
  t = q_6(x_0, d_2, e_2, t);
  t = term_x_11;
  t = table_destroy_0_0(t);
  t = term_x_11;
  c_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_11, z_1);
  t = n_6(c_2, z_1, t);
  t = a_2;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_g_12;
  return(t);
}
static ATerm m_6 (ATerm o_115 (ATerm), ATerm t)
{
  ATerm h_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,p_2 = NULL,r_2 = NULL,s_2 = NULL,w_2 = NULL,c_5 = NULL;
  k_2 = t;
  t = save_Binding_0_0(t);
  j_2 = t;
  t = save_CurrentTerm_0_0(t);
  h_2 = t;
  t = k_2;
  if(match_cons(t, sym_Let_2))
    {
      m_2 = ATgetArgument(t, 0);
      n_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_2);
  l_2 = t;
  t = m_2;
  {
    static ATerm n_1 (ATerm t);
    static ATerm n_1 (ATerm t)
    {
      ATerm y_2 = NULL,a_3 = NULL,c_3 = NULL,d_3 = NULL;
      y_2 = t;
      t = (ATerm) ATempty;
      c_3 = t;
      t = term_e_12;
      d_3 = t;
      t = term_h_12;
      t = q_6(u_1, c_3, d_3, t);
      t = term_x_11;
      t = table_destroy_0_0(t);
      t = term_x_11;
      a_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_x_11, j_2);
      t = n_6(a_3, j_2, t);
      t = y_2;
      t = o_115(t);
      return(t);
    }
    t = map_1_0(n_1, t);
  }
  p_2 = t;
  t = term_g_12;
  t = table_destroy_0_0(t);
  t = term_g_12;
  w_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_12, h_2);
  t = n_6(w_2, h_2, t);
  t = term_x_11;
  t = table_destroy_0_0(t);
  t = term_x_11;
  s_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_11, j_2);
  t = n_6(s_2, j_2, t);
  t = n_2;
  t = o_115(t);
  r_2 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, p_2, r_2);
  c_5 = t;
  t = SSLsetAnnotations(c_5, l_2);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm s_4 = NULL,u_4 = NULL,v_4 = NULL,x_4 = NULL,z_4 = NULL;
  z_4 = t;
  if(match_cons(t, sym__2))
    {
      s_4 = ATgetArgument(t, 0);
      u_4 = ATgetArgument(t, 1);
      t = u_4;
      {
        ATerm i_12 = t;
        int j_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_4 = ATgetFirst((ATermList) t);
                {
                  ATerm k_12 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(j_12);
            t = v_4;
            {
              ATerm n_12 = t;
              int r_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm s_12 = ATgetArgument(t, 0);
                      x_4 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(r_12);
                  t = s_4;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = z_4;
                    }
                  else
                    {
                      ATerm v_12 = t;
                      int a_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = p_5(s_4, x_4, z_4, t);
                          LocalPopChoice(a_13);
                        }
                      else
                        {
                          t = v_12;
                          t = z_4;
                        }
                    }
                }
              else
                {
                  t = n_12;
                  t = s_4;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = z_4;
                    }
                  else
                    {
                      t = z_4;
                    }
                }
            }
          }
        else
          {
            t = i_12;
            t = s_4;
            if(match_cons(t, sym_Scopes_0))
              {
                t = z_4;
              }
            else
              {
                t = z_4;
              }
          }
      }
    }
  else
    {
      t = z_4;
    }
  return(t);
}
static ATerm p_5 (ATerm f_4, ATerm h_4, ATerm i_4, ATerm t)
{
  t = i_4;
  {
    ATerm c_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_0 = NULL;
        t = term_g_12;
        i_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_g_12, f_4);
        t = u_7(i_0, f_4, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_13 = ATgetFirst((ATermList) t);
            if(match_cons(e_13, sym_Defined_2))
              {
                ATerm m_13 = ATgetArgument(e_13, 0);
                if((h_4 != ATgetArgument(e_13, 1)))
                  {
                    _fail(ATgetArgument(e_13, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm l_13 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = i_4;
        LocalPopChoice(d_13);
      }
    else
      {
        t = c_13;
        t = (ATerm) ATmakeAppl(sym__2, f_4, (ATerm) ATinsert(ATempty, term_e_12));
      }
  }
  return(t);
}
ATerm isect_CurrentTerm_0_0 (ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL;
  t = map_1_0(i_2, t);
  v_3 = t;
  t = term_g_12;
  t = table_destroy_0_0(t);
  t = term_g_12;
  w_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_12, v_3);
  t = n_6(w_3, v_3, t);
  t = v_3;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm h_9 = NULL,i_9 = NULL,k_9 = NULL,m_9 = NULL,u_9 = NULL;
  u_9 = t;
  if(match_cons(t, sym__2))
    {
      h_9 = ATgetArgument(t, 0);
      i_9 = ATgetArgument(t, 1);
      t = i_9;
      {
        ATerm u_13 = t;
        int v_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_9 = ATgetFirst((ATermList) t);
                {
                  ATerm x_13 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(v_13);
            t = k_9;
            {
              ATerm y_13 = t;
              int b_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm c_14 = ATgetArgument(t, 0);
                      m_9 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(b_14);
                  t = h_9;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = u_9;
                    }
                  else
                    {
                      ATerm d_14 = t;
                      int e_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = m_10(h_9, m_9, u_9, t);
                          LocalPopChoice(e_14);
                        }
                      else
                        {
                          t = d_14;
                          t = u_9;
                        }
                    }
                }
              else
                {
                  t = y_13;
                  t = h_9;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = u_9;
                    }
                  else
                    {
                      t = u_9;
                    }
                }
            }
          }
        else
          {
            t = u_13;
            t = h_9;
            if(match_cons(t, sym_Scopes_0))
              {
                t = u_9;
              }
            else
              {
                t = u_9;
              }
          }
      }
    }
  else
    {
      t = u_9;
    }
  return(t);
}
static ATerm m_10 (ATerm h_8, ATerm r_8, ATerm t_8, ATerm t)
{
  t = t_8;
  {
    ATerm g_14 = t;
    int h_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_0 = NULL;
        t = term_x_11;
        s_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_11, h_8);
        t = u_7(s_0, h_8, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm n_14 = ATgetFirst((ATermList) t);
            if(match_cons(n_14, sym_Defined_2))
              {
                ATerm u_14 = ATgetArgument(n_14, 0);
                if((r_8 != ATgetArgument(n_14, 1)))
                  {
                    _fail(ATgetArgument(n_14, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm t_14 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = t_8;
        LocalPopChoice(h_14);
      }
    else
      {
        t = g_14;
        t = (ATerm) ATmakeAppl(sym__2, h_8, (ATerm) ATinsert(ATempty, term_e_12));
      }
  }
  return(t);
}
ATerm isect_Binding_0_0 (ATerm t)
{
  ATerm d_8 = NULL,g_8 = NULL;
  t = map_1_0(h_3, t);
  d_8 = t;
  t = term_x_11;
  t = table_destroy_0_0(t);
  t = term_x_11;
  g_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_11, d_8);
  t = n_6(g_8, d_8, t);
  t = d_8;
  return(t);
}
static ATerm n_6 (ATerm h_66, ATerm g_66, ATerm t)
{
  static ATerm i_3 (ATerm t);
  static ATerm i_3 (ATerm t)
  {
    ATerm p_10 = NULL,q_10 = NULL,s_10 = NULL;
    if(match_cons(t, sym__2))
      {
        p_10 = ATgetArgument(t, 0);
        q_10 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, h_66, p_10, q_10);
    t = lookup_table_0_1(h_66, t);
    if(match_cons(t, sym_Hashtable_1))
      {
        s_10 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = y_7(p_10, q_10, s_10, t);
    t = (ATerm) ATmakeAppl(sym__3, h_66, p_10, q_10);
    return(t);
  }
  t = g_66;
  t = map_1_0(i_3, t);
  return(t);
}
ATerm save_CurrentTerm_0_0 (ATerm t)
{
  t = term_g_12;
  t = table_getlist_0_0(t);
  return(t);
}
static ATerm o_6 (ATerm a_70, ATerm t)
{
  t = SSL_hashtable_keys(a_70);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm y_10 = NULL,f_11 = NULL;
  static ATerm j_3 (ATerm t);
  static ATerm j_3 (ATerm t)
  {
    ATerm h_11 = NULL,i_11 = NULL;
    h_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_10), h_11);
    t = u_7(not_null(y_10), h_11, t);
    i_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_11, i_11);
    return(t);
  }
  if(((y_10 != NULL) && (y_10 != t)))
    _fail(t);
  else
    y_10 = t;
  t = lookup_table_0_1(y_10, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_6(f_11, t);
  t = map_1_0(j_3, t);
  return(t);
}
ATerm save_Binding_0_0 (ATerm t)
{
  t = term_x_11;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm prop_abstract_choice_2_0 (ATerm s_115 (ATerm), ATerm t_115 (ATerm), ATerm t)
{
  ATerm j_11 = NULL,o_11 = NULL,p_11 = NULL,v_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL;
  b_12 = t;
  t = save_Binding_0_0(t);
  j_11 = t;
  t = save_CurrentTerm_0_0(t);
  o_11 = t;
  t = b_12;
  t = s_115(t);
  a_12 = t;
  t = save_Binding_0_0(t);
  p_11 = t;
  t = term_x_11;
  t = table_destroy_0_0(t);
  t = term_x_11;
  d_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_11, j_11);
  t = n_6(d_12, j_11, t);
  t = j_11;
  t = save_CurrentTerm_0_0(t);
  v_11 = t;
  t = term_g_12;
  t = table_destroy_0_0(t);
  t = term_g_12;
  c_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_12, o_11);
  t = n_6(c_12, o_11, t);
  t = a_12;
  t = t_115(t);
  z_11 = t;
  t = p_11;
  t = isect_Binding_0_0(t);
  t = v_11;
  t = isect_CurrentTerm_0_0(t);
  t = z_11;
  return(t);
}
ATerm prop_choice_1_0 (ATerm r_115 (ATerm), ATerm t)
{
  ATerm f_12 = NULL;
  f_12 = t;
  {
    ATerm z_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Choice_2))
          {
            ATerm f_15 = ATgetArgument(t, 0);
            ATerm g_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(a_15);
        {
          static ATerm x_3 (ATerm t);
          static ATerm y_3 (ATerm t);
          static ATerm x_3 (ATerm t)
          {
            ATerm l_12 = NULL,m_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,i_5 = NULL;
            q_12 = t;
            if(match_cons(t, sym_Choice_2))
              {
                m_12 = ATgetArgument(t, 0);
                o_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(q_12);
            l_12 = t;
            t = m_12;
            t = r_115(t);
            p_12 = t;
            t = (ATerm) ATmakeAppl(sym_Choice_2, p_12, o_12);
            i_5 = t;
            t = SSLsetAnnotations(i_5, l_12);
            return(t);
          }
          static ATerm y_3 (ATerm t)
          {
            ATerm t_12 = NULL,u_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,q_5 = NULL;
            z_12 = t;
            if(match_cons(t, sym_Choice_2))
              {
                u_12 = ATgetArgument(t, 0);
                x_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(z_12);
            t_12 = t;
            t = x_12;
            t = r_115(t);
            y_12 = t;
            t = (ATerm) ATmakeAppl(sym_Choice_2, u_12, y_12);
            q_5 = t;
            t = SSLsetAnnotations(q_5, t_12);
            return(t);
          }
          t = f_12;
          t = prop_abstract_choice_2_0(x_3, y_3, t);
        }
      }
    else
      {
        t = z_14;
        {
          ATerm k_15 = t;
          int l_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_GChoice_2))
                {
                  ATerm t_15 = ATgetArgument(t, 0);
                  ATerm u_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(l_15);
              {
                static ATerm z_3 (ATerm t);
                static ATerm a_4 (ATerm t);
                static ATerm z_3 (ATerm t)
                {
                  ATerm b_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,s_5 = NULL;
                  i_13 = t;
                  if(match_cons(t, sym_GChoice_2))
                    {
                      f_13 = ATgetArgument(t, 0);
                      g_13 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(i_13);
                  b_13 = t;
                  t = f_13;
                  t = r_115(t);
                  h_13 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, h_13, g_13);
                  s_5 = t;
                  t = SSLsetAnnotations(s_5, b_13);
                  return(t);
                }
                static ATerm a_4 (ATerm t)
                {
                  ATerm j_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,t_5 = NULL;
                  q_13 = t;
                  if(match_cons(t, sym_GChoice_2))
                    {
                      n_13 = ATgetArgument(t, 0);
                      o_13 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(q_13);
                  j_13 = t;
                  t = o_13;
                  t = r_115(t);
                  p_13 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, n_13, p_13);
                  t_5 = t;
                  t = SSLsetAnnotations(t_5, j_13);
                  return(t);
                }
                t = f_12;
                t = prop_abstract_choice_2_0(z_3, a_4, t);
              }
            }
          else
            {
              t = k_15;
              {
                ATerm v_15 = t;
                int z_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_LChoice_2))
                      {
                        ATerm a_16 = ATgetArgument(t, 0);
                        ATerm b_16 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(z_15);
                    {
                      static ATerm c_4 (ATerm t);
                      static ATerm d_4 (ATerm t);
                      static ATerm c_4 (ATerm t)
                      {
                        ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL,z_13 = NULL,f_14 = NULL,u_5 = NULL;
                        f_14 = t;
                        if(match_cons(t, sym_LChoice_2))
                          {
                            s_13 = ATgetArgument(t, 0);
                            t_13 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(f_14);
                        r_13 = t;
                        t = s_13;
                        t = r_115(t);
                        z_13 = t;
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, z_13, t_13);
                        u_5 = t;
                        t = SSLsetAnnotations(u_5, r_13);
                        return(t);
                      }
                      static ATerm d_4 (ATerm t)
                      {
                        ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,v_5 = NULL;
                        m_14 = t;
                        if(match_cons(t, sym_LChoice_2))
                          {
                            j_14 = ATgetArgument(t, 0);
                            k_14 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(m_14);
                        i_14 = t;
                        t = k_14;
                        t = r_115(t);
                        l_14 = t;
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, j_14, l_14);
                        v_5 = t;
                        t = SSLsetAnnotations(v_5, i_14);
                        return(t);
                      }
                      t = f_12;
                      t = prop_abstract_choice_2_0(c_4, d_4, t);
                    }
                  }
                else
                  {
                    t = v_15;
                    {
                      static ATerm g_4 (ATerm t);
                      static ATerm j_4 (ATerm t);
                      static ATerm g_4 (ATerm t)
                      {
                        ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,h_15 = NULL,c_6 = NULL,b_6 = NULL;
                        h_15 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            y_14 = ATgetArgument(t, 0);
                            b_15 = ATgetArgument(t, 1);
                            c_15 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(h_15);
                        x_14 = t;
                        t = y_14;
                        t = r_115(t);
                        d_15 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, d_15, b_15, c_15);
                        b_6 = t;
                        t = SSLsetAnnotations(b_6, x_14);
                        e_15 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            p_14 = ATgetArgument(t, 0);
                            q_14 = ATgetArgument(t, 1);
                            r_14 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(e_15);
                        o_14 = t;
                        t = q_14;
                        t = r_115(t);
                        w_14 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, p_14, w_14, r_14);
                        c_6 = t;
                        t = SSLsetAnnotations(c_6, o_14);
                        return(t);
                      }
                      static ATerm j_4 (ATerm t)
                      {
                        ATerm i_15 = NULL,j_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,d_6 = NULL;
                        r_15 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            j_15 = ATgetArgument(t, 0);
                            o_15 = ATgetArgument(t, 1);
                            p_15 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(r_15);
                        i_15 = t;
                        t = p_15;
                        t = r_115(t);
                        q_15 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, j_15, o_15, q_15);
                        d_6 = t;
                        t = SSLsetAnnotations(d_6, i_15);
                        return(t);
                      }
                      if(match_cons(t, sym_GuardedLChoice_3))
                        {
                          ATerm d_16 = ATgetArgument(t, 0);
                          ATerm f_16 = ATgetArgument(t, 1);
                          ATerm h_16 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = f_12;
                      t = prop_abstract_choice_2_0(g_4, j_4, t);
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
  t = term_g_12;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_g_12;
  return(t);
}
ATerm prop_traversal_1_0 (ATerm w_0 (ATerm), ATerm t)
{
  ATerm j_16 = t;
  int t_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_16 = NULL,a_1 = NULL,b_1 = NULL,e_1 = NULL,h_1 = NULL,k_1 = NULL,m_1 = NULL,k_8 = NULL;
      s_16 = t;
      if(match_cons(t, sym_Cong_2))
        {
          ATerm u_16 = ATgetArgument(t, 0);
          ATerm y_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      a_1 = t;
      t = term_e_12;
      b_1 = t;
      t = term_h_12;
      t = q_6(k_4, a_1, b_1, t);
      t = s_16;
      if(match_cons(t, sym_Cong_2))
        {
          h_1 = ATgetArgument(t, 0);
          k_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_16);
      e_1 = t;
      t = k_1;
      {
        static ATerm l_4 (ATerm t);
        static ATerm l_4 (ATerm t)
        {
          t = exec_maybe_1_0(w_0, t);
          return(t);
        }
        t = map_1_0(l_4, t);
      }
      m_1 = t;
      t = (ATerm) ATmakeAppl(sym_Cong_2, h_1, m_1);
      k_8 = t;
      t = SSLsetAnnotations(k_8, e_1);
      LocalPopChoice(t_16);
    }
  else
    {
      t = j_16;
      {
        ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL;
        static ATerm n_4 (ATerm t);
        static ATerm n_4 (ATerm t)
        {
          t = exec_maybe_1_0(w_0, t);
          return(t);
        }
        ATerm z_16 = t;
        int b_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_All_1))
              {
                ATerm c_17 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(b_17);
          }
        else
          {
            t = z_16;
            {
              ATerm a_17 = NULL;
              a_17 = t;
              {
                ATerm d_17 = t;
                int e_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_One_1))
                      {
                        ATerm f_17 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(e_17);
                    t = a_17;
                  }
                else
                  {
                    t = d_17;
                    {
                      ATerm g_17 = t;
                      int h_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Some_1))
                            {
                              ATerm j_17 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(h_17);
                          t = a_17;
                        }
                      else
                        {
                          t = g_17;
                          {
                            ATerm m_17 = t;
                            int n_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_Thread_1))
                                  {
                                    ATerm p_17 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(n_17);
                                t = a_17;
                              }
                            else
                              {
                                t = m_17;
                                if(match_cons(t, sym_Bagof_1))
                                  {
                                    ATerm r_17 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = a_17;
                              }
                          }
                        }
                    }
                  }
              }
            }
          }
        v_16 = t;
        t = (ATerm) ATempty;
        w_16 = t;
        t = term_e_12;
        x_16 = t;
        t = term_h_12;
        t = q_6(m_4, w_16, x_16, t);
        t = v_16;
        t = SRTS_one(n_4, t);
      }
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_g_12;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL,g_3 = NULL,c_9 = NULL;
  t = Binding_0_0(t);
  g_3 = t;
  if(match_cons(t, sym_Var_1))
    {
      f_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_3);
  e_3 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, f_3);
  c_9 = t;
  t = SSLsetAnnotations(c_9, e_3);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_g_12;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL,e_9 = NULL;
  t = Binding_0_0(t);
  u_3 = t;
  if(match_cons(t, sym_Var_1))
    {
      t_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_3);
  s_3 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, t_3);
  e_9 = t;
  t = SSLsetAnnotations(e_9, s_3);
  return(t);
}
ATerm prop_call_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm m_19 = NULL;
  m_19 = t;
  {
    ATerm u_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_PrimT_3))
          {
            ATerm x_17 = ATgetArgument(t, 0);
            ATerm z_17 = ATgetArgument(t, 1);
            ATerm c_18 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(v_17);
        {
          ATerm o_2 = NULL,q_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,x_2 = NULL,z_2 = NULL,b_3 = NULL,d_9 = NULL;
          t = (ATerm) ATempty;
          o_2 = t;
          t = term_e_12;
          q_2 = t;
          t = term_h_12;
          t = q_6(p_4, o_2, q_2, t);
          t = m_19;
          if(match_cons(t, sym_PrimT_3))
            {
              u_2 = ATgetArgument(t, 0);
              v_2 = ATgetArgument(t, 1);
              x_2 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_19);
          t_2 = t;
          t = v_2;
          {
            static ATerm q_4 (ATerm t);
            static ATerm q_4 (ATerm t)
            {
              t = exec_maybe_1_0(t_0, t);
              return(t);
            }
            t = map_1_0(q_4, t);
          }
          z_2 = t;
          t = x_2;
          t = alltd_1_0(r_4, t);
          b_3 = t;
          t = (ATerm) ATmakeAppl(sym_PrimT_3, u_2, z_2, b_3);
          d_9 = t;
          t = SSLsetAnnotations(d_9, t_2);
        }
      }
    else
      {
        t = u_17;
        {
          ATerm k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,o_10 = NULL;
          if(match_cons(t, sym_CallT_3))
            {
              ATerm d_18 = ATgetArgument(t, 0);
              ATerm f_18 = ATgetArgument(t, 1);
              ATerm h_18 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATempty;
          k_3 = t;
          t = term_e_12;
          l_3 = t;
          t = term_h_12;
          t = q_6(t_4, k_3, l_3, t);
          t = m_19;
          if(match_cons(t, sym_CallT_3))
            {
              n_3 = ATgetArgument(t, 0);
              o_3 = ATgetArgument(t, 1);
              p_3 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_19);
          m_3 = t;
          t = o_3;
          {
            static ATerm w_4 (ATerm t);
            static ATerm w_4 (ATerm t)
            {
              t = exec_maybe_1_0(t_0, t);
              return(t);
            }
            t = map_1_0(w_4, t);
          }
          q_3 = t;
          t = p_3;
          t = alltd_1_0(y_4, t);
          r_3 = t;
          t = (ATerm) ATmakeAppl(sym_CallT_3, n_3, q_3, r_3);
          o_10 = t;
          t = SSLsetAnnotations(o_10, m_3);
        }
      }
  }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_x_11;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL;
  f_20 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, f_20);
  g_20 = t;
  t = term_e_12;
  h_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, f_20), term_e_12);
  t = q_6(f_5, g_20, h_20, t);
  t = f_20;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_x_11;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_g_12;
  return(t);
}
static ATerm p_6 (ATerm m_115 (ATerm), ATerm e_24, ATerm t)
{
  static ATerm d_5 (ATerm t);
  static ATerm d_5 (ATerm t)
  {
    ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL,e_20 = NULL,c_16 = NULL;
    v_19 = t;
    t = e_24;
    t = map_1_0(e_5, t);
    t = v_19;
    if(match_cons(t, sym_Scope_2))
      {
        x_19 = ATgetArgument(t, 0);
        y_19 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(v_19);
    w_19 = t;
    t = y_19;
    t = m_115(t);
    z_19 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, x_19, z_19);
    c_16 = t;
    t = SSLsetAnnotations(c_16, w_19);
    e_20 = t;
    {
      ATerm m_18 = t;
      int n_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_20 = NULL,n_20 = NULL,o_20 = NULL;
          t = CurrentTerm_0_0(t);
          {
            static ATerm j_5 (ATerm t);
            static ATerm j_5 (ATerm t)
            {
              ATerm p_20 = NULL;
              static ATerm k_5 (ATerm t);
              static ATerm k_5 (ATerm t)
              {
                if(((p_20 != NULL) && (p_20 != t)))
                  _fail(t);
                else
                  p_20 = t;
                return(t);
              }
              if(match_cons(t, sym_Var_1))
                {
                  if(((p_20 != NULL) && (p_20 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    p_20 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = e_24;
              t = fetch_1_0(k_5, t);
              return(t);
            }
            t = oncetd_1_0(j_5, t);
          }
          i_20 = t;
          t = (ATerm) ATempty;
          n_20 = t;
          t = term_e_12;
          o_20 = t;
          t = term_h_12;
          t = q_6(l_5, n_20, o_20, t);
          t = i_20;
          LocalPopChoice(n_18);
        }
      else
        {
          t = m_18;
        }
    }
    t = e_20;
    return(t);
  }
  t = scope_2_0(b_5, d_5, t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_g_12;
  return(t);
}
ATerm prop_build_0_0 (ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL,d_21 = NULL,h_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,e_16 = NULL;
  q_21 = t;
  if(match_cons(t, sym_Build_1))
    {
      n_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_21);
  h_21 = t;
  t = n_21;
  t = alltd_1_0(Binding_0_0, t);
  o_21 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, o_21);
  e_16 = t;
  t = SSLsetAnnotations(e_16, h_21);
  p_21 = t;
  if(match_cons(t, sym_Build_1))
    {
      u_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  v_20 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_o_18, u_20);
  d_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_o_18, u_20));
  t = q_6(m_5, v_20, d_21, t);
  t = p_21;
  return(t);
}
static ATerm q_6 (ATerm a_116 (ATerm), ATerm b_26, ATerm z_25, ATerm t)
{
  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,z_21 = NULL,a_22 = NULL;
  u_21 = t;
  t = a_116(t);
  r_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_21, b_26, z_25);
  t = v_7(r_21, b_26, z_25, t);
  {
    ATerm p_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_22 = NULL;
        t = term_r_18;
        b_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_21, term_r_18);
        t = u_7(r_21, b_22, t);
        {
          ATerm s_18 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = s_18;
            }
        }
        LocalPopChoice(q_18);
      }
    else
      {
        t = p_18;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_21 = ATgetFirst((ATermList) t);
      t_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, r_21, term_r_18, (ATerm) ATinsert(CheckATermList(t_21), (ATerm) ATinsert(CheckATermList(s_21), b_26)));
  t = lookup_table_0_1(r_21, t);
  a_22 = t;
  t = term_r_18;
  v_21 = t;
  t = (ATerm) ATinsert(CheckATermList(t_21), (ATerm) ATinsert(CheckATermList(s_21), b_26));
  w_21 = t;
  t = a_22;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_7(v_21, w_21, z_21, t);
  t = u_21;
  return(t);
}
ATerm oncetd_1_0 (ATerm c_122 (ATerm), ATerm t)
{
  static ATerm c_22 (ATerm t);
  static ATerm c_22 (ATerm t)
  {
    ATerm t_18 = t;
    int u_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_122(t);
        LocalPopChoice(u_18);
      }
    else
      {
        t = t_18;
        t = SRTS_one(c_22, t);
      }
    return(t);
  }
  t = c_22(t);
  return(t);
}
ATerm debug_1_0 (ATerm z_126 (ATerm), ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL,j_22 = NULL,k_22 = NULL;
  d_22 = t;
  t = z_126(t);
  e_22 = t;
  t = term_v_18;
  j_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_22), e_22);
  k_22 = t;
  t = SSL_printnl(j_22, k_22);
  t = d_22;
  return(t);
}
ATerm if_verbose3_1_0 (ATerm s_144 (ATerm), ATerm t)
{
  ATerm m_22 = NULL;
  m_22 = t;
  {
    ATerm w_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL;
        t = term_y_18;
        q_22 = t;
        t = term_z_18;
        r_22 = t;
        t = term_a_19;
        t = u_7(q_22, r_22, t);
        p_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_22, term_b_19);
        t = geq_0_0(t);
        t = m_22;
        t = s_144(t);
        LocalPopChoice(x_18);
      }
    else
      {
        t = w_18;
        t = m_22;
      }
  }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm a_23 = NULL;
  a_23 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = a_23;
    }
  else
    {
      if(match_cons(t, sym_As_2))
        {
          ATerm c_19 = ATgetArgument(t, 0);
          ATerm d_19 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_23;
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_x_11;
  return(t);
}
static ATerm r_6 (ATerm x_24, ATerm y_24, ATerm t)
{
  ATerm w_22 = NULL,y_22 = NULL,z_22 = NULL;
  w_22 = t;
  t = y_24;
  {
    ATerm e_19 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(n_5, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_19;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, x_24);
  y_22 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_f_19, y_24);
  z_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, x_24), (ATerm) ATmakeAppl(sym_Defined_2, term_f_19, y_24));
  t = q_6(w_5, y_22, z_22, t);
  t = w_22;
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL,c_28 = NULL,d_28 = NULL,f_28 = NULL,g_28 = NULL;
  z_27 = t;
  if(match_cons(t, sym__2))
    {
      c_28 = ATgetArgument(t, 0);
      d_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_28;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_28 = ATgetFirst((ATermList) t);
      g_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = f_28;
  if(match_cons(t, sym__2))
    {
      x_27 = ATgetArgument(t, 0);
      y_27 = ATgetArgument(t, 1);
      {
        ATerm g_19 = t;
        int h_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_27;
            if((c_28 != t))
              {
                _fail(t);
              }
            t = y_27;
            LocalPopChoice(h_19);
          }
        else
          {
            t = g_19;
            t = (ATerm) ATmakeAppl(sym__2, c_28, g_28);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, c_28, g_28);
      t = lookup_0_0(t);
    }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_19 = ATgetArgument(t, 0);
      if(((ATgetType(i_19) != AT_LIST) || !(ATisEmpty(i_19))))
        _fail(t);
      {
        ATerm j_19 = ATgetArgument(t, 1);
        if(((ATgetType(j_19) != AT_LIST) || !(ATisEmpty(j_19))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_19 = ATgetArgument(t, 0);
      if(((ATgetType(k_19) == AT_LIST) && !(ATisEmpty(k_19))))
        {
          f_30 = ATgetFirst((ATermList) k_19);
          g_30 = (ATerm) ATgetNext((ATermList) k_19);
        }
      else
        _fail(t);
      {
        ATerm l_19 = ATgetArgument(t, 1);
        if(((ATgetType(l_19) == AT_LIST) && !(ATisEmpty(l_19))))
          {
            h_30 = ATgetFirst((ATermList) l_19);
            i_30 = (ATerm) ATgetNext((ATermList) l_19);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_30, h_30), (ATerm) ATmakeAppl(sym__2, g_30, i_30));
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL;
  if(match_cons(t, sym__2))
    {
      j_30 = ATgetArgument(t, 0);
      k_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_30), j_30);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL;
  r_29 = t;
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_19 = ATgetArgument(t, 0);
            ATerm q_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(o_19);
        t = r_29;
      }
    else
      {
        t = n_19;
        {
          ATerm c_30 = NULL;
          if(match_cons(t, sym__3))
            {
              s_29 = ATgetArgument(t, 0);
              t_29 = ATgetArgument(t, 1);
              u_29 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, s_29, t_29);
          t = genzip_4_0(x_5, y_5, e_6, _id, t);
          c_30 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_30, u_29);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm a_150 (ATerm), ATerm b_150 (ATerm), ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL;
  static ATerm f_6 (ATerm t);
  static ATerm f_6 (ATerm t)
  {
    ATerm a_5 = NULL;
    t = a_150(t);
    a_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_5, not_null(s_30));
    t = lookup_0_0(t);
    t = b_150(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((s_30 != NULL) && (s_30 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_30 = ATgetArgument(t, 0);
      r_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_30;
  t = alltd_1_0(f_6, t);
  return(t);
}
static ATerm c_7 (ATerm i_156 (ATerm), ATerm y_90, ATerm z_90, ATerm b_91, ATerm a_91, ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL;
  t = y_90;
  t = i_156(t);
  t = (ATerm) ATmakeAppl(sym__2, y_90, z_90);
  {
    ATerm r_19 = t;
    if((PushChoice() == 0))
      {
        ATerm y_30 = NULL,e_31 = NULL;
        if(match_cons(t, sym__2))
          {
            y_30 = ATgetArgument(t, 0);
            e_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_31;
        {
          static ATerm g_6 (ATerm t);
          static ATerm g_6 (ATerm t)
          {
            if((y_30 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1_0(g_6, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, y_30, e_31);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_19;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, y_90, z_90)), (ATerm) ATmakeAppl(sym__2, a_91, b_91));
  t = substitute_2_0(i_156, _id, t);
  if(match_cons(t, sym__2))
    {
      w_30 = ATgetArgument(t, 0);
      x_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_30, (ATerm) ATinsert(CheckATermList(w_30), (ATerm) ATmakeAppl(sym__2, y_90, z_90)));
  return(t);
}
ATerm at_end_1_0 (ATerm y_127 (ATerm), ATerm t)
{
  static ATerm g_26 (ATerm t);
  static ATerm g_26 (ATerm t)
  {
    ATerm m_25 = NULL,p_25 = NULL,f_26 = NULL;
    f_26 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_25 = ATgetFirst((ATermList) t);
        p_25 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm b_4 = NULL,e_4 = NULL,g_16 = NULL;
          t = SSLgetAnnotations(f_26);
          b_4 = t;
          t = p_25;
          t = g_26(t);
          e_4 = t;
          t = (ATerm) ATinsert(CheckATermList(e_4), m_25);
          g_16 = t;
          t = SSLsetAnnotations(g_16, b_4);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_26;
        t = y_127(t);
      }
    return(t);
  }
  t = g_26(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm j_23 = NULL,q_23 = NULL,s_23 = NULL;
  j_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_23;
    }
  else
    {
      static ATerm h_6 (ATerm t);
      static ATerm h_6 (ATerm t)
      {
        t = not_null(s_23);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_23 = ATgetFirst((ATermList) t);
          if(((s_23 != NULL) && (s_23 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            s_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_23;
      t = at_end_1_0(h_6, t);
    }
  return(t);
}
static ATerm v_26 (ATerm l_26, ATerm t)
{
  ATerm m_26 = NULL;
  t = SSL_explode_term(l_26);
  if(match_cons(t, sym__2))
    {
      ATerm s_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      m_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_26;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm o_26 = NULL,r_26 = NULL,s_26 = NULL;
  s_26 = t;
  if(match_cons(t, sym__2))
    {
      o_26 = ATgetArgument(t, 0);
      r_26 = ATgetArgument(t, 1);
      {
        ATerm t_19 = t;
        int u_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm i_6 (ATerm t);
            static ATerm i_6 (ATerm t)
            {
              t = r_26;
              return(t);
            }
            t = o_26;
            t = at_end_1_0(i_6, t);
            LocalPopChoice(u_19);
          }
        else
          {
            t = t_19;
            t = v_26(s_26, t);
          }
      }
    }
  else
    {
      t = v_26(s_26, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm l_129 (ATerm), ATerm m_129 (ATerm), ATerm n_129 (ATerm), ATerm o_129 (ATerm), ATerm t)
{
  static ATerm o_29 (ATerm t);
  static ATerm o_29 (ATerm t)
  {
    ATerm a_20 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_129(t);
        LocalPopChoice(b_20);
      }
    else
      {
        t = a_20;
        {
          ATerm h_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL,i_16 = NULL;
          t = m_129(t);
          n_29 = t;
          if(match_cons(t, sym__2))
            {
              j_29 = ATgetArgument(t, 0);
              k_29 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_29);
          h_29 = t;
          t = j_29;
          t = o_129(t);
          l_29 = t;
          t = k_29;
          t = o_29(t);
          m_29 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_29, m_29);
          i_16 = t;
          t = SSLsetAnnotations(i_16, h_29);
          t = n_129(t);
        }
      }
    return(t);
  }
  t = o_29(t);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_20 = ATgetArgument(t, 0);
      if(((ATgetType(c_20) != AT_LIST) || !(ATisEmpty(c_20))))
        _fail(t);
      {
        ATerm d_20 = ATgetArgument(t, 1);
        if(((ATgetType(d_20) != AT_LIST) || !(ATisEmpty(d_20))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_20 = ATgetArgument(t, 0);
      if(((ATgetType(j_20) == AT_LIST) && !(ATisEmpty(j_20))))
        {
          i_27 = ATgetFirst((ATermList) j_20);
          j_27 = (ATerm) ATgetNext((ATermList) j_20);
        }
      else
        _fail(t);
      {
        ATerm k_20 = ATgetArgument(t, 1);
        if(((ATgetType(k_20) == AT_LIST) && !(ATisEmpty(k_20))))
          {
            k_27 = ATgetFirst((ATermList) k_20);
            l_27 = (ATerm) ATgetNext((ATermList) k_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_27, k_27), (ATerm) ATmakeAppl(sym__2, j_27, l_27));
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL;
  if(match_cons(t, sym__2))
    {
      n_27 = ATgetArgument(t, 0);
      o_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_27), n_27);
  return(t);
}
static ATerm v_6 (ATerm d_947, ATerm i_947, ATerm a_92, ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL;
  t = SSL_explode_term(i_947);
  if(match_cons(t, sym__2))
    {
      a_27 = ATgetArgument(t, 0);
      c_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(d_947);
  if(match_cons(t, sym__2))
    {
      if((a_27 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      b_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_27, c_27);
  t = genzip_4_0(l_6, s_6, t_6, _id, t);
  d_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_27, a_92);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm p_120 (ATerm), ATerm q_120 (ATerm), ATerm t)
{
  static ATerm l_31 (ATerm t);
  static ATerm l_31 (ATerm t)
  {
    ATerm l_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_120(t);
        LocalPopChoice(m_20);
      }
    else
      {
        t = l_20;
        t = q_120(t);
        t = l_31(t);
      }
    return(t);
  }
  t = l_31(t);
  return(t);
}
ATerm for_3_0 (ATerm s_120 (ATerm), ATerm t_120 (ATerm), ATerm u_120 (ATerm), ATerm t)
{
  t = s_120(t);
  t = while_not_2_0(t_120, u_120, t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm k_32 = NULL;
  k_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_32, (ATerm) ATempty);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm l_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_20 = ATgetArgument(t, 0);
      if(((ATgetType(q_20) != AT_LIST) || !(ATisEmpty(q_20))))
        _fail(t);
      l_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_32;
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL,f_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL;
  i_37 = t;
  if(match_cons(t, sym__2))
    {
      j_37 = ATgetArgument(t, 0);
      k_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_37;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_37 = ATgetFirst((ATermList) t);
      f_37 = (ATerm) ATgetNext((ATermList) t);
      t = a_37;
      if(match_cons(t, sym__2))
        {
          b_37 = ATgetArgument(t, 0);
          c_37 = ATgetArgument(t, 1);
          {
            ATerm r_20 = t;
            int s_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = y_37(j_37, k_37, i_37, t);
                LocalPopChoice(s_20);
              }
            else
              {
                t = r_20;
                {
                  ATerm t_20 = t;
                  int w_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = i_37;
                      t = c_7(a_7, b_37, c_37, f_37, k_37, t);
                      LocalPopChoice(w_20);
                    }
                  else
                    {
                      t = t_20;
                      {
                        ATerm x_20 = t;
                        int y_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = a_38(j_37, k_37, i_37, t);
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
                                  t = b_38(j_37, k_37, i_37, t);
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
                                        t = d_38(j_37, k_37, i_37, t);
                                        LocalPopChoice(c_21);
                                      }
                                    else
                                      {
                                        t = b_21;
                                        t = h_38(j_37, k_37, i_37, t);
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
          ATerm e_21 = t;
          int f_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_37(j_37, k_37, i_37, t);
              LocalPopChoice(f_21);
            }
          else
            {
              t = e_21;
              {
                ATerm g_21 = t;
                int i_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = a_38(j_37, k_37, i_37, t);
                    LocalPopChoice(i_21);
                  }
                else
                  {
                    t = g_21;
                    {
                      ATerm j_21 = t;
                      int k_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = b_38(j_37, k_37, i_37, t);
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
                                t = d_38(j_37, k_37, i_37, t);
                                LocalPopChoice(m_21);
                              }
                            else
                              {
                                t = l_21;
                                t = h_38(j_37, k_37, i_37, t);
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
      ATerm x_21 = t;
      int y_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_37(j_37, k_37, i_37, t);
          LocalPopChoice(y_21);
        }
      else
        {
          t = x_21;
          {
            ATerm f_22 = t;
            int g_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = a_38(j_37, k_37, i_37, t);
                LocalPopChoice(g_22);
              }
            else
              {
                t = f_22;
                {
                  ATerm h_22 = t;
                  int i_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = b_38(j_37, k_37, i_37, t);
                      LocalPopChoice(i_22);
                    }
                  else
                    {
                      t = h_22;
                      {
                        ATerm l_22 = t;
                        int n_22 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = d_38(j_37, k_37, i_37, t);
                            LocalPopChoice(n_22);
                          }
                        else
                          {
                            t = l_22;
                            t = h_38(j_37, k_37, i_37, t);
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
static ATerm y_37 (ATerm m_32, ATerm o_32, ATerm p_32, ATerm t)
{
  ATerm s_32 = NULL,w_32 = NULL,x_32 = NULL,k_16 = NULL;
  t = SSLgetAnnotations(p_32);
  s_32 = t;
  t = m_32;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_22 = ATgetFirst((ATermList) t);
      if(match_cons(o_22, sym__2))
        {
          w_32 = ATgetArgument(o_22, 0);
          if((w_32 != ATgetArgument(o_22, 1)))
            {
              _fail(ATgetArgument(o_22, 1));
            }
        }
      else
        _fail(t);
      x_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_32, o_32);
  k_16 = t;
  t = SSLsetAnnotations(k_16, s_32);
  return(t);
}
static ATerm a_38 (ATerm l_33, ATerm m_33, ATerm n_33, ATerm t)
{
  ATerm o_33 = NULL,t_33 = NULL,u_33 = NULL,x_33 = NULL,y_33 = NULL,l_16 = NULL;
  t = SSLgetAnnotations(n_33);
  o_33 = t;
  t = l_33;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_22 = ATgetFirst((ATermList) t);
      if(match_cons(s_22, sym__2))
        {
          u_33 = ATgetArgument(s_22, 0);
          x_33 = ATgetArgument(s_22, 1);
        }
      else
        _fail(t);
      y_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_6(u_33, x_33, y_33, t);
  t_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_33, m_33);
  l_16 = t;
  t = SSLsetAnnotations(l_16, o_33);
  return(t);
}
static ATerm b_38 (ATerm c_34, ATerm d_34, ATerm i_34, ATerm t)
{
  ATerm l_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,a_35 = NULL,m_16 = NULL;
  t = SSLgetAnnotations(i_34);
  l_34 = t;
  t = c_34;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_22 = ATgetFirst((ATermList) t);
      if(match_cons(t_22, sym__2))
        {
          ATerm u_22 = ATgetArgument(t_22, 0);
          if(match_cons(u_22, sym_As_2))
            {
              r_34 = ATgetArgument(u_22, 0);
              s_34 = ATgetArgument(u_22, 1);
            }
          else
            _fail(t);
          t_34 = ATgetArgument(t_22, 1);
        }
      else
        _fail(t);
      a_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(CheckATermList(a_35), (ATerm) ATmakeAppl(sym__2, s_34, t_34)), (ATerm) ATmakeAppl(sym__2, r_34, t_34)), d_34);
  m_16 = t;
  t = SSLsetAnnotations(m_16, l_34);
  return(t);
}
static ATerm d_38 (ATerm c_35, ATerm j_35, ATerm m_35, ATerm t)
{
  ATerm n_35 = NULL,r_35 = NULL,n_16 = NULL;
  t = SSLgetAnnotations(m_35);
  n_35 = t;
  t = c_35;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_22 = ATgetFirst((ATermList) t);
      if(match_cons(v_22, sym__2))
        {
          ATerm x_22 = ATgetArgument(v_22, 0);
          if(!(match_cons(x_22, sym_Wld_0)))
            _fail(t);
          {
            ATerm b_23 = ATgetArgument(v_22, 1);
          }
        }
      else
        _fail(t);
      r_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_35, j_35);
  n_16 = t;
  t = SSLsetAnnotations(n_16, n_35);
  return(t);
}
static ATerm h_38 (ATerm w_35, ATerm b_36, ATerm f_36, ATerm t)
{
  ATerm i_36 = NULL,n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL,r_36 = NULL,q_16 = NULL,p_16 = NULL;
  t = SSLgetAnnotations(f_36);
  i_36 = t;
  t = w_35;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_23 = ATgetFirst((ATermList) t);
      if(match_cons(c_23, sym__2))
        {
          n_36 = ATgetArgument(c_23, 0);
          o_36 = ATgetArgument(c_23, 1);
        }
      else
        _fail(t);
      p_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_36;
  {
    ATerm d_23 = t;
    if((PushChoice() == 0))
      {
        ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL,o_16 = NULL;
        z_36 = t;
        if(match_cons(t, sym_Var_1))
          {
            y_36 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_36);
        x_36 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, y_36);
        o_16 = t;
        t = SSLsetAnnotations(o_16, x_36);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_23;
      }
  }
  t = o_36;
  if(match_cons(t, sym_Var_1))
    {
      r_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_36);
  q_36 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, r_36);
  p_16 = t;
  t = SSLsetAnnotations(p_16, q_36);
  t = (ATerm) ATmakeAppl(sym__2, p_36, b_36);
  q_16 = t;
  t = SSLsetAnnotations(q_16, i_36);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm r_37 = NULL,u_37 = NULL,v_37 = NULL,r_16 = NULL;
  v_37 = t;
  if(match_cons(t, sym_Var_1))
    {
      u_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_37);
  r_37 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, u_37);
  r_16 = t;
  t = SSLsetAnnotations(r_16, r_37);
  return(t);
}
ATerm prop_pattern_match_0_0 (ATerm t)
{
  t = for_3_0(u_6, x_6, y_6, t);
  return(t);
}
ATerm CurrentTerm_0_0 (ATerm t)
{
  ATerm e_23 = t;
  int f_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_38 = NULL,g_5 = NULL,h_5 = NULL;
      t = (ATerm) ATempty;
      g_5 = t;
      t = term_g_12;
      h_5 = t;
      t = term_g_23;
      t = f_7(h_5, g_5, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm h_23 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) h_23) != ATmakeSymbol("j_0", 0, ATtrue)))
            _fail(t);
          j_38 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = j_38;
      LocalPopChoice(f_23);
    }
  else
    {
      t = e_23;
      {
        ATerm i_23 = t;
        int k_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_38 = NULL,o_5 = NULL,r_5 = NULL;
            t = (ATerm) ATempty;
            o_5 = t;
            t = term_g_12;
            r_5 = t;
            t = term_g_23;
            t = f_7(r_5, o_5, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm l_23 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) l_23) != ATmakeSymbol("g_0", 0, ATtrue)))
                  _fail(t);
                o_38 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = o_38;
            LocalPopChoice(k_23);
          }
        else
          {
            t = i_23;
            {
              ATerm a_39 = NULL,z_5 = NULL,a_6 = NULL;
              a_39 = t;
              t = (ATerm) ATempty;
              z_5 = t;
              t = term_g_12;
              a_6 = t;
              t = term_g_23;
              t = f_7(a_6, z_5, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              t = a_39;
              _fail(t);
            }
          }
      }
    }
  return(t);
}
static ATerm f_7 (ATerm p_65, ATerm q_65, ATerm t)
{
  ATerm f_39 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_65, q_65);
  t = u_7(p_65, q_65, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_39 = ATgetFirst((ATermList) t);
      {
        ATerm m_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = f_39;
  return(t);
}
ATerm Binding_0_0 (ATerm t)
{
  ATerm e_40 = NULL;
  e_40 = t;
  if(match_cons(t, sym_Var_1))
    {
      ATerm n_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm o_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_6 = NULL,z_6 = NULL;
        t = term_x_11;
        z_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_11, e_40);
        t = f_7(z_6, e_40, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm r_23 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) r_23) != ATmakeSymbol("l_0", 0, ATtrue)))
              _fail(t);
            w_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_6;
        LocalPopChoice(p_23);
      }
    else
      {
        t = o_23;
        {
          ATerm t_23 = t;
          int u_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_7 = NULL;
              t = term_x_11;
              w_7 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_x_11, e_40);
              t = f_7(w_7, e_40, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              t = e_40;
              _fail(t);
              LocalPopChoice(u_23);
            }
          else
            {
              t = t_23;
              {
                ATerm j_8 = NULL;
                t = term_x_11;
                j_8 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_x_11, e_40);
                t = f_7(j_8, e_40, t);
                if(!(match_cons(t, sym_Undefined_0)))
                  _fail(t);
                t = e_40;
                _fail(t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm q_122 (ATerm), ATerm t)
{
  static ATerm m_40 (ATerm t);
  static ATerm m_40 (ATerm t)
  {
    ATerm v_23 = t;
    int w_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_122(t);
        LocalPopChoice(w_23);
      }
    else
      {
        t = v_23;
        t = SRTS_all(m_40, t);
      }
    return(t);
  }
  t = m_40(t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm x_23 = t;
  int y_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_8 = NULL,p_8 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm z_23 = ATgetArgument(t, 0);
          if(match_cons(z_23, sym_Var_1))
            {
              o_8 = ATgetArgument(z_23, 0);
            }
          else
            _fail(t);
          p_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = r_6(o_8, p_8, t);
      LocalPopChoice(y_23);
    }
  else
    {
      t = x_23;
    }
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = debug_1_0(e_7, t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_a_24;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm n_41 = NULL;
  n_41 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = n_41;
    }
  else
    {
      if(match_cons(t, sym_As_2))
        {
          ATerm b_24 = ATgetArgument(t, 0);
          ATerm c_24 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = n_41;
    }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_g_12;
  return(t);
}
ATerm prop_match_0_0 (ATerm t)
{
  ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL,u_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,i_17 = NULL;
  y_40 = t;
  if(match_cons(t, sym_Match_1))
    {
      u_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_40);
  r_40 = t;
  t = u_40;
  t = alltd_1_0(Binding_0_0, t);
  w_40 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, w_40);
  i_17 = t;
  t = SSLsetAnnotations(i_17, r_40);
  x_40 = t;
  if(match_cons(t, sym_Match_1))
    {
      q_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_24 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = CurrentTerm_0_0(t);
        p_40 = t;
        t = x_40;
        {
          ATerm g_24 = t;
          int h_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, q_40, p_40));
              t = prop_pattern_match_0_0(t);
              t = map_1_0(b_7, t);
              t = x_40;
              LocalPopChoice(h_24);
            }
          else
            {
              t = g_24;
              t = (ATerm) ATmakeAppl(sym__4, term_i_24, x_40, term_l_24, p_40);
              t = if_verbose3_1_0(d_7, t);
              t = term_m_24;
            }
        }
        LocalPopChoice(f_24);
      }
    else
      {
        t = d_24;
        {
          ATerm n_24 = t;
          int o_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_41 = NULL,m_41 = NULL;
              t = q_40;
              {
                ATerm p_24 = t;
                if((PushChoice() == 0))
                  {
                    t = oncetd_1_0(q_7, t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = p_24;
                  }
              }
              t = (ATerm) ATempty;
              j_41 = t;
              t = (ATerm) ATmakeAppl(sym_Defined_2, term_q_24, q_40);
              m_41 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_q_24, q_40));
              t = q_6(t_7, j_41, m_41, t);
              t = x_40;
              LocalPopChoice(o_24);
            }
          else
            {
              t = n_24;
            }
        }
      }
  }
  return(t);
}
ATerm cp_0_0 (ATerm t)
{
  ATerm r_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = prop_match_0_0(t);
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
            t = prop_build_0_0(t);
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
                  ATerm e_42 = NULL,f_42 = NULL;
                  e_42 = t;
                  if(match_cons(t, sym_Scope_2))
                    {
                      f_42 = ATgetArgument(t, 0);
                      {
                        ATerm z_24 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  t = e_42;
                  t = p_6(cp_0_0, f_42, t);
                  LocalPopChoice(w_24);
                }
              else
                {
                  t = v_24;
                  {
                    ATerm a_25 = t;
                    int b_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = prop_call_1_0(cp_0_0, t);
                        LocalPopChoice(b_25);
                      }
                    else
                      {
                        t = a_25;
                        {
                          ATerm c_25 = t;
                          int d_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = prop_traversal_1_0(cp_0_0, t);
                              LocalPopChoice(d_25);
                            }
                          else
                            {
                              t = c_25;
                              {
                                ATerm e_25 = t;
                                int f_25 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm f_43 = NULL,j_43 = NULL,l_43 = NULL,v_8 = NULL,a_9 = NULL,b_9 = NULL,k_17 = NULL;
                                    f_43 = t;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        j_43 = ATgetArgument(t, 0);
                                        l_43 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(f_43);
                                    v_8 = t;
                                    t = j_43;
                                    t = cp_0_0(t);
                                    a_9 = t;
                                    t = l_43;
                                    t = cp_0_0(t);
                                    b_9 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, a_9, b_9);
                                    k_17 = t;
                                    t = SSLsetAnnotations(k_17, v_8);
                                    LocalPopChoice(f_25);
                                  }
                                else
                                  {
                                    t = e_25;
                                    {
                                      ATerm g_25 = t;
                                      int h_25 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = prop_choice_1_0(cp_0_0, t);
                                          LocalPopChoice(h_25);
                                        }
                                      else
                                        {
                                          t = g_25;
                                          {
                                            ATerm i_25 = t;
                                            int j_25 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm u_43 = NULL,y_43 = NULL,c_44 = NULL;
                                                u_43 = t;
                                                {
                                                  ATerm k_25 = t;
                                                  int l_25 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_Let_2))
                                                        {
                                                          ATerm n_25 = ATgetArgument(t, 0);
                                                          ATerm o_25 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(l_25);
                                                      t = u_43;
                                                      t = m_6(cp_0_0, t);
                                                    }
                                                  else
                                                    {
                                                      t = k_25;
                                                      {
                                                        ATerm q_25 = t;
                                                        int r_25 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm s_25 = ATgetArgument(t, 0);
                                                                ATerm t_25 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(r_25);
                                                            {
                                                              ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL,v_9 = NULL,l_17 = NULL;
                                                              t = u_43;
                                                              if(match_cons(t, sym_Rec_2))
                                                                {
                                                                  s_9 = ATgetArgument(t, 0);
                                                                  t_9 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSLgetAnnotations(u_43);
                                                              r_9 = t;
                                                              t = t_9;
                                                              t = exec_maybe_1_0(cp_0_0, t);
                                                              v_9 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Rec_2, s_9, v_9);
                                                              l_17 = t;
                                                              t = SSLsetAnnotations(l_17, r_9);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = q_25;
                                                            {
                                                              ATerm u_25 = t;
                                                              int v_25 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_Not_1))
                                                                    {
                                                                      ATerm w_25 = ATgetArgument(t, 0);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(v_25);
                                                                  t = u_43;
                                                                  t = k_6(cp_0_0, t);
                                                                }
                                                              else
                                                                {
                                                                  t = u_25;
                                                                  if(match_cons(t, sym_SDefT_4))
                                                                    {
                                                                      y_43 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm x_25 = ATgetArgument(t, 1);
                                                                      }
                                                                      c_44 = ATgetArgument(t, 2);
                                                                      {
                                                                        ATerm y_25 = ATgetArgument(t, 3);
                                                                      }
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  t = u_43;
                                                                  t = j_6(cp_0_0, y_43, c_44, t);
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                                LocalPopChoice(j_25);
                                              }
                                            else
                                              {
                                                t = i_25;
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
static ATerm g_7 (ATerm j_65, ATerm k_65, ATerm t)
{
  ATerm n_44 = NULL,o_44 = NULL;
  o_44 = t;
  {
    ATerm a_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_65, k_65);
        t = u_7(j_65, k_65, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm d_26 = ATgetFirst((ATermList) t);
            n_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(c_26);
        {
          ATerm p_44 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, j_65, k_65, n_44);
          t = lookup_table_0_1(j_65, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              p_44 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_7(k_65, n_44, p_44, t);
          t = (ATerm) ATmakeAppl(sym__3, j_65, k_65, n_44);
        }
      }
    else
      {
        t = a_26;
        {
          ATerm r_44 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, j_65, k_65);
          t = lookup_table_0_1(j_65, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              r_44 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_7(k_65, r_44, t);
          t = (ATerm) ATmakeAppl(sym__2, j_65, k_65);
        }
      }
  }
  t = o_44;
  return(t);
}
ATerm end_scope_1_0 (ATerm x_115 (ATerm), ATerm t)
{
  ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL;
  w_44 = t;
  t = x_115(t);
  v_44 = t;
  {
    ATerm e_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_45 = NULL;
        t = term_r_18;
        a_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_44, term_r_18);
        t = u_7(v_44, a_45, t);
        {
          ATerm i_26 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = i_26;
            }
        }
        LocalPopChoice(h_26);
      }
    else
      {
        t = e_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_44 = ATgetFirst((ATermList) t);
      t_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, v_44, term_r_18, t_44);
  t = lookup_table_0_1(v_44, t);
  z_44 = t;
  t = term_r_18;
  x_44 = t;
  t = z_44;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_7(x_44, t_44, y_44, t);
  t = u_44;
  {
    static ATerm a_8 (ATerm t);
    static ATerm a_8 (ATerm t)
    {
      ATerm b_45 = NULL;
      b_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_44, b_45);
      t = g_7(v_44, b_45, t);
      return(t);
    }
    t = map_1_0(a_8, t);
  }
  t = w_44;
  return(t);
}
ATerm restore_always_2_0 (ATerm u_119 (ATerm), ATerm v_119 (ATerm), ATerm t)
{
  ATerm j_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_119(t);
      t = v_119(t);
      LocalPopChoice(k_26);
    }
  else
    {
      t = j_26;
      t = v_119(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm w_115 (ATerm), ATerm t)
{
  ATerm f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL;
  g_45 = t;
  t = w_115(t);
  f_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_45, term_r_18);
  {
    ATerm n_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_45 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm q_26 = ATgetArgument(t, 0);
            ATerm t_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_r_18;
        p_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_45, term_r_18);
        t = u_7(f_45, p_45, t);
        LocalPopChoice(p_26);
      }
    else
      {
        t = n_26;
        t = (ATerm) ATempty;
      }
  }
  h_45 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_45, term_r_18, (ATerm) ATinsert(CheckATermList(h_45), (ATerm) ATempty));
  t = lookup_table_0_1(f_45, t);
  l_45 = t;
  t = term_r_18;
  i_45 = t;
  t = (ATerm) ATinsert(CheckATermList(h_45), (ATerm) ATempty);
  j_45 = t;
  t = l_45;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_7(i_45, j_45, k_45, t);
  t = g_45;
  return(t);
}
ATerm scope_2_0 (ATerm y_115 (ATerm), ATerm z_115 (ATerm), ATerm t)
{
  static ATerm b_8 (ATerm t);
  static ATerm b_8 (ATerm t)
  {
    t = end_scope_1_0(y_115, t);
    return(t);
  }
  t = begin_scope_1_0(y_115, t);
  t = restore_always_2_0(z_115, b_8, t);
  return(t);
}
ATerm map_1_0 (ATerm j_127 (ATerm), ATerm t)
{
  static ATerm e_46 (ATerm t);
  static ATerm e_46 (ATerm t)
  {
    ATerm b_46 = NULL,c_46 = NULL,d_46 = NULL;
    b_46 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_46;
      }
    else
      {
        ATerm d_10 = NULL,k_10 = NULL,n_10 = NULL,o_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_46 = ATgetFirst((ATermList) t);
            d_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_46);
        d_10 = t;
        t = c_46;
        t = j_127(t);
        k_10 = t;
        t = d_46;
        t = e_46(t);
        n_10 = t;
        t = (ATerm) ATinsert(CheckATermList(n_10), k_10);
        o_17 = t;
        t = SSLsetAnnotations(o_17, d_10);
      }
    return(t);
  }
  t = e_46(t);
  return(t);
}
ATerm Cons_2_0 (ATerm b_92 (ATerm), ATerm c_92 (ATerm), ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,q_17 = NULL;
  l_46 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_46 = ATgetFirst((ATermList) t);
      i_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_46);
  g_46 = t;
  t = h_46;
  t = b_92(t);
  j_46 = t;
  t = i_46;
  t = c_92(t);
  k_46 = t;
  t = (ATerm) ATinsert(CheckATermList(k_46), j_46);
  q_17 = t;
  t = SSLsetAnnotations(q_17, g_46);
  return(t);
}
static ATerm h_7 (ATerm s_59, ATerm t_59, ATerm t)
{
  ATerm m_46 = NULL;
  t = SSL_fputc(s_59, t_59);
  m_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_46);
  return(t);
}
static ATerm i_7 (ATerm v_43, ATerm w_43, ATerm t)
{
  ATerm n_46 = NULL;
  t = SSL_write_term_to_stream_text(v_43, w_43);
  n_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_46);
  return(t);
}
static ATerm k_7 (ATerm b_127 (ATerm), ATerm u_305, ATerm b_44, ATerm t)
{
  ATerm o_46 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_305, term_u_26);
  t = o_7(t);
  o_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_46, b_44);
  t = b_127(t);
  t = fclose_0_0(t);
  t = b_44;
  return(t);
}
static ATerm j_7 (ATerm r_43, ATerm s_43, ATerm t)
{
  ATerm p_46 = NULL;
  t = SSL_write_term_to_stream_baf(r_43, s_43);
  p_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_46);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_26 = ATgetArgument(t, 0);
      if(match_cons(w_26, sym_Stream_1))
        {
          w_46 = ATgetArgument(w_26, 0);
        }
      else
        _fail(t);
      x_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_7(w_46, x_46, t);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_26 = ATgetArgument(t, 0);
      if(match_cons(x_26, sym_Stream_1))
        {
          b_47 = ATgetArgument(x_26, 0);
        }
      else
        _fail(t);
      c_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7(b_47, c_47, t);
  y_46 = t;
  t = term_y_26;
  z_46 = t;
  t = y_46;
  if(match_cons(t, sym_Stream_1))
    {
      a_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_y_26, y_46);
  t = h_7(z_46, a_47, t);
  return(t);
}
ATerm output_1_0 (ATerm u_147 (ATerm), ATerm t)
{
  ATerm q_46 = NULL,r_46 = NULL;
  t = u_147(t);
  r_46 = t;
  {
    ATerm z_26 = t;
    int e_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_46 = NULL,t_46 = NULL;
        t = term_y_18;
        s_46 = t;
        t = term_f_27;
        t_46 = t;
        t = term_g_27;
        t = u_7(s_46, t_46, t);
        LocalPopChoice(e_27);
      }
    else
      {
        t = z_26;
        t = term_h_27;
      }
  }
  q_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_46, r_46);
  {
    ATerm m_27 = t;
    int p_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_46 = NULL,v_46 = NULL;
        t = term_y_18;
        u_46 = t;
        t = term_q_27;
        v_46 = t;
        t = term_r_27;
        t = u_7(u_46, v_46, t);
        t = (ATerm) ATmakeAppl(sym__2, q_46, r_46);
        LocalPopChoice(p_27);
        if(match_cons(t, sym__2))
          {
            ATerm s_27 = ATgetArgument(t, 0);
            ATerm t_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_7(c_8, q_46, r_46, t);
      }
    else
      {
        t = m_27;
        if(match_cons(t, sym__2))
          {
            ATerm u_27 = ATgetArgument(t, 0);
            ATerm v_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_7(e_8, q_46, r_46, t);
      }
  }
  return(t);
}
static ATerm q_47 (ATerm k_47, ATerm t)
{
  t = SSL_fclose(k_47);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_47 = NULL,o_47 = NULL;
  o_47 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_47 = ATgetArgument(t, 0);
      {
        ATerm w_27 = t;
        int a_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_47);
            LocalPopChoice(a_28);
          }
        else
          {
            t = w_27;
            t = q_47(o_47, t);
          }
      }
    }
  else
    {
      t = q_47(o_47, t);
    }
  return(t);
}
static ATerm l_7 (ATerm x_43, ATerm t)
{
  t = SSL_read_term_from_stream(x_43);
  return(t);
}
static ATerm m_7 (ATerm y_57, ATerm z_57, ATerm t)
{
  t = SSL_strcat(y_57, z_57);
  return(t);
}
static ATerm n_7 (ATerm u_59, ATerm v_59, ATerm t)
{
  ATerm r_47 = NULL;
  t = SSL_fopen(u_59, v_59);
  r_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_47);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_47 = NULL;
  t = SSL_stdin_stream();
  s_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_47);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_47 = NULL;
  t = SSL_stdout_stream();
  t_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_47);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_47 = NULL;
  t = SSL_stderr_stream();
  u_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_47);
  return(t);
}
static ATerm b_49 (ATerm a_48, ATerm t)
{
  ATerm b_48 = NULL;
  t = SSL_explode_term(a_48);
  if(match_cons(t, sym__2))
    {
      ATerm b_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_28 = ATgetArgument(t, 1);
        if(((ATgetType(e_28) == AT_LIST) && !(ATisEmpty(e_28))))
          {
            b_48 = ATgetFirst((ATermList) e_28);
            {
              ATerm h_28 = (ATerm) ATgetNext((ATermList) e_28);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_48;
  if(match_cons(t, sym_stderr_0))
    {
      t = b_48;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_48;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_48;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm c_49 (ATerm e_48, ATerm f_48, ATerm g_48, ATerm t)
{
  ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL,m_48 = NULL,s_17 = NULL;
  t = SSLgetAnnotations(g_48);
  j_48 = t;
  t = e_48;
  if(match_cons(t, sym_Path_1))
    {
      m_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_48, f_48);
  s_17 = t;
  t = SSLsetAnnotations(s_17, j_48);
  if(match_cons(t, sym__2))
    {
      h_48 = ATgetArgument(t, 0);
      i_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(h_48, i_48, t);
  return(t);
}
static ATerm d_49 (ATerm o_48, ATerm p_48, ATerm q_48, ATerm t)
{
  ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL,w_48 = NULL,t_17 = NULL;
  t = SSLgetAnnotations(q_48);
  t_48 = t;
  t = SSL_is_string(o_48);
  w_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_48, p_48);
  t_17 = t;
  t = SSLsetAnnotations(t_17, t_48);
  if(match_cons(t, sym__2))
    {
      r_48 = ATgetArgument(t, 0);
      s_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(r_48, s_48, t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm y_48 = NULL,z_48 = NULL,a_49 = NULL;
  y_48 = t;
  if(match_cons(t, sym__2))
    {
      z_48 = ATgetArgument(t, 0);
      a_49 = ATgetArgument(t, 1);
      {
        ATerm i_28 = t;
        int j_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_49(y_48, t);
            LocalPopChoice(j_28);
          }
        else
          {
            t = i_28;
            {
              ATerm k_28 = t;
              int l_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_49(z_48, a_49, y_48, t);
                  LocalPopChoice(l_28);
                }
              else
                {
                  t = k_28;
                  t = d_49(z_48, a_49, y_48, t);
                }
            }
          }
      }
    }
  else
    {
      t = b_49(y_48, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_49 = NULL,g_49 = NULL,h_49 = NULL,m_49 = NULL;
  m_49 = t;
  {
    ATerm m_28 = t;
    int n_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_49, term_o_28);
        t = o_7(t);
        LocalPopChoice(n_28);
      }
    else
      {
        t = m_28;
        {
          ATerm k_11 = NULL,l_11 = NULL;
          t = term_p_28;
          l_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_p_28, m_49);
          t = m_7(l_11, m_49, t);
          k_11 = t;
          t = SSL_perror(k_11);
          _fail(t);
        }
      }
  }
  g_49 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_7(h_49, t);
  f_49 = t;
  t = g_49;
  t = fclose_0_0(t);
  t = f_49;
  return(t);
}
ATerm input_1_0 (ATerm v_147 (ATerm), ATerm t)
{
  ATerm q_28 = t;
  int r_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_49 = NULL,q_49 = NULL;
      t = term_y_18;
      p_49 = t;
      t = term_s_28;
      q_49 = t;
      t = term_t_28;
      t = u_7(p_49, q_49, t);
      LocalPopChoice(r_28);
    }
  else
    {
      t = q_28;
      t = term_u_28;
    }
  t = ReadFromFile_0_0(t);
  t = v_147(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm r_49 = NULL,s_49 = NULL;
  t = term_y_18;
  r_49 = t;
  t = term_v_28;
  s_49 = t;
  t = term_w_28;
  t = u_7(r_49, s_49, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_49 = NULL,v_49 = NULL,w_49 = NULL;
  u_49 = t;
  {
    ATerm x_28 = t;
    int y_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_49;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_28 = ATgetFirst((ATermList) t);
                ATerm a_29 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_49;
          }
        LocalPopChoice(y_28);
      }
    else
      {
        t = x_28;
        t = (ATerm) ATinsert(ATempty, u_49);
      }
  }
  v_49 = t;
  t = term_h_27;
  w_49 = t;
  t = SSL_printnl(w_49, v_49);
  t = u_49;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_50 = ATgetFirst((ATermList) t);
      c_50 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_50 = NULL,h_50 = NULL;
        static ATerm f_8 (ATerm t);
        static ATerm f_8 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_50)), not_null(h_50));
          return(t);
        }
        t = c_50;
        t = o_0(t);
        if(((g_50 != NULL) && (g_50 != t)))
          _fail(t);
        else
          g_50 = t;
        t = b_50;
        t = m_0(t);
        if(((h_50 != NULL) && (h_50 != t)))
          _fail(t);
        else
          h_50 = t;
        t = c_50;
        t = reverse_acc_2_0(m_0, f_8, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_29;
      t = o_0(t);
    }
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm q_50 = NULL,r_50 = NULL,s_50 = NULL,w_17 = NULL;
  s_50 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_50);
  q_50 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, r_50);
  w_17 = t;
  t = SSLsetAnnotations(w_17, q_50);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm w_50 = NULL;
  w_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_50), term_c_29);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm t_149 (ATerm), ATerm u_149 (ATerm), ATerm t)
{
  ATerm m_50 = NULL,n_50 = NULL;
  ATerm d_29 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_50 = NULL,p_50 = NULL;
      t = term_y_18;
      o_50 = t;
      t = term_v_28;
      p_50 = t;
      t = term_w_28;
      t = u_7(o_50, p_50, t);
      LocalPopChoice(e_29);
    }
  else
    {
      t = d_29;
      t = fetch_1_0(i_8, t);
    }
  {
    ATerm f_29 = t;
    int g_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_149(t);
        t = echo_0_0(t);
        LocalPopChoice(g_29);
      }
    else
      {
        t = f_29;
      }
  }
  t = term_i_29;
  t = echo_0_0(t);
  t = term_p_29;
  m_50 = t;
  t = term_q_29;
  n_50 = t;
  t = term_v_29;
  t = u_7(m_50, n_50, t);
  t = reverse_acc_2_0(_id, l_8, t);
  t = map_1_0(m_8, t);
  t = term_w_29;
  t = echo_0_0(t);
  {
    ATerm x_29 = t;
    int y_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_149(t);
        {
          ATerm z_29 = t;
          int a_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_50 = NULL;
              x_50 = t;
              t = SSL_is_string(x_50);
              t = x_50;
              LocalPopChoice(a_30);
              {
                ATerm a_51 = NULL;
                a_51 = t;
                t = (ATerm) ATinsert(ATempty, a_51);
              }
            }
          else
            {
              t = z_29;
            }
        }
        t = echo_0_0(t);
        LocalPopChoice(y_29);
      }
    else
      {
        t = x_29;
      }
  }
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL,y_17 = NULL;
  j_51 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_51);
  h_51 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, i_51);
  y_17 = t;
  t = SSLsetAnnotations(y_17, h_51);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_51 = NULL;
  e_51 = t;
  {
    ATerm b_30 = t;
    int d_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_51 = NULL,g_51 = NULL;
        t = term_y_18;
        f_51 = t;
        t = term_v_28;
        g_51 = t;
        t = term_w_28;
        t = u_7(f_51, g_51, t);
        LocalPopChoice(d_30);
      }
    else
      {
        t = b_30;
        t = fetch_1_0(n_8, t);
      }
  }
  t = e_51;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm l_51 = NULL;
  l_51 = t;
  if(match_string(t, "-k"))
    {
      t = l_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = l_51;
    }
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL;
  m_51 = t;
  t = SSL_string_to_int(m_51);
  n_51 = t;
  t = term_e_30;
  o_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_30, n_51);
  t = x_7(o_51, n_51, t);
  t = m_51;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_l_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_8, s_8, u_8, t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm q_51 = NULL;
  q_51 = t;
  if(match_string(t, "-S"))
    {
      t = q_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = q_51;
    }
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm r_51 = NULL,s_51 = NULL;
  t = term_z_18;
  r_51 = t;
  t = term_m_30;
  s_51 = t;
  t = term_n_30;
  t = x_7(r_51, s_51, t);
  t = term_o_30;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_p_30;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL;
  t_51 = t;
  t = SSL_string_to_int(t_51);
  u_51 = t;
  t = term_z_18;
  v_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_18, u_51);
  t = x_7(v_51, u_51, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, t_51);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  t = term_q_30;
  return(t);
}
static ATerm j_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm w_51 = NULL,x_51 = NULL;
  t = term_t_30;
  w_51 = t;
  t = term_b_29;
  x_51 = t;
  t = term_u_30;
  t = x_7(w_51, x_51, t);
  t = term_v_30;
  return(t);
}
static ATerm n_9 (ATerm t)
{
  t = term_z_30;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_31 = t;
  int b_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_8, x_8, y_8, t);
      LocalPopChoice(b_31);
    }
  else
    {
      t = a_31;
      {
        ATerm c_31 = t;
        int d_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_8, f_9, g_9, t);
            LocalPopChoice(d_31);
          }
        else
          {
            t = c_31;
            t = Option_3_0(j_9, l_9, n_9, t);
          }
      }
    }
  return(t);
}
static ATerm x_7 (ATerm y_79, ATerm z_79, ATerm t)
{
  ATerm y_51 = NULL,z_51 = NULL;
  t = term_y_18;
  y_51 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_18, y_79, z_79);
  t = lookup_table_0_1(y_51, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_7(y_79, z_79, z_51, t);
  t = (ATerm) ATmakeAppl(sym__3, term_y_18, y_79, z_79);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm d_52 = NULL,e_52 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_52 = NULL,g_52 = NULL,h_52 = NULL;
      t = term_b_29;
      t = e_0(t);
      f_52 = t;
      t = term_p_29;
      g_52 = t;
      t = term_q_29;
      h_52 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_29, term_q_29, f_52);
      t = v_7(g_52, h_52, f_52, t);
      _fail(t);
    }
  else
    {
      ATerm k_52 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_52 = ATgetFirst((ATermList) t);
          e_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_52;
      t = b_0(t);
      t = term_b_29;
      t = d_0(t);
      k_52 = t;
      t = (ATerm) ATinsert(CheckATermList(e_52), k_52);
    }
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm m_52 = NULL;
  m_52 = t;
  if(match_string(t, "-o"))
    {
      t = m_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = m_52;
    }
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm n_52 = NULL,o_52 = NULL;
  n_52 = t;
  t = term_f_27;
  o_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_27, n_52);
  t = x_7(o_52, n_52, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, n_52);
  return(t);
}
static ATerm q_9 (ATerm t)
{
  t = term_f_31;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_9, p_9, q_9, t);
  return(t);
}
static ATerm v_7 (ATerm e_65, ATerm f_65, ATerm d_65, ATerm t)
{
  ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL,t_52 = NULL,u_52 = NULL;
  q_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_65, f_65);
  {
    ATerm g_31 = t;
    int h_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_31 = ATgetArgument(t, 0);
            ATerm j_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_65, f_65);
        t = u_7(e_65, f_65, t);
        LocalPopChoice(h_31);
      }
    else
      {
        t = g_31;
        t = (ATerm) ATempty;
      }
  }
  r_52 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_65, f_65, (ATerm) ATinsert(CheckATermList(r_52), d_65));
  t = lookup_table_0_1(e_65, t);
  u_52 = t;
  t = (ATerm) ATinsert(CheckATermList(r_52), d_65);
  s_52 = t;
  t = u_52;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_7(f_65, s_52, t_52, t);
  t = q_52;
  return(t);
}
ATerm ArgOption_3_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm b_53 = NULL,c_53 = NULL,d_53 = NULL,e_53 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_53 = NULL,g_53 = NULL,h_53 = NULL;
      t = term_b_29;
      t = k_0(t);
      f_53 = t;
      t = term_p_29;
      g_53 = t;
      t = term_q_29;
      h_53 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_29, term_q_29, f_53);
      t = v_7(g_53, h_53, f_53, t);
      _fail(t);
    }
  else
    {
      ATerm l_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_53 = ATgetFirst((ATermList) t);
          c_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_53;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_53 = ATgetFirst((ATermList) t);
          e_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_53;
      t = f_0(t);
      t = d_53;
      t = h_0(t);
      l_53 = t;
      t = (ATerm) ATinsert(CheckATermList(e_53), l_53);
    }
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm n_53 = NULL;
  n_53 = t;
  if(match_string(t, "-i"))
    {
      t = n_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = n_53;
    }
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm o_53 = NULL,p_53 = NULL;
  o_53 = t;
  t = term_s_28;
  p_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_28, o_53);
  t = x_7(p_53, o_53, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, o_53);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  t = term_k_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_9, x_9, y_9, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm q_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_29;
  t = whoami_0_0(t);
  q_53 = t;
  t = term_v_18;
  s_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_31), q_53);
  t_53 = t;
  t = SSL_printnl(s_53, t_53);
  t = term_n_31;
  r_53 = t;
  t = SSL_exit(r_53);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm u_53 = NULL,v_53 = NULL;
  t = term_y_18;
  u_53 = t;
  t = term_v_28;
  v_53 = t;
  t = term_w_28;
  t = u_7(u_53, v_53, t);
  return(t);
}
static ATerm p_7 (ATerm n_63, ATerm o_63, ATerm t)
{
  ATerm o_31 = t;
  int p_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(n_63, o_63);
      LocalPopChoice(p_31);
    }
  else
    {
      t = o_31;
      t = SSL_addr(n_63, o_63);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm g_134 (ATerm), ATerm h_134 (ATerm), ATerm t)
{
  ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL;
  x_53 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_53;
      t = g_134(t);
    }
  else
    {
      ATerm c_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_53 = ATgetFirst((ATermList) t);
          z_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_53;
      t = foldr_2_0(g_134, h_134, t);
      c_54 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_53, c_54);
      t = h_134(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = term_m_30;
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm t_11 = NULL,u_11 = NULL;
  if(match_cons(t, sym__2))
    {
      t_11 = ATgetArgument(t, 0);
      u_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_7(t_11, u_11, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_54 = NULL,n_11 = NULL,q_11 = NULL;
  t = times_0_0(t);
  q_11 = t;
  t = SSL_explode_term(q_11);
  if(match_cons(t, sym__2))
    {
      ATerm q_31 = ATgetArgument(t, 0);
      n_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_11;
  t = foldr_2_0(z_9, a_10, t);
  f_54 = t;
  t = SSL_TicksToSeconds(f_54);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_54 = NULL,r_54 = NULL,s_54 = NULL;
  q_54 = t;
  if(match_cons(t, sym__2))
    {
      r_54 = ATgetArgument(t, 0);
      s_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_31 = t;
    int s_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_54;
        if((r_54 != t))
          {
            _fail(t);
          }
        t = q_54;
        LocalPopChoice(s_31);
      }
    else
      {
        t = r_31;
        t = (ATerm) ATmakeAppl(sym__2, r_54, s_54);
        {
          ATerm t_31 = t;
          int u_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_54, s_54);
              LocalPopChoice(u_31);
            }
          else
            {
              t = t_31;
              t = SSL_gtr(r_54, s_54);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, r_54, s_54);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm q_144 (ATerm), ATerm t)
{
  ATerm w_54 = NULL;
  w_54 = t;
  {
    ATerm v_31 = t;
    int w_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_54 = NULL,z_54 = NULL,a_55 = NULL;
        t = term_y_18;
        z_54 = t;
        t = term_z_18;
        a_55 = t;
        t = term_a_19;
        t = u_7(z_54, a_55, t);
        y_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_54, term_n_31);
        t = geq_0_0(t);
        t = w_54;
        t = q_144(t);
        LocalPopChoice(w_31);
      }
    else
      {
        t = v_31;
        t = w_54;
      }
  }
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm c_55 = NULL,d_55 = NULL,f_55 = NULL,g_55 = NULL;
  t = run_time_0_0(t);
  c_55 = t;
  t = term_b_29;
  t = whoami_0_0(t);
  d_55 = t;
  t = term_v_18;
  f_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_31), c_55), term_x_31), d_55);
  g_55 = t;
  t = SSL_printnl(f_55, g_55);
  t = (ATerm) ATmakeAppl(sym__2, term_v_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_31), c_55), term_x_31), d_55));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(b_10, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm h_55 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_30;
  h_55 = t;
  t = SSL_exit(h_55);
  return(t);
}
static ATerm y_7 (ATerm t_69, ATerm u_69, ATerm v_69, ATerm t)
{
  ATerm i_55 = NULL;
  t = SSL_hashtable_put(v_69, t_69, u_69);
  i_55 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_55);
  return(t);
}
ATerm lookup_table_0_1 (ATerm q_66, ATerm t)
{
  ATerm r_55 = NULL;
  t = table_hashtable_0_0(t);
  r_55 = t;
  {
    ATerm z_31 = t;
    int a_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_12 = NULL;
        t = r_55;
        if(match_cons(t, sym_Hashtable_1))
          {
            w_12 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = z_7(q_66, w_12, t);
        LocalPopChoice(a_32);
      }
    else
      {
        t = z_31;
        {
          ATerm k_13 = NULL;
          t = q_66;
          t = table_create_0_0(t);
          t = r_55;
          if(match_cons(t, sym_Hashtable_1))
            {
              k_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_7(q_66, k_13, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm b_70, ATerm c_70, ATerm t)
{
  ATerm u_55 = NULL;
  t = SSL_hashtable_create(b_70, c_70);
  u_55 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_55);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm v_55 = NULL,w_55 = NULL,x_55 = NULL,z_55 = NULL,a_56 = NULL;
  v_55 = t;
  t = term_b_32;
  z_55 = t;
  t = term_c_32;
  a_56 = t;
  t = v_55;
  t = new_hashtable_0_2(z_55, a_56, t);
  w_55 = t;
  t = v_55;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_7(v_55, w_55, x_55, t);
  t = v_55;
  return(t);
}
static ATerm r_7 (ATerm y_69, ATerm z_69, ATerm t)
{
  ATerm b_56 = NULL;
  t = SSL_hashtable_remove(z_69, y_69);
  b_56 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_56);
  return(t);
}
static ATerm s_7 (ATerm d_70, ATerm t)
{
  ATerm c_56 = NULL;
  t = SSL_hashtable_destroy(d_70);
  c_56 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_56);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm d_56 = NULL;
  t = SSL_table_hashtable();
  d_56 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_56);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL;
  e_56 = t;
  t = table_hashtable_0_0(t);
  f_56 = t;
  t = lookup_table_0_1(e_56, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_7(h_56, t);
  t = f_56;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_7(e_56, g_56, t);
  t = e_56;
  return(t);
}
ATerm fetch_1_0 (ATerm r_127 (ATerm), ATerm t)
{
  static ATerm e_57 (ATerm t);
  static ATerm e_57 (ATerm t)
  {
    ATerm b_57 = NULL,c_57 = NULL,d_57 = NULL;
    b_57 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_57 = ATgetFirst((ATermList) t);
        d_57 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm d_32 = t;
      int e_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_13 = NULL,a_14 = NULL,a_18 = NULL;
          t = SSLgetAnnotations(b_57);
          w_13 = t;
          t = c_57;
          t = r_127(t);
          a_14 = t;
          t = (ATerm) ATinsert(CheckATermList(d_57), a_14);
          a_18 = t;
          t = SSLsetAnnotations(a_18, w_13);
          LocalPopChoice(e_32);
        }
      else
        {
          t = d_32;
          {
            ATerm s_14 = NULL,v_14 = NULL,b_18 = NULL;
            t = SSLgetAnnotations(b_57);
            s_14 = t;
            t = d_57;
            t = e_57(t);
            v_14 = t;
            t = (ATerm) ATinsert(CheckATermList(v_14), c_57);
            b_18 = t;
            t = SSLsetAnnotations(b_18, s_14);
          }
        }
    }
    return(t);
  }
  t = e_57(t);
  return(t);
}
static ATerm z_7 (ATerm w_69, ATerm x_69, ATerm t)
{
  t = SSL_hashtable_get(x_69, w_69);
  return(t);
}
static ATerm u_7 (ATerm x_66, ATerm y_66, ATerm t)
{
  ATerm h_57 = NULL;
  t = lookup_table_0_1(x_66, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_7(y_66, h_57, t);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm j_57 = NULL,k_57 = NULL;
  t = term_f_32;
  j_57 = t;
  t = term_b_29;
  k_57 = t;
  t = term_g_32;
  t = x_7(j_57, k_57, t);
  return(t);
}
static ATerm f_10 (ATerm t)
{
  t = term_h_32;
  return(t);
}
static ATerm g_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_10 (ATerm t)
{
  ATerm l_57 = NULL,m_57 = NULL,n_57 = NULL,o_57 = NULL;
  t = term_f_32;
  n_57 = t;
  t = term_b_29;
  o_57 = t;
  t = term_g_32;
  t = x_7(n_57, o_57, t);
  t = term_i_32;
  l_57 = t;
  t = term_b_29;
  m_57 = t;
  t = term_j_32;
  t = x_7(l_57, m_57, t);
  t = term_n_32;
  return(t);
}
static ATerm i_10 (ATerm t)
{
  t = term_q_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_32 = t;
  int t_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_10, e_10, f_10, t);
      LocalPopChoice(t_32);
    }
  else
    {
      t = r_32;
      t = Option_3_0(g_10, h_10, i_10, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm o_149 (ATerm), ATerm t)
{
  ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL,w_57 = NULL,a_58 = NULL,b_58 = NULL,e_18 = NULL;
  t_57 = t;
  {
    ATerm u_32 = t;
    int v_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_32;
        t = o_149(t);
        LocalPopChoice(v_32);
      }
    else
      {
        t = u_32;
      }
  }
  t = t_57;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_57 = ATgetFirst((ATermList) t);
      w_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_57);
  u_57 = t;
  t = term_v_28;
  b_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_28, v_57);
  t = x_7(b_58, v_57, t);
  t = w_57;
  {
    static ATerm l_58 (ATerm t);
    static ATerm l_58 (ATerm t)
    {
      ATerm z_32 = t;
      int a_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_33 = t;
          int c_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_58 = NULL;
              e_58 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_58;
              LocalPopChoice(c_33);
            }
          else
            {
              t = b_33;
              t = o_149(t);
              t = Cons_2_0(_id, l_58, t);
            }
          LocalPopChoice(a_33);
        }
      else
        {
          t = z_32;
          {
            ATerm h_58 = NULL,i_58 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_58 = ATgetFirst((ATermList) t);
                i_58 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(i_58), (ATerm) ATmakeAppl(sym_Undefined_1, h_58));
          }
        }
      return(t);
    }
    t = l_58(t);
  }
  a_58 = t;
  t = (ATerm) ATinsert(CheckATermList(a_58), (ATerm) ATmakeAppl(sym_Program_1, v_57));
  e_18 = t;
  t = SSLsetAnnotations(e_18, u_57);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm y_58 = NULL;
  y_58 = t;
  if(match_string(t, "--help"))
    {
      t = y_58;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_58;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_58;
        }
    }
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm z_58 = NULL,a_59 = NULL;
  t = term_d_33;
  z_58 = t;
  t = term_b_29;
  a_59 = t;
  t = term_e_33;
  t = x_7(z_58, a_59, t);
  t = term_f_33;
  return(t);
}
static ATerm t_10 (ATerm t)
{
  t = term_g_33;
  return(t);
}
static ATerm u_10 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm l_149 (ATerm), ATerm m_149 (ATerm), ATerm n_149 (ATerm), ATerm t)
{
  ATerm q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL,v_58 = NULL,w_58 = NULL,x_58 = NULL;
  s_58 = t;
  t = term_p_29;
  t_58 = t;
  t = term_h_33;
  t = lookup_table_0_1(t_58, t);
  x_58 = t;
  t = term_q_29;
  u_58 = t;
  t = (ATerm) ATempty;
  v_58 = t;
  t = x_58;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_7(u_58, v_58, w_58, t);
  t = s_58;
  {
    static ATerm j_10 (ATerm t);
    static ATerm j_10 (ATerm t)
    {
      ATerm i_33 = t;
      int j_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_149(t);
          LocalPopChoice(j_33);
        }
      else
        {
          t = i_33;
          {
            ATerm k_33 = t;
            int p_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_10, r_10, t_10, t);
                LocalPopChoice(p_33);
              }
            else
              {
                t = k_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_10, t);
  }
  {
    ATerm q_33 = t;
    int r_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_59 = NULL;
        l_59 = t;
        {
          ATerm s_33 = t;
          int v_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_15 = NULL;
              t = l_59;
              {
                ATerm w_33 = t;
                int z_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_15 = NULL,s_15 = NULL;
                    t = term_y_18;
                    n_15 = t;
                    t = term_d_33;
                    s_15 = t;
                    t = term_a_34;
                    t = u_7(n_15, s_15, t);
                    LocalPopChoice(z_33);
                  }
                else
                  {
                    t = w_33;
                    t = fetch_1_0(u_10, t);
                  }
              }
              t = l_59;
              t = m_149(t);
              t = term_m_30;
              m_15 = t;
              t = SSL_exit(m_15);
              LocalPopChoice(v_33);
            }
          else
            {
              t = s_33;
              {
                ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL;
                t = term_y_18;
                x_15 = t;
                t = term_f_32;
                y_15 = t;
                t = term_b_34;
                t = u_7(x_15, y_15, t);
                t = l_59;
                t = n_149(t);
                t = term_m_30;
                w_15 = t;
                t = SSL_exit(w_15);
              }
            }
        }
        LocalPopChoice(r_33);
      }
    else
      {
        t = q_33;
        {
          ATerm e_34 = t;
          int f_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_59 = NULL,n_59 = NULL,o_59 = NULL;
              static ATerm v_10 (ATerm t);
              static ATerm v_10 (ATerm t)
              {
                ATerm p_59 = NULL,q_59 = NULL,r_59 = NULL,g_18 = NULL;
                r_59 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    q_59 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(r_59);
                p_59 = t;
                t = q_59;
                if(((q_58 != NULL) && (q_58 != t)))
                  _fail(t);
                else
                  q_58 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, q_59);
                g_18 = t;
                t = SSLsetAnnotations(g_18, p_59);
                return(t);
              }
              t = fetch_1_0(v_10, t);
              t = term_v_18;
              n_59 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_58)), term_g_34);
              o_59 = t;
              t = SSL_printnl(n_59, o_59);
              t = (ATerm) ATmakeAppl(sym__2, term_v_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_58)), term_g_34));
              t = m_149(t);
              t = term_n_31;
              m_59 = t;
              t = SSL_exit(m_59);
              LocalPopChoice(f_34);
            }
          else
            {
              t = e_34;
            }
        }
      }
  }
  r_58 = t;
  t = term_p_29;
  t = table_destroy_0_0(t);
  t = r_58;
  return(t);
}
ATerm option_wrap_5_0 (ATerm o_147 (ATerm), ATerm p_147 (ATerm), ATerm q_147 (ATerm), ATerm r_147 (ATerm), ATerm s_147 (ATerm), ATerm t)
{
  ATerm c_60 = NULL,d_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL;
  t = parse_options_3_0(o_147, p_147, q_147, t);
  c_60 = t;
  t = term_h_34;
  t = table_create_0_0(t);
  t = term_h_34;
  d_60 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_34, term_j_34, c_60);
  t = lookup_table_0_1(d_60, t);
  g_60 = t;
  t = term_j_34;
  e_60 = t;
  t = g_60;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_7(e_60, c_60, f_60, t);
  t = c_60;
  t = r_147(t);
  {
    ATerm k_34 = t;
    int m_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_147(t);
        t = report_success_0_0(t);
        LocalPopChoice(m_34);
      }
    else
      {
        t = k_34;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm n_34 = t;
  int o_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(o_34);
    }
  else
    {
      t = n_34;
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
                  t = Option_3_0(z_10, a_11, b_11, t);
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
  return(t);
}
static ATerm x_10 (ATerm t)
{
  t = input_1_0(c_11, t);
  return(t);
}
static ATerm z_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_11 (ATerm t)
{
  ATerm i_60 = NULL,j_60 = NULL;
  t = term_q_27;
  i_60 = t;
  t = term_b_29;
  j_60 = t;
  t = term_y_34;
  t = x_7(i_60, j_60, t);
  t = term_z_34;
  return(t);
}
static ATerm b_11 (ATerm t)
{
  t = term_b_35;
  return(t);
}
static ATerm c_11 (ATerm t)
{
  t = output_1_0(d_11, t);
  return(t);
}
static ATerm d_11 (ATerm t)
{
  ATerm l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL,l_18 = NULL,k_18 = NULL,i_18 = NULL;
  v_60 = t;
  if(match_cons(t, sym_Specification_1))
    {
      m_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_60);
  l_60 = t;
  t = m_60;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_60 = ATgetFirst((ATermList) t);
      p_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_60);
  n_60 = t;
  t = o_60;
  if(match_cons(t, sym_Signature_1))
    {
      t_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_60);
  s_60 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, t_60);
  i_18 = t;
  t = SSLsetAnnotations(i_18, s_60);
  u_60 = t;
  t = p_60;
  t = Cons_2_0(e_11, g_11, t);
  q_60 = t;
  t = (ATerm) ATinsert(CheckATermList(q_60), u_60);
  k_18 = t;
  t = SSLsetAnnotations(k_18, n_60);
  r_60 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, r_60);
  l_18 = t;
  t = SSLsetAnnotations(l_18, l_60);
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL,j_18 = NULL;
  a_61 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      y_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_61);
  x_60 = t;
  t = y_60;
  t = map_1_0(m_11, t);
  z_60 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, z_60);
  j_18 = t;
  t = SSLsetAnnotations(j_18, x_60);
  return(t);
}
static ATerm g_11 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm m_11 (ATerm t)
{
  t = scope_2_0(r_11, s_11, t);
  return(t);
}
static ATerm r_11 (ATerm t)
{
  t = term_g_12;
  return(t);
}
static ATerm s_11 (ATerm t)
{
  t = scope_2_0(w_11, cp_0_0, t);
  return(t);
}
static ATerm w_11 (ATerm t)
{
  t = term_x_11;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(w_10, default_system_usage_0_0, default_system_about_0_0, _id, x_10, t);
  return(t);
}

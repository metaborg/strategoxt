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
static ATerm term_x_34;
static ATerm term_w_34;
static ATerm term_v_34;
static ATerm term_f_34;
static ATerm term_e_34;
static ATerm term_d_34;
static ATerm term_x_33;
static ATerm term_w_33;
static ATerm term_e_33;
static ATerm term_d_33;
static ATerm term_c_33;
static ATerm term_b_33;
static ATerm term_a_33;
static ATerm term_v_32;
static ATerm term_n_32;
static ATerm term_i_32;
static ATerm term_h_32;
static ATerm term_g_32;
static ATerm term_f_32;
static ATerm term_e_32;
static ATerm term_d_32;
static ATerm term_a_32;
static ATerm term_z_31;
static ATerm term_w_31;
static ATerm term_v_31;
static ATerm term_l_31;
static ATerm term_k_31;
static ATerm term_i_31;
static ATerm term_c_31;
static ATerm term_u_30;
static ATerm term_r_30;
static ATerm term_q_30;
static ATerm term_p_30;
static ATerm term_m_30;
static ATerm term_l_30;
static ATerm term_k_30;
static ATerm term_j_30;
static ATerm term_i_30;
static ATerm term_c_30;
static ATerm term_b_30;
static ATerm term_y_29;
static ATerm term_t_29;
static ATerm term_s_29;
static ATerm term_p_29;
static ATerm term_o_29;
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
static ATerm term_g_12;
static ATerm term_f_12;
static ATerm term_e_12;
static ATerm term_w_11;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_e_12);
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
  term_g_23 = (ATerm) ATmakeAppl(sym__2, term_f_12, (ATerm) ATempty);
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
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym__2, term_p_29, term_s_29);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym__2, term_z_18, term_i_30);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_30);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym__2, term_p_30, term_b_29);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym__2, term_d_32, term_b_29);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym__2, term_g_32, term_b_29);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(sym__2, term_a_33, term_b_29);
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym__3, term_p_29, term_s_29, (ATerm) ATempty);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(sym__2, term_y_18, term_a_33);
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(sym__2, term_y_18, term_d_32);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym__2, term_q_27, term_b_29);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm a_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm i_6 (ATerm s_114 (ATerm), ATerm j_24, ATerm k_24, ATerm t);
static ATerm u_0 (ATerm t);
static ATerm j_6 (ATerm q_114 (ATerm), ATerm t);
static ATerm v_0 (ATerm t);
static ATerm x_0 (ATerm t);
ATerm exec_maybe_1_0 (ATerm j_114 (ATerm), ATerm t);
static ATerm u_1 (ATerm t);
static ATerm l_6 (ATerm t_114 (ATerm), ATerm t);
static ATerm i_2 (ATerm t);
static ATerm p_5 (ATerm e_4, ATerm g_4, ATerm h_4, ATerm t);
ATerm isect_CurrentTerm_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm l_10 (ATerm j_8, ATerm r_8, ATerm t_8, ATerm t);
ATerm isect_Binding_0_0 (ATerm t);
static ATerm m_6 (ATerm d_66, ATerm c_66, ATerm t);
ATerm save_CurrentTerm_0_0 (ATerm t);
static ATerm n_6 (ATerm w_69, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_Binding_0_0 (ATerm t);
ATerm prop_abstract_choice_2_0 (ATerm x_114 (ATerm), ATerm y_114 (ATerm), ATerm t);
ATerm prop_choice_1_0 (ATerm w_114 (ATerm), ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm prop_traversal_1_0 (ATerm w_0 (ATerm), ATerm t);
static ATerm p_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm z_4 (ATerm t);
ATerm prop_call_1_0 (ATerm t_0 (ATerm), ATerm t);
static ATerm b_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm o_6 (ATerm r_114 (ATerm), ATerm e_24, ATerm t);
static ATerm m_5 (ATerm t);
ATerm prop_build_0_0 (ATerm t);
static ATerm p_6 (ATerm f_115 (ATerm), ATerm b_26, ATerm z_25, ATerm t);
ATerm oncetd_1_0 (ATerm h_121 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm e_126 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm t_143 (ATerm), ATerm t);
static ATerm o_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm q_6 (ATerm x_24, ATerm y_24, ATerm t);
ATerm lookup_0_0 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm w_148 (ATerm), ATerm x_148 (ATerm), ATerm t);
static ATerm b_7 (ATerm e_155 (ATerm), ATerm d_90, ATerm e_90, ATerm g_90, ATerm f_90, ATerm t);
ATerm at_end_1_0 (ATerm d_127 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm x_26 (ATerm l_26, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm q_128 (ATerm), ATerm r_128 (ATerm), ATerm s_128 (ATerm), ATerm t_128 (ATerm), ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm q_918, ATerm v_918, ATerm f_91, ATerm t);
ATerm while_not_2_0 (ATerm u_119 (ATerm), ATerm v_119 (ATerm), ATerm t);
ATerm for_3_0 (ATerm x_119 (ATerm), ATerm y_119 (ATerm), ATerm z_119 (ATerm), ATerm t);
static ATerm v_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm y_37 (ATerm l_32, ATerm m_32, ATerm p_32, ATerm t);
static ATerm z_37 (ATerm j_33, ATerm k_33, ATerm l_33, ATerm t);
static ATerm b_38 (ATerm c_34, ATerm g_34, ATerm j_34, ATerm t);
static ATerm e_38 (ATerm j_35, ATerm k_35, ATerm l_35, ATerm t);
static ATerm f_38 (ATerm y_35, ATerm c_36, ATerm g_36, ATerm t);
static ATerm a_7 (ATerm t);
ATerm prop_pattern_match_0_0 (ATerm t);
ATerm CurrentTerm_0_0 (ATerm t);
static ATerm e_7 (ATerm l_65, ATerm m_65, ATerm t);
ATerm Binding_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm v_121 (ATerm), ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm v_7 (ATerm t);
ATerm prop_match_0_0 (ATerm t);
ATerm cp_0_0 (ATerm t);
static ATerm f_7 (ATerm f_65, ATerm g_65, ATerm t);
ATerm end_scope_1_0 (ATerm c_115 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm z_118 (ATerm), ATerm a_119 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm b_115 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm d_115 (ATerm), ATerm e_115 (ATerm), ATerm t);
ATerm map_1_0 (ATerm o_126 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm g_91 (ATerm), ATerm h_91 (ATerm), ATerm t);
static ATerm g_7 (ATerm o_59, ATerm p_59, ATerm t);
static ATerm h_7 (ATerm v_43, ATerm w_43, ATerm t);
static ATerm j_7 (ATerm g_126 (ATerm), ATerm q_304, ATerm b_44, ATerm t);
static ATerm i_7 (ATerm r_43, ATerm s_43, ATerm t);
static ATerm c_8 (ATerm t);
static ATerm e_8 (ATerm t);
ATerm output_1_0 (ATerm v_146 (ATerm), ATerm t);
static ATerm p_47 (ATerm j_47, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm k_7 (ATerm x_43, ATerm t);
static ATerm l_7 (ATerm u_57, ATerm v_57, ATerm t);
static ATerm m_7 (ATerm q_59, ATerm r_59, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm a_49 (ATerm z_47, ATerm t);
static ATerm b_49 (ATerm d_48, ATerm e_48, ATerm f_48, ATerm t);
static ATerm c_49 (ATerm n_48, ATerm o_48, ATerm p_48, ATerm t);
static ATerm n_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm w_146 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm h_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
ATerm default_system_usage_2_0 (ATerm u_148 (ATerm), ATerm v_148 (ATerm), ATerm t);
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
static ATerm e_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm w_7 (ATerm u_79, ATerm v_79, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm u_7 (ATerm a_65, ATerm b_65, ATerm z_64, ATerm t);
ATerm ArgOption_3_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm v_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm o_7 (ATerm j_63, ATerm k_63, ATerm t);
ATerm foldr_2_0 (ATerm l_133 (ATerm), ATerm m_133 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm r_143 (ATerm), ATerm t);
static ATerm b_10 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm x_7 (ATerm p_69, ATerm q_69, ATerm r_69, ATerm t);
ATerm lookup_table_0_1 (ATerm m_66, ATerm t);
ATerm new_hashtable_0_2 (ATerm x_69, ATerm y_69, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm q_7 (ATerm u_69, ATerm v_69, ATerm t);
static ATerm r_7 (ATerm z_69, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm w_126 (ATerm), ATerm t);
static ATerm y_7 (ATerm s_69, ATerm t_69, ATerm t);
static ATerm t_7 (ATerm t_66, ATerm u_66, ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm i_10 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm p_148 (ATerm), ATerm t);
static ATerm k_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm u_10 (ATerm t);
ATerm parse_options_3_0 (ATerm m_148 (ATerm), ATerm n_148 (ATerm), ATerm o_148 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm p_146 (ATerm), ATerm q_146 (ATerm), ATerm r_146 (ATerm), ATerm s_146 (ATerm), ATerm t_146 (ATerm), ATerm t);
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
static ATerm q_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm v_11 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  t = term_w_11;
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      o_1 = ATgetArgument(t, 0);
      {
        ATerm x_11 = ATgetArgument(t, 1);
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
  t = p_6(q_0, q_1, r_1, t);
  t = p_1;
  return(t);
}
static ATerm q_0 (ATerm t)
{
  t = term_w_11;
  return(t);
}
static ATerm r_0 (ATerm t)
{
  t = term_f_12;
  return(t);
}
static ATerm i_6 (ATerm s_114 (ATerm), ATerm j_24, ATerm k_24, ATerm t)
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
    t = term_g_12;
    t = p_6(r_0, j_1, l_1, t);
    t = g_1;
    t = s_114(t);
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
  t = term_f_12;
  return(t);
}
static ATerm j_6 (ATerm q_114 (ATerm), ATerm t)
{
  ATerm s_1 = NULL,t_1 = NULL,v_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL,n_4 = NULL;
  s_1 = t;
  t = (ATerm) ATempty;
  t_1 = t;
  t = term_e_12;
  v_1 = t;
  t = term_g_12;
  t = p_6(u_0, t_1, v_1, t);
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
  t = exec_maybe_1_0(q_114, t);
  y_1 = t;
  t = (ATerm) ATmakeAppl(sym_Not_1, y_1);
  n_4 = t;
  t = SSLsetAnnotations(n_4, w_1);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_f_12;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = term_f_12;
  return(t);
}
ATerm exec_maybe_1_0 (ATerm j_114 (ATerm), ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL;
  b_2 = t;
  t = (ATerm) ATempty;
  f_2 = t;
  t = term_e_12;
  g_2 = t;
  t = term_g_12;
  t = p_6(v_0, f_2, g_2, t);
  t = b_2;
  t = save_Binding_0_0(t);
  z_1 = t;
  t = b_2;
  t = j_114(t);
  a_2 = t;
  t = (ATerm) ATempty;
  d_2 = t;
  t = term_e_12;
  e_2 = t;
  t = term_g_12;
  t = p_6(x_0, d_2, e_2, t);
  t = term_w_11;
  t = table_destroy_0_0(t);
  t = term_w_11;
  c_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_11, z_1);
  t = m_6(c_2, z_1, t);
  t = a_2;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_f_12;
  return(t);
}
static ATerm l_6 (ATerm t_114 (ATerm), ATerm t)
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
      t = term_g_12;
      t = p_6(u_1, c_3, d_3, t);
      t = term_w_11;
      t = table_destroy_0_0(t);
      t = term_w_11;
      a_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_w_11, j_2);
      t = m_6(a_3, j_2, t);
      t = y_2;
      t = t_114(t);
      return(t);
    }
    t = map_1_0(n_1, t);
  }
  p_2 = t;
  t = term_f_12;
  t = table_destroy_0_0(t);
  t = term_f_12;
  w_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_12, h_2);
  t = m_6(w_2, h_2, t);
  t = term_w_11;
  t = table_destroy_0_0(t);
  t = term_w_11;
  s_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_11, j_2);
  t = m_6(s_2, j_2, t);
  t = n_2;
  t = t_114(t);
  r_2 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, p_2, r_2);
  c_5 = t;
  t = SSLsetAnnotations(c_5, l_2);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm r_4 = NULL,t_4 = NULL,u_4 = NULL,w_4 = NULL,y_4 = NULL;
  y_4 = t;
  if(match_cons(t, sym__2))
    {
      r_4 = ATgetArgument(t, 0);
      t_4 = ATgetArgument(t, 1);
      t = t_4;
      {
        ATerm i_12 = t;
        int j_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                u_4 = ATgetFirst((ATermList) t);
                {
                  ATerm k_12 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(j_12);
            t = u_4;
            {
              ATerm m_12 = t;
              int q_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm r_12 = ATgetArgument(t, 0);
                      w_4 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(q_12);
                  t = r_4;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = y_4;
                    }
                  else
                    {
                      ATerm u_12 = t;
                      int z_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = p_5(r_4, w_4, y_4, t);
                          LocalPopChoice(z_12);
                        }
                      else
                        {
                          t = u_12;
                          t = y_4;
                        }
                    }
                }
              else
                {
                  t = m_12;
                  t = r_4;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = y_4;
                    }
                  else
                    {
                      t = y_4;
                    }
                }
            }
          }
        else
          {
            t = i_12;
            t = r_4;
            if(match_cons(t, sym_Scopes_0))
              {
                t = y_4;
              }
            else
              {
                t = y_4;
              }
          }
      }
    }
  else
    {
      t = y_4;
    }
  return(t);
}
static ATerm p_5 (ATerm e_4, ATerm g_4, ATerm h_4, ATerm t)
{
  t = h_4;
  {
    ATerm b_13 = t;
    int c_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_0 = NULL;
        t = term_f_12;
        i_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_12, e_4);
        t = t_7(i_0, e_4, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm d_13 = ATgetFirst((ATermList) t);
            if(match_cons(d_13, sym_Defined_2))
              {
                ATerm l_13 = ATgetArgument(d_13, 0);
                if((g_4 != ATgetArgument(d_13, 1)))
                  {
                    _fail(ATgetArgument(d_13, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm k_13 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = h_4;
        LocalPopChoice(c_13);
      }
    else
      {
        t = b_13;
        t = (ATerm) ATmakeAppl(sym__2, e_4, (ATerm) ATinsert(ATempty, term_e_12));
      }
  }
  return(t);
}
ATerm isect_CurrentTerm_0_0 (ATerm t)
{
  ATerm v_3 = NULL,a_4 = NULL;
  t = map_1_0(i_2, t);
  v_3 = t;
  t = term_f_12;
  t = table_destroy_0_0(t);
  t = term_f_12;
  a_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_12, v_3);
  t = m_6(a_4, v_3, t);
  t = v_3;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm h_9 = NULL,j_9 = NULL,k_9 = NULL,n_9 = NULL,t_9 = NULL;
  t_9 = t;
  if(match_cons(t, sym__2))
    {
      h_9 = ATgetArgument(t, 0);
      j_9 = ATgetArgument(t, 1);
      t = j_9;
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
                      n_9 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(b_14);
                  t = h_9;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = t_9;
                    }
                  else
                    {
                      ATerm d_14 = t;
                      int e_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = l_10(h_9, n_9, t_9, t);
                          LocalPopChoice(e_14);
                        }
                      else
                        {
                          t = d_14;
                          t = t_9;
                        }
                    }
                }
              else
                {
                  t = y_13;
                  t = h_9;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = t_9;
                    }
                  else
                    {
                      t = t_9;
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
                t = t_9;
              }
            else
              {
                t = t_9;
              }
          }
      }
    }
  else
    {
      t = t_9;
    }
  return(t);
}
static ATerm l_10 (ATerm j_8, ATerm r_8, ATerm t_8, ATerm t)
{
  t = t_8;
  {
    ATerm f_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_0 = NULL;
        t = term_w_11;
        s_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_11, j_8);
        t = t_7(s_0, j_8, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm m_14 = ATgetFirst((ATermList) t);
            if(match_cons(m_14, sym_Defined_2))
              {
                ATerm t_14 = ATgetArgument(m_14, 0);
                if((r_8 != ATgetArgument(m_14, 1)))
                  {
                    _fail(ATgetArgument(m_14, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm s_14 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = t_8;
        LocalPopChoice(g_14);
      }
    else
      {
        t = f_14;
        t = (ATerm) ATmakeAppl(sym__2, j_8, (ATerm) ATinsert(ATempty, term_e_12));
      }
  }
  return(t);
}
ATerm isect_Binding_0_0 (ATerm t)
{
  ATerm d_8 = NULL,g_8 = NULL;
  t = map_1_0(h_3, t);
  d_8 = t;
  t = term_w_11;
  t = table_destroy_0_0(t);
  t = term_w_11;
  g_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_11, d_8);
  t = m_6(g_8, d_8, t);
  t = d_8;
  return(t);
}
static ATerm m_6 (ATerm d_66, ATerm c_66, ATerm t)
{
  static ATerm i_3 (ATerm t);
  static ATerm i_3 (ATerm t)
  {
    ATerm o_10 = NULL,p_10 = NULL,r_10 = NULL;
    if(match_cons(t, sym__2))
      {
        o_10 = ATgetArgument(t, 0);
        p_10 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, d_66, o_10, p_10);
    t = lookup_table_0_1(d_66, t);
    if(match_cons(t, sym_Hashtable_1))
      {
        r_10 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = x_7(o_10, p_10, r_10, t);
    t = (ATerm) ATmakeAppl(sym__3, d_66, o_10, p_10);
    return(t);
  }
  t = c_66;
  t = map_1_0(i_3, t);
  return(t);
}
ATerm save_CurrentTerm_0_0 (ATerm t)
{
  t = term_f_12;
  t = table_getlist_0_0(t);
  return(t);
}
static ATerm n_6 (ATerm w_69, ATerm t)
{
  t = SSL_hashtable_keys(w_69);
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
    t = t_7(not_null(y_10), h_11, t);
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
  t = n_6(f_11, t);
  t = map_1_0(j_3, t);
  return(t);
}
ATerm save_Binding_0_0 (ATerm t)
{
  t = term_w_11;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm prop_abstract_choice_2_0 (ATerm x_114 (ATerm), ATerm y_114 (ATerm), ATerm t)
{
  ATerm j_11 = NULL,o_11 = NULL,s_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL;
  b_12 = t;
  t = save_Binding_0_0(t);
  j_11 = t;
  t = save_CurrentTerm_0_0(t);
  o_11 = t;
  t = b_12;
  t = x_114(t);
  a_12 = t;
  t = save_Binding_0_0(t);
  s_11 = t;
  t = term_w_11;
  t = table_destroy_0_0(t);
  t = term_w_11;
  d_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_11, j_11);
  t = m_6(d_12, j_11, t);
  t = j_11;
  t = save_CurrentTerm_0_0(t);
  y_11 = t;
  t = term_f_12;
  t = table_destroy_0_0(t);
  t = term_f_12;
  c_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_12, o_11);
  t = m_6(c_12, o_11, t);
  t = a_12;
  t = y_114(t);
  z_11 = t;
  t = s_11;
  t = isect_Binding_0_0(t);
  t = y_11;
  t = isect_CurrentTerm_0_0(t);
  t = z_11;
  return(t);
}
ATerm prop_choice_1_0 (ATerm w_114 (ATerm), ATerm t)
{
  ATerm h_12 = NULL;
  h_12 = t;
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Choice_2))
          {
            ATerm e_15 = ATgetArgument(t, 0);
            ATerm f_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(z_14);
        {
          static ATerm w_3 (ATerm t);
          static ATerm x_3 (ATerm t);
          static ATerm w_3 (ATerm t)
          {
            ATerm l_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,s_12 = NULL,h_5 = NULL;
            s_12 = t;
            if(match_cons(t, sym_Choice_2))
              {
                n_12 = ATgetArgument(t, 0);
                o_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(s_12);
            l_12 = t;
            t = n_12;
            t = w_114(t);
            p_12 = t;
            t = (ATerm) ATmakeAppl(sym_Choice_2, p_12, o_12);
            h_5 = t;
            t = SSLsetAnnotations(h_5, l_12);
            return(t);
          }
          static ATerm x_3 (ATerm t)
          {
            ATerm t_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,a_13 = NULL,q_5 = NULL;
            a_13 = t;
            if(match_cons(t, sym_Choice_2))
              {
                w_12 = ATgetArgument(t, 0);
                x_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(a_13);
            t_12 = t;
            t = x_12;
            t = w_114(t);
            y_12 = t;
            t = (ATerm) ATmakeAppl(sym_Choice_2, w_12, y_12);
            q_5 = t;
            t = SSLsetAnnotations(q_5, t_12);
            return(t);
          }
          t = h_12;
          t = prop_abstract_choice_2_0(w_3, x_3, t);
        }
      }
    else
      {
        t = y_14;
        {
          ATerm j_15 = t;
          int k_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_GChoice_2))
                {
                  ATerm t_15 = ATgetArgument(t, 0);
                  ATerm u_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(k_15);
              {
                static ATerm y_3 (ATerm t);
                static ATerm z_3 (ATerm t);
                static ATerm y_3 (ATerm t)
                {
                  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,s_5 = NULL;
                  i_13 = t;
                  if(match_cons(t, sym_GChoice_2))
                    {
                      f_13 = ATgetArgument(t, 0);
                      g_13 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(i_13);
                  e_13 = t;
                  t = f_13;
                  t = w_114(t);
                  h_13 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, h_13, g_13);
                  s_5 = t;
                  t = SSLsetAnnotations(s_5, e_13);
                  return(t);
                }
                static ATerm z_3 (ATerm t)
                {
                  ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,t_5 = NULL;
                  q_13 = t;
                  if(match_cons(t, sym_GChoice_2))
                    {
                      n_13 = ATgetArgument(t, 0);
                      o_13 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(q_13);
                  m_13 = t;
                  t = o_13;
                  t = w_114(t);
                  p_13 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, n_13, p_13);
                  t_5 = t;
                  t = SSLsetAnnotations(t_5, m_13);
                  return(t);
                }
                t = h_12;
                t = prop_abstract_choice_2_0(y_3, z_3, t);
              }
            }
          else
            {
              t = j_15;
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
                        ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL,z_13 = NULL,h_14 = NULL,u_5 = NULL;
                        h_14 = t;
                        if(match_cons(t, sym_LChoice_2))
                          {
                            s_13 = ATgetArgument(t, 0);
                            t_13 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(h_14);
                        r_13 = t;
                        t = s_13;
                        t = w_114(t);
                        z_13 = t;
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, z_13, t_13);
                        u_5 = t;
                        t = SSLsetAnnotations(u_5, r_13);
                        return(t);
                      }
                      static ATerm d_4 (ATerm t)
                      {
                        ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,n_14 = NULL,v_5 = NULL;
                        n_14 = t;
                        if(match_cons(t, sym_LChoice_2))
                          {
                            j_14 = ATgetArgument(t, 0);
                            k_14 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(n_14);
                        i_14 = t;
                        t = k_14;
                        t = w_114(t);
                        l_14 = t;
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, j_14, l_14);
                        v_5 = t;
                        t = SSLsetAnnotations(v_5, i_14);
                        return(t);
                      }
                      t = h_12;
                      t = prop_abstract_choice_2_0(c_4, d_4, t);
                    }
                  }
                else
                  {
                    t = v_15;
                    {
                      static ATerm i_4 (ATerm t);
                      static ATerm j_4 (ATerm t);
                      static ATerm i_4 (ATerm t)
                      {
                        ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,g_15 = NULL,h_15 = NULL,c_6 = NULL,b_6 = NULL;
                        h_15 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            a_15 = ATgetArgument(t, 0);
                            b_15 = ATgetArgument(t, 1);
                            c_15 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(h_15);
                        x_14 = t;
                        t = a_15;
                        t = w_114(t);
                        d_15 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, d_15, b_15, c_15);
                        b_6 = t;
                        t = SSLsetAnnotations(b_6, x_14);
                        g_15 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            p_14 = ATgetArgument(t, 0);
                            q_14 = ATgetArgument(t, 1);
                            v_14 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(g_15);
                        o_14 = t;
                        t = q_14;
                        t = w_114(t);
                        w_14 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, p_14, w_14, v_14);
                        c_6 = t;
                        t = SSLsetAnnotations(c_6, o_14);
                        return(t);
                      }
                      static ATerm j_4 (ATerm t)
                      {
                        ATerm i_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,d_6 = NULL;
                        r_15 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            n_15 = ATgetArgument(t, 0);
                            o_15 = ATgetArgument(t, 1);
                            p_15 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(r_15);
                        i_15 = t;
                        t = p_15;
                        t = w_114(t);
                        q_15 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, n_15, o_15, q_15);
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
                      t = h_12;
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
  t = term_f_12;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_f_12;
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
          ATerm x_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      a_1 = t;
      t = term_e_12;
      b_1 = t;
      t = term_g_12;
      t = p_6(k_4, a_1, b_1, t);
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
        ATerm v_16 = NULL,w_16 = NULL,z_16 = NULL;
        static ATerm o_4 (ATerm t);
        static ATerm o_4 (ATerm t)
        {
          t = exec_maybe_1_0(w_0, t);
          return(t);
        }
        ATerm y_16 = t;
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
            t = y_16;
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
        z_16 = t;
        t = term_g_12;
        t = p_6(m_4, w_16, z_16, t);
        t = v_16;
        t = SRTS_one(o_4, t);
      }
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_f_12;
  return(t);
}
static ATerm s_4 (ATerm t)
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
static ATerm v_4 (ATerm t)
{
  t = term_f_12;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL,u_3 = NULL,f_9 = NULL;
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
  f_9 = t;
  t = SSLsetAnnotations(f_9, s_3);
  return(t);
}
ATerm prop_call_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm l_19 = NULL;
  l_19 = t;
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
          t = term_g_12;
          t = p_6(p_4, o_2, q_2, t);
          t = l_19;
          if(match_cons(t, sym_PrimT_3))
            {
              u_2 = ATgetArgument(t, 0);
              v_2 = ATgetArgument(t, 1);
              x_2 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_19);
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
          t = alltd_1_0(s_4, t);
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
          ATerm k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,n_10 = NULL;
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
          t = term_g_12;
          t = p_6(v_4, k_3, l_3, t);
          t = l_19;
          if(match_cons(t, sym_CallT_3))
            {
              n_3 = ATgetArgument(t, 0);
              o_3 = ATgetArgument(t, 1);
              p_3 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_19);
          m_3 = t;
          t = o_3;
          {
            static ATerm x_4 (ATerm t);
            static ATerm x_4 (ATerm t)
            {
              t = exec_maybe_1_0(t_0, t);
              return(t);
            }
            t = map_1_0(x_4, t);
          }
          q_3 = t;
          t = p_3;
          t = alltd_1_0(z_4, t);
          r_3 = t;
          t = (ATerm) ATmakeAppl(sym_CallT_3, n_3, q_3, r_3);
          n_10 = t;
          t = SSLsetAnnotations(n_10, m_3);
        }
      }
  }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_w_11;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL;
  e_20 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, e_20);
  f_20 = t;
  t = term_e_12;
  g_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, e_20), term_e_12);
  t = p_6(i_5, f_20, g_20, t);
  t = e_20;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_w_11;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_f_12;
  return(t);
}
static ATerm o_6 (ATerm r_114 (ATerm), ATerm e_24, ATerm t)
{
  static ATerm d_5 (ATerm t);
  static ATerm d_5 (ATerm t)
  {
    ATerm u_19 = NULL,v_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL,d_20 = NULL,c_16 = NULL;
    u_19 = t;
    t = e_24;
    t = map_1_0(e_5, t);
    t = u_19;
    if(match_cons(t, sym_Scope_2))
      {
        x_19 = ATgetArgument(t, 0);
        y_19 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_19);
    v_19 = t;
    t = y_19;
    t = r_114(t);
    z_19 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, x_19, z_19);
    c_16 = t;
    t = SSLsetAnnotations(c_16, v_19);
    d_20 = t;
    {
      ATerm m_18 = t;
      int n_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_20 = NULL,n_20 = NULL,o_20 = NULL;
          t = CurrentTerm_0_0(t);
          {
            static ATerm j_5 (ATerm t);
            static ATerm j_5 (ATerm t)
            {
              ATerm r_20 = NULL;
              static ATerm k_5 (ATerm t);
              static ATerm k_5 (ATerm t)
              {
                if(((r_20 != NULL) && (r_20 != t)))
                  _fail(t);
                else
                  r_20 = t;
                return(t);
              }
              if(match_cons(t, sym_Var_1))
                {
                  if(((r_20 != NULL) && (r_20 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    r_20 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = e_24;
              t = fetch_1_0(k_5, t);
              return(t);
            }
            t = oncetd_1_0(j_5, t);
          }
          h_20 = t;
          t = (ATerm) ATempty;
          n_20 = t;
          t = term_e_12;
          o_20 = t;
          t = term_g_12;
          t = p_6(l_5, n_20, o_20, t);
          t = h_20;
          LocalPopChoice(n_18);
        }
      else
        {
          t = m_18;
        }
    }
    t = d_20;
    return(t);
  }
  t = scope_2_0(b_5, d_5, t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_f_12;
  return(t);
}
ATerm prop_build_0_0 (ATerm t)
{
  ATerm u_20 = NULL,z_20 = NULL,g_21 = NULL,h_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,e_16 = NULL;
  p_21 = t;
  if(match_cons(t, sym_Build_1))
    {
      m_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_21);
  h_21 = t;
  t = m_21;
  t = alltd_1_0(Binding_0_0, t);
  n_21 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, n_21);
  e_16 = t;
  t = SSLsetAnnotations(e_16, h_21);
  o_21 = t;
  if(match_cons(t, sym_Build_1))
    {
      u_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  z_20 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_o_18, u_20);
  g_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_o_18, u_20));
  t = p_6(m_5, z_20, g_21, t);
  t = o_21;
  return(t);
}
static ATerm p_6 (ATerm f_115 (ATerm), ATerm b_26, ATerm z_25, ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,v_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL;
  t_21 = t;
  t = f_115(t);
  q_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_21, b_26, z_25);
  t = u_7(q_21, b_26, z_25, t);
  {
    ATerm p_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_22 = NULL;
        t = term_r_18;
        b_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_21, term_r_18);
        t = t_7(q_21, b_22, t);
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
      r_21 = ATgetFirst((ATermList) t);
      s_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, q_21, term_r_18, (ATerm) ATinsert(CheckATermList(s_21), (ATerm) ATinsert(CheckATermList(r_21), b_26)));
  t = lookup_table_0_1(q_21, t);
  a_22 = t;
  t = term_r_18;
  v_21 = t;
  t = (ATerm) ATinsert(CheckATermList(s_21), (ATerm) ATinsert(CheckATermList(r_21), b_26));
  y_21 = t;
  t = a_22;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_7(v_21, y_21, z_21, t);
  t = t_21;
  return(t);
}
ATerm oncetd_1_0 (ATerm h_121 (ATerm), ATerm t)
{
  static ATerm c_22 (ATerm t);
  static ATerm c_22 (ATerm t)
  {
    ATerm t_18 = t;
    int u_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_121(t);
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
ATerm debug_1_0 (ATerm e_126 (ATerm), ATerm t)
{
  ATerm d_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL;
  d_22 = t;
  t = e_126(t);
  h_22 = t;
  t = term_v_18;
  i_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_22), h_22);
  j_22 = t;
  t = SSL_printnl(i_22, j_22);
  t = d_22;
  return(t);
}
ATerm if_verbose3_1_0 (ATerm t_143 (ATerm), ATerm t)
{
  ATerm l_22 = NULL;
  l_22 = t;
  {
    ATerm w_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_22 = NULL,p_22 = NULL,r_22 = NULL;
        t = term_y_18;
        p_22 = t;
        t = term_z_18;
        r_22 = t;
        t = term_a_19;
        t = t_7(p_22, r_22, t);
        o_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_22, term_b_19);
        t = geq_0_0(t);
        t = l_22;
        t = t_143(t);
        LocalPopChoice(x_18);
      }
    else
      {
        t = w_18;
        t = l_22;
      }
  }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm z_22 = NULL;
  z_22 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = z_22;
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
      t = z_22;
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_w_11;
  return(t);
}
static ATerm q_6 (ATerm x_24, ATerm y_24, ATerm t)
{
  ATerm v_22 = NULL,x_22 = NULL,y_22 = NULL;
  v_22 = t;
  t = y_24;
  {
    ATerm e_19 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(o_5, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_19;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, x_24);
  x_22 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_f_19, y_24);
  y_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, x_24), (ATerm) ATmakeAppl(sym_Defined_2, term_f_19, y_24));
  t = p_6(w_5, x_22, y_22, t);
  t = v_22;
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL,b_28 = NULL,c_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL;
  b_28 = t;
  if(match_cons(t, sym__2))
    {
      c_28 = ATgetArgument(t, 0);
      e_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_28;
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
  ATerm e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_19 = ATgetArgument(t, 0);
      if(((ATgetType(k_19) == AT_LIST) && !(ATisEmpty(k_19))))
        {
          e_30 = ATgetFirst((ATermList) k_19);
          f_30 = (ATerm) ATgetNext((ATermList) k_19);
        }
      else
        _fail(t);
      {
        ATerm m_19 = ATgetArgument(t, 1);
        if(((ATgetType(m_19) == AT_LIST) && !(ATisEmpty(m_19))))
          {
            g_30 = ATgetFirst((ATermList) m_19);
            h_30 = (ATerm) ATgetNext((ATermList) m_19);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_30, g_30), (ATerm) ATmakeAppl(sym__2, f_30, h_30));
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL;
  if(match_cons(t, sym__2))
    {
      n_30 = ATgetArgument(t, 0);
      o_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_30), n_30);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,u_29 = NULL,v_29 = NULL;
  q_29 = t;
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
        t = q_29;
      }
    else
      {
        t = n_19;
        {
          ATerm d_30 = NULL;
          if(match_cons(t, sym__3))
            {
              r_29 = ATgetArgument(t, 0);
              u_29 = ATgetArgument(t, 1);
              v_29 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, r_29, u_29);
          t = genzip_4_0(x_5, y_5, e_6, _id, t);
          d_30 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_30, v_29);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm w_148 (ATerm), ATerm x_148 (ATerm), ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL;
  static ATerm f_6 (ATerm t);
  static ATerm f_6 (ATerm t)
  {
    ATerm a_5 = NULL;
    t = w_148(t);
    a_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_5, not_null(t_30));
    t = lookup_0_0(t);
    t = x_148(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((t_30 != NULL) && (t_30 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_30 = ATgetArgument(t, 0);
      s_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_30;
  t = alltd_1_0(f_6, t);
  return(t);
}
static ATerm b_7 (ATerm e_155 (ATerm), ATerm d_90, ATerm e_90, ATerm g_90, ATerm f_90, ATerm t)
{
  ATerm v_30 = NULL,z_30 = NULL;
  t = d_90;
  t = e_155(t);
  t = (ATerm) ATmakeAppl(sym__2, d_90, e_90);
  {
    ATerm r_19 = t;
    if((PushChoice() == 0))
      {
        ATerm b_31 = NULL,f_31 = NULL;
        if(match_cons(t, sym__2))
          {
            b_31 = ATgetArgument(t, 0);
            f_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_31;
        {
          static ATerm g_6 (ATerm t);
          static ATerm g_6 (ATerm t)
          {
            if((b_31 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1_0(g_6, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, b_31, f_31);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_19;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, d_90, e_90)), (ATerm) ATmakeAppl(sym__2, f_90, g_90));
  t = substitute_2_0(e_155, _id, t);
  if(match_cons(t, sym__2))
    {
      v_30 = ATgetArgument(t, 0);
      z_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_30, (ATerm) ATinsert(CheckATermList(v_30), (ATerm) ATmakeAppl(sym__2, d_90, e_90)));
  return(t);
}
ATerm at_end_1_0 (ATerm d_127 (ATerm), ATerm t)
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
          ATerm b_4 = NULL,f_4 = NULL,g_16 = NULL;
          t = SSLgetAnnotations(f_26);
          b_4 = t;
          t = p_25;
          t = g_26(t);
          f_4 = t;
          t = (ATerm) ATinsert(CheckATermList(f_4), m_25);
          g_16 = t;
          t = SSLsetAnnotations(g_16, b_4);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_26;
        t = d_127(t);
      }
    return(t);
  }
  t = g_26(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm i_23 = NULL,q_23 = NULL,s_23 = NULL;
  i_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_23;
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
static ATerm x_26 (ATerm l_26, ATerm t)
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
  ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL;
  s_26 = t;
  if(match_cons(t, sym__2))
    {
      q_26 = ATgetArgument(t, 0);
      r_26 = ATgetArgument(t, 1);
      {
        ATerm t_19 = t;
        int w_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm k_6 (ATerm t);
            static ATerm k_6 (ATerm t)
            {
              t = r_26;
              return(t);
            }
            t = q_26;
            t = at_end_1_0(k_6, t);
            LocalPopChoice(w_19);
          }
        else
          {
            t = t_19;
            t = x_26(s_26, t);
          }
      }
    }
  else
    {
      t = x_26(s_26, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm q_128 (ATerm), ATerm r_128 (ATerm), ATerm s_128 (ATerm), ATerm t_128 (ATerm), ATerm t)
{
  static ATerm n_29 (ATerm t);
  static ATerm n_29 (ATerm t)
  {
    ATerm a_20 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_128(t);
        LocalPopChoice(b_20);
      }
    else
      {
        t = a_20;
        {
          ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,i_16 = NULL;
          t = r_128(t);
          m_29 = t;
          if(match_cons(t, sym__2))
            {
              i_29 = ATgetArgument(t, 0);
              j_29 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_29);
          h_29 = t;
          t = i_29;
          t = t_128(t);
          k_29 = t;
          t = j_29;
          t = n_29(t);
          l_29 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_29, l_29);
          i_16 = t;
          t = SSLsetAnnotations(i_16, h_29);
          t = s_128(t);
        }
      }
    return(t);
  }
  t = n_29(t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_20 = ATgetArgument(t, 0);
      if(((ATgetType(c_20) != AT_LIST) || !(ATisEmpty(c_20))))
        _fail(t);
      {
        ATerm i_20 = ATgetArgument(t, 1);
        if(((ATgetType(i_20) != AT_LIST) || !(ATisEmpty(i_20))))
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
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL,m_27 = NULL;
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
            m_27 = (ATerm) ATgetNext((ATermList) k_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_27, k_27), (ATerm) ATmakeAppl(sym__2, j_27, m_27));
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
static ATerm u_6 (ATerm q_918, ATerm v_918, ATerm f_91, ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL,e_27 = NULL;
  t = SSL_explode_term(v_918);
  if(match_cons(t, sym__2))
    {
      a_27 = ATgetArgument(t, 0);
      c_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(q_918);
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
  t = genzip_4_0(r_6, s_6, t_6, _id, t);
  e_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_27, f_91);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm u_119 (ATerm), ATerm v_119 (ATerm), ATerm t)
{
  static ATerm j_31 (ATerm t);
  static ATerm j_31 (ATerm t)
  {
    ATerm l_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_119(t);
        LocalPopChoice(m_20);
      }
    else
      {
        t = l_20;
        t = v_119(t);
        t = j_31(t);
      }
    return(t);
  }
  t = j_31(t);
  return(t);
}
ATerm for_3_0 (ATerm x_119 (ATerm), ATerm y_119 (ATerm), ATerm z_119 (ATerm), ATerm t)
{
  t = x_119(t);
  t = while_not_2_0(y_119, z_119, t);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm j_32 = NULL;
  j_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_32, (ATerm) ATempty);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm k_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_20 = ATgetArgument(t, 0);
      if(((ATgetType(p_20) != AT_LIST) || !(ATisEmpty(p_20))))
        _fail(t);
      k_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_32;
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm z_36 = NULL,c_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL,l_37 = NULL;
  h_37 = t;
  if(match_cons(t, sym__2))
    {
      i_37 = ATgetArgument(t, 0);
      l_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_37;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_36 = ATgetFirst((ATermList) t);
      g_37 = (ATerm) ATgetNext((ATermList) t);
      t = z_36;
      if(match_cons(t, sym__2))
        {
          c_37 = ATgetArgument(t, 0);
          f_37 = ATgetArgument(t, 1);
          {
            ATerm q_20 = t;
            int s_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = y_37(i_37, l_37, h_37, t);
                LocalPopChoice(s_20);
              }
            else
              {
                t = q_20;
                {
                  ATerm t_20 = t;
                  int v_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = h_37;
                      t = b_7(a_7, c_37, f_37, g_37, l_37, t);
                      LocalPopChoice(v_20);
                    }
                  else
                    {
                      t = t_20;
                      {
                        ATerm w_20 = t;
                        int x_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = z_37(i_37, l_37, h_37, t);
                            LocalPopChoice(x_20);
                          }
                        else
                          {
                            t = w_20;
                            {
                              ATerm y_20 = t;
                              int a_21 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = b_38(i_37, l_37, h_37, t);
                                  LocalPopChoice(a_21);
                                }
                              else
                                {
                                  t = y_20;
                                  {
                                    ATerm b_21 = t;
                                    int c_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = e_38(i_37, l_37, h_37, t);
                                        LocalPopChoice(c_21);
                                      }
                                    else
                                      {
                                        t = b_21;
                                        t = f_38(i_37, l_37, h_37, t);
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
          ATerm d_21 = t;
          int e_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_37(i_37, l_37, h_37, t);
              LocalPopChoice(e_21);
            }
          else
            {
              t = d_21;
              {
                ATerm f_21 = t;
                int i_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = z_37(i_37, l_37, h_37, t);
                    LocalPopChoice(i_21);
                  }
                else
                  {
                    t = f_21;
                    {
                      ATerm j_21 = t;
                      int k_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = b_38(i_37, l_37, h_37, t);
                          LocalPopChoice(k_21);
                        }
                      else
                        {
                          t = j_21;
                          {
                            ATerm l_21 = t;
                            int u_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = e_38(i_37, l_37, h_37, t);
                                LocalPopChoice(u_21);
                              }
                            else
                              {
                                t = l_21;
                                t = f_38(i_37, l_37, h_37, t);
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
      ATerm w_21 = t;
      int x_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_37(i_37, l_37, h_37, t);
          LocalPopChoice(x_21);
        }
      else
        {
          t = w_21;
          {
            ATerm e_22 = t;
            int f_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = z_37(i_37, l_37, h_37, t);
                LocalPopChoice(f_22);
              }
            else
              {
                t = e_22;
                {
                  ATerm g_22 = t;
                  int k_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = b_38(i_37, l_37, h_37, t);
                      LocalPopChoice(k_22);
                    }
                  else
                    {
                      t = g_22;
                      {
                        ATerm m_22 = t;
                        int n_22 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = e_38(i_37, l_37, h_37, t);
                            LocalPopChoice(n_22);
                          }
                        else
                          {
                            t = m_22;
                            t = f_38(i_37, l_37, h_37, t);
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
static ATerm y_37 (ATerm l_32, ATerm m_32, ATerm p_32, ATerm t)
{
  ATerm q_32 = NULL,u_32 = NULL,h_33 = NULL,k_16 = NULL;
  t = SSLgetAnnotations(p_32);
  q_32 = t;
  t = l_32;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_22 = ATgetFirst((ATermList) t);
      if(match_cons(q_22, sym__2))
        {
          u_32 = ATgetArgument(q_22, 0);
          if((u_32 != ATgetArgument(q_22, 1)))
            {
              _fail(ATgetArgument(q_22, 1));
            }
        }
      else
        _fail(t);
      h_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_33, m_32);
  k_16 = t;
  t = SSLsetAnnotations(k_16, q_32);
  return(t);
}
static ATerm z_37 (ATerm j_33, ATerm k_33, ATerm l_33, ATerm t)
{
  ATerm p_33 = NULL,u_33 = NULL,v_33 = NULL,y_33 = NULL,z_33 = NULL,l_16 = NULL;
  t = SSLgetAnnotations(l_33);
  p_33 = t;
  t = j_33;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_22 = ATgetFirst((ATermList) t);
      if(match_cons(s_22, sym__2))
        {
          v_33 = ATgetArgument(s_22, 0);
          y_33 = ATgetArgument(s_22, 1);
        }
      else
        _fail(t);
      z_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_6(v_33, y_33, z_33, t);
  u_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_33, k_33);
  l_16 = t;
  t = SSLsetAnnotations(l_16, p_33);
  return(t);
}
static ATerm b_38 (ATerm c_34, ATerm g_34, ATerm j_34, ATerm t)
{
  ATerm k_34 = NULL,q_34 = NULL,r_34 = NULL,y_34 = NULL,z_34 = NULL,m_16 = NULL;
  t = SSLgetAnnotations(j_34);
  k_34 = t;
  t = c_34;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_22 = ATgetFirst((ATermList) t);
      if(match_cons(t_22, sym__2))
        {
          ATerm u_22 = ATgetArgument(t_22, 0);
          if(match_cons(u_22, sym_As_2))
            {
              q_34 = ATgetArgument(u_22, 0);
              r_34 = ATgetArgument(u_22, 1);
            }
          else
            _fail(t);
          y_34 = ATgetArgument(t_22, 1);
        }
      else
        _fail(t);
      z_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(CheckATermList(z_34), (ATerm) ATmakeAppl(sym__2, r_34, y_34)), (ATerm) ATmakeAppl(sym__2, q_34, y_34)), g_34);
  m_16 = t;
  t = SSLsetAnnotations(m_16, k_34);
  return(t);
}
static ATerm e_38 (ATerm j_35, ATerm k_35, ATerm l_35, ATerm t)
{
  ATerm m_35 = NULL,t_35 = NULL,n_16 = NULL;
  t = SSLgetAnnotations(l_35);
  m_35 = t;
  t = j_35;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_22 = ATgetFirst((ATermList) t);
      if(match_cons(w_22, sym__2))
        {
          ATerm a_23 = ATgetArgument(w_22, 0);
          if(!(match_cons(a_23, sym_Wld_0)))
            _fail(t);
          {
            ATerm b_23 = ATgetArgument(w_22, 1);
          }
        }
      else
        _fail(t);
      t_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_35, k_35);
  n_16 = t;
  t = SSLsetAnnotations(n_16, m_35);
  return(t);
}
static ATerm f_38 (ATerm y_35, ATerm c_36, ATerm g_36, ATerm t)
{
  ATerm h_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL,r_36 = NULL,q_16 = NULL,p_16 = NULL;
  t = SSLgetAnnotations(g_36);
  h_36 = t;
  t = y_35;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_23 = ATgetFirst((ATermList) t);
      if(match_cons(c_23, sym__2))
        {
          l_36 = ATgetArgument(c_23, 0);
          m_36 = ATgetArgument(c_23, 1);
        }
      else
        _fail(t);
      n_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_36;
  {
    ATerm d_23 = t;
    if((PushChoice() == 0))
      {
        ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL,o_16 = NULL;
        y_36 = t;
        if(match_cons(t, sym_Var_1))
          {
            x_36 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_36);
        w_36 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, x_36);
        o_16 = t;
        t = SSLsetAnnotations(o_16, w_36);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_23;
      }
  }
  t = m_36;
  if(match_cons(t, sym_Var_1))
    {
      r_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_36);
  o_36 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, r_36);
  p_16 = t;
  t = SSLsetAnnotations(p_16, o_36);
  t = (ATerm) ATmakeAppl(sym__2, n_36, c_36);
  q_16 = t;
  t = SSLsetAnnotations(q_16, h_36);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm s_37 = NULL,v_37 = NULL,x_37 = NULL,r_16 = NULL;
  x_37 = t;
  if(match_cons(t, sym_Var_1))
    {
      v_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_37);
  s_37 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_37);
  r_16 = t;
  t = SSLsetAnnotations(r_16, s_37);
  return(t);
}
ATerm prop_pattern_match_0_0 (ATerm t)
{
  t = for_3_0(v_6, x_6, y_6, t);
  return(t);
}
ATerm CurrentTerm_0_0 (ATerm t)
{
  ATerm e_23 = t;
  int f_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_38 = NULL,f_5 = NULL,g_5 = NULL;
      t = (ATerm) ATempty;
      f_5 = t;
      t = term_f_12;
      g_5 = t;
      t = term_g_23;
      t = e_7(g_5, f_5, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm h_23 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) h_23) != ATmakeSymbol("j_0", 0, ATtrue)))
            _fail(t);
          l_38 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = l_38;
      LocalPopChoice(f_23);
    }
  else
    {
      t = e_23;
      {
        ATerm j_23 = t;
        int k_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_38 = NULL,n_5 = NULL,r_5 = NULL;
            t = (ATerm) ATempty;
            n_5 = t;
            t = term_f_12;
            r_5 = t;
            t = term_g_23;
            t = e_7(r_5, n_5, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm l_23 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) l_23) != ATmakeSymbol("g_0", 0, ATtrue)))
                  _fail(t);
                r_38 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = r_38;
            LocalPopChoice(k_23);
          }
        else
          {
            t = j_23;
            {
              ATerm y_38 = NULL,z_5 = NULL,a_6 = NULL;
              y_38 = t;
              t = (ATerm) ATempty;
              z_5 = t;
              t = term_f_12;
              a_6 = t;
              t = term_g_23;
              t = e_7(a_6, z_5, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              t = y_38;
              _fail(t);
            }
          }
      }
    }
  return(t);
}
static ATerm e_7 (ATerm l_65, ATerm m_65, ATerm t)
{
  ATerm e_39 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_65, m_65);
  t = t_7(l_65, m_65, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_39 = ATgetFirst((ATermList) t);
      {
        ATerm m_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = e_39;
  return(t);
}
ATerm Binding_0_0 (ATerm t)
{
  ATerm d_40 = NULL;
  d_40 = t;
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
        t = term_w_11;
        z_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_11, d_40);
        t = e_7(z_6, d_40, t);
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
              ATerm z_7 = NULL;
              t = term_w_11;
              z_7 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_w_11, d_40);
              t = e_7(z_7, d_40, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              t = d_40;
              _fail(t);
              LocalPopChoice(u_23);
            }
          else
            {
              t = t_23;
              {
                ATerm i_8 = NULL;
                t = term_w_11;
                i_8 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_w_11, d_40);
                t = e_7(i_8, d_40, t);
                if(!(match_cons(t, sym_Undefined_0)))
                  _fail(t);
                t = d_40;
                _fail(t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm v_121 (ATerm), ATerm t)
{
  static ATerm l_40 (ATerm t);
  static ATerm l_40 (ATerm t)
  {
    ATerm v_23 = t;
    int w_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_121(t);
        LocalPopChoice(w_23);
      }
    else
      {
        t = v_23;
        t = SRTS_all(l_40, t);
      }
    return(t);
  }
  t = l_40(t);
  return(t);
}
static ATerm c_7 (ATerm t)
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
      t = q_6(o_8, p_8, t);
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
  t = debug_1_0(p_7, t);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_a_24;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm m_41 = NULL;
  m_41 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = m_41;
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
      t = m_41;
    }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_f_12;
  return(t);
}
ATerm prop_match_0_0 (ATerm t)
{
  ATerm o_40 = NULL,p_40 = NULL,s_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,b_41 = NULL,i_17 = NULL;
  b_41 = t;
  if(match_cons(t, sym_Match_1))
    {
      u_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_41);
  s_40 = t;
  t = u_40;
  t = alltd_1_0(Binding_0_0, t);
  v_40 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, v_40);
  i_17 = t;
  t = SSLsetAnnotations(i_17, s_40);
  w_40 = t;
  if(match_cons(t, sym_Match_1))
    {
      p_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_24 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = CurrentTerm_0_0(t);
        o_40 = t;
        t = w_40;
        {
          ATerm g_24 = t;
          int h_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, p_40, o_40));
              t = prop_pattern_match_0_0(t);
              t = map_1_0(c_7, t);
              t = w_40;
              LocalPopChoice(h_24);
            }
          else
            {
              t = g_24;
              t = (ATerm) ATmakeAppl(sym__4, term_i_24, w_40, term_l_24, o_40);
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
              ATerm k_41 = NULL,l_41 = NULL;
              t = p_40;
              {
                ATerm p_24 = t;
                if((PushChoice() == 0))
                  {
                    t = oncetd_1_0(s_7, t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = p_24;
                  }
              }
              t = (ATerm) ATempty;
              k_41 = t;
              t = (ATerm) ATmakeAppl(sym_Defined_2, term_q_24, p_40);
              l_41 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_q_24, p_40));
              t = p_6(v_7, k_41, l_41, t);
              t = w_40;
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
                  ATerm d_42 = NULL,g_42 = NULL;
                  d_42 = t;
                  if(match_cons(t, sym_Scope_2))
                    {
                      g_42 = ATgetArgument(t, 0);
                      {
                        ATerm z_24 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  t = d_42;
                  t = o_6(cp_0_0, g_42, t);
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
                                    ATerm h_43 = NULL,j_43 = NULL,k_43 = NULL,v_8 = NULL,a_9 = NULL,b_9 = NULL,k_17 = NULL;
                                    h_43 = t;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        j_43 = ATgetArgument(t, 0);
                                        k_43 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(h_43);
                                    v_8 = t;
                                    t = j_43;
                                    t = cp_0_0(t);
                                    a_9 = t;
                                    t = k_43;
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
                                                ATerm t_43 = NULL,u_43 = NULL,z_43 = NULL;
                                                t_43 = t;
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
                                                      t = t_43;
                                                      t = l_6(cp_0_0, t);
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
                                                              ATerm r_9 = NULL,s_9 = NULL,u_9 = NULL,w_9 = NULL,l_17 = NULL;
                                                              t = t_43;
                                                              if(match_cons(t, sym_Rec_2))
                                                                {
                                                                  s_9 = ATgetArgument(t, 0);
                                                                  u_9 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSLgetAnnotations(t_43);
                                                              r_9 = t;
                                                              t = u_9;
                                                              t = exec_maybe_1_0(cp_0_0, t);
                                                              w_9 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Rec_2, s_9, w_9);
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
                                                                  t = t_43;
                                                                  t = j_6(cp_0_0, t);
                                                                }
                                                              else
                                                                {
                                                                  t = u_25;
                                                                  if(match_cons(t, sym_SDefT_4))
                                                                    {
                                                                      u_43 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm x_25 = ATgetArgument(t, 1);
                                                                      }
                                                                      z_43 = ATgetArgument(t, 2);
                                                                      {
                                                                        ATerm y_25 = ATgetArgument(t, 3);
                                                                      }
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  t = t_43;
                                                                  t = i_6(cp_0_0, u_43, z_43, t);
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
static ATerm f_7 (ATerm f_65, ATerm g_65, ATerm t)
{
  ATerm m_44 = NULL,n_44 = NULL;
  n_44 = t;
  {
    ATerm a_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, f_65, g_65);
        t = t_7(f_65, g_65, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm d_26 = ATgetFirst((ATermList) t);
            m_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(c_26);
        {
          ATerm o_44 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, f_65, g_65, m_44);
          t = lookup_table_0_1(f_65, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              o_44 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_7(g_65, m_44, o_44, t);
          t = (ATerm) ATmakeAppl(sym__3, f_65, g_65, m_44);
        }
      }
    else
      {
        t = a_26;
        {
          ATerm q_44 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, f_65, g_65);
          t = lookup_table_0_1(f_65, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              q_44 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_7(g_65, q_44, t);
          t = (ATerm) ATmakeAppl(sym__2, f_65, g_65);
        }
      }
  }
  t = n_44;
  return(t);
}
ATerm end_scope_1_0 (ATerm c_115 (ATerm), ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL;
  v_44 = t;
  t = c_115(t);
  u_44 = t;
  {
    ATerm e_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_44 = NULL;
        t = term_r_18;
        z_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_44, term_r_18);
        t = t_7(u_44, z_44, t);
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
      t_44 = ATgetFirst((ATermList) t);
      s_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, u_44, term_r_18, s_44);
  t = lookup_table_0_1(u_44, t);
  y_44 = t;
  t = term_r_18;
  w_44 = t;
  t = y_44;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_7(w_44, s_44, x_44, t);
  t = t_44;
  {
    static ATerm a_8 (ATerm t);
    static ATerm a_8 (ATerm t)
    {
      ATerm a_45 = NULL;
      a_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_44, a_45);
      t = f_7(u_44, a_45, t);
      return(t);
    }
    t = map_1_0(a_8, t);
  }
  t = v_44;
  return(t);
}
ATerm restore_always_2_0 (ATerm z_118 (ATerm), ATerm a_119 (ATerm), ATerm t)
{
  ATerm j_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_118(t);
      t = a_119(t);
      LocalPopChoice(k_26);
    }
  else
    {
      t = j_26;
      t = a_119(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm b_115 (ATerm), ATerm t)
{
  ATerm c_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL;
  f_45 = t;
  t = b_115(t);
  c_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_45, term_r_18);
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_45 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm p_26 = ATgetArgument(t, 0);
            ATerm t_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_r_18;
        o_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_45, term_r_18);
        t = t_7(c_45, o_45, t);
        LocalPopChoice(o_26);
      }
    else
      {
        t = n_26;
        t = (ATerm) ATempty;
      }
  }
  g_45 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_45, term_r_18, (ATerm) ATinsert(CheckATermList(g_45), (ATerm) ATempty));
  t = lookup_table_0_1(c_45, t);
  k_45 = t;
  t = term_r_18;
  h_45 = t;
  t = (ATerm) ATinsert(CheckATermList(g_45), (ATerm) ATempty);
  i_45 = t;
  t = k_45;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_7(h_45, i_45, j_45, t);
  t = f_45;
  return(t);
}
ATerm scope_2_0 (ATerm d_115 (ATerm), ATerm e_115 (ATerm), ATerm t)
{
  static ATerm b_8 (ATerm t);
  static ATerm b_8 (ATerm t)
  {
    t = end_scope_1_0(d_115, t);
    return(t);
  }
  t = begin_scope_1_0(d_115, t);
  t = restore_always_2_0(e_115, b_8, t);
  return(t);
}
ATerm map_1_0 (ATerm o_126 (ATerm), ATerm t)
{
  static ATerm d_46 (ATerm t);
  static ATerm d_46 (ATerm t)
  {
    ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL;
    a_46 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_46;
      }
    else
      {
        ATerm e_10 = NULL,m_10 = NULL,q_10 = NULL,o_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_46 = ATgetFirst((ATermList) t);
            c_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_46);
        e_10 = t;
        t = b_46;
        t = o_126(t);
        m_10 = t;
        t = c_46;
        t = d_46(t);
        q_10 = t;
        t = (ATerm) ATinsert(CheckATermList(q_10), m_10);
        o_17 = t;
        t = SSLsetAnnotations(o_17, e_10);
      }
    return(t);
  }
  t = d_46(t);
  return(t);
}
ATerm Cons_2_0 (ATerm g_91 (ATerm), ATerm h_91 (ATerm), ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,q_17 = NULL;
  k_46 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_46 = ATgetFirst((ATermList) t);
      h_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_46);
  f_46 = t;
  t = g_46;
  t = g_91(t);
  i_46 = t;
  t = h_46;
  t = h_91(t);
  j_46 = t;
  t = (ATerm) ATinsert(CheckATermList(j_46), i_46);
  q_17 = t;
  t = SSLsetAnnotations(q_17, f_46);
  return(t);
}
static ATerm g_7 (ATerm o_59, ATerm p_59, ATerm t)
{
  ATerm l_46 = NULL;
  t = SSL_fputc(o_59, p_59);
  l_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_46);
  return(t);
}
static ATerm h_7 (ATerm v_43, ATerm w_43, ATerm t)
{
  ATerm m_46 = NULL;
  t = SSL_write_term_to_stream_text(v_43, w_43);
  m_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_46);
  return(t);
}
static ATerm j_7 (ATerm g_126 (ATerm), ATerm q_304, ATerm b_44, ATerm t)
{
  ATerm n_46 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_304, term_u_26);
  t = n_7(t);
  n_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_46, b_44);
  t = g_126(t);
  t = fclose_0_0(t);
  t = b_44;
  return(t);
}
static ATerm i_7 (ATerm r_43, ATerm s_43, ATerm t)
{
  ATerm o_46 = NULL;
  t = SSL_write_term_to_stream_baf(r_43, s_43);
  o_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_46);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm v_46 = NULL,w_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_26 = ATgetArgument(t, 0);
      if(match_cons(v_26, sym_Stream_1))
        {
          v_46 = ATgetArgument(v_26, 0);
        }
      else
        _fail(t);
      w_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7(v_46, w_46, t);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_26 = ATgetArgument(t, 0);
      if(match_cons(w_26, sym_Stream_1))
        {
          a_47 = ATgetArgument(w_26, 0);
        }
      else
        _fail(t);
      b_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_7(a_47, b_47, t);
  x_46 = t;
  t = term_y_26;
  y_46 = t;
  t = x_46;
  if(match_cons(t, sym_Stream_1))
    {
      z_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_y_26, x_46);
  t = g_7(y_46, z_46, t);
  return(t);
}
ATerm output_1_0 (ATerm v_146 (ATerm), ATerm t)
{
  ATerm p_46 = NULL,q_46 = NULL;
  t = v_146(t);
  q_46 = t;
  {
    ATerm z_26 = t;
    int d_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_46 = NULL,s_46 = NULL;
        t = term_y_18;
        r_46 = t;
        t = term_f_27;
        s_46 = t;
        t = term_g_27;
        t = t_7(r_46, s_46, t);
        LocalPopChoice(d_27);
      }
    else
      {
        t = z_26;
        t = term_h_27;
      }
  }
  p_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_46, q_46);
  {
    ATerm l_27 = t;
    int p_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_46 = NULL,u_46 = NULL;
        t = term_y_18;
        t_46 = t;
        t = term_q_27;
        u_46 = t;
        t = term_r_27;
        t = t_7(t_46, u_46, t);
        t = (ATerm) ATmakeAppl(sym__2, p_46, q_46);
        LocalPopChoice(p_27);
        if(match_cons(t, sym__2))
          {
            ATerm s_27 = ATgetArgument(t, 0);
            ATerm t_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_7(c_8, p_46, q_46, t);
      }
    else
      {
        t = l_27;
        if(match_cons(t, sym__2))
          {
            ATerm u_27 = ATgetArgument(t, 0);
            ATerm v_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_7(e_8, p_46, q_46, t);
      }
  }
  return(t);
}
static ATerm p_47 (ATerm j_47, ATerm t)
{
  t = SSL_fclose(j_47);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_47 = NULL,n_47 = NULL;
  n_47 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_47 = ATgetArgument(t, 0);
      {
        ATerm w_27 = t;
        int z_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_47);
            LocalPopChoice(z_27);
          }
        else
          {
            t = w_27;
            t = p_47(n_47, t);
          }
      }
    }
  else
    {
      t = p_47(n_47, t);
    }
  return(t);
}
static ATerm k_7 (ATerm x_43, ATerm t)
{
  t = SSL_read_term_from_stream(x_43);
  return(t);
}
static ATerm l_7 (ATerm u_57, ATerm v_57, ATerm t)
{
  t = SSL_strcat(u_57, v_57);
  return(t);
}
static ATerm m_7 (ATerm q_59, ATerm r_59, ATerm t)
{
  ATerm q_47 = NULL;
  t = SSL_fopen(q_59, r_59);
  q_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_47);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_47 = NULL;
  t = SSL_stdin_stream();
  r_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_47);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_47 = NULL;
  t = SSL_stdout_stream();
  s_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_47);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_47 = NULL;
  t = SSL_stderr_stream();
  t_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_47);
  return(t);
}
static ATerm a_49 (ATerm z_47, ATerm t)
{
  ATerm a_48 = NULL;
  t = SSL_explode_term(z_47);
  if(match_cons(t, sym__2))
    {
      ATerm a_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_28 = ATgetArgument(t, 1);
        if(((ATgetType(d_28) == AT_LIST) && !(ATisEmpty(d_28))))
          {
            a_48 = ATgetFirst((ATermList) d_28);
            {
              ATerm h_28 = (ATerm) ATgetNext((ATermList) d_28);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_48;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_48;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_48;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_48;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm b_49 (ATerm d_48, ATerm e_48, ATerm f_48, ATerm t)
{
  ATerm g_48 = NULL,h_48 = NULL,i_48 = NULL,l_48 = NULL,s_17 = NULL;
  t = SSLgetAnnotations(f_48);
  i_48 = t;
  t = d_48;
  if(match_cons(t, sym_Path_1))
    {
      l_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_48, e_48);
  s_17 = t;
  t = SSLsetAnnotations(s_17, i_48);
  if(match_cons(t, sym__2))
    {
      g_48 = ATgetArgument(t, 0);
      h_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(g_48, h_48, t);
  return(t);
}
static ATerm c_49 (ATerm n_48, ATerm o_48, ATerm p_48, ATerm t)
{
  ATerm q_48 = NULL,r_48 = NULL,s_48 = NULL,v_48 = NULL,t_17 = NULL;
  t = SSLgetAnnotations(p_48);
  s_48 = t;
  t = SSL_is_string(n_48);
  v_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_48, o_48);
  t_17 = t;
  t = SSLsetAnnotations(t_17, s_48);
  if(match_cons(t, sym__2))
    {
      q_48 = ATgetArgument(t, 0);
      r_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(q_48, r_48, t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL;
  x_48 = t;
  if(match_cons(t, sym__2))
    {
      y_48 = ATgetArgument(t, 0);
      z_48 = ATgetArgument(t, 1);
      {
        ATerm i_28 = t;
        int j_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_49(x_48, t);
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
                  t = b_49(y_48, z_48, x_48, t);
                  LocalPopChoice(l_28);
                }
              else
                {
                  t = k_28;
                  t = c_49(y_48, z_48, x_48, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_49(x_48, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL,l_49 = NULL;
  l_49 = t;
  {
    ATerm m_28 = t;
    int n_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, l_49, term_o_28);
        t = n_7(t);
        LocalPopChoice(n_28);
      }
    else
      {
        t = m_28;
        {
          ATerm k_11 = NULL,l_11 = NULL;
          t = term_p_28;
          l_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_p_28, l_49);
          t = l_7(l_11, l_49, t);
          k_11 = t;
          t = SSL_perror(k_11);
          _fail(t);
        }
      }
  }
  f_49 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_7(g_49, t);
  e_49 = t;
  t = f_49;
  t = fclose_0_0(t);
  t = e_49;
  return(t);
}
ATerm input_1_0 (ATerm w_146 (ATerm), ATerm t)
{
  ATerm q_28 = t;
  int r_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_49 = NULL,p_49 = NULL;
      t = term_y_18;
      o_49 = t;
      t = term_s_28;
      p_49 = t;
      t = term_t_28;
      t = t_7(o_49, p_49, t);
      LocalPopChoice(r_28);
    }
  else
    {
      t = q_28;
      t = term_u_28;
    }
  t = ReadFromFile_0_0(t);
  t = w_146(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm q_49 = NULL,r_49 = NULL;
  t = term_y_18;
  q_49 = t;
  t = term_v_28;
  r_49 = t;
  t = term_w_28;
  t = t_7(q_49, r_49, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm t_49 = NULL,u_49 = NULL,v_49 = NULL;
  t_49 = t;
  {
    ATerm x_28 = t;
    int y_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = t_49;
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
            t = t_49;
          }
        LocalPopChoice(y_28);
      }
    else
      {
        t = x_28;
        t = (ATerm) ATinsert(ATempty, t_49);
      }
  }
  u_49 = t;
  t = term_h_27;
  v_49 = t;
  t = SSL_printnl(v_49, u_49);
  t = t_49;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm a_50 = NULL,b_50 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_50 = ATgetFirst((ATermList) t);
      b_50 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_50 = NULL,g_50 = NULL;
        static ATerm f_8 (ATerm t);
        static ATerm f_8 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(f_50)), not_null(g_50));
          return(t);
        }
        t = b_50;
        t = o_0(t);
        if(((f_50 != NULL) && (f_50 != t)))
          _fail(t);
        else
          f_50 = t;
        t = a_50;
        t = m_0(t);
        if(((g_50 != NULL) && (g_50 != t)))
          _fail(t);
        else
          g_50 = t;
        t = b_50;
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
static ATerm h_8 (ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL,w_17 = NULL;
  q_50 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_50);
  o_50 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_50);
  w_17 = t;
  t = SSLsetAnnotations(w_17, o_50);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm u_50 = NULL;
  u_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_50), term_c_29);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm u_148 (ATerm), ATerm v_148 (ATerm), ATerm t)
{
  ATerm k_50 = NULL,l_50 = NULL;
  ATerm d_29 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_50 = NULL,n_50 = NULL;
      t = term_y_18;
      m_50 = t;
      t = term_v_28;
      n_50 = t;
      t = term_w_28;
      t = t_7(m_50, n_50, t);
      LocalPopChoice(e_29);
    }
  else
    {
      t = d_29;
      t = fetch_1_0(h_8, t);
    }
  {
    ATerm f_29 = t;
    int g_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_148(t);
        t = echo_0_0(t);
        LocalPopChoice(g_29);
      }
    else
      {
        t = f_29;
      }
  }
  t = term_o_29;
  t = echo_0_0(t);
  t = term_p_29;
  k_50 = t;
  t = term_s_29;
  l_50 = t;
  t = term_t_29;
  t = t_7(k_50, l_50, t);
  t = reverse_acc_2_0(_id, l_8, t);
  t = map_1_0(m_8, t);
  {
    ATerm w_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_50 = NULL;
        t = v_148(t);
        v_50 = t;
        t = (ATerm) ATinsert(CheckATermList(v_50), term_y_29);
        t = echo_0_0(t);
        LocalPopChoice(x_29);
      }
    else
      {
        t = w_29;
      }
  }
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm d_51 = NULL,e_51 = NULL,f_51 = NULL,y_17 = NULL;
  f_51 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_51);
  d_51 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_51);
  y_17 = t;
  t = SSLsetAnnotations(y_17, d_51);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_51 = NULL;
  a_51 = t;
  {
    ATerm z_29 = t;
    int a_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_51 = NULL,c_51 = NULL;
        t = term_y_18;
        b_51 = t;
        t = term_v_28;
        c_51 = t;
        t = term_w_28;
        t = t_7(b_51, c_51, t);
        LocalPopChoice(a_30);
      }
    else
      {
        t = z_29;
        t = fetch_1_0(n_8, t);
      }
  }
  t = a_51;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm h_51 = NULL;
  h_51 = t;
  if(match_string(t, "-k"))
    {
      t = h_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = h_51;
    }
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm i_51 = NULL,j_51 = NULL,k_51 = NULL;
  i_51 = t;
  t = SSL_string_to_int(i_51);
  j_51 = t;
  t = term_b_30;
  k_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_30, j_51);
  t = w_7(k_51, j_51, t);
  t = i_51;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_c_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_8, s_8, u_8, t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm m_51 = NULL;
  m_51 = t;
  if(match_string(t, "-S"))
    {
      t = m_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = m_51;
    }
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm n_51 = NULL,o_51 = NULL;
  t = term_z_18;
  n_51 = t;
  t = term_i_30;
  o_51 = t;
  t = term_j_30;
  t = w_7(n_51, o_51, t);
  t = term_k_30;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_l_30;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL;
  p_51 = t;
  t = SSL_string_to_int(p_51);
  q_51 = t;
  t = term_z_18;
  r_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_18, q_51);
  t = w_7(r_51, q_51, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_51);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  t = term_m_30;
  return(t);
}
static ATerm i_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm s_51 = NULL,t_51 = NULL;
  t = term_p_30;
  s_51 = t;
  t = term_b_29;
  t_51 = t;
  t = term_q_30;
  t = w_7(s_51, t_51, t);
  t = term_r_30;
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = term_u_30;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm w_30 = t;
  int x_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_8, x_8, y_8, t);
      LocalPopChoice(x_30);
    }
  else
    {
      t = w_30;
      {
        ATerm y_30 = t;
        int a_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_8, e_9, g_9, t);
            LocalPopChoice(a_31);
          }
        else
          {
            t = y_30;
            t = Option_3_0(i_9, l_9, m_9, t);
          }
      }
    }
  return(t);
}
static ATerm w_7 (ATerm u_79, ATerm v_79, ATerm t)
{
  ATerm u_51 = NULL,v_51 = NULL;
  t = term_y_18;
  u_51 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_18, u_79, v_79);
  t = lookup_table_0_1(u_51, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_7(u_79, v_79, v_51, t);
  t = (ATerm) ATmakeAppl(sym__3, term_y_18, u_79, v_79);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm z_51 = NULL,a_52 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL;
      t = term_b_29;
      t = e_0(t);
      b_52 = t;
      t = term_p_29;
      c_52 = t;
      t = term_s_29;
      d_52 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_29, term_s_29, b_52);
      t = u_7(c_52, d_52, b_52, t);
      _fail(t);
    }
  else
    {
      ATerm g_52 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_51 = ATgetFirst((ATermList) t);
          a_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_51;
      t = b_0(t);
      t = term_b_29;
      t = d_0(t);
      g_52 = t;
      t = (ATerm) ATinsert(CheckATermList(a_52), g_52);
    }
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm i_52 = NULL;
  i_52 = t;
  if(match_string(t, "-o"))
    {
      t = i_52;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = i_52;
    }
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm j_52 = NULL,k_52 = NULL;
  j_52 = t;
  t = term_f_27;
  k_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_27, j_52);
  t = w_7(k_52, j_52, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_52);
  return(t);
}
static ATerm q_9 (ATerm t)
{
  t = term_c_31;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_9, p_9, q_9, t);
  return(t);
}
static ATerm u_7 (ATerm a_65, ATerm b_65, ATerm z_64, ATerm t)
{
  ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL;
  m_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_65, b_65);
  {
    ATerm d_31 = t;
    int e_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_31 = ATgetArgument(t, 0);
            ATerm h_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, a_65, b_65);
        t = t_7(a_65, b_65, t);
        LocalPopChoice(e_31);
      }
    else
      {
        t = d_31;
        t = (ATerm) ATempty;
      }
  }
  n_52 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_65, b_65, (ATerm) ATinsert(CheckATermList(n_52), z_64));
  t = lookup_table_0_1(a_65, t);
  q_52 = t;
  t = (ATerm) ATinsert(CheckATermList(n_52), z_64);
  o_52 = t;
  t = q_52;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_7(b_65, o_52, p_52, t);
  t = m_52;
  return(t);
}
ATerm ArgOption_3_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm x_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_53 = NULL,c_53 = NULL,d_53 = NULL;
      t = term_b_29;
      t = k_0(t);
      b_53 = t;
      t = term_p_29;
      c_53 = t;
      t = term_s_29;
      d_53 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_29, term_s_29, b_53);
      t = u_7(c_53, d_53, b_53, t);
      _fail(t);
    }
  else
    {
      ATerm h_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_52 = ATgetFirst((ATermList) t);
          y_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_52;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_52 = ATgetFirst((ATermList) t);
          a_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_52;
      t = f_0(t);
      t = z_52;
      t = h_0(t);
      h_53 = t;
      t = (ATerm) ATinsert(CheckATermList(a_53), h_53);
    }
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm j_53 = NULL;
  j_53 = t;
  if(match_string(t, "-i"))
    {
      t = j_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = j_53;
    }
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm k_53 = NULL,l_53 = NULL;
  k_53 = t;
  t = term_s_28;
  l_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_28, k_53);
  t = w_7(l_53, k_53, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, k_53);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  t = term_i_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_9, x_9, y_9, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_53 = NULL,n_53 = NULL,o_53 = NULL,p_53 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_29;
  t = whoami_0_0(t);
  m_53 = t;
  t = term_v_18;
  o_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_31), m_53);
  p_53 = t;
  t = SSL_printnl(o_53, p_53);
  t = term_l_31;
  n_53 = t;
  t = SSL_exit(n_53);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm q_53 = NULL,r_53 = NULL;
  t = term_y_18;
  q_53 = t;
  t = term_v_28;
  r_53 = t;
  t = term_w_28;
  t = t_7(q_53, r_53, t);
  return(t);
}
static ATerm o_7 (ATerm j_63, ATerm k_63, ATerm t)
{
  ATerm m_31 = t;
  int n_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_63, k_63);
      LocalPopChoice(n_31);
    }
  else
    {
      t = m_31;
      t = SSL_addr(j_63, k_63);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm l_133 (ATerm), ATerm m_133 (ATerm), ATerm t)
{
  ATerm t_53 = NULL,u_53 = NULL,v_53 = NULL;
  t_53 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_53;
      t = l_133(t);
    }
  else
    {
      ATerm y_53 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_53 = ATgetFirst((ATermList) t);
          v_53 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_53;
      t = foldr_2_0(l_133, m_133, t);
      y_53 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_53, y_53);
      t = m_133(t);
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
  t = term_i_30;
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
  t = o_7(t_11, u_11, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_54 = NULL,n_11 = NULL,p_11 = NULL;
  t = times_0_0(t);
  p_11 = t;
  t = SSL_explode_term(p_11);
  if(match_cons(t, sym__2))
    {
      ATerm o_31 = ATgetArgument(t, 0);
      n_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_11;
  t = foldr_2_0(z_9, a_10, t);
  b_54 = t;
  t = SSL_TicksToSeconds(b_54);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_54 = NULL,n_54 = NULL,o_54 = NULL;
  m_54 = t;
  if(match_cons(t, sym__2))
    {
      n_54 = ATgetArgument(t, 0);
      o_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_31 = t;
    int q_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_54;
        if((n_54 != t))
          {
            _fail(t);
          }
        t = m_54;
        LocalPopChoice(q_31);
      }
    else
      {
        t = p_31;
        t = (ATerm) ATmakeAppl(sym__2, n_54, o_54);
        {
          ATerm r_31 = t;
          int s_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_54, o_54);
              LocalPopChoice(s_31);
            }
          else
            {
              t = r_31;
              t = SSL_gtr(n_54, o_54);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, n_54, o_54);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_143 (ATerm), ATerm t)
{
  ATerm s_54 = NULL;
  s_54 = t;
  {
    ATerm t_31 = t;
    int u_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_54 = NULL,v_54 = NULL,w_54 = NULL;
        t = term_y_18;
        v_54 = t;
        t = term_z_18;
        w_54 = t;
        t = term_a_19;
        t = t_7(v_54, w_54, t);
        u_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_54, term_l_31);
        t = geq_0_0(t);
        t = s_54;
        t = r_143(t);
        LocalPopChoice(u_31);
      }
    else
      {
        t = t_31;
        t = s_54;
      }
  }
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm y_54 = NULL,z_54 = NULL,b_55 = NULL,c_55 = NULL;
  t = run_time_0_0(t);
  y_54 = t;
  t = term_b_29;
  t = whoami_0_0(t);
  z_54 = t;
  t = term_v_18;
  b_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_31), y_54), term_v_31), z_54);
  c_55 = t;
  t = SSL_printnl(b_55, c_55);
  t = (ATerm) ATmakeAppl(sym__2, term_v_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_31), y_54), term_v_31), z_54));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(b_10, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm d_55 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_30;
  d_55 = t;
  t = SSL_exit(d_55);
  return(t);
}
static ATerm x_7 (ATerm p_69, ATerm q_69, ATerm r_69, ATerm t)
{
  ATerm e_55 = NULL;
  t = SSL_hashtable_put(r_69, p_69, q_69);
  e_55 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_55);
  return(t);
}
ATerm lookup_table_0_1 (ATerm m_66, ATerm t)
{
  ATerm n_55 = NULL;
  t = table_hashtable_0_0(t);
  n_55 = t;
  {
    ATerm x_31 = t;
    int y_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_12 = NULL;
        t = n_55;
        if(match_cons(t, sym_Hashtable_1))
          {
            v_12 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = y_7(m_66, v_12, t);
        LocalPopChoice(y_31);
      }
    else
      {
        t = x_31;
        {
          ATerm j_13 = NULL;
          t = m_66;
          t = table_create_0_0(t);
          t = n_55;
          if(match_cons(t, sym_Hashtable_1))
            {
              j_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_7(m_66, j_13, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm x_69, ATerm y_69, ATerm t)
{
  ATerm q_55 = NULL;
  t = SSL_hashtable_create(x_69, y_69);
  q_55 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_55);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm r_55 = NULL,s_55 = NULL,t_55 = NULL,v_55 = NULL,w_55 = NULL;
  r_55 = t;
  t = term_z_31;
  v_55 = t;
  t = term_a_32;
  w_55 = t;
  t = r_55;
  t = new_hashtable_0_2(v_55, w_55, t);
  s_55 = t;
  t = r_55;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_7(r_55, s_55, t_55, t);
  t = r_55;
  return(t);
}
static ATerm q_7 (ATerm u_69, ATerm v_69, ATerm t)
{
  ATerm x_55 = NULL;
  t = SSL_hashtable_remove(v_69, u_69);
  x_55 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_55);
  return(t);
}
static ATerm r_7 (ATerm z_69, ATerm t)
{
  ATerm y_55 = NULL;
  t = SSL_hashtable_destroy(z_69);
  y_55 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_55);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm z_55 = NULL;
  t = SSL_table_hashtable();
  z_55 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_55);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm a_56 = NULL,b_56 = NULL,c_56 = NULL,d_56 = NULL;
  a_56 = t;
  t = table_hashtable_0_0(t);
  b_56 = t;
  t = lookup_table_0_1(a_56, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_7(d_56, t);
  t = b_56;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(a_56, c_56, t);
  t = a_56;
  return(t);
}
ATerm fetch_1_0 (ATerm w_126 (ATerm), ATerm t)
{
  static ATerm a_57 (ATerm t);
  static ATerm a_57 (ATerm t)
  {
    ATerm x_56 = NULL,y_56 = NULL,z_56 = NULL;
    x_56 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_56 = ATgetFirst((ATermList) t);
        z_56 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_32 = t;
      int c_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_13 = NULL,a_14 = NULL,a_18 = NULL;
          t = SSLgetAnnotations(x_56);
          w_13 = t;
          t = y_56;
          t = w_126(t);
          a_14 = t;
          t = (ATerm) ATinsert(CheckATermList(z_56), a_14);
          a_18 = t;
          t = SSLsetAnnotations(a_18, w_13);
          LocalPopChoice(c_32);
        }
      else
        {
          t = b_32;
          {
            ATerm r_14 = NULL,u_14 = NULL,b_18 = NULL;
            t = SSLgetAnnotations(x_56);
            r_14 = t;
            t = z_56;
            t = a_57(t);
            u_14 = t;
            t = (ATerm) ATinsert(CheckATermList(u_14), y_56);
            b_18 = t;
            t = SSLsetAnnotations(b_18, r_14);
          }
        }
    }
    return(t);
  }
  t = a_57(t);
  return(t);
}
static ATerm y_7 (ATerm s_69, ATerm t_69, ATerm t)
{
  t = SSL_hashtable_get(t_69, s_69);
  return(t);
}
static ATerm t_7 (ATerm t_66, ATerm u_66, ATerm t)
{
  ATerm d_57 = NULL;
  t = lookup_table_0_1(t_66, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_7(u_66, d_57, t);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm f_57 = NULL,g_57 = NULL;
  t = term_d_32;
  f_57 = t;
  t = term_b_29;
  g_57 = t;
  t = term_e_32;
  t = w_7(f_57, g_57, t);
  return(t);
}
static ATerm f_10 (ATerm t)
{
  t = term_f_32;
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
  ATerm h_57 = NULL,i_57 = NULL,j_57 = NULL,k_57 = NULL;
  t = term_d_32;
  j_57 = t;
  t = term_b_29;
  k_57 = t;
  t = term_e_32;
  t = w_7(j_57, k_57, t);
  t = term_g_32;
  h_57 = t;
  t = term_b_29;
  i_57 = t;
  t = term_h_32;
  t = w_7(h_57, i_57, t);
  t = term_i_32;
  return(t);
}
static ATerm i_10 (ATerm t)
{
  t = term_n_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_32 = t;
  int r_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_10, d_10, f_10, t);
      LocalPopChoice(r_32);
    }
  else
    {
      t = o_32;
      t = Option_3_0(g_10, h_10, i_10, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_148 (ATerm), ATerm t)
{
  ATerm p_57 = NULL,q_57 = NULL,r_57 = NULL,s_57 = NULL,w_57 = NULL,x_57 = NULL,e_18 = NULL;
  p_57 = t;
  {
    ATerm s_32 = t;
    int t_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_32;
        t = p_148(t);
        LocalPopChoice(t_32);
      }
    else
      {
        t = s_32;
      }
  }
  t = p_57;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_57 = ATgetFirst((ATermList) t);
      s_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_57);
  q_57 = t;
  t = term_v_28;
  x_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_28, r_57);
  t = w_7(x_57, r_57, t);
  t = s_57;
  {
    static ATerm h_58 (ATerm t);
    static ATerm h_58 (ATerm t)
    {
      ATerm w_32 = t;
      int x_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_32 = t;
          int z_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_58 = NULL;
              a_58 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = a_58;
              LocalPopChoice(z_32);
            }
          else
            {
              t = y_32;
              t = p_148(t);
              t = Cons_2_0(_id, h_58, t);
            }
          LocalPopChoice(x_32);
        }
      else
        {
          t = w_32;
          {
            ATerm d_58 = NULL,e_58 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                d_58 = ATgetFirst((ATermList) t);
                e_58 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(e_58), (ATerm) ATmakeAppl(sym_Undefined_1, d_58));
          }
        }
      return(t);
    }
    t = h_58(t);
  }
  w_57 = t;
  t = (ATerm) ATinsert(CheckATermList(w_57), (ATerm) ATmakeAppl(sym_Program_1, r_57));
  e_18 = t;
  t = SSLsetAnnotations(e_18, q_57);
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm u_58 = NULL;
  u_58 = t;
  if(match_string(t, "--help"))
    {
      t = u_58;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = u_58;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = u_58;
        }
    }
  return(t);
}
static ATerm s_10 (ATerm t)
{
  ATerm v_58 = NULL,w_58 = NULL;
  t = term_a_33;
  v_58 = t;
  t = term_b_29;
  w_58 = t;
  t = term_b_33;
  t = w_7(v_58, w_58, t);
  t = term_c_33;
  return(t);
}
static ATerm t_10 (ATerm t)
{
  t = term_d_33;
  return(t);
}
static ATerm u_10 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm m_148 (ATerm), ATerm n_148 (ATerm), ATerm o_148 (ATerm), ATerm t)
{
  ATerm m_58 = NULL,n_58 = NULL,o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL;
  o_58 = t;
  t = term_p_29;
  p_58 = t;
  t = term_e_33;
  t = lookup_table_0_1(p_58, t);
  t_58 = t;
  t = term_s_29;
  q_58 = t;
  t = (ATerm) ATempty;
  r_58 = t;
  t = t_58;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_7(q_58, r_58, s_58, t);
  t = o_58;
  {
    static ATerm j_10 (ATerm t);
    static ATerm j_10 (ATerm t)
    {
      ATerm f_33 = t;
      int g_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_148(t);
          LocalPopChoice(g_33);
        }
      else
        {
          t = f_33;
          {
            ATerm i_33 = t;
            int m_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_10, s_10, t_10, t);
                LocalPopChoice(m_33);
              }
            else
              {
                t = i_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_10, t);
  }
  {
    ATerm n_33 = t;
    int o_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_59 = NULL;
        h_59 = t;
        {
          ATerm q_33 = t;
          int r_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_15 = NULL;
              t = h_59;
              {
                ATerm s_33 = t;
                int t_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_15 = NULL,s_15 = NULL;
                    t = term_y_18;
                    m_15 = t;
                    t = term_a_33;
                    s_15 = t;
                    t = term_w_33;
                    t = t_7(m_15, s_15, t);
                    LocalPopChoice(t_33);
                  }
                else
                  {
                    t = s_33;
                    t = fetch_1_0(u_10, t);
                  }
              }
              t = h_59;
              t = n_148(t);
              t = term_i_30;
              l_15 = t;
              t = SSL_exit(l_15);
              LocalPopChoice(r_33);
            }
          else
            {
              t = q_33;
              {
                ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL;
                t = term_y_18;
                x_15 = t;
                t = term_d_32;
                y_15 = t;
                t = term_x_33;
                t = t_7(x_15, y_15, t);
                t = h_59;
                t = o_148(t);
                t = term_i_30;
                w_15 = t;
                t = SSL_exit(w_15);
              }
            }
        }
        LocalPopChoice(o_33);
      }
    else
      {
        t = n_33;
        {
          ATerm a_34 = t;
          int b_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_59 = NULL,j_59 = NULL,k_59 = NULL;
              static ATerm v_10 (ATerm t);
              static ATerm v_10 (ATerm t)
              {
                ATerm l_59 = NULL,m_59 = NULL,n_59 = NULL,g_18 = NULL;
                n_59 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    m_59 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(n_59);
                l_59 = t;
                t = m_59;
                if(((m_58 != NULL) && (m_58 != t)))
                  _fail(t);
                else
                  m_58 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, m_59);
                g_18 = t;
                t = SSLsetAnnotations(g_18, l_59);
                return(t);
              }
              t = fetch_1_0(v_10, t);
              t = term_v_18;
              j_59 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_58)), term_d_34);
              k_59 = t;
              t = SSL_printnl(j_59, k_59);
              t = (ATerm) ATmakeAppl(sym__2, term_v_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_58)), term_d_34));
              t = n_148(t);
              t = term_l_31;
              i_59 = t;
              t = SSL_exit(i_59);
              LocalPopChoice(b_34);
            }
          else
            {
              t = a_34;
            }
        }
      }
  }
  n_58 = t;
  t = term_p_29;
  t = table_destroy_0_0(t);
  t = n_58;
  return(t);
}
ATerm option_wrap_5_0 (ATerm p_146 (ATerm), ATerm q_146 (ATerm), ATerm r_146 (ATerm), ATerm s_146 (ATerm), ATerm t_146 (ATerm), ATerm t)
{
  ATerm y_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL;
  t = parse_options_3_0(p_146, q_146, r_146, t);
  y_59 = t;
  t = term_e_34;
  t = table_create_0_0(t);
  t = term_e_34;
  z_59 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_34, term_f_34, y_59);
  t = lookup_table_0_1(z_59, t);
  c_60 = t;
  t = term_f_34;
  a_60 = t;
  t = c_60;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_7(a_60, y_59, b_60, t);
  t = y_59;
  t = s_146(t);
  {
    ATerm h_34 = t;
    int i_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_146(t);
        t = report_success_0_0(t);
        LocalPopChoice(i_34);
      }
    else
      {
        t = h_34;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm l_34 = t;
  int m_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(m_34);
    }
  else
    {
      t = l_34;
      {
        ATerm n_34 = t;
        int o_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(o_34);
          }
        else
          {
            t = n_34;
            {
              ATerm p_34 = t;
              int s_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(z_10, a_11, b_11, t);
                  LocalPopChoice(s_34);
                }
              else
                {
                  t = p_34;
                  {
                    ATerm t_34 = t;
                    int u_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(u_34);
                      }
                    else
                      {
                        t = t_34;
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
  ATerm e_60 = NULL,f_60 = NULL;
  t = term_q_27;
  e_60 = t;
  t = term_b_29;
  f_60 = t;
  t = term_v_34;
  t = w_7(e_60, f_60, t);
  t = term_w_34;
  return(t);
}
static ATerm b_11 (ATerm t)
{
  t = term_x_34;
  return(t);
}
static ATerm c_11 (ATerm t)
{
  t = output_1_0(d_11, t);
  return(t);
}
static ATerm d_11 (ATerm t)
{
  ATerm h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL,q_60 = NULL,r_60 = NULL,l_18 = NULL,k_18 = NULL,i_18 = NULL;
  r_60 = t;
  if(match_cons(t, sym_Specification_1))
    {
      i_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_60);
  h_60 = t;
  t = i_60;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_60 = ATgetFirst((ATermList) t);
      l_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_60);
  j_60 = t;
  t = k_60;
  if(match_cons(t, sym_Signature_1))
    {
      p_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_60);
  o_60 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, p_60);
  i_18 = t;
  t = SSLsetAnnotations(i_18, o_60);
  q_60 = t;
  t = l_60;
  t = Cons_2_0(e_11, g_11, t);
  m_60 = t;
  t = (ATerm) ATinsert(CheckATermList(m_60), q_60);
  k_18 = t;
  t = SSLsetAnnotations(k_18, j_60);
  n_60 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, n_60);
  l_18 = t;
  t = SSLsetAnnotations(l_18, h_60);
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm t_60 = NULL,u_60 = NULL,v_60 = NULL,w_60 = NULL,j_18 = NULL;
  w_60 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      u_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_60);
  t_60 = t;
  t = u_60;
  t = map_1_0(m_11, t);
  v_60 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, v_60);
  j_18 = t;
  t = SSLsetAnnotations(j_18, t_60);
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
  t = scope_2_0(q_11, r_11, t);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  t = term_f_12;
  return(t);
}
static ATerm r_11 (ATerm t)
{
  t = scope_2_0(v_11, cp_0_0, t);
  return(t);
}
static ATerm v_11 (ATerm t)
{
  t = term_w_11;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(w_10, default_system_usage_0_0, default_system_about_0_0, _id, x_10, t);
  return(t);
}

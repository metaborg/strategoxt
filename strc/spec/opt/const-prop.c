#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Cons_1;
Symbol sym_Nil_0;
Symbol sym_Some_1;
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
Symbol sym_Some_1;
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
Symbol sym_Cons_1;
Symbol sym_Nil_0;
Symbol sym_Some_1;
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
  sym_Cons_1 = ATmakeSymbol("Cons", 1, ATfalse);
  ATprotectSymbol(sym_Cons_1);
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
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Cons_1 = ATmakeSymbol("Cons", 1, ATfalse);
  ATprotectSymbol(sym_Cons_1);
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
ATerm term_z_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_e_35;
ATerm term_z_34;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_z_33;
ATerm term_r_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_r_31;
ATerm term_q_31;
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
ATerm term_r_29;
ATerm term_l_29;
ATerm term_g_29;
ATerm term_d_27;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_j_26;
ATerm term_p_25;
ATerm term_p_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_f_21;
ATerm term_b_21;
ATerm term_y_20;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_u_13;
ATerm term_r_13;
ATerm term_l_13;
ATerm term_g_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_x_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_r_12;
ATerm term_q_12;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym__2, term_u_12, term_v_12);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym__2, term_c_13, term_d_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_u_13);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym__2, term_u_12, term_i_21);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym__2, term_b_14, (ATerm) ATempty);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("no match with current term: ", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("strat: ", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("current: ", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(sym_stdout_0);
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
  term_i_31 = (ATerm) ATmakeAppl(sym__2, term_h_31, term_q_12);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(sym__2, term_w_32, term_q_12);
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(sym__2, term_c_33, term_q_12);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(sym__2, term_z_33, term_q_12);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym__3, term_c_13, term_d_13, (ATerm) ATempty);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym__2, term_u_12, term_z_33);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(sym__2, term_u_12, term_w_32);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(sym__2, term_e_35, term_q_12);
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t);
static ATerm e_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm default_system_usage_2_0 (ATerm z_140 (ATerm), ATerm a_141 (ATerm), ATerm t);
static ATerm u_0 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm p_6 (ATerm e_108 (ATerm), ATerm w_23, ATerm x_23, ATerm t);
static ATerm f_1 (ATerm t);
static ATerm q_6 (ATerm c_108 (ATerm), ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm exec_maybe_1_0 (ATerm v_107 (ATerm), ATerm t);
static ATerm w_1 (ATerm t);
static ATerm s_6 (ATerm f_108 (ATerm), ATerm t);
static ATerm x_1 (ATerm t);
static ATerm q_9 (ATerm e_6, ATerm f_6, ATerm i_6, ATerm t);
ATerm isect_CurrentTerm_0_0 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm w_12 (ATerm u_10, ATerm v_10, ATerm w_10, ATerm t);
ATerm isect_Binding_0_0 (ATerm t);
static ATerm t_6 (ATerm m_61, ATerm l_61, ATerm t);
ATerm save_CurrentTerm_0_0 (ATerm t);
static ATerm u_6 (ATerm b_65, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_Binding_0_0 (ATerm t);
ATerm prop_abstract_choice_2_0 (ATerm j_108 (ATerm), ATerm k_108 (ATerm), ATerm t);
ATerm prop_choice_1_0 (ATerm i_108 (ATerm), ATerm t);
static ATerm j_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm prop_traversal_1_0 (ATerm p_0 (ATerm), ATerm t);
static ATerm g_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm prop_call_1_0 (ATerm n_0 (ATerm), ATerm t);
static ATerm v_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm v_6 (ATerm d_108 (ATerm), ATerm r_23, ATerm t);
static ATerm c_7 (ATerm t);
ATerm prop_build_0_0 (ATerm t);
static ATerm w_6 (ATerm r_108 (ATerm), ATerm o_25, ATerm m_25, ATerm t);
ATerm oncetd_1_0 (ATerm b_114 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm y_118 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm y_135 (ATerm), ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm x_6 (ATerm k_24, ATerm l_24, ATerm t);
ATerm lookup_0_0 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm b_141 (ATerm), ATerm c_141 (ATerm), ATerm t);
static ATerm i_7 (ATerm j_147 (ATerm), ATerm c_84, ATerm d_84, ATerm f_84, ATerm e_84, ATerm t);
ATerm at_end_1_0 (ATerm z_119 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm b_29 (ATerm n_28, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm m_121 (ATerm), ATerm n_121 (ATerm), ATerm o_121 (ATerm), ATerm p_121 (ATerm), ATerm t);
static ATerm i_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm b_7 (ATerm b_883, ATerm g_883, ATerm e_85, ATerm t);
ATerm while_not_2_0 (ATerm o_112 (ATerm), ATerm p_112 (ATerm), ATerm t);
ATerm for_3_0 (ATerm r_112 (ATerm), ATerm s_112 (ATerm), ATerm t_112 (ATerm), ATerm t);
static ATerm n_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm k_41 (ATerm c_35, ATerm f_35, ATerm g_35, ATerm t);
static ATerm l_41 (ATerm g_36, ATerm j_36, ATerm k_36, ATerm t);
static ATerm n_41 (ATerm w_36, ATerm y_36, ATerm c_37, ATerm t);
static ATerm q_41 (ATerm v_37, ATerm w_37, ATerm x_37, ATerm t);
static ATerm r_41 (ATerm j_38, ATerm k_38, ATerm n_38, ATerm t);
static ATerm r_8 (ATerm t);
ATerm prop_pattern_match_0_0 (ATerm t);
ATerm CurrentTerm_0_0 (ATerm t);
static ATerm l_7 (ATerm u_60, ATerm v_60, ATerm t);
ATerm Binding_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm p_114 (ATerm), ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm y_8 (ATerm t);
ATerm prop_match_0_0 (ATerm t);
ATerm cp_0_0 (ATerm t);
static ATerm m_7 (ATerm o_60, ATerm p_60, ATerm t);
ATerm end_scope_1_0 (ATerm o_108 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm t_111 (ATerm), ATerm u_111 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm n_108 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm p_108 (ATerm), ATerm q_108 (ATerm), ATerm t);
ATerm map_1_0 (ATerm i_119 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm t);
static ATerm o_7 (ATerm x_54, ATerm y_54, ATerm t);
static ATerm p_7 (ATerm e_39, ATerm f_39, ATerm t);
static ATerm r_7 (ATerm a_119 (ATerm), ATerm e_279, ATerm k_39, ATerm t);
static ATerm q_7 (ATerm a_39, ATerm b_39, ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm o_137 (ATerm), ATerm t);
static ATerm p_51 (ATerm j_51, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm s_7 (ATerm g_39, ATerm t);
static ATerm t_7 (ATerm d_53, ATerm e_53, ATerm t);
static ATerm u_7 (ATerm z_54, ATerm a_55, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm a_53 (ATerm z_51, ATerm t);
static ATerm b_53 (ATerm d_52, ATerm e_52, ATerm f_52, ATerm t);
static ATerm c_53 (ATerm n_52, ATerm o_52, ATerm p_52, ATerm t);
static ATerm v_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm s_119 (ATerm), ATerm t);
static ATerm a_8 (ATerm c_62, ATerm d_62, ATerm t);
ATerm if_verbose2_1_0 (ATerm x_135 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm d_8 (ATerm t_73, ATerm u_73, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm b_8 (ATerm j_60, ATerm k_60, ATerm i_60, ATerm t);
ATerm ArgOption_3_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm w_7 (ATerm s_58, ATerm t_58, ATerm t);
ATerm foldr_2_0 (ATerm h_126 (ATerm), ATerm i_126 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm w_135 (ATerm), ATerm t);
static ATerm l_10 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm e_8 (ATerm u_64, ATerm v_64, ATerm w_64, ATerm t);
static ATerm f_8 (ATerm x_64, ATerm y_64, ATerm t);
ATerm lookup_table_0_1 (ATerm v_61, ATerm t);
ATerm new_hashtable_0_2 (ATerm c_65, ATerm d_65, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm y_7 (ATerm z_64, ATerm a_65, ATerm t);
static ATerm z_7 (ATerm e_65, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm u_140 (ATerm), ATerm t);
static ATerm a_11 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
ATerm parse_options_3_0 (ATerm r_140 (ATerm), ATerm s_140 (ATerm), ATerm t_140 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm u_138 (ATerm), ATerm v_138 (ATerm), ATerm w_138 (ATerm), ATerm x_138 (ATerm), ATerm y_138 (ATerm), ATerm t);
static ATerm o_11 (ATerm t);
static ATerm q_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm v_11 (ATerm t);
ATerm iowrap_3_0 (ATerm x_137 (ATerm), ATerm y_137 (ATerm), ATerm z_137 (ATerm), ATerm t);
static ATerm h_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm s_0 = NULL,y_0 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_0 = ATgetFirst((ATermList) t);
      y_0 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_1 = NULL,i_1 = NULL;
        static ATerm a_0 (ATerm t);
        static ATerm a_0 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_1)), not_null(i_1));
          return(t);
        }
        t = y_0;
        t = m_0(t);
        if(((g_1 != NULL) && (g_1 != t)))
          _fail(t);
        else
          g_1 = t;
        t = s_0;
        t = k_0(t);
        if(((i_1 != NULL) && (i_1 != t)))
          _fail(t);
        else
          i_1 = t;
        t = y_0;
        t = reverse_acc_2_0(k_0, a_0, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_12;
      t = m_0(t);
    }
  return(t);
}
static ATerm e_0 (ATerm t)
{
  ATerm s_1 = NULL,t_1 = NULL,v_1 = NULL,o_0 = NULL;
  v_1 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_1);
  s_1 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_1);
  o_0 = t;
  t = SSLsetAnnotations(o_0, s_1);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm z_1 = NULL;
  z_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_1), term_r_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm z_140 (ATerm), ATerm a_141 (ATerm), ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL;
  ATerm s_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_1 = NULL,r_1 = NULL;
      t = term_u_12;
      q_1 = t;
      t = term_v_12;
      r_1 = t;
      t = term_x_12;
      t = a_8(q_1, r_1, t);
      LocalPopChoice(t_12);
    }
  else
    {
      t = s_12;
      t = fetch_1_0(e_0, t);
    }
  {
    ATerm y_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_140(t);
        t = echo_0_0(t);
        LocalPopChoice(z_12);
      }
    else
      {
        t = y_12;
      }
  }
  t = term_b_13;
  t = echo_0_0(t);
  t = term_c_13;
  o_1 = t;
  t = term_d_13;
  p_1 = t;
  t = term_g_13;
  t = a_8(o_1, p_1, t);
  t = reverse_acc_2_0(_id, r_0, t);
  t = map_1_0(t_0, t);
  {
    ATerm h_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_2 = NULL;
        t = a_141(t);
        a_2 = t;
        t = (ATerm) ATinsert(CheckATermList(a_2), term_l_13);
        t = echo_0_0(t);
        LocalPopChoice(k_13);
      }
    else
      {
        t = h_13;
      }
  }
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm g_2 = NULL,h_2 = NULL,j_2 = NULL,m_5 = NULL;
  j_2 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_2);
  g_2 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, h_2);
  m_5 = t;
  t = SSLsetAnnotations(m_5, g_2);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_2 = NULL;
  d_2 = t;
  {
    ATerm m_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_2 = NULL,f_2 = NULL;
        t = term_u_12;
        e_2 = t;
        t = term_v_12;
        f_2 = t;
        t = term_x_12;
        t = a_8(e_2, f_2, t);
        LocalPopChoice(n_13);
      }
    else
      {
        t = m_13;
        t = fetch_1_0(u_0, t);
      }
  }
  t = d_2;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_r_13;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm a_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      a_3 = ATgetArgument(t, 0);
      {
        ATerm s_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  c_3 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, a_3);
  d_3 = t;
  t = term_u_13;
  e_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, a_3), term_u_13);
  t = w_6(a_1, d_3, e_3, t);
  t = c_3;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_r_13;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm p_6 (ATerm e_108 (ATerm), ATerm w_23, ATerm x_23, ATerm t)
{
  static ATerm x_0 (ATerm t);
  static ATerm x_0 (ATerm t)
  {
    ATerm k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL,p_2 = NULL,r_2 = NULL,s_2 = NULL,v_2 = NULL,y_2 = NULL,s_5 = NULL;
    k_2 = t;
    t = x_23;
    t = map_1_0(z_0, t);
    t = k_2;
    if(match_cons(t, sym_SDefT_4))
      {
        m_2 = ATgetArgument(t, 0);
        n_2 = ATgetArgument(t, 1);
        p_2 = ATgetArgument(t, 2);
        r_2 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(k_2);
    l_2 = t;
    t = (ATerm) ATempty;
    v_2 = t;
    t = term_u_13;
    y_2 = t;
    t = term_c_14;
    t = w_6(d_1, v_2, y_2, t);
    t = r_2;
    t = e_108(t);
    s_2 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, m_2, n_2, p_2, s_2);
    s_5 = t;
    t = SSLsetAnnotations(s_5, l_2);
    return(t);
  }
  t = scope_2_0(w_0, x_0, t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm q_6 (ATerm c_108 (ATerm), ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL,i_3 = NULL,k_3 = NULL,l_3 = NULL,s_3 = NULL,u_5 = NULL;
  f_3 = t;
  t = (ATerm) ATempty;
  g_3 = t;
  t = term_u_13;
  i_3 = t;
  t = term_c_14;
  t = w_6(f_1, g_3, i_3, t);
  t = f_3;
  if(match_cons(t, sym_Not_1))
    {
      l_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_3);
  k_3 = t;
  t = l_3;
  t = exec_maybe_1_0(c_108, t);
  s_3 = t;
  t = (ATerm) ATmakeAppl(sym_Not_1, s_3);
  u_5 = t;
  t = SSLsetAnnotations(u_5, k_3);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm exec_maybe_1_0 (ATerm v_107 (ATerm), ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL,k_4 = NULL,l_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL;
  i_4 = t;
  t = (ATerm) ATempty;
  o_4 = t;
  t = term_u_13;
  p_4 = t;
  t = term_c_14;
  t = w_6(l_1, o_4, p_4, t);
  t = i_4;
  t = save_Binding_0_0(t);
  g_4 = t;
  t = i_4;
  t = v_107(t);
  h_4 = t;
  t = (ATerm) ATempty;
  l_4 = t;
  t = term_u_13;
  n_4 = t;
  t = term_c_14;
  t = w_6(m_1, l_4, n_4, t);
  t = term_r_13;
  t = table_destroy_0_0(t);
  t = term_r_13;
  k_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_13, g_4);
  t = t_6(k_4, g_4, t);
  t = h_4;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm s_6 (ATerm f_108 (ATerm), ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,b_5 = NULL,c_5 = NULL,b_6 = NULL;
  t_4 = t;
  t = save_Binding_0_0(t);
  s_4 = t;
  t = save_CurrentTerm_0_0(t);
  r_4 = t;
  t = t_4;
  if(match_cons(t, sym_Let_2))
    {
      v_4 = ATgetArgument(t, 0);
      x_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_4);
  u_4 = t;
  t = v_4;
  {
    static ATerm n_1 (ATerm t);
    static ATerm n_1 (ATerm t)
    {
      ATerm d_5 = NULL,e_5 = NULL,f_5 = NULL,h_5 = NULL;
      d_5 = t;
      t = (ATerm) ATempty;
      f_5 = t;
      t = term_u_13;
      h_5 = t;
      t = term_c_14;
      t = w_6(w_1, f_5, h_5, t);
      t = term_r_13;
      t = table_destroy_0_0(t);
      t = term_r_13;
      e_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_r_13, s_4);
      t = t_6(e_5, s_4, t);
      t = d_5;
      t = f_108(t);
      return(t);
    }
    t = map_1_0(n_1, t);
  }
  y_4 = t;
  t = term_b_14;
  t = table_destroy_0_0(t);
  t = term_b_14;
  c_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_14, r_4);
  t = t_6(c_5, r_4, t);
  t = term_r_13;
  t = table_destroy_0_0(t);
  t = term_r_13;
  b_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_13, s_4);
  t = t_6(b_5, s_4, t);
  t = x_4;
  t = f_108(t);
  z_4 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, y_4, z_4);
  b_6 = t;
  t = SSLsetAnnotations(b_6, u_4);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm n_7 = NULL,j_8 = NULL,m_8 = NULL,x_8 = NULL,e_9 = NULL;
  e_9 = t;
  if(match_cons(t, sym__2))
    {
      n_7 = ATgetArgument(t, 0);
      j_8 = ATgetArgument(t, 1);
      t = j_8;
      {
        ATerm h_14 = t;
        int i_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                m_8 = ATgetFirst((ATermList) t);
                {
                  ATerm j_14 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(i_14);
            t = m_8;
            {
              ATerm k_14 = t;
              int n_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm o_14 = ATgetArgument(t, 0);
                      x_8 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(n_14);
                  t = n_7;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = e_9;
                    }
                  else
                    {
                      ATerm q_14 = t;
                      int r_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = q_9(n_7, x_8, e_9, t);
                          LocalPopChoice(r_14);
                        }
                      else
                        {
                          t = q_14;
                          t = e_9;
                        }
                    }
                }
              else
                {
                  t = k_14;
                  t = n_7;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = e_9;
                    }
                  else
                    {
                      t = e_9;
                    }
                }
            }
          }
        else
          {
            t = h_14;
            t = n_7;
            if(match_cons(t, sym_Scopes_0))
              {
                t = e_9;
              }
            else
              {
                t = e_9;
              }
          }
      }
    }
  else
    {
      t = e_9;
    }
  return(t);
}
static ATerm q_9 (ATerm e_6, ATerm f_6, ATerm i_6, ATerm t)
{
  t = i_6;
  {
    ATerm s_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_0 = NULL;
        t = term_b_14;
        q_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_b_14, e_6);
        t = a_8(q_0, e_6, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm z_14 = ATgetFirst((ATermList) t);
            if(match_cons(z_14, sym_Defined_2))
              {
                ATerm b_15 = ATgetArgument(z_14, 0);
                if((f_6 != ATgetArgument(z_14, 1)))
                  {
                    _fail(ATgetArgument(z_14, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm a_15 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = i_6;
        LocalPopChoice(y_14);
      }
    else
      {
        t = s_14;
        t = (ATerm) ATmakeAppl(sym__2, e_6, (ATerm) ATinsert(ATempty, term_u_13));
      }
  }
  return(t);
}
ATerm isect_CurrentTerm_0_0 (ATerm t)
{
  ATerm c_6 = NULL,d_6 = NULL;
  t = map_1_0(x_1, t);
  c_6 = t;
  t = term_b_14;
  t = table_destroy_0_0(t);
  t = term_b_14;
  d_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_14, c_6);
  t = t_6(d_6, c_6, t);
  t = c_6;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm s_11 = NULL,f_12 = NULL,g_12 = NULL,i_12 = NULL,k_12 = NULL;
  k_12 = t;
  if(match_cons(t, sym__2))
    {
      s_11 = ATgetArgument(t, 0);
      f_12 = ATgetArgument(t, 1);
      t = f_12;
      {
        ATerm s_15 = t;
        int t_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_12 = ATgetFirst((ATermList) t);
                {
                  ATerm a_16 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(t_15);
            t = g_12;
            {
              ATerm b_16 = t;
              int c_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm e_16 = ATgetArgument(t, 0);
                      i_12 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(c_16);
                  t = s_11;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = k_12;
                    }
                  else
                    {
                      ATerm m_16 = t;
                      int n_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = w_12(s_11, i_12, k_12, t);
                          LocalPopChoice(n_16);
                        }
                      else
                        {
                          t = m_16;
                          t = k_12;
                        }
                    }
                }
              else
                {
                  t = b_16;
                  t = s_11;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = k_12;
                    }
                  else
                    {
                      t = k_12;
                    }
                }
            }
          }
        else
          {
            t = s_15;
            t = s_11;
            if(match_cons(t, sym_Scopes_0))
              {
                t = k_12;
              }
            else
              {
                t = k_12;
              }
          }
      }
    }
  else
    {
      t = k_12;
    }
  return(t);
}
static ATerm w_12 (ATerm u_10, ATerm v_10, ATerm w_10, ATerm t)
{
  t = w_10;
  {
    ATerm p_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_0 = NULL;
        t = term_r_13;
        v_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_r_13, u_10);
        t = a_8(v_0, u_10, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm t_16 = ATgetFirst((ATermList) t);
            if(match_cons(t_16, sym_Defined_2))
              {
                ATerm v_16 = ATgetArgument(t_16, 0);
                if((v_10 != ATgetArgument(t_16, 1)))
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
        t = w_10;
        LocalPopChoice(r_16);
      }
    else
      {
        t = p_16;
        t = (ATerm) ATmakeAppl(sym__2, u_10, (ATerm) ATinsert(ATempty, term_u_13));
      }
  }
  return(t);
}
ATerm isect_Binding_0_0 (ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL;
  t = map_1_0(y_1, t);
  r_10 = t;
  t = term_r_13;
  t = table_destroy_0_0(t);
  t = term_r_13;
  s_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_13, r_10);
  t = t_6(s_10, r_10, t);
  t = r_10;
  return(t);
}
static ATerm t_6 (ATerm m_61, ATerm l_61, ATerm t)
{
  static ATerm b_2 (ATerm t);
  static ATerm b_2 (ATerm t)
  {
    ATerm a_13 = NULL,e_13 = NULL,f_13 = NULL;
    if(match_cons(t, sym__2))
      {
        a_13 = ATgetArgument(t, 0);
        e_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, m_61, a_13, e_13);
    t = lookup_table_0_1(m_61, t);
    if(match_cons(t, sym_Hashtable_1))
      {
        f_13 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = e_8(a_13, e_13, f_13, t);
    t = (ATerm) ATmakeAppl(sym__3, m_61, a_13, e_13);
    return(t);
  }
  t = l_61;
  t = map_1_0(b_2, t);
  return(t);
}
ATerm save_CurrentTerm_0_0 (ATerm t)
{
  t = term_b_14;
  t = table_getlist_0_0(t);
  return(t);
}
static ATerm u_6 (ATerm b_65, ATerm t)
{
  t = SSL_hashtable_keys(b_65);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm o_13 = NULL,p_13 = NULL;
  static ATerm c_2 (ATerm t);
  static ATerm c_2 (ATerm t)
  {
    ATerm v_13 = NULL,w_13 = NULL;
    v_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_13), v_13);
    t = a_8(not_null(o_13), v_13, t);
    w_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_13, w_13);
    return(t);
  }
  if(((o_13 != NULL) && (o_13 != t)))
    _fail(t);
  else
    o_13 = t;
  t = lookup_table_0_1(o_13, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_6(p_13, t);
  t = map_1_0(c_2, t);
  return(t);
}
ATerm save_Binding_0_0 (ATerm t)
{
  t = term_r_13;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm prop_abstract_choice_2_0 (ATerm j_108 (ATerm), ATerm k_108 (ATerm), ATerm t)
{
  ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL,l_14 = NULL;
  f_14 = t;
  t = save_Binding_0_0(t);
  x_13 = t;
  t = save_CurrentTerm_0_0(t);
  y_13 = t;
  t = f_14;
  t = j_108(t);
  e_14 = t;
  t = save_Binding_0_0(t);
  z_13 = t;
  t = term_r_13;
  t = table_destroy_0_0(t);
  t = term_r_13;
  l_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_13, x_13);
  t = t_6(l_14, x_13, t);
  t = x_13;
  t = save_CurrentTerm_0_0(t);
  a_14 = t;
  t = term_b_14;
  t = table_destroy_0_0(t);
  t = term_b_14;
  g_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_14, y_13);
  t = t_6(g_14, y_13, t);
  t = e_14;
  t = k_108(t);
  d_14 = t;
  t = z_13;
  t = isect_Binding_0_0(t);
  t = a_14;
  t = isect_CurrentTerm_0_0(t);
  t = d_14;
  return(t);
}
ATerm prop_choice_1_0 (ATerm i_108 (ATerm), ATerm t)
{
  ATerm p_14 = NULL;
  p_14 = t;
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
            ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL,c_15 = NULL,h_6 = NULL;
            c_15 = t;
            if(match_cons(t, sym_Choice_2))
              {
                v_14 = ATgetArgument(t, 0);
                w_14 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(c_15);
            u_14 = t;
            t = v_14;
            t = i_108(t);
            x_14 = t;
            t = (ATerm) ATmakeAppl(sym_Choice_2, x_14, w_14);
            h_6 = t;
            t = SSLsetAnnotations(h_6, u_14);
            return(t);
          }
          static ATerm m_3 (ATerm t)
          {
            ATerm d_15 = NULL,e_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,j_6 = NULL;
            j_15 = t;
            if(match_cons(t, sym_Choice_2))
              {
                e_15 = ATgetArgument(t, 0);
                h_15 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(j_15);
            d_15 = t;
            t = h_15;
            t = i_108(t);
            i_15 = t;
            t = (ATerm) ATmakeAppl(sym_Choice_2, e_15, i_15);
            j_6 = t;
            t = SSLsetAnnotations(j_6, d_15);
            return(t);
          }
          t = p_14;
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
                  ATerm y_17 = ATgetArgument(t, 0);
                  ATerm c_18 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(w_17);
              {
                static ATerm n_3 (ATerm t);
                static ATerm a_4 (ATerm t);
                static ATerm n_3 (ATerm t)
                {
                  ATerm k_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,u_15 = NULL,l_6 = NULL;
                  u_15 = t;
                  if(match_cons(t, sym_GChoice_2))
                    {
                      n_15 = ATgetArgument(t, 0);
                      o_15 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(u_15);
                  k_15 = t;
                  t = n_15;
                  t = i_108(t);
                  p_15 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, p_15, o_15);
                  l_6 = t;
                  t = SSLsetAnnotations(l_6, k_15);
                  return(t);
                }
                static ATerm a_4 (ATerm t)
                {
                  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,m_6 = NULL;
                  z_15 = t;
                  if(match_cons(t, sym_GChoice_2))
                    {
                      w_15 = ATgetArgument(t, 0);
                      x_15 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(z_15);
                  v_15 = t;
                  t = x_15;
                  t = i_108(t);
                  y_15 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, w_15, y_15);
                  m_6 = t;
                  t = SSLsetAnnotations(m_6, v_15);
                  return(t);
                }
                t = p_14;
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
                        ATerm d_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,n_6 = NULL;
                        i_16 = t;
                        if(match_cons(t, sym_LChoice_2))
                          {
                            f_16 = ATgetArgument(t, 0);
                            g_16 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(i_16);
                        d_16 = t;
                        t = f_16;
                        t = i_108(t);
                        h_16 = t;
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, h_16, g_16);
                        n_6 = t;
                        t = SSLsetAnnotations(n_6, d_16);
                        return(t);
                      }
                      static ATerm c_4 (ATerm t)
                      {
                        ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL,o_16 = NULL,q_16 = NULL,o_6 = NULL;
                        q_16 = t;
                        if(match_cons(t, sym_LChoice_2))
                          {
                            k_16 = ATgetArgument(t, 0);
                            l_16 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(q_16);
                        j_16 = t;
                        t = l_16;
                        t = i_108(t);
                        o_16 = t;
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, k_16, o_16);
                        o_6 = t;
                        t = SSLsetAnnotations(o_6, j_16);
                        return(t);
                      }
                      t = p_14;
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
                        ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,y_6 = NULL,r_6 = NULL;
                        j_17 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            c_17 = ATgetArgument(t, 0);
                            d_17 = ATgetArgument(t, 1);
                            g_17 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(j_17);
                        b_17 = t;
                        t = c_17;
                        t = i_108(t);
                        h_17 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, h_17, d_17, g_17);
                        r_6 = t;
                        t = SSLsetAnnotations(r_6, b_17);
                        i_17 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            x_16 = ATgetArgument(t, 0);
                            y_16 = ATgetArgument(t, 1);
                            z_16 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(i_17);
                        w_16 = t;
                        t = y_16;
                        t = i_108(t);
                        a_17 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, x_16, a_17, z_16);
                        y_6 = t;
                        t = SSLsetAnnotations(y_6, w_16);
                        return(t);
                      }
                      static ATerm f_4 (ATerm t)
                      {
                        ATerm n_17 = NULL,q_17 = NULL,r_17 = NULL,u_17 = NULL,v_17 = NULL,x_17 = NULL,a_7 = NULL;
                        x_17 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            q_17 = ATgetArgument(t, 0);
                            r_17 = ATgetArgument(t, 1);
                            u_17 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(x_17);
                        n_17 = t;
                        t = u_17;
                        t = i_108(t);
                        v_17 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, q_17, r_17, v_17);
                        a_7 = t;
                        t = SSLsetAnnotations(a_7, n_17);
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
                      t = p_14;
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
  t = term_b_14;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm prop_traversal_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm q_18 = t;
  int w_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_18 = NULL,b_1 = NULL,c_1 = NULL,e_1 = NULL,h_1 = NULL,j_1 = NULL,k_1 = NULL,l_11 = NULL;
      v_18 = t;
      if(match_cons(t, sym_Cong_2))
        {
          ATerm x_18 = ATgetArgument(t, 0);
          ATerm c_19 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      b_1 = t;
      t = term_u_13;
      c_1 = t;
      t = term_c_14;
      t = w_6(j_4, b_1, c_1, t);
      t = v_18;
      if(match_cons(t, sym_Cong_2))
        {
          h_1 = ATgetArgument(t, 0);
          j_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_18);
      e_1 = t;
      t = j_1;
      {
        static ATerm q_4 (ATerm t);
        static ATerm q_4 (ATerm t)
        {
          t = exec_maybe_1_0(p_0, t);
          return(t);
        }
        t = map_1_0(q_4, t);
      }
      k_1 = t;
      t = (ATerm) ATmakeAppl(sym_Cong_2, h_1, k_1);
      l_11 = t;
      t = SSLsetAnnotations(l_11, e_1);
      LocalPopChoice(w_18);
    }
  else
    {
      t = q_18;
      {
        ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL;
        static ATerm a_5 (ATerm t);
        static ATerm a_5 (ATerm t)
        {
          t = exec_maybe_1_0(p_0, t);
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
              ATerm b_19 = NULL;
              b_19 = t;
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
                    t = b_19;
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
                          t = b_19;
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
                                t = b_19;
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
                                t = b_19;
                              }
                          }
                        }
                    }
                  }
              }
            }
          }
        y_18 = t;
        t = (ATerm) ATempty;
        z_18 = t;
        t = term_u_13;
        a_19 = t;
        t = term_c_14;
        t = w_6(w_4, z_18, a_19, t);
        t = y_18;
        t = SRTS_one(a_5, t);
      }
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm z_2 = NULL,b_3 = NULL,h_3 = NULL,l_15 = NULL;
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
  l_15 = t;
  t = SSLsetAnnotations(l_15, z_2);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_b_14;
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
ATerm prop_call_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm n_21 = NULL;
  n_21 = t;
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
          ATerm u_1 = NULL,i_2 = NULL,o_2 = NULL,q_2 = NULL,t_2 = NULL,u_2 = NULL,w_2 = NULL,x_2 = NULL,m_15 = NULL;
          t = (ATerm) ATempty;
          u_1 = t;
          t = term_u_13;
          i_2 = t;
          t = term_c_14;
          t = w_6(g_5, u_1, i_2, t);
          t = n_21;
          if(match_cons(t, sym_PrimT_3))
            {
              q_2 = ATgetArgument(t, 0);
              t_2 = ATgetArgument(t, 1);
              u_2 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_21);
          o_2 = t;
          t = t_2;
          {
            static ATerm i_5 (ATerm t);
            static ATerm i_5 (ATerm t)
            {
              t = exec_maybe_1_0(n_0, t);
              return(t);
            }
            t = map_1_0(i_5, t);
          }
          w_2 = t;
          t = u_2;
          t = alltd_1_0(k_5, t);
          x_2 = t;
          t = (ATerm) ATmakeAppl(sym_PrimT_3, q_2, w_2, x_2);
          m_15 = t;
          t = SSLsetAnnotations(m_15, o_2);
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
          t = term_u_13;
          p_3 = t;
          t = term_c_14;
          t = w_6(l_5, o_3, p_3, t);
          t = n_21;
          if(match_cons(t, sym_CallT_3))
            {
              r_3 = ATgetArgument(t, 0);
              t_3 = ATgetArgument(t, 1);
              u_3 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_21);
          q_3 = t;
          t = t_3;
          {
            static ATerm p_5 (ATerm t);
            static ATerm p_5 (ATerm t)
            {
              t = exec_maybe_1_0(n_0, t);
              return(t);
            }
            t = map_1_0(p_5, t);
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
static ATerm v_5 (ATerm t)
{
  t = term_r_13;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL;
  p_22 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, p_22);
  q_22 = t;
  t = term_u_13;
  r_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, p_22), term_u_13);
  t = w_6(y_5, q_22, r_22, t);
  t = p_22;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_r_13;
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm v_6 (ATerm d_108 (ATerm), ATerm r_23, ATerm t)
{
  static ATerm w_5 (ATerm t);
  static ATerm w_5 (ATerm t)
  {
    ATerm z_21 = NULL,a_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL,j_18 = NULL;
    z_21 = t;
    t = r_23;
    t = map_1_0(x_5, t);
    t = z_21;
    if(match_cons(t, sym_Scope_2))
      {
        f_22 = ATgetArgument(t, 0);
        g_22 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(z_21);
    a_22 = t;
    t = g_22;
    t = d_108(t);
    h_22 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, f_22, h_22);
    j_18 = t;
    t = SSLsetAnnotations(j_18, a_22);
    i_22 = t;
    {
      ATerm q_20 = t;
      int s_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
          t = CurrentTerm_0_0(t);
          {
            static ATerm g_6 (ATerm t);
            static ATerm g_6 (ATerm t)
            {
              ATerm v_22 = NULL;
              static ATerm k_6 (ATerm t);
              static ATerm k_6 (ATerm t)
              {
                if(((v_22 != NULL) && (v_22 != t)))
                  _fail(t);
                else
                  v_22 = t;
                return(t);
              }
              if(match_cons(t, sym_Var_1))
                {
                  if(((v_22 != NULL) && (v_22 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    v_22 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = r_23;
              t = fetch_1_0(k_6, t);
              return(t);
            }
            t = oncetd_1_0(g_6, t);
          }
          s_22 = t;
          t = (ATerm) ATempty;
          t_22 = t;
          t = term_u_13;
          u_22 = t;
          t = term_c_14;
          t = w_6(z_6, t_22, u_22, t);
          t = s_22;
          LocalPopChoice(s_20);
        }
      else
        {
          t = q_20;
        }
    }
    t = i_22;
    return(t);
  }
  t = scope_2_0(v_5, w_5, t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm prop_build_0_0 (ATerm t)
{
  ATerm y_22 = NULL,b_23 = NULL,c_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL,j_23 = NULL,l_18 = NULL;
  j_23 = t;
  if(match_cons(t, sym_Build_1))
    {
      f_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_23);
  e_23 = t;
  t = f_23;
  t = alltd_1_0(Binding_0_0, t);
  g_23 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, g_23);
  l_18 = t;
  t = SSLsetAnnotations(l_18, e_23);
  h_23 = t;
  if(match_cons(t, sym_Build_1))
    {
      y_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  b_23 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_y_20, y_22);
  c_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_y_20, y_22));
  t = w_6(c_7, b_23, c_23, t);
  t = h_23;
  return(t);
}
static ATerm w_6 (ATerm r_108 (ATerm), ATerm o_25, ATerm m_25, ATerm t)
{
  ATerm k_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,t_23 = NULL,u_23 = NULL,z_23 = NULL;
  o_23 = t;
  t = r_108(t);
  k_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_23, o_25, m_25);
  t = b_8(k_23, o_25, m_25, t);
  {
    ATerm z_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_24 = NULL;
        t = term_b_21;
        e_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_23, term_b_21);
        t = a_8(k_23, e_24, t);
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
      m_23 = ATgetFirst((ATermList) t);
      n_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, k_23, term_b_21, (ATerm) ATinsert(CheckATermList(n_23), (ATerm) ATinsert(CheckATermList(m_23), o_25)));
  t = lookup_table_0_1(k_23, t);
  z_23 = t;
  t = term_b_21;
  p_23 = t;
  t = (ATerm) ATinsert(CheckATermList(n_23), (ATerm) ATinsert(CheckATermList(m_23), o_25));
  t_23 = t;
  t = z_23;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_8(p_23, t_23, u_23, t);
  t = o_23;
  return(t);
}
ATerm oncetd_1_0 (ATerm b_114 (ATerm), ATerm t)
{
  static ATerm i_24 (ATerm t);
  static ATerm i_24 (ATerm t)
  {
    ATerm d_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_114(t);
        LocalPopChoice(e_21);
      }
    else
      {
        t = d_21;
        t = SRTS_one(i_24, t);
      }
    return(t);
  }
  t = i_24(t);
  return(t);
}
ATerm debug_1_0 (ATerm y_118 (ATerm), ATerm t)
{
  ATerm m_24 = NULL,s_24 = NULL,t_24 = NULL,v_24 = NULL;
  m_24 = t;
  t = y_118(t);
  s_24 = t;
  t = term_f_21;
  t_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_24), s_24);
  v_24 = t;
  t = SSL_printnl(t_24, v_24);
  t = m_24;
  return(t);
}
ATerm if_verbose3_1_0 (ATerm y_135 (ATerm), ATerm t)
{
  ATerm c_25 = NULL;
  c_25 = t;
  {
    ATerm g_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_25 = NULL,t_25 = NULL,v_25 = NULL;
        t = term_u_12;
        t_25 = t;
        t = term_i_21;
        v_25 = t;
        t = term_j_21;
        t = a_8(t_25, v_25, t);
        s_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_25, term_k_21);
        t = geq_0_0(t);
        t = c_25;
        t = y_135(t);
        LocalPopChoice(h_21);
      }
    else
      {
        t = g_21;
        t = c_25;
      }
  }
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm p_26 = NULL;
  p_26 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = p_26;
    }
  else
    {
      if(match_cons(t, sym_As_2))
        {
          ATerm l_21 = ATgetArgument(t, 0);
          ATerm m_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_26;
    }
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_r_13;
  return(t);
}
static ATerm x_6 (ATerm k_24, ATerm l_24, ATerm t)
{
  ATerm l_26 = NULL,n_26 = NULL,o_26 = NULL;
  l_26 = t;
  t = l_24;
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
  t = (ATerm) ATmakeAppl(sym_Var_1, k_24);
  n_26 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_21, l_24);
  o_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, k_24), (ATerm) ATmakeAppl(sym_Defined_2, term_p_21, l_24));
  t = w_6(e_7, n_26, o_26, t);
  t = l_26;
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL;
  e_30 = t;
  if(match_cons(t, sym__2))
    {
      f_30 = ATgetArgument(t, 0);
      g_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_30;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_30 = ATgetFirst((ATermList) t);
      i_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_30;
  if(match_cons(t, sym__2))
    {
      c_30 = ATgetArgument(t, 0);
      d_30 = ATgetArgument(t, 1);
      {
        ATerm q_21 = t;
        int r_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_30;
            if((f_30 != t))
              {
                _fail(t);
              }
            t = d_30;
            LocalPopChoice(r_21);
          }
        else
          {
            t = q_21;
            t = (ATerm) ATmakeAppl(sym__2, f_30, i_30);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, f_30, i_30);
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
  ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_21 = ATgetArgument(t, 0);
      if(((ATgetType(u_21) == AT_LIST) && !(ATisEmpty(u_21))))
        {
          k_33 = ATgetFirst((ATermList) u_21);
          l_33 = (ATerm) ATgetNext((ATermList) u_21);
        }
      else
        _fail(t);
      {
        ATerm v_21 = ATgetArgument(t, 1);
        if(((ATgetType(v_21) == AT_LIST) && !(ATisEmpty(v_21))))
          {
            m_33 = ATgetFirst((ATermList) v_21);
            n_33 = (ATerm) ATgetNext((ATermList) v_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_33, m_33), (ATerm) ATmakeAppl(sym__2, l_33, n_33));
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL;
  if(match_cons(t, sym__2))
    {
      o_33 = ATgetArgument(t, 0);
      p_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_33), o_33);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm t_32 = NULL,x_32 = NULL,y_32 = NULL,b_33 = NULL;
  t_32 = t;
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_21 = ATgetArgument(t, 0);
            ATerm b_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(x_21);
        t = t_32;
      }
    else
      {
        t = w_21;
        {
          ATerm i_33 = NULL;
          if(match_cons(t, sym__3))
            {
              x_32 = ATgetArgument(t, 0);
              y_32 = ATgetArgument(t, 1);
              b_33 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, x_32, y_32);
          t = genzip_4_0(f_7, h_7, j_7, _id, t);
          i_33 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_33, b_33);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm b_141 (ATerm), ATerm c_141 (ATerm), ATerm t)
{
  ATerm t_33 = NULL,w_33 = NULL;
  static ATerm k_7 (ATerm t);
  static ATerm k_7 (ATerm t)
  {
    ATerm j_5 = NULL;
    t = b_141(t);
    j_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_5, not_null(w_33));
    t = lookup_0_0(t);
    t = c_141(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((w_33 != NULL) && (w_33 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_33 = ATgetArgument(t, 0);
      t_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_33;
  t = alltd_1_0(k_7, t);
  return(t);
}
static ATerm i_7 (ATerm j_147 (ATerm), ATerm c_84, ATerm d_84, ATerm f_84, ATerm e_84, ATerm t)
{
  ATerm y_33 = NULL,a_34 = NULL;
  t = c_84;
  t = j_147(t);
  t = (ATerm) ATmakeAppl(sym__2, c_84, d_84);
  {
    ATerm c_22 = t;
    if((PushChoice() == 0))
      {
        ATerm b_34 = NULL,h_34 = NULL;
        if(match_cons(t, sym__2))
          {
            b_34 = ATgetArgument(t, 0);
            h_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_34;
        {
          static ATerm c_8 (ATerm t);
          static ATerm c_8 (ATerm t)
          {
            if((b_34 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1_0(c_8, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, b_34, h_34);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_22;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, c_84, d_84)), (ATerm) ATmakeAppl(sym__2, e_84, f_84));
  t = substitute_2_0(j_147, _id, t);
  if(match_cons(t, sym__2))
    {
      y_33 = ATgetArgument(t, 0);
      a_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_34, (ATerm) ATinsert(CheckATermList(y_33), (ATerm) ATmakeAppl(sym__2, c_84, d_84)));
  return(t);
}
ATerm at_end_1_0 (ATerm z_119 (ATerm), ATerm t)
{
  static ATerm e_28 (ATerm t);
  static ATerm e_28 (ATerm t)
  {
    ATerm v_27 = NULL,w_27 = NULL,b_28 = NULL;
    b_28 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_27 = ATgetFirst((ATermList) t);
        w_27 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm e_4 = NULL,m_4 = NULL,n_18 = NULL;
          t = SSLgetAnnotations(b_28);
          e_4 = t;
          t = w_27;
          t = e_28(t);
          m_4 = t;
          t = (ATerm) ATinsert(CheckATermList(m_4), v_27);
          n_18 = t;
          t = SSLsetAnnotations(n_18, e_4);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_28;
        t = z_119(t);
      }
    return(t);
  }
  t = e_28(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm y_26 = NULL,z_26 = NULL,a_27 = NULL;
  y_26 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_26;
    }
  else
    {
      static ATerm g_8 (ATerm t);
      static ATerm g_8 (ATerm t)
      {
        t = not_null(a_27);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_26 = ATgetFirst((ATermList) t);
          if(((a_27 != NULL) && (a_27 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            a_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_26;
      t = at_end_1_0(g_8, t);
    }
  return(t);
}
static ATerm b_29 (ATerm n_28, ATerm t)
{
  ATerm p_28 = NULL;
  t = SSL_explode_term(n_28);
  if(match_cons(t, sym__2))
    {
      ATerm d_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      p_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_28;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm r_28 = NULL,u_28 = NULL,v_28 = NULL;
  v_28 = t;
  if(match_cons(t, sym__2))
    {
      r_28 = ATgetArgument(t, 0);
      u_28 = ATgetArgument(t, 1);
      {
        ATerm e_22 = t;
        int j_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm h_8 (ATerm t);
            static ATerm h_8 (ATerm t)
            {
              t = u_28;
              return(t);
            }
            t = r_28;
            t = at_end_1_0(h_8, t);
            LocalPopChoice(j_22);
          }
        else
          {
            t = e_22;
            t = b_29(v_28, t);
          }
      }
    }
  else
    {
      t = b_29(v_28, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm m_121 (ATerm), ATerm n_121 (ATerm), ATerm o_121 (ATerm), ATerm p_121 (ATerm), ATerm t)
{
  static ATerm k_32 (ATerm t);
  static ATerm k_32 (ATerm t)
  {
    ATerm k_22 = t;
    int l_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_121(t);
        LocalPopChoice(l_22);
      }
    else
      {
        t = k_22;
        {
          ATerm o_31 = NULL,s_31 = NULL,u_31 = NULL,y_31 = NULL,g_32 = NULL,i_32 = NULL,p_18 = NULL;
          t = n_121(t);
          i_32 = t;
          if(match_cons(t, sym__2))
            {
              s_31 = ATgetArgument(t, 0);
              u_31 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_32);
          o_31 = t;
          t = s_31;
          t = p_121(t);
          y_31 = t;
          t = u_31;
          t = k_32(t);
          g_32 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_31, g_32);
          p_18 = t;
          t = SSLsetAnnotations(p_18, o_31);
          t = o_121(t);
        }
      }
    return(t);
  }
  t = k_32(t);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_22 = ATgetArgument(t, 0);
      if(((ATgetType(m_22) != AT_LIST) || !(ATisEmpty(m_22))))
        _fail(t);
      {
        ATerm n_22 = ATgetArgument(t, 1);
        if(((ATgetType(n_22) != AT_LIST) || !(ATisEmpty(n_22))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL,u_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_22 = ATgetArgument(t, 0);
      if(((ATgetType(o_22) == AT_LIST) && !(ATisEmpty(o_22))))
        {
          o_29 = ATgetFirst((ATermList) o_22);
          p_29 = (ATerm) ATgetNext((ATermList) o_22);
        }
      else
        _fail(t);
      {
        ATerm w_22 = ATgetArgument(t, 1);
        if(((ATgetType(w_22) == AT_LIST) && !(ATisEmpty(w_22))))
          {
            q_29 = ATgetFirst((ATermList) w_22);
            u_29 = (ATerm) ATgetNext((ATermList) w_22);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_29, q_29), (ATerm) ATmakeAppl(sym__2, p_29, u_29));
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm v_29 = NULL,x_29 = NULL;
  if(match_cons(t, sym__2))
    {
      v_29 = ATgetArgument(t, 0);
      x_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_29), v_29);
  return(t);
}
static ATerm b_7 (ATerm b_883, ATerm g_883, ATerm e_85, ATerm t)
{
  ATerm d_29 = NULL,e_29 = NULL,i_29 = NULL,j_29 = NULL;
  t = SSL_explode_term(g_883);
  if(match_cons(t, sym__2))
    {
      d_29 = ATgetArgument(t, 0);
      i_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(b_883);
  if(match_cons(t, sym__2))
    {
      if((d_29 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      e_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_29, i_29);
  t = genzip_4_0(i_8, k_8, l_8, _id, t);
  j_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_29, e_85);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm o_112 (ATerm), ATerm p_112 (ATerm), ATerm t)
{
  static ATerm j_34 (ATerm t);
  static ATerm j_34 (ATerm t)
  {
    ATerm x_22 = t;
    int z_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_112(t);
        LocalPopChoice(z_22);
      }
    else
      {
        t = x_22;
        t = p_112(t);
        t = j_34(t);
      }
    return(t);
  }
  t = j_34(t);
  return(t);
}
ATerm for_3_0 (ATerm r_112 (ATerm), ATerm s_112 (ATerm), ATerm t_112 (ATerm), ATerm t)
{
  t = r_112(t);
  t = while_not_2_0(s_112, t_112, t);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm y_34 = NULL;
  y_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_34, (ATerm) ATempty);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm b_35 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_23 = ATgetArgument(t, 0);
      if(((ATgetType(a_23) != AT_LIST) || !(ATisEmpty(a_23))))
        _fail(t);
      b_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_35;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm e_40 = NULL,h_40 = NULL,i_40 = NULL,l_40 = NULL,o_40 = NULL,r_40 = NULL,s_40 = NULL;
  o_40 = t;
  if(match_cons(t, sym__2))
    {
      r_40 = ATgetArgument(t, 0);
      s_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_40;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_40 = ATgetFirst((ATermList) t);
      l_40 = (ATerm) ATgetNext((ATermList) t);
      t = e_40;
      if(match_cons(t, sym__2))
        {
          h_40 = ATgetArgument(t, 0);
          i_40 = ATgetArgument(t, 1);
          {
            ATerm d_23 = t;
            int i_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = k_41(r_40, s_40, o_40, t);
                LocalPopChoice(i_23);
              }
            else
              {
                t = d_23;
                {
                  ATerm l_23 = t;
                  int q_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = o_40;
                      t = i_7(r_8, h_40, i_40, l_40, s_40, t);
                      LocalPopChoice(q_23);
                    }
                  else
                    {
                      t = l_23;
                      {
                        ATerm s_23 = t;
                        int v_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = l_41(r_40, s_40, o_40, t);
                            LocalPopChoice(v_23);
                          }
                        else
                          {
                            t = s_23;
                            {
                              ATerm y_23 = t;
                              int a_24 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = n_41(r_40, s_40, o_40, t);
                                  LocalPopChoice(a_24);
                                }
                              else
                                {
                                  t = y_23;
                                  {
                                    ATerm b_24 = t;
                                    int c_24 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = q_41(r_40, s_40, o_40, t);
                                        LocalPopChoice(c_24);
                                      }
                                    else
                                      {
                                        t = b_24;
                                        t = r_41(r_40, s_40, o_40, t);
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
          ATerm d_24 = t;
          int f_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_41(r_40, s_40, o_40, t);
              LocalPopChoice(f_24);
            }
          else
            {
              t = d_24;
              {
                ATerm g_24 = t;
                int h_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = l_41(r_40, s_40, o_40, t);
                    LocalPopChoice(h_24);
                  }
                else
                  {
                    t = g_24;
                    {
                      ATerm j_24 = t;
                      int n_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = n_41(r_40, s_40, o_40, t);
                          LocalPopChoice(n_24);
                        }
                      else
                        {
                          t = j_24;
                          {
                            ATerm o_24 = t;
                            int p_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = q_41(r_40, s_40, o_40, t);
                                LocalPopChoice(p_24);
                              }
                            else
                              {
                                t = o_24;
                                t = r_41(r_40, s_40, o_40, t);
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
      ATerm q_24 = t;
      int r_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_41(r_40, s_40, o_40, t);
          LocalPopChoice(r_24);
        }
      else
        {
          t = q_24;
          {
            ATerm u_24 = t;
            int w_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = l_41(r_40, s_40, o_40, t);
                LocalPopChoice(w_24);
              }
            else
              {
                t = u_24;
                {
                  ATerm x_24 = t;
                  int y_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = n_41(r_40, s_40, o_40, t);
                      LocalPopChoice(y_24);
                    }
                  else
                    {
                      t = x_24;
                      {
                        ATerm z_24 = t;
                        int a_25 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = q_41(r_40, s_40, o_40, t);
                            LocalPopChoice(a_25);
                          }
                        else
                          {
                            t = z_24;
                            t = r_41(r_40, s_40, o_40, t);
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
static ATerm k_41 (ATerm c_35, ATerm f_35, ATerm g_35, ATerm t)
{
  ATerm h_35 = NULL,p_35 = NULL,t_35 = NULL,r_18 = NULL;
  t = SSLgetAnnotations(g_35);
  h_35 = t;
  t = c_35;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_25 = ATgetFirst((ATermList) t);
      if(match_cons(b_25, sym__2))
        {
          p_35 = ATgetArgument(b_25, 0);
          if((p_35 != ATgetArgument(b_25, 1)))
            {
              _fail(ATgetArgument(b_25, 1));
            }
        }
      else
        _fail(t);
      t_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_35, f_35);
  r_18 = t;
  t = SSLsetAnnotations(r_18, h_35);
  return(t);
}
static ATerm l_41 (ATerm g_36, ATerm j_36, ATerm k_36, ATerm t)
{
  ATerm l_36 = NULL,o_36 = NULL,p_36 = NULL,t_36 = NULL,u_36 = NULL,s_18 = NULL;
  t = SSLgetAnnotations(k_36);
  l_36 = t;
  t = g_36;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_25 = ATgetFirst((ATermList) t);
      if(match_cons(d_25, sym__2))
        {
          p_36 = ATgetArgument(d_25, 0);
          t_36 = ATgetArgument(d_25, 1);
        }
      else
        _fail(t);
      u_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_7(p_36, t_36, u_36, t);
  o_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_36, j_36);
  s_18 = t;
  t = SSLsetAnnotations(s_18, l_36);
  return(t);
}
static ATerm n_41 (ATerm w_36, ATerm y_36, ATerm c_37, ATerm t)
{
  ATerm g_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL,t_18 = NULL;
  t = SSLgetAnnotations(c_37);
  g_37 = t;
  t = w_36;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_25 = ATgetFirst((ATermList) t);
      if(match_cons(e_25, sym__2))
        {
          ATerm f_25 = ATgetArgument(e_25, 0);
          if(match_cons(f_25, sym_As_2))
            {
              l_37 = ATgetArgument(f_25, 0);
              m_37 = ATgetArgument(f_25, 1);
            }
          else
            _fail(t);
          n_37 = ATgetArgument(e_25, 1);
        }
      else
        _fail(t);
      o_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(CheckATermList(o_37), (ATerm) ATmakeAppl(sym__2, m_37, n_37)), (ATerm) ATmakeAppl(sym__2, l_37, n_37)), y_36);
  t_18 = t;
  t = SSLsetAnnotations(t_18, g_37);
  return(t);
}
static ATerm q_41 (ATerm v_37, ATerm w_37, ATerm x_37, ATerm t)
{
  ATerm y_37 = NULL,h_38 = NULL,u_18 = NULL;
  t = SSLgetAnnotations(x_37);
  y_37 = t;
  t = v_37;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_25 = ATgetFirst((ATermList) t);
      if(match_cons(g_25, sym__2))
        {
          ATerm h_25 = ATgetArgument(g_25, 0);
          if(!(match_cons(h_25, sym_Wld_0)))
            _fail(t);
          {
            ATerm i_25 = ATgetArgument(g_25, 1);
          }
        }
      else
        _fail(t);
      h_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_38, w_37);
  u_18 = t;
  t = SSLsetAnnotations(u_18, y_37);
  return(t);
}
static ATerm r_41 (ATerm j_38, ATerm k_38, ATerm n_38, ATerm t)
{
  ATerm o_38 = NULL,t_38 = NULL,u_38 = NULL,x_38 = NULL,y_38 = NULL,d_39 = NULL,f_19 = NULL,e_19 = NULL;
  t = SSLgetAnnotations(n_38);
  o_38 = t;
  t = j_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_25 = ATgetFirst((ATermList) t);
      if(match_cons(j_25, sym__2))
        {
          t_38 = ATgetArgument(j_25, 0);
          u_38 = ATgetArgument(j_25, 1);
        }
      else
        _fail(t);
      x_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_38;
  {
    ATerm k_25 = t;
    if((PushChoice() == 0))
      {
        ATerm v_39 = NULL,w_39 = NULL,b_40 = NULL,d_19 = NULL;
        b_40 = t;
        if(match_cons(t, sym_Var_1))
          {
            w_39 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_40);
        v_39 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, w_39);
        d_19 = t;
        t = SSLsetAnnotations(d_19, v_39);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_25;
      }
  }
  t = u_38;
  if(match_cons(t, sym_Var_1))
    {
      d_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_38);
  y_38 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, d_39);
  e_19 = t;
  t = SSLsetAnnotations(e_19, y_38);
  t = (ATerm) ATmakeAppl(sym__2, x_38, k_38);
  f_19 = t;
  t = SSLsetAnnotations(f_19, o_38);
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm e_41 = NULL,h_41 = NULL,j_41 = NULL,g_19 = NULL;
  j_41 = t;
  if(match_cons(t, sym_Var_1))
    {
      h_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_41);
  e_41 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, h_41);
  g_19 = t;
  t = SSLsetAnnotations(g_19, e_41);
  return(t);
}
ATerm prop_pattern_match_0_0 (ATerm t)
{
  t = for_3_0(n_8, p_8, q_8, t);
  return(t);
}
ATerm CurrentTerm_0_0 (ATerm t)
{
  ATerm l_25 = t;
  int n_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_41 = NULL,n_5 = NULL,o_5 = NULL;
      t = (ATerm) ATempty;
      n_5 = t;
      t = term_b_14;
      o_5 = t;
      t = term_p_25;
      t = l_7(o_5, n_5, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm q_25 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) q_25) != ATmakeSymbol("j_0", 0, ATtrue)))
            _fail(t);
          u_41 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_41;
      LocalPopChoice(n_25);
    }
  else
    {
      t = l_25;
      {
        ATerm r_25 = t;
        int u_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_41 = NULL,q_5 = NULL,r_5 = NULL;
            t = (ATerm) ATempty;
            q_5 = t;
            t = term_b_14;
            r_5 = t;
            t = term_p_25;
            t = l_7(r_5, q_5, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm w_25 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) w_25) != ATmakeSymbol("g_0", 0, ATtrue)))
                  _fail(t);
                v_41 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = v_41;
            LocalPopChoice(u_25);
          }
        else
          {
            t = r_25;
            {
              ATerm y_41 = NULL,z_5 = NULL,a_6 = NULL;
              y_41 = t;
              t = (ATerm) ATempty;
              z_5 = t;
              t = term_b_14;
              a_6 = t;
              t = term_p_25;
              t = l_7(a_6, z_5, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              t = y_41;
              _fail(t);
            }
          }
      }
    }
  return(t);
}
static ATerm l_7 (ATerm u_60, ATerm v_60, ATerm t)
{
  ATerm a_42 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_60, v_60);
  t = a_8(u_60, v_60, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_42 = ATgetFirst((ATermList) t);
      {
        ATerm x_25 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = a_42;
  return(t);
}
ATerm Binding_0_0 (ATerm t)
{
  ATerm i_43 = NULL;
  i_43 = t;
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
        t = term_r_13;
        x_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_r_13, i_43);
        t = l_7(x_7, i_43, t);
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
              t = term_r_13;
              o_8 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_r_13, i_43);
              t = l_7(o_8, i_43, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              t = i_43;
              _fail(t);
              LocalPopChoice(d_26);
            }
          else
            {
              t = c_26;
              {
                ATerm v_8 = NULL;
                t = term_r_13;
                v_8 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_r_13, i_43);
                t = l_7(v_8, i_43, t);
                if(!(match_cons(t, sym_Undefined_0)))
                  _fail(t);
                t = i_43;
                _fail(t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm p_114 (ATerm), ATerm t)
{
  static ATerm s_43 (ATerm t);
  static ATerm s_43 (ATerm t)
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_114(t);
        LocalPopChoice(f_26);
      }
    else
      {
        t = e_26;
        t = SRTS_all(s_43, t);
      }
    return(t);
  }
  t = s_43(t);
  return(t);
}
static ATerm s_8 (ATerm t)
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
static ATerm t_8 (ATerm t)
{
  t = debug_1_0(u_8, t);
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_j_26;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm s_44 = NULL;
  s_44 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = s_44;
    }
  else
    {
      if(match_cons(t, sym_As_2))
        {
          ATerm k_26 = ATgetArgument(t, 0);
          ATerm m_26 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = s_44;
    }
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm prop_match_0_0 (ATerm t)
{
  ATerm w_43 = NULL,y_43 = NULL,c_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,p_19 = NULL;
  i_44 = t;
  if(match_cons(t, sym_Match_1))
    {
      f_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_44);
  c_44 = t;
  t = f_44;
  t = alltd_1_0(Binding_0_0, t);
  g_44 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, g_44);
  p_19 = t;
  t = SSLsetAnnotations(p_19, c_44);
  h_44 = t;
  if(match_cons(t, sym_Match_1))
    {
      y_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_26 = t;
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = CurrentTerm_0_0(t);
        w_43 = t;
        t = h_44;
        {
          ATerm s_26 = t;
          int t_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, y_43, w_43));
              t = prop_pattern_match_0_0(t);
              t = map_1_0(s_8, t);
              t = h_44;
              LocalPopChoice(t_26);
            }
          else
            {
              t = s_26;
              t = (ATerm) ATmakeAppl(sym__4, term_u_26, h_44, term_v_26, w_43);
              t = if_verbose3_1_0(t_8, t);
              t = term_w_26;
            }
        }
        LocalPopChoice(r_26);
      }
    else
      {
        t = q_26;
        {
          ATerm x_26 = t;
          int b_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_44 = NULL,r_44 = NULL;
              t = y_43;
              {
                ATerm c_27 = t;
                if((PushChoice() == 0))
                  {
                    t = oncetd_1_0(w_8, t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = c_27;
                  }
              }
              t = (ATerm) ATempty;
              q_44 = t;
              t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_27, y_43);
              r_44 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_d_27, y_43));
              t = w_6(y_8, q_44, r_44, t);
              t = h_44;
              LocalPopChoice(b_27);
            }
          else
            {
              t = x_26;
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
                  ATerm f_45 = NULL,i_45 = NULL;
                  f_45 = t;
                  if(match_cons(t, sym_Scope_2))
                    {
                      i_45 = ATgetArgument(t, 0);
                      {
                        ATerm k_27 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  t = f_45;
                  t = v_6(cp_0_0, i_45, t);
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
                                    ATerm n_46 = NULL,o_46 = NULL,p_46 = NULL,p_9 = NULL,u_9 = NULL,v_9 = NULL,r_19 = NULL;
                                    n_46 = t;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        o_46 = ATgetArgument(t, 0);
                                        p_46 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(n_46);
                                    p_9 = t;
                                    t = o_46;
                                    t = cp_0_0(t);
                                    u_9 = t;
                                    t = p_46;
                                    t = cp_0_0(t);
                                    v_9 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, u_9, v_9);
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
                                            int u_27 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm w_46 = NULL,x_46 = NULL,z_46 = NULL;
                                                w_46 = t;
                                                {
                                                  ATerm x_27 = t;
                                                  int y_27 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_Let_2))
                                                        {
                                                          ATerm z_27 = ATgetArgument(t, 0);
                                                          ATerm a_28 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(y_27);
                                                      t = w_46;
                                                      t = s_6(cp_0_0, t);
                                                    }
                                                  else
                                                    {
                                                      t = x_27;
                                                      {
                                                        ATerm c_28 = t;
                                                        int d_28 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm f_28 = ATgetArgument(t, 0);
                                                                ATerm g_28 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(d_28);
                                                            {
                                                              ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,s_19 = NULL;
                                                              t = w_46;
                                                              if(match_cons(t, sym_Rec_2))
                                                                {
                                                                  c_10 = ATgetArgument(t, 0);
                                                                  d_10 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSLgetAnnotations(w_46);
                                                              b_10 = t;
                                                              t = d_10;
                                                              t = exec_maybe_1_0(cp_0_0, t);
                                                              e_10 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Rec_2, c_10, e_10);
                                                              s_19 = t;
                                                              t = SSLsetAnnotations(s_19, b_10);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = c_28;
                                                            {
                                                              ATerm h_28 = t;
                                                              int i_28 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_Not_1))
                                                                    {
                                                                      ATerm j_28 = ATgetArgument(t, 0);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(i_28);
                                                                  t = w_46;
                                                                  t = q_6(cp_0_0, t);
                                                                }
                                                              else
                                                                {
                                                                  t = h_28;
                                                                  if(match_cons(t, sym_SDefT_4))
                                                                    {
                                                                      x_46 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm k_28 = ATgetArgument(t, 1);
                                                                      }
                                                                      z_46 = ATgetArgument(t, 2);
                                                                      {
                                                                        ATerm l_28 = ATgetArgument(t, 3);
                                                                      }
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  t = w_46;
                                                                  t = p_6(cp_0_0, x_46, z_46, t);
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                                LocalPopChoice(u_27);
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
static ATerm m_7 (ATerm o_60, ATerm p_60, ATerm t)
{
  ATerm f_47 = NULL,g_47 = NULL;
  g_47 = t;
  {
    ATerm m_28 = t;
    int o_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_60, p_60);
        t = a_8(o_60, p_60, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_28 = ATgetFirst((ATermList) t);
            f_47 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(o_28);
        {
          ATerm h_47 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, o_60, p_60, f_47);
          t = lookup_table_0_1(o_60, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              h_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_8(p_60, f_47, h_47, t);
          t = (ATerm) ATmakeAppl(sym__3, o_60, p_60, f_47);
        }
      }
    else
      {
        t = m_28;
        {
          ATerm j_47 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, o_60, p_60);
          t = lookup_table_0_1(o_60, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              j_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_7(p_60, j_47, t);
          t = (ATerm) ATmakeAppl(sym__2, o_60, p_60);
        }
      }
  }
  t = g_47;
  return(t);
}
ATerm end_scope_1_0 (ATerm o_108 (ATerm), ATerm t)
{
  ATerm l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL;
  o_47 = t;
  t = o_108(t);
  n_47 = t;
  {
    ATerm s_28 = t;
    int t_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_47 = NULL;
        t = term_b_21;
        s_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_47, term_b_21);
        t = a_8(n_47, s_47, t);
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
        LocalPopChoice(t_28);
      }
    else
      {
        t = s_28;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_47 = ATgetFirst((ATermList) t);
      l_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, n_47, term_b_21, l_47);
  t = lookup_table_0_1(n_47, t);
  r_47 = t;
  t = term_b_21;
  p_47 = t;
  t = r_47;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_8(p_47, l_47, q_47, t);
  t = m_47;
  {
    static ATerm z_8 (ATerm t);
    static ATerm z_8 (ATerm t)
    {
      ATerm t_47 = NULL;
      t_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_47, t_47);
      t = m_7(n_47, t_47, t);
      return(t);
    }
    t = map_1_0(z_8, t);
  }
  t = o_47;
  return(t);
}
ATerm restore_always_2_0 (ATerm t_111 (ATerm), ATerm u_111 (ATerm), ATerm t)
{
  ATerm x_28 = t;
  int y_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_111(t);
      t = u_111(t);
      LocalPopChoice(y_28);
    }
  else
    {
      t = x_28;
      t = u_111(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm n_108 (ATerm), ATerm t)
{
  ATerm v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL;
  w_47 = t;
  t = n_108(t);
  v_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_47, term_b_21);
  {
    ATerm z_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_48 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm c_29 = ATgetArgument(t, 0);
            ATerm f_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_b_21;
        f_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_47, term_b_21);
        t = a_8(v_47, f_48, t);
        LocalPopChoice(a_29);
      }
    else
      {
        t = z_28;
        t = (ATerm) ATempty;
      }
  }
  x_47 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_47, term_b_21, (ATerm) ATinsert(CheckATermList(x_47), (ATerm) ATempty));
  t = lookup_table_0_1(v_47, t);
  b_48 = t;
  t = term_b_21;
  y_47 = t;
  t = (ATerm) ATinsert(CheckATermList(x_47), (ATerm) ATempty);
  z_47 = t;
  t = b_48;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_8(y_47, z_47, a_48, t);
  t = w_47;
  return(t);
}
ATerm scope_2_0 (ATerm p_108 (ATerm), ATerm q_108 (ATerm), ATerm t)
{
  static ATerm a_9 (ATerm t);
  static ATerm a_9 (ATerm t)
  {
    t = end_scope_1_0(p_108, t);
    return(t);
  }
  t = begin_scope_1_0(p_108, t);
  t = restore_always_2_0(q_108, a_9, t);
  return(t);
}
ATerm map_1_0 (ATerm i_119 (ATerm), ATerm t)
{
  static ATerm u_48 (ATerm t);
  static ATerm u_48 (ATerm t)
  {
    ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL;
    r_48 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_48;
      }
    else
      {
        ATerm k_10 = NULL,n_10 = NULL,o_10 = NULL,v_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_48 = ATgetFirst((ATermList) t);
            t_48 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_48);
        k_10 = t;
        t = s_48;
        t = i_119(t);
        n_10 = t;
        t = t_48;
        t = u_48(t);
        o_10 = t;
        t = (ATerm) ATinsert(CheckATermList(o_10), n_10);
        v_19 = t;
        t = SSLsetAnnotations(v_19, k_10);
      }
    return(t);
  }
  t = u_48(t);
  return(t);
}
ATerm Cons_2_0 (ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm t)
{
  ATerm w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL,x_19 = NULL;
  b_49 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_48 = ATgetFirst((ATermList) t);
      y_48 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_49);
  w_48 = t;
  t = x_48;
  t = d_99(t);
  z_48 = t;
  t = y_48;
  t = e_99(t);
  a_49 = t;
  t = (ATerm) ATinsert(CheckATermList(a_49), z_48);
  x_19 = t;
  t = SSLsetAnnotations(x_19, w_48);
  return(t);
}
static ATerm o_7 (ATerm x_54, ATerm y_54, ATerm t)
{
  ATerm c_49 = NULL;
  t = SSL_fputc(x_54, y_54);
  c_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_49);
  return(t);
}
static ATerm p_7 (ATerm e_39, ATerm f_39, ATerm t)
{
  ATerm d_49 = NULL;
  t = SSL_write_term_to_stream_text(e_39, f_39);
  d_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_49);
  return(t);
}
static ATerm r_7 (ATerm a_119 (ATerm), ATerm e_279, ATerm k_39, ATerm t)
{
  ATerm e_49 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_279, term_g_29);
  t = v_7(t);
  e_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_49, k_39);
  t = a_119(t);
  t = fclose_0_0(t);
  t = k_39;
  return(t);
}
static ATerm q_7 (ATerm a_39, ATerm b_39, ATerm t)
{
  ATerm f_49 = NULL;
  t = SSL_write_term_to_stream_baf(a_39, b_39);
  f_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_49);
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
      ATerm h_29 = ATgetArgument(t, 0);
      if(match_cons(h_29, sym_Stream_1))
        {
          m_11 = ATgetArgument(h_29, 0);
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
      ATerm k_29 = ATgetArgument(t, 0);
      if(match_cons(k_29, sym_Stream_1))
        {
          d_12 = ATgetArgument(k_29, 0);
        }
      else
        _fail(t);
      e_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_7(d_12, e_12, t);
  a_12 = t;
  t = term_l_29;
  b_12 = t;
  t = a_12;
  if(match_cons(t, sym_Stream_1))
    {
      c_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_l_29, a_12);
  t = o_7(b_12, c_12, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL,t_50 = NULL,u_50 = NULL,a_20 = NULL,z_19 = NULL;
  k_49 = t;
  if(match_cons(t, sym__2))
    {
      r_49 = ATgetArgument(t, 0);
      s_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_49);
  q_49 = t;
  t = r_49;
  {
    ATerm m_29 = t;
    int n_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm b_9 (ATerm t);
        static ATerm b_9 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((j_49 != NULL) && (j_49 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                j_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(b_9, t);
        LocalPopChoice(n_29);
      }
    else
      {
        t = m_29;
        t = term_r_29;
        j_49 = t;
      }
  }
  t_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_49, s_49);
  z_19 = t;
  t = SSLsetAnnotations(z_19, q_49);
  t = k_49;
  if(match_cons(t, sym__2))
    {
      m_49 = ATgetArgument(t, 0);
      n_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_49);
  l_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_49, (ATerm) ATmakeAppl(sym__2, not_null(j_49), n_49));
  a_20 = t;
  t = SSLsetAnnotations(a_20, l_49);
  p_49 = t;
  if(match_cons(t, sym__2))
    {
      t_50 = ATgetArgument(t, 0);
      u_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_29 = t;
    int t_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_11 = NULL,g_11 = NULL,h_11 = NULL,j_11 = NULL,k_11 = NULL,b_20 = NULL;
        t = SSLgetAnnotations(p_49);
        b_11 = t;
        t = t_50;
        t = fetch_1_0(f_9, t);
        g_11 = t;
        t = u_50;
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
        LocalPopChoice(t_29);
      }
    else
      {
        t = s_29;
        {
          ATerm u_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,c_20 = NULL;
          t = SSLgetAnnotations(p_49);
          u_11 = t;
          t = u_50;
          if(match_cons(t, sym__2))
            {
              y_11 = ATgetArgument(t, 0);
              z_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_7(h_9, y_11, z_11, t);
          x_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_50, x_11);
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
ATerm apply_strategy_1_0 (ATerm o_137 (ATerm), ATerm t)
{
  ATerm x_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL;
  b_51 = t;
  t = dtime_0_0(t);
  t = b_51;
  t = o_137(t);
  a_51 = t;
  t = dtime_0_0(t);
  x_50 = t;
  t = a_51;
  if(match_cons(t, sym__2))
    {
      y_50 = ATgetArgument(t, 0);
      z_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_50), (ATerm) ATmakeAppl(sym_Runtime_1, x_50)), z_50);
  return(t);
}
static ATerm p_51 (ATerm j_51, ATerm t)
{
  t = SSL_fclose(j_51);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_51 = NULL,n_51 = NULL;
  n_51 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_51 = ATgetArgument(t, 0);
      {
        ATerm w_29 = t;
        int y_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_51);
            LocalPopChoice(y_29);
          }
        else
          {
            t = w_29;
            t = p_51(n_51, t);
          }
      }
    }
  else
    {
      t = p_51(n_51, t);
    }
  return(t);
}
static ATerm s_7 (ATerm g_39, ATerm t)
{
  t = SSL_read_term_from_stream(g_39);
  return(t);
}
static ATerm t_7 (ATerm d_53, ATerm e_53, ATerm t)
{
  t = SSL_strcat(d_53, e_53);
  return(t);
}
static ATerm u_7 (ATerm z_54, ATerm a_55, ATerm t)
{
  ATerm q_51 = NULL;
  t = SSL_fopen(z_54, a_55);
  q_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_51);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_51 = NULL;
  t = SSL_stdin_stream();
  r_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_51);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_51 = NULL;
  t = SSL_stdout_stream();
  s_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_51);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_51 = NULL;
  t = SSL_stderr_stream();
  t_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_51);
  return(t);
}
static ATerm a_53 (ATerm z_51, ATerm t)
{
  ATerm a_52 = NULL;
  t = SSL_explode_term(z_51);
  if(match_cons(t, sym__2))
    {
      ATerm z_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_30 = ATgetArgument(t, 1);
        if(((ATgetType(a_30) == AT_LIST) && !(ATisEmpty(a_30))))
          {
            a_52 = ATgetFirst((ATermList) a_30);
            {
              ATerm b_30 = (ATerm) ATgetNext((ATermList) a_30);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_52;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_52;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_52;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_52;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm b_53 (ATerm d_52, ATerm e_52, ATerm f_52, ATerm t)
{
  ATerm g_52 = NULL,h_52 = NULL,i_52 = NULL,l_52 = NULL,h_20 = NULL;
  t = SSLgetAnnotations(f_52);
  i_52 = t;
  t = d_52;
  if(match_cons(t, sym_Path_1))
    {
      l_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_52, e_52);
  h_20 = t;
  t = SSLsetAnnotations(h_20, i_52);
  if(match_cons(t, sym__2))
    {
      g_52 = ATgetArgument(t, 0);
      h_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_7(g_52, h_52, t);
  return(t);
}
static ATerm c_53 (ATerm n_52, ATerm o_52, ATerm p_52, ATerm t)
{
  ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL,v_52 = NULL,i_20 = NULL;
  t = SSLgetAnnotations(p_52);
  s_52 = t;
  t = SSL_is_string(n_52);
  v_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_52, o_52);
  i_20 = t;
  t = SSLsetAnnotations(i_20, s_52);
  if(match_cons(t, sym__2))
    {
      q_52 = ATgetArgument(t, 0);
      r_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_7(q_52, r_52, t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm x_52 = NULL,y_52 = NULL,z_52 = NULL;
  x_52 = t;
  if(match_cons(t, sym__2))
    {
      y_52 = ATgetArgument(t, 0);
      z_52 = ATgetArgument(t, 1);
      {
        ATerm j_30 = t;
        int k_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_53(x_52, t);
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
                  t = b_53(y_52, z_52, x_52, t);
                  LocalPopChoice(m_30);
                }
              else
                {
                  t = l_30;
                  t = c_53(y_52, z_52, x_52, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_53(x_52, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_53 = NULL,h_53 = NULL,i_53 = NULL,n_53 = NULL;
  n_53 = t;
  {
    ATerm n_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, n_53, term_p_30);
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
          t = (ATerm) ATmakeAppl(sym__2, term_q_30, n_53);
          t = t_7(j_13, n_53, t);
          i_13 = t;
          t = SSL_perror(i_13);
          _fail(t);
        }
      }
  }
  h_53 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_7(i_53, t);
  g_53 = t;
  t = h_53;
  t = fclose_0_0(t);
  t = g_53;
  return(t);
}
ATerm fetch_1_0 (ATerm s_119 (ATerm), ATerm t)
{
  static ATerm m_54 (ATerm t);
  static ATerm m_54 (ATerm t)
  {
    ATerm j_54 = NULL,k_54 = NULL,l_54 = NULL;
    j_54 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_54 = ATgetFirst((ATermList) t);
        l_54 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm r_30 = t;
      int s_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_13 = NULL,t_13 = NULL,l_20 = NULL;
          t = SSLgetAnnotations(j_54);
          q_13 = t;
          t = k_54;
          t = s_119(t);
          t_13 = t;
          t = (ATerm) ATinsert(CheckATermList(l_54), t_13);
          l_20 = t;
          t = SSLsetAnnotations(l_20, q_13);
          LocalPopChoice(s_30);
        }
      else
        {
          t = r_30;
          {
            ATerm m_14 = NULL,t_14 = NULL,m_20 = NULL;
            t = SSLgetAnnotations(j_54);
            m_14 = t;
            t = l_54;
            t = m_54(t);
            t_14 = t;
            t = (ATerm) ATinsert(CheckATermList(t_14), k_54);
            m_20 = t;
            t = SSLsetAnnotations(m_20, m_14);
          }
        }
    }
    return(t);
  }
  t = m_54(t);
  return(t);
}
static ATerm a_8 (ATerm c_62, ATerm d_62, ATerm t)
{
  ATerm p_54 = NULL;
  t = lookup_table_0_1(c_62, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(d_62, p_54, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm x_135 (ATerm), ATerm t)
{
  ATerm s_54 = NULL;
  s_54 = t;
  {
    ATerm t_30 = t;
    int u_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_54 = NULL,v_54 = NULL,w_54 = NULL;
        t = term_u_12;
        v_54 = t;
        t = term_i_21;
        w_54 = t;
        t = term_j_21;
        t = a_8(v_54, w_54, t);
        u_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_54, term_v_30);
        t = geq_0_0(t);
        t = s_54;
        t = x_135(t);
        LocalPopChoice(u_30);
      }
    else
      {
        t = t_30;
        t = s_54;
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
  t = term_r_29;
  h_55 = t;
  t = SSL_printnl(h_55, g_55);
  t = f_55;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm l_55 = NULL,m_55 = NULL;
  t = term_u_12;
  l_55 = t;
  t = term_v_12;
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
static ATerm o_9 (ATerm t)
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
static ATerm t_9 (ATerm t)
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
  t = term_q_12;
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
  int m_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_9, m_9, n_9, t);
      LocalPopChoice(m_31);
    }
  else
    {
      t = l_31;
      {
        ATerm n_31 = t;
        int p_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_9, r_9, s_9, t);
            LocalPopChoice(p_31);
          }
        else
          {
            t = n_31;
            t = Option_3_0(t_9, w_9, x_9, t);
          }
      }
    }
  return(t);
}
static ATerm d_8 (ATerm t_73, ATerm u_73, ATerm t)
{
  ATerm c_56 = NULL,d_56 = NULL;
  t = term_u_12;
  c_56 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_12, t_73, u_73);
  t = lookup_table_0_1(c_56, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_8(t_73, u_73, d_56, t);
  t = (ATerm) ATmakeAppl(sym__3, term_u_12, t_73, u_73);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm h_56 = NULL,i_56 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_56 = NULL,k_56 = NULL,l_56 = NULL;
      t = term_q_12;
      t = d_0(t);
      j_56 = t;
      t = term_c_13;
      k_56 = t;
      t = term_d_13;
      l_56 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_13, term_d_13, j_56);
      t = b_8(k_56, l_56, j_56, t);
      _fail(t);
    }
  else
    {
      ATerm o_56 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_56 = ATgetFirst((ATermList) t);
          i_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_56;
      t = b_0(t);
      t = term_q_12;
      t = c_0(t);
      o_56 = t;
      t = (ATerm) ATinsert(CheckATermList(i_56), o_56);
    }
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm q_56 = NULL;
  q_56 = t;
  if(match_string(t, "-o"))
    {
      t = q_56;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_56;
    }
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm r_56 = NULL,s_56 = NULL;
  r_56 = t;
  t = term_q_31;
  s_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_31, r_56);
  t = d_8(s_56, r_56, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_56);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  t = term_r_31;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_9, z_9, a_10, t);
  return(t);
}
static ATerm b_8 (ATerm j_60, ATerm k_60, ATerm i_60, ATerm t)
{
  ATerm u_56 = NULL,v_56 = NULL,w_56 = NULL,x_56 = NULL,y_56 = NULL;
  u_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_60, k_60);
  {
    ATerm t_31 = t;
    int v_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_31 = ATgetArgument(t, 0);
            ATerm x_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_60, k_60);
        t = a_8(j_60, k_60, t);
        LocalPopChoice(v_31);
      }
    else
      {
        t = t_31;
        t = (ATerm) ATempty;
      }
  }
  v_56 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_60, k_60, (ATerm) ATinsert(CheckATermList(v_56), i_60));
  t = lookup_table_0_1(j_60, t);
  y_56 = t;
  t = (ATerm) ATinsert(CheckATermList(v_56), i_60);
  w_56 = t;
  t = y_56;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_8(k_60, w_56, x_56, t);
  t = u_56;
  return(t);
}
ATerm ArgOption_3_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_57 = NULL,k_57 = NULL,l_57 = NULL;
      t = term_q_12;
      t = i_0(t);
      j_57 = t;
      t = term_c_13;
      k_57 = t;
      t = term_d_13;
      l_57 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_13, term_d_13, j_57);
      t = b_8(k_57, l_57, j_57, t);
      _fail(t);
    }
  else
    {
      ATerm p_57 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_57 = ATgetFirst((ATermList) t);
          g_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_57;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_57 = ATgetFirst((ATermList) t);
          i_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_57;
      t = f_0(t);
      t = h_57;
      t = h_0(t);
      p_57 = t;
      t = (ATerm) ATinsert(CheckATermList(i_57), p_57);
    }
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm r_57 = NULL;
  r_57 = t;
  if(match_string(t, "-i"))
    {
      t = r_57;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_57;
    }
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm s_57 = NULL,t_57 = NULL;
  s_57 = t;
  t = term_z_31;
  t_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_31, s_57);
  t = d_8(t_57, s_57, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_57);
  return(t);
}
static ATerm h_10 (ATerm t)
{
  t = term_a_32;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_10, g_10, h_10, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_57 = NULL,v_57 = NULL,w_57 = NULL,x_57 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_12;
  t = whoami_0_0(t);
  u_57 = t;
  t = term_f_21;
  w_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_32), u_57);
  x_57 = t;
  t = SSL_printnl(w_57, x_57);
  t = term_c_32;
  v_57 = t;
  t = SSL_exit(v_57);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm y_57 = NULL,z_57 = NULL;
  t = term_u_12;
  y_57 = t;
  t = term_v_12;
  z_57 = t;
  t = term_x_12;
  t = a_8(y_57, z_57, t);
  return(t);
}
static ATerm w_7 (ATerm s_58, ATerm t_58, ATerm t)
{
  ATerm d_32 = t;
  int e_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(s_58, t_58);
      LocalPopChoice(e_32);
    }
  else
    {
      t = d_32;
      t = SSL_addr(s_58, t_58);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm h_126 (ATerm), ATerm i_126 (ATerm), ATerm t)
{
  ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL;
  b_58 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_58;
      t = h_126(t);
    }
  else
    {
      ATerm g_58 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_58 = ATgetFirst((ATermList) t);
          d_58 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_58;
      t = foldr_2_0(h_126, i_126, t);
      g_58 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_58, g_58);
      t = i_126(t);
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
static ATerm j_10 (ATerm t)
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
  ATerm j_58 = NULL,f_15 = NULL,g_15 = NULL;
  t = times_0_0(t);
  g_15 = t;
  t = SSL_explode_term(g_15);
  if(match_cons(t, sym__2))
    {
      ATerm f_32 = ATgetArgument(t, 0);
      f_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_15;
  t = foldr_2_0(i_10, j_10, t);
  j_58 = t;
  t = SSL_TicksToSeconds(j_58);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_58 = NULL,x_58 = NULL,y_58 = NULL;
  w_58 = t;
  if(match_cons(t, sym__2))
    {
      x_58 = ATgetArgument(t, 0);
      y_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_32 = t;
    int j_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_58;
        if((x_58 != t))
          {
            _fail(t);
          }
        t = w_58;
        LocalPopChoice(j_32);
      }
    else
      {
        t = h_32;
        t = (ATerm) ATmakeAppl(sym__2, x_58, y_58);
        {
          ATerm l_32 = t;
          int m_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_58, y_58);
              LocalPopChoice(m_32);
            }
          else
            {
              t = l_32;
              t = SSL_gtr(x_58, y_58);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, x_58, y_58);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_135 (ATerm), ATerm t)
{
  ATerm c_59 = NULL;
  c_59 = t;
  {
    ATerm n_32 = t;
    int o_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_59 = NULL,f_59 = NULL,g_59 = NULL;
        t = term_u_12;
        f_59 = t;
        t = term_i_21;
        g_59 = t;
        t = term_j_21;
        t = a_8(f_59, g_59, t);
        e_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_59, term_c_32);
        t = geq_0_0(t);
        t = c_59;
        t = w_135(t);
        LocalPopChoice(o_32);
      }
    else
      {
        t = n_32;
        t = c_59;
      }
  }
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm i_59 = NULL,j_59 = NULL,l_59 = NULL,m_59 = NULL;
  t = run_time_0_0(t);
  i_59 = t;
  t = term_q_12;
  t = whoami_0_0(t);
  j_59 = t;
  t = term_f_21;
  l_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_32), i_59), term_p_32), j_59);
  m_59 = t;
  t = SSL_printnl(l_59, m_59);
  t = (ATerm) ATmakeAppl(sym__2, term_f_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_32), i_59), term_p_32), j_59));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(l_10, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_59 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_31;
  n_59 = t;
  t = SSL_exit(n_59);
  return(t);
}
static ATerm e_8 (ATerm u_64, ATerm v_64, ATerm w_64, ATerm t)
{
  ATerm o_59 = NULL;
  t = SSL_hashtable_put(w_64, u_64, v_64);
  o_59 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_59);
  return(t);
}
static ATerm f_8 (ATerm x_64, ATerm y_64, ATerm t)
{
  t = SSL_hashtable_get(y_64, x_64);
  return(t);
}
ATerm lookup_table_0_1 (ATerm v_61, ATerm t)
{
  ATerm x_59 = NULL;
  t = table_hashtable_0_0(t);
  x_59 = t;
  {
    ATerm r_32 = t;
    int s_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_16 = NULL;
        t = x_59;
        if(match_cons(t, sym_Hashtable_1))
          {
            s_16 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = f_8(v_61, s_16, t);
        LocalPopChoice(s_32);
      }
    else
      {
        t = r_32;
        {
          ATerm f_17 = NULL;
          t = v_61;
          t = table_create_0_0(t);
          t = x_59;
          if(match_cons(t, sym_Hashtable_1))
            {
              f_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_8(v_61, f_17, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm c_65, ATerm d_65, ATerm t)
{
  ATerm b_60 = NULL;
  t = SSL_hashtable_create(c_65, d_65);
  b_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_60);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm c_60 = NULL,d_60 = NULL,e_60 = NULL,g_60 = NULL,h_60 = NULL;
  c_60 = t;
  t = term_u_32;
  g_60 = t;
  t = term_v_32;
  h_60 = t;
  t = c_60;
  t = new_hashtable_0_2(g_60, h_60, t);
  d_60 = t;
  t = c_60;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_8(c_60, d_60, e_60, t);
  t = c_60;
  return(t);
}
static ATerm y_7 (ATerm z_64, ATerm a_65, ATerm t)
{
  ATerm l_60 = NULL;
  t = SSL_hashtable_remove(a_65, z_64);
  l_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_60);
  return(t);
}
static ATerm z_7 (ATerm e_65, ATerm t)
{
  ATerm m_60 = NULL;
  t = SSL_hashtable_destroy(e_65);
  m_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_60);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm q_60 = NULL;
  t = SSL_table_hashtable();
  q_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_60);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm r_60 = NULL,s_60 = NULL,t_60 = NULL,w_60 = NULL;
  r_60 = t;
  t = table_hashtable_0_0(t);
  s_60 = t;
  t = lookup_table_0_1(r_60, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_7(w_60, t);
  t = s_60;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_7(r_60, t_60, t);
  t = r_60;
  return(t);
}
static ATerm m_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm x_60 = NULL,y_60 = NULL;
  t = term_w_32;
  x_60 = t;
  t = term_q_12;
  y_60 = t;
  t = term_z_32;
  t = d_8(x_60, y_60, t);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  t = term_a_33;
  return(t);
}
static ATerm t_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL;
  t = term_w_32;
  b_61 = t;
  t = term_q_12;
  c_61 = t;
  t = term_z_32;
  t = d_8(b_61, c_61, t);
  t = term_c_33;
  z_60 = t;
  t = term_q_12;
  a_61 = t;
  t = term_d_33;
  t = d_8(z_60, a_61, t);
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
  int h_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_10, p_10, q_10, t);
      LocalPopChoice(h_33);
    }
  else
    {
      t = g_33;
      t = Option_3_0(t_10, x_10, y_10, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_140 (ATerm), ATerm t)
{
  ATerm h_61 = NULL,i_61 = NULL,p_61 = NULL,q_61 = NULL,s_61 = NULL,t_61 = NULL,p_20 = NULL;
  h_61 = t;
  {
    ATerm j_33 = t;
    int q_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_33;
        t = u_140(t);
        LocalPopChoice(q_33);
      }
    else
      {
        t = j_33;
      }
  }
  t = h_61;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_61 = ATgetFirst((ATermList) t);
      q_61 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_61);
  i_61 = t;
  t = term_v_12;
  t_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_12, p_61);
  t = d_8(t_61, p_61, t);
  t = q_61;
  {
    static ATerm j_62 (ATerm t);
    static ATerm j_62 (ATerm t)
    {
      ATerm s_33 = t;
      int u_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_33 = t;
          int x_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_62 = NULL;
              a_62 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = a_62;
              LocalPopChoice(x_33);
            }
          else
            {
              t = v_33;
              t = u_140(t);
              t = Cons_2_0(_id, j_62, t);
            }
          LocalPopChoice(u_33);
        }
      else
        {
          t = s_33;
          {
            ATerm f_62 = NULL,g_62 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_62 = ATgetFirst((ATermList) t);
                g_62 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(g_62), (ATerm) ATmakeAppl(sym_Undefined_1, f_62));
          }
        }
      return(t);
    }
    t = j_62(t);
  }
  s_61 = t;
  t = (ATerm) ATinsert(CheckATermList(s_61), (ATerm) ATmakeAppl(sym_Program_1, p_61));
  p_20 = t;
  t = SSLsetAnnotations(p_20, i_61);
  return(t);
}
static ATerm a_11 (ATerm t)
{
  ATerm w_62 = NULL;
  w_62 = t;
  if(match_string(t, "--help"))
    {
      t = w_62;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = w_62;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = w_62;
        }
    }
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm x_62 = NULL,y_62 = NULL;
  t = term_z_33;
  x_62 = t;
  t = term_q_12;
  y_62 = t;
  t = term_c_34;
  t = d_8(x_62, y_62, t);
  t = term_d_34;
  return(t);
}
static ATerm d_11 (ATerm t)
{
  t = term_e_34;
  return(t);
}
static ATerm e_11 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm r_140 (ATerm), ATerm s_140 (ATerm), ATerm t_140 (ATerm), ATerm t)
{
  ATerm o_62 = NULL,p_62 = NULL,q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL;
  q_62 = t;
  t = term_c_13;
  r_62 = t;
  t = term_f_34;
  t = lookup_table_0_1(r_62, t);
  v_62 = t;
  t = term_d_13;
  s_62 = t;
  t = (ATerm) ATempty;
  t_62 = t;
  t = v_62;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_8(s_62, t_62, u_62, t);
  t = q_62;
  {
    static ATerm z_10 (ATerm t);
    static ATerm z_10 (ATerm t)
    {
      ATerm g_34 = t;
      int i_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_140(t);
          LocalPopChoice(i_34);
        }
      else
        {
          t = g_34;
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
        ATerm j_63 = NULL;
        j_63 = t;
        {
          ATerm o_34 = t;
          int p_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_17 = NULL;
              t = j_63;
              {
                ATerm q_34 = t;
                int r_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_17 = NULL,s_17 = NULL;
                    t = term_u_12;
                    p_17 = t;
                    t = term_z_33;
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
              t = j_63;
              t = s_140(t);
              t = term_c_31;
              o_17 = t;
              t = SSL_exit(o_17);
              LocalPopChoice(p_34);
            }
          else
            {
              t = o_34;
              {
                ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL;
                t = term_u_12;
                a_18 = t;
                t = term_w_32;
                b_18 = t;
                t = term_t_34;
                t = a_8(a_18, b_18, t);
                t = j_63;
                t = t_140(t);
                t = term_c_31;
                z_17 = t;
                t = SSL_exit(z_17);
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
              ATerm k_63 = NULL,l_63 = NULL,m_63 = NULL;
              static ATerm f_11 (ATerm t);
              static ATerm f_11 (ATerm t)
              {
                ATerm n_63 = NULL,o_63 = NULL,p_63 = NULL,r_20 = NULL;
                p_63 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    o_63 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(p_63);
                n_63 = t;
                t = o_63;
                if(((o_62 != NULL) && (o_62 != t)))
                  _fail(t);
                else
                  o_62 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, o_63);
                r_20 = t;
                t = SSLsetAnnotations(r_20, n_63);
                return(t);
              }
              t = fetch_1_0(f_11, t);
              t = term_f_21;
              l_63 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_62)), term_w_34);
              m_63 = t;
              t = SSL_printnl(l_63, m_63);
              t = (ATerm) ATmakeAppl(sym__2, term_f_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_62)), term_w_34));
              t = s_140(t);
              t = term_c_32;
              k_63 = t;
              t = SSL_exit(k_63);
              LocalPopChoice(v_34);
            }
          else
            {
              t = u_34;
            }
        }
      }
  }
  p_62 = t;
  t = term_c_13;
  t = table_destroy_0_0(t);
  t = p_62;
  return(t);
}
ATerm option_wrap_5_0 (ATerm u_138 (ATerm), ATerm v_138 (ATerm), ATerm w_138 (ATerm), ATerm x_138 (ATerm), ATerm y_138 (ATerm), ATerm t)
{
  ATerm u_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL,y_63 = NULL;
  t = parse_options_3_0(u_138, v_138, w_138, t);
  u_63 = t;
  t = term_x_34;
  t = table_create_0_0(t);
  t = term_x_34;
  v_63 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_34, term_z_34, u_63);
  t = lookup_table_0_1(v_63, t);
  y_63 = t;
  t = term_z_34;
  w_63 = t;
  t = y_63;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_8(w_63, u_63, x_63, t);
  t = u_63;
  t = x_138(t);
  {
    ATerm a_35 = t;
    int d_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_138(t);
        t = report_success_0_0(t);
        LocalPopChoice(d_35);
      }
    else
      {
        t = a_35;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm o_11 (ATerm t)
{
  t = if_verbose2_1_0(v_11, t);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm z_63 = NULL,a_64 = NULL;
  t = term_e_35;
  z_63 = t;
  t = term_q_12;
  a_64 = t;
  t = term_i_35;
  t = d_8(z_63, a_64, t);
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
  ATerm b_64 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL,f_64 = NULL,g_64 = NULL;
  b_64 = t;
  t = term_u_12;
  f_64 = t;
  t = term_v_12;
  g_64 = t;
  t = term_x_12;
  t = a_8(f_64, g_64, t);
  c_64 = t;
  t = term_f_21;
  d_64 = t;
  t = (ATerm) ATinsert(ATempty, c_64);
  e_64 = t;
  t = SSL_printnl(d_64, e_64);
  t = b_64;
  return(t);
}
ATerm iowrap_3_0 (ATerm x_137 (ATerm), ATerm y_137 (ATerm), ATerm z_137 (ATerm), ATerm t)
{
  static ATerm i_11 (ATerm t);
  static ATerm p_11 (ATerm t);
  static ATerm i_11 (ATerm t)
  {
    ATerm l_35 = t;
    int m_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_137(t);
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
                ATerm q_35 = t;
                int r_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(r_35);
                  }
                else
                  {
                    t = q_35;
                    {
                      ATerm s_35 = t;
                      int u_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(q_11, r_11, t_11, t);
                          LocalPopChoice(u_35);
                        }
                      else
                        {
                          t = s_35;
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
  static ATerm p_11 (ATerm t)
  {
    ATerm h_64 = NULL,i_64 = NULL,j_64 = NULL;
    i_64 = t;
    {
      ATerm x_35 = t;
      int y_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm w_11 (ATerm t);
          static ATerm w_11 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((h_64 != NULL) && (h_64 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_64 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(w_11, t);
          LocalPopChoice(y_35);
        }
      else
        {
          t = x_35;
          t = term_z_35;
          h_64 = t;
        }
    }
    t = not_null(h_64);
    t = ReadFromFile_0_0(t);
    j_64 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_64, j_64);
    t = apply_strategy_1_0(x_137, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_5_0(i_11, z_137, default_system_about_0_0, o_11, p_11, t);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL,x_20 = NULL,w_20 = NULL,v_20 = NULL,t_20 = NULL;
  j_65 = t;
  if(match_cons(t, sym__2))
    {
      l_64 = ATgetArgument(t, 0);
      m_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_65);
  k_64 = t;
  t = m_64;
  if(match_cons(t, sym_Specification_1))
    {
      o_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_64);
  n_64 = t;
  t = o_64;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_64 = ATgetFirst((ATermList) t);
      s_64 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_64);
  q_64 = t;
  t = r_64;
  if(match_cons(t, sym_Signature_1))
    {
      h_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_64);
  g_65 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, h_65);
  t_20 = t;
  t = SSLsetAnnotations(t_20, g_65);
  i_65 = t;
  t = s_64;
  t = Cons_2_0(j_12, l_12, t);
  t_64 = t;
  t = (ATerm) ATinsert(CheckATermList(t_64), i_65);
  v_20 = t;
  t = SSLsetAnnotations(v_20, q_64);
  f_65 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, f_65);
  w_20 = t;
  t = SSLsetAnnotations(w_20, n_64);
  p_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_64, p_64);
  x_20 = t;
  t = SSLsetAnnotations(x_20, k_64);
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm k_65 = NULL,l_65 = NULL,m_65 = NULL,n_65 = NULL,u_20 = NULL;
  n_65 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      l_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_65);
  k_65 = t;
  t = l_65;
  t = map_1_0(m_12, t);
  m_65 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, m_65);
  u_20 = t;
  t = SSLsetAnnotations(u_20, k_65);
  return(t);
}
static ATerm l_12 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm m_12 (ATerm t)
{
  t = scope_2_0(n_12, o_12, t);
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm o_12 (ATerm t)
{
  t = scope_2_0(p_12, cp_0_0, t);
  return(t);
}
static ATerm p_12 (ATerm t)
{
  t = term_r_13;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(h_12, _fail, default_system_usage_0_0, t);
  return(t);
}

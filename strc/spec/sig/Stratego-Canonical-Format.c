#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Some_1;
static Symbol sym_Strategies_1;
static Symbol sym_Specification_1;
static Symbol sym_BuildDefault_1;
static Symbol sym_As_2;
static Symbol sym_Op_2;
static Symbol sym_Wld_0;
static Symbol sym_Str_1;
static Symbol sym_Real_1;
static Symbol sym_Int_1;
static Symbol sym_Var_1;
static Symbol sym_Var_1;
static Symbol sym_SVar_1;
static Symbol sym_GChoice_2;
static Symbol sym_Choice_2;
static Symbol sym_Thread_1;
static Symbol sym_All_1;
static Symbol sym_One_1;
static Symbol sym_Some_1;
static Symbol sym_Path_2;
static Symbol sym_PrimT_3;
static Symbol sym_Test_1;
static Symbol sym_Where_1;
static Symbol sym_Not_1;
static Symbol sym_Rec_2;
static Symbol sym_GuardedLChoice_3;
static Symbol sym_LGChoice_2;
static Symbol sym_LChoice_2;
static Symbol sym_Seq_2;
static Symbol sym_Scope_2;
static Symbol sym_Build_1;
static Symbol sym_Match_1;
static Symbol sym_CallT_3;
static Symbol sym_Let_2;
static Symbol sym_Id_0;
static Symbol sym_Fail_0;
static Symbol sym_VarDec_2;
static Symbol sym_ExtSDef_3;
static Symbol sym_ExtSDefInl_4;
static Symbol sym_SDefT_4;
static Symbol sym_SDef_3;
static Symbol sym_Undefined_0;
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
static Symbol sym_Str_1;
static Symbol sym_Int_1;
static Symbol sym_Real_1;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Some_1;
static Symbol sym_Strategies_1;
static Symbol sym_Specification_1;
static Symbol sym_BuildDefault_1;
static Symbol sym_As_2;
static Symbol sym_Op_2;
static Symbol sym_Wld_0;
static Symbol sym_Str_1;
static Symbol sym_Real_1;
static Symbol sym_Int_1;
static Symbol sym_Var_1;
static Symbol sym_Var_1;
static Symbol sym_SVar_1;
static Symbol sym_GChoice_2;
static Symbol sym_Choice_2;
static Symbol sym_Thread_1;
static Symbol sym_All_1;
static Symbol sym_One_1;
static Symbol sym_Some_1;
static Symbol sym_Path_2;
static Symbol sym_PrimT_3;
static Symbol sym_Test_1;
static Symbol sym_Where_1;
static Symbol sym_Not_1;
static Symbol sym_Rec_2;
static Symbol sym_GuardedLChoice_3;
static Symbol sym_LGChoice_2;
static Symbol sym_LChoice_2;
static Symbol sym_Seq_2;
static Symbol sym_Scope_2;
static Symbol sym_Build_1;
static Symbol sym_Match_1;
static Symbol sym_CallT_3;
static Symbol sym_Let_2;
static Symbol sym_Id_0;
static Symbol sym_Fail_0;
static Symbol sym_VarDec_2;
static Symbol sym_ExtSDef_3;
static Symbol sym_ExtSDefInl_4;
static Symbol sym_SDefT_4;
static Symbol sym_SDef_3;
static Symbol sym_Cong_2;
static void init_module_constructors (void)
{
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
  ATprotectSymbol(sym_BuildDefault_1);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
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
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_LGChoice_2 = ATmakeSymbol("LGChoice", 2, ATfalse);
  ATprotectSymbol(sym_LGChoice_2);
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
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_ExtSDef_3 = ATmakeSymbol("ExtSDef", 3, ATfalse);
  ATprotectSymbol(sym_ExtSDef_3);
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
  ATprotectSymbol(sym_BuildDefault_1);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
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
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_LGChoice_2 = ATmakeSymbol("LGChoice", 2, ATfalse);
  ATprotectSymbol(sym_LGChoice_2);
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
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_ExtSDef_3 = ATmakeSymbol("ExtSDef", 3, ATfalse);
  ATprotectSymbol(sym_ExtSDef_3);
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
}
static ATerm term_h_15;
static ATerm term_d_15;
static ATerm term_b_15;
static ATerm term_a_15;
static ATerm term_n_14;
static ATerm term_m_14;
static ATerm term_l_14;
static ATerm term_i_14;
static ATerm term_h_14;
static ATerm term_w_13;
static ATerm term_v_13;
static ATerm term_u_13;
static ATerm term_t_13;
static ATerm term_s_13;
static ATerm term_n_13;
static ATerm term_i_13;
static ATerm term_h_13;
static ATerm term_g_13;
static ATerm term_f_13;
static ATerm term_e_13;
static ATerm term_d_13;
static ATerm term_c_13;
static ATerm term_y_12;
static ATerm term_x_12;
static ATerm term_t_12;
static ATerm term_s_12;
static ATerm term_r_12;
static ATerm term_w_11;
static ATerm term_t_11;
static ATerm term_s_11;
static ATerm term_h_11;
static ATerm term_z_10;
static ATerm term_x_10;
static ATerm term_w_10;
static ATerm term_v_10;
static ATerm term_u_10;
static ATerm term_t_10;
static ATerm term_s_10;
static ATerm term_r_10;
static ATerm term_l_10;
static ATerm term_j_10;
static ATerm term_h_10;
static ATerm term_f_10;
static ATerm term_s_9;
static ATerm term_r_9;
static ATerm term_q_9;
static ATerm term_p_9;
static ATerm term_o_9;
static ATerm term_j_9;
static ATerm term_i_9;
static ATerm term_d_9;
static ATerm term_c_9;
static ATerm term_b_9;
static ATerm term_a_9;
static ATerm term_z_8;
static ATerm term_w_8;
static ATerm term_v_8;
static ATerm term_z_7;
static ATerm term_x_7;
static ATerm term_t_7;
static ATerm term_r_7;
static ATerm term_p_7;
static ATerm term_n_7;
static ATerm term_k_7;
static ATerm term_a_7;
static ATerm term_x_6;
static ATerm term_s_6;
static ATerm term_p_6;
static ATerm term_d_6;
static ATerm term_w_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a match-term-expression: ", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym__2, term_n_7, term_p_7);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym__2, term_n_7, term_x_7);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym__2, term_n_7, term_z_8);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym__2, term_n_7, term_c_9);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_q_9);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym__2, term_j_10, term_l_10);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym__2, term_v_10, term_i_9);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym__2, term_n_7, term_j_10);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym__2, term_c_13, term_i_9);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym__2, term_f_13, term_i_9);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym__2, term_s_13, term_i_9);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym__3, term_p_9, term_q_9, (ATerm) ATempty);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym__2, term_n_7, term_s_13);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym__2, term_n_7, term_c_13);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym__2, term_x_7, term_i_9);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm debug_1_0 (ATerm g_123 (ATerm), ATerm t);
static ATerm c_0 (ATerm t);
ATerm term_expression_0_0 (ATerm t);
static ATerm i_0 (ATerm t);
ATerm match_term_exp_0_0 (ATerm t);
ATerm CallT_3_0 (ATerm j_95 (ATerm), ATerm k_95 (ATerm), ATerm l_95 (ATerm), ATerm t);
static ATerm m_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm strategy_expression_0_0 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm strategy_definition_0_0 (ATerm t);
ATerm map_1_0 (ATerm q_123 (ATerm), ATerm t);
static ATerm s_3 (ATerm d_58, ATerm e_58, ATerm t);
static ATerm t_3 (ATerm h_42, ATerm i_42, ATerm t);
static ATerm v_3 (ATerm i_123 (ATerm), ATerm h_277, ATerm n_42, ATerm t);
static ATerm u_3 (ATerm d_42, ATerm e_42, ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm output_1_0 (ATerm c_144 (ATerm), ATerm t);
static ATerm j_45 (ATerm d_45, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm w_3 (ATerm j_42, ATerm t);
static ATerm x_3 (ATerm j_56, ATerm k_56, ATerm t);
static ATerm y_3 (ATerm f_58, ATerm g_58, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm u_46 (ATerm t_45, ATerm t);
static ATerm v_46 (ATerm x_45, ATerm y_45, ATerm z_45, ATerm t);
static ATerm w_46 (ATerm h_46, ATerm i_46, ATerm j_46, ATerm t);
static ATerm z_3 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm d_144 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm default_system_usage_2_0 (ATerm b_146 (ATerm), ATerm c_146 (ATerm), ATerm t);
static ATerm f_2 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm i_4 (ATerm k_78, ATerm l_78, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm g_4 (ATerm p_63, ATerm q_63, ATerm o_63, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm a_4 (ATerm y_61, ATerm z_61, ATerm t);
ATerm foldr_2_0 (ATerm n_130 (ATerm), ATerm o_130 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm y_140 (ATerm), ATerm t);
static ATerm q_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm j_4 (ATerm e_68, ATerm f_68, ATerm g_68, ATerm t);
ATerm lookup_table_0_1 (ATerm b_65, ATerm t);
ATerm new_hashtable_0_2 (ATerm m_68, ATerm n_68, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm c_4 (ATerm j_68, ATerm k_68, ATerm t);
static ATerm d_4 (ATerm o_68, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm y_123 (ATerm), ATerm t);
static ATerm k_4 (ATerm h_68, ATerm i_68, ATerm t);
static ATerm f_4 (ATerm i_65, ATerm j_65, ATerm t);
static ATerm r_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm d_88 (ATerm), ATerm e_88 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm w_145 (ATerm), ATerm t);
static ATerm p_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm a_5 (ATerm t);
ATerm parse_options_3_0 (ATerm t_145 (ATerm), ATerm u_145 (ATerm), ATerm v_145 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm w_143 (ATerm), ATerm x_143 (ATerm), ATerm y_143 (ATerm), ATerm z_143 (ATerm), ATerm a_144 (ATerm), ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm debug_1_0 (ATerm g_123 (ATerm), ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,e_0 = NULL,h_0 = NULL;
  a_0 = t;
  t = g_123(t);
  b_0 = t;
  t = term_w_5;
  e_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_0), b_0);
  h_0 = t;
  t = SSL_printnl(e_0, h_0);
  t = a_0;
  return(t);
}
static ATerm c_0 (ATerm t)
{
  t = term_d_6;
  return(t);
}
ATerm term_expression_0_0 (ATerm t)
{
  ATerm l_6 = t;
  int n_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL;
      a_6 = t;
      if(match_cons(t, sym_Wld_0))
        {
          t = a_6;
        }
      else
        {
          if(match_cons(t, sym_Var_1))
            {
              b_6 = ATgetArgument(t, 0);
              {
                ATerm k_0 = NULL,q_0 = NULL,n_0 = NULL;
                t = SSLgetAnnotations(a_6);
                k_0 = t;
                t = SSL_is_string(b_6);
                q_0 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, q_0);
                n_0 = t;
                t = SSLsetAnnotations(n_0, k_0);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  b_6 = ATgetArgument(t, 0);
                  {
                    ATerm x_0 = NULL,z_0 = NULL,o_1 = NULL;
                    t = SSLgetAnnotations(a_6);
                    x_0 = t;
                    t = SSL_is_int(b_6);
                    z_0 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, z_0);
                    o_1 = t;
                    t = SSLsetAnnotations(o_1, x_0);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      b_6 = ATgetArgument(t, 0);
                      {
                        ATerm f_1 = NULL,h_1 = NULL,q_1 = NULL;
                        t = SSLgetAnnotations(a_6);
                        f_1 = t;
                        t = SSL_is_real(b_6);
                        h_1 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, h_1);
                        q_1 = t;
                        t = SSLsetAnnotations(q_1, f_1);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Str_1))
                        {
                          b_6 = ATgetArgument(t, 0);
                          {
                            ATerm n_1 = NULL,s_1 = NULL,r_1 = NULL;
                            t = SSLgetAnnotations(a_6);
                            n_1 = t;
                            t = SSL_is_string(b_6);
                            s_1 = t;
                            t = (ATerm) ATmakeAppl(sym_Str_1, s_1);
                            r_1 = t;
                            t = SSLsetAnnotations(r_1, n_1);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_BuildDefault_1))
                            {
                              b_6 = ATgetArgument(t, 0);
                              {
                                ATerm m_2 = NULL,p_2 = NULL,t_1 = NULL;
                                t = SSLgetAnnotations(a_6);
                                m_2 = t;
                                t = b_6;
                                t = term_expression_0_0(t);
                                p_2 = t;
                                t = (ATerm) ATmakeAppl(sym_BuildDefault_1, p_2);
                                t_1 = t;
                                t = SSLsetAnnotations(t_1, m_2);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_As_2))
                                {
                                  b_6 = ATgetArgument(t, 0);
                                  c_6 = ATgetArgument(t, 1);
                                  {
                                    ATerm c_3 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL,l_3 = NULL,m_3 = NULL,v_1 = NULL,u_1 = NULL;
                                    t = SSLgetAnnotations(a_6);
                                    c_3 = t;
                                    t = b_6;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        i_3 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(b_6);
                                    h_3 = t;
                                    t = SSL_is_string(i_3);
                                    l_3 = t;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, l_3);
                                    u_1 = t;
                                    t = SSLsetAnnotations(u_1, h_3);
                                    m_3 = t;
                                    t = c_6;
                                    t = term_expression_0_0(t);
                                    g_3 = t;
                                    t = (ATerm) ATmakeAppl(sym_As_2, m_3, g_3);
                                    v_1 = t;
                                    t = SSLsetAnnotations(v_1, c_3);
                                  }
                                }
                              else
                                {
                                  ATerm n_4 = NULL,w_4 = NULL,y_4 = NULL,x_1 = NULL;
                                  if(match_cons(t, sym_Op_2))
                                    {
                                      b_6 = ATgetArgument(t, 0);
                                      c_6 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(a_6);
                                  n_4 = t;
                                  t = SSL_is_string(b_6);
                                  w_4 = t;
                                  t = c_6;
                                  t = map_1_0(term_expression_0_0, t);
                                  y_4 = t;
                                  t = (ATerm) ATmakeAppl(sym_Op_2, w_4, y_4);
                                  x_1 = t;
                                  t = SSLsetAnnotations(x_1, n_4);
                                }
                            }
                        }
                    }
                }
            }
        }
      LocalPopChoice(n_6);
    }
  else
    {
      t = l_6;
      t = debug_1_0(c_0, t);
    }
  return(t);
}
static ATerm i_0 (ATerm t)
{
  t = term_p_6;
  return(t);
}
ATerm match_term_exp_0_0 (ATerm t)
{
  ATerm q_6 = t;
  int r_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_10 = NULL,c_11 = NULL,d_11 = NULL;
      y_10 = t;
      if(match_cons(t, sym_Wld_0))
        {
          t = y_10;
        }
      else
        {
          if(match_cons(t, sym_Var_1))
            {
              c_11 = ATgetArgument(t, 0);
              {
                ATerm l_5 = NULL,r_5 = NULL,h_2 = NULL;
                t = SSLgetAnnotations(y_10);
                l_5 = t;
                t = SSL_is_string(c_11);
                r_5 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, r_5);
                h_2 = t;
                t = SSLsetAnnotations(h_2, l_5);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  c_11 = ATgetArgument(t, 0);
                  {
                    ATerm m_6 = NULL,o_6 = NULL,i_2 = NULL;
                    t = SSLgetAnnotations(y_10);
                    m_6 = t;
                    t = SSL_is_int(c_11);
                    o_6 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, o_6);
                    i_2 = t;
                    t = SSLsetAnnotations(i_2, m_6);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      c_11 = ATgetArgument(t, 0);
                      {
                        ATerm u_6 = NULL,w_6 = NULL,n_2 = NULL;
                        t = SSLgetAnnotations(y_10);
                        u_6 = t;
                        t = SSL_is_real(c_11);
                        w_6 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, w_6);
                        n_2 = t;
                        t = SSLsetAnnotations(n_2, u_6);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Str_1))
                        {
                          c_11 = ATgetArgument(t, 0);
                          {
                            ATerm e_7 = NULL,h_7 = NULL,s_2 = NULL;
                            t = SSLgetAnnotations(y_10);
                            e_7 = t;
                            t = SSL_is_string(c_11);
                            h_7 = t;
                            t = (ATerm) ATmakeAppl(sym_Str_1, h_7);
                            s_2 = t;
                            t = SSLsetAnnotations(s_2, e_7);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_BuildDefault_1))
                            {
                              c_11 = ATgetArgument(t, 0);
                              {
                                ATerm q_7 = NULL,s_7 = NULL,t_2 = NULL;
                                t = SSLgetAnnotations(y_10);
                                q_7 = t;
                                t = c_11;
                                t = match_term_exp_0_0(t);
                                s_7 = t;
                                t = (ATerm) ATmakeAppl(sym_BuildDefault_1, s_7);
                                t_2 = t;
                                t = SSLsetAnnotations(t_2, q_7);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_As_2))
                                {
                                  c_11 = ATgetArgument(t, 0);
                                  d_11 = ATgetArgument(t, 1);
                                  {
                                    ATerm c_8 = NULL,i_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL,w_2 = NULL,v_2 = NULL;
                                    t = SSLgetAnnotations(y_10);
                                    c_8 = t;
                                    t = c_11;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        l_8 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(c_11);
                                    k_8 = t;
                                    t = SSL_is_string(l_8);
                                    m_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, m_8);
                                    v_2 = t;
                                    t = SSLsetAnnotations(v_2, k_8);
                                    n_8 = t;
                                    t = d_11;
                                    t = match_term_exp_0_0(t);
                                    i_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_As_2, n_8, i_8);
                                    w_2 = t;
                                    t = SSLsetAnnotations(w_2, c_8);
                                  }
                                }
                              else
                                {
                                  ATerm v_9 = NULL,d_10 = NULL,e_10 = NULL,z_2 = NULL;
                                  if(match_cons(t, sym_Op_2))
                                    {
                                      c_11 = ATgetArgument(t, 0);
                                      d_11 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(y_10);
                                  v_9 = t;
                                  t = SSL_is_string(c_11);
                                  d_10 = t;
                                  t = d_11;
                                  t = map_1_0(match_term_exp_0_0, t);
                                  e_10 = t;
                                  t = (ATerm) ATmakeAppl(sym_Op_2, d_10, e_10);
                                  z_2 = t;
                                  t = SSLsetAnnotations(z_2, v_9);
                                }
                            }
                        }
                    }
                }
            }
        }
      LocalPopChoice(r_6);
    }
  else
    {
      t = q_6;
      t = debug_1_0(i_0, t);
    }
  return(t);
}
ATerm CallT_3_0 (ATerm j_95 (ATerm), ATerm k_95 (ATerm), ATerm l_95 (ATerm), ATerm t)
{
  ATerm u_11 = NULL,a_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,l_12 = NULL,u_12 = NULL,z_12 = NULL,q_4 = NULL;
  z_12 = t;
  if(match_cons(t, sym_CallT_3))
    {
      a_12 = ATgetArgument(t, 0);
      c_12 = ATgetArgument(t, 1);
      d_12 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_12);
  u_11 = t;
  t = a_12;
  t = j_95(t);
  e_12 = t;
  t = c_12;
  t = k_95(t);
  l_12 = t;
  t = d_12;
  t = l_95(t);
  u_12 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, e_12, l_12, u_12);
  q_4 = t;
  t = SSLsetAnnotations(q_4, u_11);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = CallT_3_0(s_0, t_0, u_0, t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm f_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,k_5 = NULL;
  k_21 = t;
  if(match_cons(t, sym_SVar_1))
    {
      i_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_21);
  f_21 = t;
  t = SSL_is_string(i_21);
  j_21 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, j_21);
  k_5 = t;
  t = SSLsetAnnotations(k_5, f_21);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,q_21 = NULL,r_21 = NULL,m_5 = NULL;
  r_21 = t;
  if(match_cons(t, sym_Var_1))
    {
      m_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_21);
  l_21 = t;
  t = SSL_is_string(m_21);
  q_21 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_21);
  m_5 = t;
  t = SSLsetAnnotations(m_5, l_21);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm y_26 = NULL;
  y_26 = t;
  t = SSL_is_string(y_26);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL,y_30 = NULL,k_6 = NULL,j_6 = NULL;
  y_30 = t;
  if(match_cons(t, sym_CallT_3))
    {
      p_30 = ATgetArgument(t, 0);
      q_30 = ATgetArgument(t, 1);
      r_30 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_30);
  o_30 = t;
  t = p_30;
  if(match_cons(t, sym_SVar_1))
    {
      u_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_30);
  t_30 = t;
  t = SSL_is_string(u_30);
  v_30 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, v_30);
  j_6 = t;
  t = SSLsetAnnotations(j_6, t_30);
  w_30 = t;
  t = q_30;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = r_30;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, w_30, q_30, r_30);
  k_6 = t;
  t = SSLsetAnnotations(k_6, o_30);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,b_7 = NULL;
  d_31 = t;
  if(match_cons(t, sym_Var_1))
    {
      b_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_31);
  a_31 = t;
  t = SSL_is_string(b_31);
  c_31 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, c_31);
  b_7 = t;
  t = SSLsetAnnotations(b_7, a_31);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL,y_34 = NULL,a_35 = NULL;
  t_34 = t;
  if(match_cons(t, sym_SDef_3))
    {
      u_34 = ATgetArgument(t, 0);
      v_34 = ATgetArgument(t, 1);
      y_34 = ATgetArgument(t, 2);
      {
        ATerm h_37 = NULL,s_37 = NULL,t_37 = NULL,v_37 = NULL,i_7 = NULL;
        t = SSLgetAnnotations(t_34);
        h_37 = t;
        t = SSL_is_string(u_34);
        s_37 = t;
        t = v_34;
        t = map_1_0(c_1, t);
        t_37 = t;
        t = y_34;
        t = strategy_expression_0_0(t);
        v_37 = t;
        t = (ATerm) ATmakeAppl(sym_SDef_3, s_37, t_37, v_37);
        i_7 = t;
        t = SSLsetAnnotations(i_7, h_37);
      }
    }
  else
    {
      ATerm n_43 = NULL,x_44 = NULL,y_44 = NULL,o_45 = NULL,p_45 = NULL,u_7 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          u_34 = ATgetArgument(t, 0);
          v_34 = ATgetArgument(t, 1);
          y_34 = ATgetArgument(t, 2);
          a_35 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_34);
      n_43 = t;
      t = SSL_is_string(u_34);
      x_44 = t;
      t = v_34;
      t = map_1_0(d_1, t);
      y_44 = t;
      t = y_34;
      t = map_1_0(e_1, t);
      o_45 = t;
      t = a_35;
      t = strategy_expression_0_0(t);
      p_45 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, x_44, y_44, o_45, p_45);
      u_7 = t;
      t = SSLsetAnnotations(u_7, n_43);
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL,v_38 = NULL,h_39 = NULL,f_7 = NULL;
  h_39 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      s_38 = ATgetArgument(t, 0);
      t_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_39);
  r_38 = t;
  t = SSL_is_string(s_38);
  v_38 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, v_38, t_38);
  f_7 = t;
  t = SSLsetAnnotations(f_7, r_38);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm r_50 = NULL,s_50 = NULL,f_51 = NULL,p_51 = NULL,b_52 = NULL,j_7 = NULL;
  b_52 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      s_50 = ATgetArgument(t, 0);
      f_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_52);
  r_50 = t;
  t = SSL_is_string(s_50);
  p_51 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, p_51, f_51);
  j_7 = t;
  t = SSLsetAnnotations(j_7, r_50);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm o_52 = NULL,c_53 = NULL,d_53 = NULL,b_54 = NULL,c_54 = NULL,o_7 = NULL;
  c_54 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      c_53 = ATgetArgument(t, 0);
      d_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_54);
  o_52 = t;
  t = SSL_is_string(c_53);
  b_54 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, b_54, d_53);
  o_7 = t;
  t = SSLsetAnnotations(o_7, o_52);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_s_6;
  return(t);
}
ATerm strategy_expression_0_0 (ATerm t)
{
  ATerm t_6 = t;
  int v_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL;
      n_37 = t;
      if(match_cons(t, sym_Id_0))
        {
          t = n_37;
        }
      else
        {
          if(match_cons(t, sym_Fail_0))
            {
              t = n_37;
            }
          else
            {
              if(match_cons(t, sym_Not_1))
                {
                  o_37 = ATgetArgument(t, 0);
                  {
                    ATerm u_14 = NULL,w_14 = NULL,t_4 = NULL;
                    t = SSLgetAnnotations(n_37);
                    u_14 = t;
                    t = o_37;
                    t = strategy_expression_0_0(t);
                    w_14 = t;
                    t = (ATerm) ATmakeAppl(sym_Not_1, w_14);
                    t_4 = t;
                    t = SSLsetAnnotations(t_4, u_14);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Test_1))
                    {
                      o_37 = ATgetArgument(t, 0);
                      {
                        ATerm c_15 = NULL,e_15 = NULL,u_4 = NULL;
                        t = SSLgetAnnotations(n_37);
                        c_15 = t;
                        t = o_37;
                        t = strategy_expression_0_0(t);
                        e_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Test_1, e_15);
                        u_4 = t;
                        t = SSLsetAnnotations(u_4, c_15);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Seq_2))
                        {
                          o_37 = ATgetArgument(t, 0);
                          p_37 = ATgetArgument(t, 1);
                          {
                            ATerm l_15 = NULL,o_15 = NULL,p_15 = NULL,v_4 = NULL;
                            t = SSLgetAnnotations(n_37);
                            l_15 = t;
                            t = o_37;
                            t = strategy_expression_0_0(t);
                            o_15 = t;
                            t = p_37;
                            t = strategy_expression_0_0(t);
                            p_15 = t;
                            t = (ATerm) ATmakeAppl(sym_Seq_2, o_15, p_15);
                            v_4 = t;
                            t = SSLsetAnnotations(v_4, l_15);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_Choice_2))
                            {
                              o_37 = ATgetArgument(t, 0);
                              p_37 = ATgetArgument(t, 1);
                              {
                                ATerm e_16 = NULL,h_16 = NULL,i_16 = NULL,x_4 = NULL;
                                t = SSLgetAnnotations(n_37);
                                e_16 = t;
                                t = o_37;
                                t = strategy_expression_0_0(t);
                                h_16 = t;
                                t = p_37;
                                t = strategy_expression_0_0(t);
                                i_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Choice_2, h_16, i_16);
                                x_4 = t;
                                t = SSLsetAnnotations(x_4, e_16);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_LChoice_2))
                                {
                                  o_37 = ATgetArgument(t, 0);
                                  p_37 = ATgetArgument(t, 1);
                                  {
                                    ATerm w_16 = NULL,c_17 = NULL,f_17 = NULL,z_4 = NULL;
                                    t = SSLgetAnnotations(n_37);
                                    w_16 = t;
                                    t = o_37;
                                    t = strategy_expression_0_0(t);
                                    c_17 = t;
                                    t = p_37;
                                    t = strategy_expression_0_0(t);
                                    f_17 = t;
                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, c_17, f_17);
                                    z_4 = t;
                                    t = SSLsetAnnotations(z_4, w_16);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      o_37 = ATgetArgument(t, 0);
                                      p_37 = ATgetArgument(t, 1);
                                      m_37 = ATgetArgument(t, 2);
                                      {
                                        ATerm s_17 = NULL,z_17 = NULL,a_18 = NULL,c_18 = NULL,b_5 = NULL;
                                        t = SSLgetAnnotations(n_37);
                                        s_17 = t;
                                        t = o_37;
                                        t = strategy_expression_0_0(t);
                                        z_17 = t;
                                        t = p_37;
                                        t = strategy_expression_0_0(t);
                                        a_18 = t;
                                        t = m_37;
                                        t = strategy_expression_0_0(t);
                                        c_18 = t;
                                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, z_17, a_18, c_18);
                                        b_5 = t;
                                        t = SSLsetAnnotations(b_5, s_17);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_GChoice_2))
                                        {
                                          o_37 = ATgetArgument(t, 0);
                                          p_37 = ATgetArgument(t, 1);
                                          {
                                            ATerm m_18 = NULL,q_18 = NULL,r_18 = NULL,e_5 = NULL;
                                            t = SSLgetAnnotations(n_37);
                                            m_18 = t;
                                            t = o_37;
                                            t = strategy_expression_0_0(t);
                                            q_18 = t;
                                            t = p_37;
                                            t = strategy_expression_0_0(t);
                                            r_18 = t;
                                            t = (ATerm) ATmakeAppl(sym_GChoice_2, q_18, r_18);
                                            e_5 = t;
                                            t = SSLsetAnnotations(e_5, m_18);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LGChoice_2))
                                            {
                                              o_37 = ATgetArgument(t, 0);
                                              p_37 = ATgetArgument(t, 1);
                                              {
                                                ATerm i_19 = NULL,m_19 = NULL,n_19 = NULL,h_5 = NULL;
                                                t = SSLgetAnnotations(n_37);
                                                i_19 = t;
                                                t = o_37;
                                                t = strategy_expression_0_0(t);
                                                m_19 = t;
                                                t = p_37;
                                                t = strategy_expression_0_0(t);
                                                n_19 = t;
                                                t = (ATerm) ATmakeAppl(sym_LGChoice_2, m_19, n_19);
                                                h_5 = t;
                                                t = SSLsetAnnotations(h_5, i_19);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_CallT_3))
                                                {
                                                  o_37 = ATgetArgument(t, 0);
                                                  p_37 = ATgetArgument(t, 1);
                                                  m_37 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm d_20 = NULL,n_20 = NULL,s_20 = NULL,t_20 = NULL,y_20 = NULL,z_20 = NULL,c_21 = NULL,n_5 = NULL,i_5 = NULL;
                                                    t = SSLgetAnnotations(n_37);
                                                    d_20 = t;
                                                    t = o_37;
                                                    if(match_cons(t, sym_SVar_1))
                                                      {
                                                        y_20 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSLgetAnnotations(o_37);
                                                    t_20 = t;
                                                    t = SSL_is_string(y_20);
                                                    z_20 = t;
                                                    t = (ATerm) ATmakeAppl(sym_SVar_1, z_20);
                                                    i_5 = t;
                                                    t = SSLsetAnnotations(i_5, t_20);
                                                    c_21 = t;
                                                    t = p_37;
                                                    t = map_1_0(m_0, t);
                                                    n_20 = t;
                                                    t = m_37;
                                                    t = map_1_0(v_0, t);
                                                    s_20 = t;
                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, c_21, n_20, s_20);
                                                    n_5 = t;
                                                    t = SSLsetAnnotations(n_5, d_20);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Rec_2))
                                                    {
                                                      o_37 = ATgetArgument(t, 0);
                                                      p_37 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm d_22 = NULL,i_22 = NULL,j_22 = NULL,o_5 = NULL;
                                                        t = SSLgetAnnotations(n_37);
                                                        d_22 = t;
                                                        t = SSL_is_string(o_37);
                                                        i_22 = t;
                                                        t = p_37;
                                                        t = strategy_expression_0_0(t);
                                                        j_22 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Rec_2, i_22, j_22);
                                                        o_5 = t;
                                                        t = SSLsetAnnotations(o_5, d_22);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Path_2))
                                                        {
                                                          o_37 = ATgetArgument(t, 0);
                                                          p_37 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm x_22 = NULL,e_23 = NULL,g_23 = NULL,q_5 = NULL;
                                                            t = SSLgetAnnotations(n_37);
                                                            x_22 = t;
                                                            t = SSL_is_int(o_37);
                                                            e_23 = t;
                                                            t = p_37;
                                                            t = strategy_expression_0_0(t);
                                                            g_23 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Path_2, e_23, g_23);
                                                            q_5 = t;
                                                            t = SSLsetAnnotations(q_5, x_22);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              o_37 = ATgetArgument(t, 0);
                                                              p_37 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm q_23 = NULL,u_23 = NULL,v_23 = NULL,v_5 = NULL;
                                                                t = SSLgetAnnotations(n_37);
                                                                q_23 = t;
                                                                t = SSL_is_string(o_37);
                                                                u_23 = t;
                                                                t = p_37;
                                                                t = map_1_0(strategy_expression_0_0, t);
                                                                v_23 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Cong_2, u_23, v_23);
                                                                v_5 = t;
                                                                t = SSLsetAnnotations(v_5, q_23);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_One_1))
                                                                {
                                                                  o_37 = ATgetArgument(t, 0);
                                                                  {
                                                                    ATerm e_24 = NULL,g_24 = NULL,x_5 = NULL;
                                                                    t = SSLgetAnnotations(n_37);
                                                                    e_24 = t;
                                                                    t = o_37;
                                                                    t = strategy_expression_0_0(t);
                                                                    g_24 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_One_1, g_24);
                                                                    x_5 = t;
                                                                    t = SSLsetAnnotations(x_5, e_24);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Some_1))
                                                                    {
                                                                      o_37 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm o_24 = NULL,r_24 = NULL,y_5 = NULL;
                                                                        t = SSLgetAnnotations(n_37);
                                                                        o_24 = t;
                                                                        t = o_37;
                                                                        t = strategy_expression_0_0(t);
                                                                        r_24 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Some_1, r_24);
                                                                        y_5 = t;
                                                                        t = SSLsetAnnotations(y_5, o_24);
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_All_1))
                                                                        {
                                                                          o_37 = ATgetArgument(t, 0);
                                                                          {
                                                                            ATerm y_24 = NULL,d_25 = NULL,z_5 = NULL;
                                                                            t = SSLgetAnnotations(n_37);
                                                                            y_24 = t;
                                                                            t = o_37;
                                                                            t = strategy_expression_0_0(t);
                                                                            d_25 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_All_1, d_25);
                                                                            z_5 = t;
                                                                            t = SSLsetAnnotations(z_5, y_24);
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Thread_1))
                                                                            {
                                                                              o_37 = ATgetArgument(t, 0);
                                                                              {
                                                                                ATerm l_25 = NULL,n_25 = NULL,e_6 = NULL;
                                                                                t = SSLgetAnnotations(n_37);
                                                                                l_25 = t;
                                                                                t = o_37;
                                                                                t = strategy_expression_0_0(t);
                                                                                n_25 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Thread_1, n_25);
                                                                                e_6 = t;
                                                                                t = SSLsetAnnotations(e_6, l_25);
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Match_1))
                                                                                {
                                                                                  o_37 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm u_25 = NULL,w_25 = NULL,f_6 = NULL;
                                                                                    t = SSLgetAnnotations(n_37);
                                                                                    u_25 = t;
                                                                                    t = o_37;
                                                                                    t = match_term_exp_0_0(t);
                                                                                    w_25 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, w_25);
                                                                                    f_6 = t;
                                                                                    t = SSLsetAnnotations(f_6, u_25);
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Build_1))
                                                                                    {
                                                                                      o_37 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm e_26 = NULL,g_26 = NULL,g_6 = NULL;
                                                                                        t = SSLgetAnnotations(n_37);
                                                                                        e_26 = t;
                                                                                        t = o_37;
                                                                                        t = term_expression_0_0(t);
                                                                                        g_26 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, g_26);
                                                                                        g_6 = t;
                                                                                        t = SSLsetAnnotations(g_6, e_26);
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Scope_2))
                                                                                        {
                                                                                          o_37 = ATgetArgument(t, 0);
                                                                                          p_37 = ATgetArgument(t, 1);
                                                                                          {
                                                                                            ATerm q_26 = NULL,t_26 = NULL,v_26 = NULL,h_6 = NULL;
                                                                                            t = SSLgetAnnotations(n_37);
                                                                                            q_26 = t;
                                                                                            t = o_37;
                                                                                            t = map_1_0(w_0, t);
                                                                                            t_26 = t;
                                                                                            t = p_37;
                                                                                            t = strategy_expression_0_0(t);
                                                                                            v_26 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Scope_2, t_26, v_26);
                                                                                            h_6 = t;
                                                                                            t = SSLsetAnnotations(h_6, q_26);
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_Where_1))
                                                                                            {
                                                                                              o_37 = ATgetArgument(t, 0);
                                                                                              {
                                                                                                ATerm e_27 = NULL,g_27 = NULL,i_6 = NULL;
                                                                                                t = SSLgetAnnotations(n_37);
                                                                                                e_27 = t;
                                                                                                t = o_37;
                                                                                                t = strategy_expression_0_0(t);
                                                                                                g_27 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Where_1, g_27);
                                                                                                i_6 = t;
                                                                                                t = SSLsetAnnotations(i_6, e_27);
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_PrimT_3))
                                                                                                {
                                                                                                  o_37 = ATgetArgument(t, 0);
                                                                                                  p_37 = ATgetArgument(t, 1);
                                                                                                  m_37 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm e_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,c_7 = NULL;
                                                                                                    t = SSLgetAnnotations(n_37);
                                                                                                    e_30 = t;
                                                                                                    t = SSL_is_string(o_37);
                                                                                                    k_30 = t;
                                                                                                    t = p_37;
                                                                                                    t = map_1_0(y_0, t);
                                                                                                    l_30 = t;
                                                                                                    t = m_37;
                                                                                                    t = map_1_0(a_1, t);
                                                                                                    m_30 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_PrimT_3, k_30, l_30, m_30);
                                                                                                    c_7 = t;
                                                                                                    t = SSLsetAnnotations(c_7, e_30);
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  ATerm n_31 = NULL,q_31 = NULL,s_31 = NULL,y_7 = NULL;
                                                                                                  if(match_cons(t, sym_Let_2))
                                                                                                    {
                                                                                                      o_37 = ATgetArgument(t, 0);
                                                                                                      p_37 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = SSLgetAnnotations(n_37);
                                                                                                  n_31 = t;
                                                                                                  t = o_37;
                                                                                                  t = map_1_0(b_1, t);
                                                                                                  q_31 = t;
                                                                                                  t = p_37;
                                                                                                  t = strategy_expression_0_0(t);
                                                                                                  s_31 = t;
                                                                                                  t = (ATerm) ATmakeAppl(sym_Let_2, q_31, s_31);
                                                                                                  y_7 = t;
                                                                                                  t = SSLsetAnnotations(y_7, n_31);
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
      LocalPopChoice(v_6);
    }
  else
    {
      t = t_6;
      t = debug_1_0(g_1, t);
    }
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm h_58 = NULL,i_58 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL,a_10 = NULL;
  i_59 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      i_58 = ATgetArgument(t, 0);
      g_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_59);
  h_58 = t;
  t = SSL_is_string(i_58);
  h_59 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, h_59, g_59);
  a_10 = t;
  t = SSLsetAnnotations(a_10, h_58);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm c_60 = NULL,d_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL,c_10 = NULL;
  g_60 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      d_60 = ATgetArgument(t, 0);
      e_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_60);
  c_60 = t;
  t = SSL_is_string(d_60);
  f_60 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, f_60, e_60);
  c_10 = t;
  t = SSLsetAnnotations(c_10, c_60);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL,l_60 = NULL,g_10 = NULL;
  l_60 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      i_60 = ATgetArgument(t, 0);
      j_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_60);
  h_60 = t;
  t = SSL_is_string(i_60);
  k_60 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, k_60, j_60);
  g_10 = t;
  t = SSLsetAnnotations(g_10, h_60);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm g_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL,k_10 = NULL;
  k_61 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      h_61 = ATgetArgument(t, 0);
      i_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_61);
  g_61 = t;
  t = SSL_is_string(h_61);
  j_61 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, j_61, i_61);
  k_10 = t;
  t = SSLsetAnnotations(k_10, g_61);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm l_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL,m_10 = NULL;
  p_61 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      m_61 = ATgetArgument(t, 0);
      n_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_61);
  l_61 = t;
  t = SSL_is_string(m_61);
  o_61 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, o_61, n_61);
  m_10 = t;
  t = SSLsetAnnotations(m_10, l_61);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL,n_62 = NULL,o_10 = NULL;
  n_62 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      k_62 = ATgetArgument(t, 0);
      l_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_62);
  j_62 = t;
  t = SSL_is_string(k_62);
  m_62 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, m_62, l_62);
  o_10 = t;
  t = SSLsetAnnotations(o_10, j_62);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm o_62 = NULL,p_62 = NULL,q_62 = NULL,r_62 = NULL,s_62 = NULL,p_10 = NULL;
  s_62 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      p_62 = ATgetArgument(t, 0);
      q_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_62);
  o_62 = t;
  t = SSL_is_string(p_62);
  r_62 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, r_62, q_62);
  p_10 = t;
  t = SSLsetAnnotations(p_10, o_62);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_x_6;
  return(t);
}
ATerm strategy_definition_0_0 (ATerm t)
{
  ATerm y_6 = t;
  int z_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL;
      f_43 = t;
      if(match_cons(t, sym_SDef_3))
        {
          g_43 = ATgetArgument(t, 0);
          h_43 = ATgetArgument(t, 1);
          i_43 = ATgetArgument(t, 2);
          {
            ATerm r_55 = NULL,o_56 = NULL,a_58 = NULL,b_58 = NULL,b_10 = NULL;
            t = SSLgetAnnotations(f_43);
            r_55 = t;
            t = SSL_is_string(g_43);
            o_56 = t;
            t = h_43;
            t = map_1_0(i_1, t);
            a_58 = t;
            t = i_43;
            t = strategy_expression_0_0(t);
            b_58 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, o_56, a_58, b_58);
            b_10 = t;
            t = SSLsetAnnotations(b_10, r_55);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              g_43 = ATgetArgument(t, 0);
              h_43 = ATgetArgument(t, 1);
              i_43 = ATgetArgument(t, 2);
              e_43 = ATgetArgument(t, 3);
              {
                ATerm s_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL,i_10 = NULL;
                t = SSLgetAnnotations(f_43);
                s_59 = t;
                t = SSL_is_string(g_43);
                x_59 = t;
                t = h_43;
                t = map_1_0(j_1, t);
                y_59 = t;
                t = i_43;
                t = map_1_0(k_1, t);
                z_59 = t;
                t = e_43;
                t = strategy_expression_0_0(t);
                a_60 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, x_59, y_59, z_59, a_60);
                i_10 = t;
                t = SSLsetAnnotations(i_10, s_59);
              }
            }
          else
            {
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  g_43 = ATgetArgument(t, 0);
                  h_43 = ATgetArgument(t, 1);
                  i_43 = ATgetArgument(t, 2);
                  e_43 = ATgetArgument(t, 3);
                  {
                    ATerm w_60 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL,n_10 = NULL;
                    t = SSLgetAnnotations(f_43);
                    w_60 = t;
                    t = SSL_is_string(g_43);
                    b_61 = t;
                    t = h_43;
                    t = map_1_0(l_1, t);
                    c_61 = t;
                    t = i_43;
                    t = map_1_0(m_1, t);
                    d_61 = t;
                    t = e_43;
                    t = strategy_expression_0_0(t);
                    e_61 = t;
                    t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, b_61, c_61, d_61, e_61);
                    n_10 = t;
                    t = SSLsetAnnotations(n_10, w_60);
                  }
                }
              else
                {
                  ATerm b_62 = NULL,f_62 = NULL,g_62 = NULL,h_62 = NULL,q_10 = NULL;
                  if(match_cons(t, sym_ExtSDef_3))
                    {
                      g_43 = ATgetArgument(t, 0);
                      h_43 = ATgetArgument(t, 1);
                      i_43 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(f_43);
                  b_62 = t;
                  t = SSL_is_string(g_43);
                  f_62 = t;
                  t = h_43;
                  t = map_1_0(p_1, t);
                  g_62 = t;
                  t = i_43;
                  t = map_1_0(w_1, t);
                  h_62 = t;
                  t = (ATerm) ATmakeAppl(sym_ExtSDef_3, f_62, g_62, h_62);
                  q_10 = t;
                  t = SSLsetAnnotations(q_10, b_62);
                }
            }
        }
      LocalPopChoice(z_6);
    }
  else
    {
      t = y_6;
      t = debug_1_0(y_1, t);
    }
  return(t);
}
ATerm map_1_0 (ATerm q_123 (ATerm), ATerm t)
{
  static ATerm d_44 (ATerm t);
  static ATerm d_44 (ATerm t)
  {
    ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL;
    a_44 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_44;
      }
    else
      {
        ATerm a_63 = NULL,d_63 = NULL,e_63 = NULL,f_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_44 = ATgetFirst((ATermList) t);
            c_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_44);
        a_63 = t;
        t = b_44;
        t = q_123(t);
        d_63 = t;
        t = c_44;
        t = d_44(t);
        e_63 = t;
        t = (ATerm) ATinsert(CheckATermList(e_63), d_63);
        f_11 = t;
        t = SSLsetAnnotations(f_11, a_63);
      }
    return(t);
  }
  t = d_44(t);
  return(t);
}
static ATerm s_3 (ATerm d_58, ATerm e_58, ATerm t)
{
  ATerm f_44 = NULL;
  t = SSL_fputc(d_58, e_58);
  f_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_44);
  return(t);
}
static ATerm t_3 (ATerm h_42, ATerm i_42, ATerm t)
{
  ATerm g_44 = NULL;
  t = SSL_write_term_to_stream_text(h_42, i_42);
  g_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_44);
  return(t);
}
static ATerm v_3 (ATerm i_123 (ATerm), ATerm h_277, ATerm n_42, ATerm t)
{
  ATerm h_44 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_277, term_a_7);
  t = z_3(t);
  h_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_44, n_42);
  t = i_123(t);
  t = fclose_0_0(t);
  t = n_42;
  return(t);
}
static ATerm u_3 (ATerm d_42, ATerm e_42, ATerm t)
{
  ATerm i_44 = NULL;
  t = SSL_write_term_to_stream_baf(d_42, e_42);
  i_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_44);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm p_44 = NULL,q_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_7 = ATgetArgument(t, 0);
      if(match_cons(d_7, sym_Stream_1))
        {
          p_44 = ATgetArgument(d_7, 0);
        }
      else
        _fail(t);
      q_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_3(p_44, q_44, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_7 = ATgetArgument(t, 0);
      if(match_cons(g_7, sym_Stream_1))
        {
          u_44 = ATgetArgument(g_7, 0);
        }
      else
        _fail(t);
      v_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_3(u_44, v_44, t);
  r_44 = t;
  t = term_k_7;
  s_44 = t;
  t = r_44;
  if(match_cons(t, sym_Stream_1))
    {
      t_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_k_7, r_44);
  t = s_3(s_44, t_44, t);
  return(t);
}
ATerm output_1_0 (ATerm c_144 (ATerm), ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL;
  t = c_144(t);
  k_44 = t;
  {
    ATerm l_7 = t;
    int m_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_44 = NULL,m_44 = NULL;
        t = term_n_7;
        l_44 = t;
        t = term_p_7;
        m_44 = t;
        t = term_r_7;
        t = f_4(l_44, m_44, t);
        LocalPopChoice(m_7);
      }
    else
      {
        t = l_7;
        t = term_t_7;
      }
  }
  j_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_44, k_44);
  {
    ATerm v_7 = t;
    int w_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_44 = NULL,o_44 = NULL;
        t = term_n_7;
        n_44 = t;
        t = term_x_7;
        o_44 = t;
        t = term_z_7;
        t = f_4(n_44, o_44, t);
        t = (ATerm) ATmakeAppl(sym__2, j_44, k_44);
        LocalPopChoice(w_7);
        if(match_cons(t, sym__2))
          {
            ATerm a_8 = ATgetArgument(t, 0);
            ATerm b_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_3(z_1, j_44, k_44, t);
      }
    else
      {
        t = v_7;
        if(match_cons(t, sym__2))
          {
            ATerm d_8 = ATgetArgument(t, 0);
            ATerm e_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_3(a_2, j_44, k_44, t);
      }
  }
  return(t);
}
static ATerm j_45 (ATerm d_45, ATerm t)
{
  t = SSL_fclose(d_45);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_45 = NULL,h_45 = NULL;
  h_45 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_45 = ATgetArgument(t, 0);
      {
        ATerm f_8 = t;
        int g_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(g_45);
            LocalPopChoice(g_8);
          }
        else
          {
            t = f_8;
            t = j_45(h_45, t);
          }
      }
    }
  else
    {
      t = j_45(h_45, t);
    }
  return(t);
}
static ATerm w_3 (ATerm j_42, ATerm t)
{
  t = SSL_read_term_from_stream(j_42);
  return(t);
}
static ATerm x_3 (ATerm j_56, ATerm k_56, ATerm t)
{
  t = SSL_strcat(j_56, k_56);
  return(t);
}
static ATerm y_3 (ATerm f_58, ATerm g_58, ATerm t)
{
  ATerm k_45 = NULL;
  t = SSL_fopen(f_58, g_58);
  k_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_45);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_45 = NULL;
  t = SSL_stdin_stream();
  l_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_45);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_45 = NULL;
  t = SSL_stdout_stream();
  m_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_45);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm n_45 = NULL;
  t = SSL_stderr_stream();
  n_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_45);
  return(t);
}
static ATerm u_46 (ATerm t_45, ATerm t)
{
  ATerm u_45 = NULL;
  t = SSL_explode_term(t_45);
  if(match_cons(t, sym__2))
    {
      ATerm h_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_8 = ATgetArgument(t, 1);
        if(((ATgetType(j_8) == AT_LIST) && !(ATisEmpty(j_8))))
          {
            u_45 = ATgetFirst((ATermList) j_8);
            {
              ATerm o_8 = (ATerm) ATgetNext((ATermList) j_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_45;
  if(match_cons(t, sym_stderr_0))
    {
      t = u_45;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = u_45;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_45;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm v_46 (ATerm x_45, ATerm y_45, ATerm z_45, ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL,f_46 = NULL,i_11 = NULL;
  t = SSLgetAnnotations(z_45);
  c_46 = t;
  t = x_45;
  if(match_cons(t, sym_Path_1))
    {
      f_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_46, y_45);
  i_11 = t;
  t = SSLsetAnnotations(i_11, c_46);
  if(match_cons(t, sym__2))
    {
      a_46 = ATgetArgument(t, 0);
      b_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(a_46, b_46, t);
  return(t);
}
static ATerm w_46 (ATerm h_46, ATerm i_46, ATerm j_46, ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL,p_46 = NULL,j_11 = NULL;
  t = SSLgetAnnotations(j_46);
  m_46 = t;
  t = SSL_is_string(h_46);
  p_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_46, i_46);
  j_11 = t;
  t = SSLsetAnnotations(j_11, m_46);
  if(match_cons(t, sym__2))
    {
      k_46 = ATgetArgument(t, 0);
      l_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_3(k_46, l_46, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL;
  r_46 = t;
  if(match_cons(t, sym__2))
    {
      s_46 = ATgetArgument(t, 0);
      t_46 = ATgetArgument(t, 1);
      {
        ATerm p_8 = t;
        int q_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_46(r_46, t);
            LocalPopChoice(q_8);
          }
        else
          {
            t = p_8;
            {
              ATerm r_8 = t;
              int s_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_46(s_46, t_46, r_46, t);
                  LocalPopChoice(s_8);
                }
              else
                {
                  t = r_8;
                  t = w_46(s_46, t_46, r_46, t);
                }
            }
          }
      }
    }
  else
    {
      t = u_46(r_46, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL,f_47 = NULL;
  f_47 = t;
  {
    ATerm t_8 = t;
    int u_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, f_47, term_v_8);
        t = z_3(t);
        LocalPopChoice(u_8);
      }
    else
      {
        t = t_8;
        {
          ATerm u_63 = NULL,v_63 = NULL;
          t = term_w_8;
          v_63 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_w_8, f_47);
          t = x_3(v_63, f_47, t);
          u_63 = t;
          t = SSL_perror(u_63);
          _fail(t);
        }
      }
  }
  z_46 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_3(a_47, t);
  y_46 = t;
  t = z_46;
  t = fclose_0_0(t);
  t = y_46;
  return(t);
}
ATerm input_1_0 (ATerm d_144 (ATerm), ATerm t)
{
  ATerm x_8 = t;
  int y_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_47 = NULL,j_47 = NULL;
      t = term_n_7;
      i_47 = t;
      t = term_z_8;
      j_47 = t;
      t = term_a_9;
      t = f_4(i_47, j_47, t);
      LocalPopChoice(y_8);
    }
  else
    {
      t = x_8;
      t = term_b_9;
    }
  t = ReadFromFile_0_0(t);
  t = d_144(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm k_47 = NULL,l_47 = NULL;
  t = term_n_7;
  k_47 = t;
  t = term_c_9;
  l_47 = t;
  t = term_d_9;
  t = f_4(k_47, l_47, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm n_47 = NULL,o_47 = NULL,p_47 = NULL;
  n_47 = t;
  {
    ATerm e_9 = t;
    int f_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = n_47;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_9 = ATgetFirst((ATermList) t);
                ATerm h_9 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = n_47;
          }
        LocalPopChoice(f_9);
      }
    else
      {
        t = e_9;
        t = (ATerm) ATinsert(ATempty, n_47);
      }
  }
  o_47 = t;
  t = term_t_7;
  p_47 = t;
  t = SSL_printnl(p_47, o_47);
  t = n_47;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm u_47 = NULL,v_47 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_47 = ATgetFirst((ATermList) t);
      v_47 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_47 = NULL,a_48 = NULL;
        static ATerm b_2 (ATerm t);
        static ATerm b_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(z_47)), not_null(a_48));
          return(t);
        }
        t = v_47;
        t = r_0(t);
        if(((z_47 != NULL) && (z_47 != t)))
          _fail(t);
        else
          z_47 = t;
        t = u_47;
        t = p_0(t);
        if(((a_48 != NULL) && (a_48 != t)))
          _fail(t);
        else
          a_48 = t;
        t = v_47;
        t = reverse_acc_2_0(p_0, b_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_9;
      t = r_0(t);
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL,m_11 = NULL;
  l_48 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_48);
  j_48 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, k_48);
  m_11 = t;
  t = SSLsetAnnotations(m_11, j_48);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm p_48 = NULL;
  p_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_48), term_j_9);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm b_146 (ATerm), ATerm c_146 (ATerm), ATerm t)
{
  ATerm f_48 = NULL,g_48 = NULL;
  ATerm k_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_48 = NULL,i_48 = NULL;
      t = term_n_7;
      h_48 = t;
      t = term_c_9;
      i_48 = t;
      t = term_d_9;
      t = f_4(h_48, i_48, t);
      LocalPopChoice(l_9);
    }
  else
    {
      t = k_9;
      t = fetch_1_0(c_2, t);
    }
  {
    ATerm m_9 = t;
    int n_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_146(t);
        t = echo_0_0(t);
        LocalPopChoice(n_9);
      }
    else
      {
        t = m_9;
      }
  }
  t = term_o_9;
  t = echo_0_0(t);
  t = term_p_9;
  f_48 = t;
  t = term_q_9;
  g_48 = t;
  t = term_r_9;
  t = f_4(f_48, g_48, t);
  t = reverse_acc_2_0(_id, d_2, t);
  t = map_1_0(e_2, t);
  t = term_s_9;
  t = echo_0_0(t);
  {
    ATerm t_9 = t;
    int u_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_146(t);
        {
          ATerm w_9 = t;
          int x_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_48 = NULL;
              q_48 = t;
              t = SSL_is_string(q_48);
              t = q_48;
              LocalPopChoice(x_9);
              {
                ATerm r_48 = NULL;
                r_48 = t;
                t = (ATerm) ATinsert(ATempty, r_48);
              }
            }
          else
            {
              t = w_9;
            }
        }
        t = echo_0_0(t);
        LocalPopChoice(u_9);
      }
    else
      {
        t = t_9;
      }
  }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm y_48 = NULL,z_48 = NULL,a_49 = NULL,o_11 = NULL;
  a_49 = t;
  if(match_cons(t, sym_Program_1))
    {
      z_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_49);
  y_48 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, z_48);
  o_11 = t;
  t = SSLsetAnnotations(o_11, y_48);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_48 = NULL;
  v_48 = t;
  {
    ATerm y_9 = t;
    int z_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_48 = NULL,x_48 = NULL;
        t = term_n_7;
        w_48 = t;
        t = term_c_9;
        x_48 = t;
        t = term_d_9;
        t = f_4(w_48, x_48, t);
        LocalPopChoice(z_9);
      }
    else
      {
        t = y_9;
        t = fetch_1_0(f_2, t);
      }
  }
  t = v_48;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm c_49 = NULL;
  c_49 = t;
  if(match_string(t, "-k"))
    {
      t = c_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = c_49;
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm d_49 = NULL,e_49 = NULL,f_49 = NULL;
  d_49 = t;
  t = SSL_string_to_int(d_49);
  e_49 = t;
  t = term_f_10;
  f_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_10, e_49);
  t = i_4(f_49, e_49, t);
  t = d_49;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_h_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_2, j_2, k_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm h_49 = NULL;
  h_49 = t;
  if(match_string(t, "-S"))
    {
      t = h_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = h_49;
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm i_49 = NULL,j_49 = NULL;
  t = term_j_10;
  i_49 = t;
  t = term_l_10;
  j_49 = t;
  t = term_r_10;
  t = i_4(i_49, j_49, t);
  t = term_s_10;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_t_10;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm m_49 = NULL,n_49 = NULL,o_49 = NULL;
  m_49 = t;
  t = SSL_string_to_int(m_49);
  n_49 = t;
  t = term_j_10;
  o_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_10, n_49);
  t = i_4(o_49, n_49, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_49);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_u_10;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm p_49 = NULL,q_49 = NULL;
  t = term_v_10;
  p_49 = t;
  t = term_i_9;
  q_49 = t;
  t = term_w_10;
  t = i_4(p_49, q_49, t);
  t = term_x_10;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_z_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_11 = t;
  int b_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_2, o_2, q_2, t);
      LocalPopChoice(b_11);
    }
  else
    {
      t = a_11;
      {
        ATerm e_11 = t;
        int g_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_2, u_2, x_2, t);
            LocalPopChoice(g_11);
          }
        else
          {
            t = e_11;
            t = Option_3_0(y_2, a_3, b_3, t);
          }
      }
    }
  return(t);
}
static ATerm i_4 (ATerm k_78, ATerm l_78, ATerm t)
{
  ATerm r_49 = NULL,s_49 = NULL;
  t = term_n_7;
  r_49 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_7, k_78, l_78);
  t = lookup_table_0_1(r_49, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_4(k_78, l_78, s_49, t);
  t = (ATerm) ATmakeAppl(sym__3, term_n_7, k_78, l_78);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm w_49 = NULL,x_49 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_49 = NULL,z_49 = NULL,a_50 = NULL;
      t = term_i_9;
      t = g_0(t);
      y_49 = t;
      t = term_p_9;
      z_49 = t;
      t = term_q_9;
      a_50 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_9, term_q_9, y_49);
      t = g_4(z_49, a_50, y_49, t);
      _fail(t);
    }
  else
    {
      ATerm d_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_49 = ATgetFirst((ATermList) t);
          x_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_49;
      t = d_0(t);
      t = term_i_9;
      t = f_0(t);
      d_50 = t;
      t = (ATerm) ATinsert(CheckATermList(x_49), d_50);
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm f_50 = NULL;
  f_50 = t;
  if(match_string(t, "-o"))
    {
      t = f_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = f_50;
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm g_50 = NULL,h_50 = NULL;
  g_50 = t;
  t = term_p_7;
  h_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_7, g_50);
  t = i_4(h_50, g_50, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_50);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_h_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_3, e_3, f_3, t);
  return(t);
}
static ATerm g_4 (ATerm p_63, ATerm q_63, ATerm o_63, ATerm t)
{
  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL;
  j_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_63, q_63);
  {
    ATerm k_11 = t;
    int l_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_11 = ATgetArgument(t, 0);
            ATerm p_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_63, q_63);
        t = f_4(p_63, q_63, t);
        LocalPopChoice(l_11);
      }
    else
      {
        t = k_11;
        t = (ATerm) ATempty;
      }
  }
  k_50 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_63, q_63, (ATerm) ATinsert(CheckATermList(k_50), o_63));
  t = lookup_table_0_1(p_63, t);
  n_50 = t;
  t = (ATerm) ATinsert(CheckATermList(k_50), o_63);
  l_50 = t;
  t = n_50;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_4(q_63, l_50, m_50, t);
  t = j_50;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_50 = NULL,z_50 = NULL,a_51 = NULL;
      t = term_i_9;
      t = o_0(t);
      y_50 = t;
      t = term_p_9;
      z_50 = t;
      t = term_q_9;
      a_51 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_9, term_q_9, y_50);
      t = g_4(z_50, a_51, y_50, t);
      _fail(t);
    }
  else
    {
      ATerm e_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_50 = ATgetFirst((ATermList) t);
          v_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_50;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_50 = ATgetFirst((ATermList) t);
          x_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_50;
      t = j_0(t);
      t = w_50;
      t = l_0(t);
      e_51 = t;
      t = (ATerm) ATinsert(CheckATermList(x_50), e_51);
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm g_51 = NULL;
  g_51 = t;
  if(match_string(t, "-i"))
    {
      t = g_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_51;
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm h_51 = NULL,i_51 = NULL;
  h_51 = t;
  t = term_z_8;
  i_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_8, h_51);
  t = i_4(i_51, h_51, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_51);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_s_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_3, k_3, n_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL,l_51 = NULL,m_51 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_9;
  t = whoami_0_0(t);
  j_51 = t;
  t = term_w_5;
  l_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_11), j_51);
  m_51 = t;
  t = SSL_printnl(l_51, m_51);
  t = term_w_11;
  k_51 = t;
  t = SSL_exit(k_51);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm n_51 = NULL,o_51 = NULL;
  t = term_n_7;
  n_51 = t;
  t = term_c_9;
  o_51 = t;
  t = term_d_9;
  t = f_4(n_51, o_51, t);
  return(t);
}
static ATerm a_4 (ATerm y_61, ATerm z_61, ATerm t)
{
  ATerm y_11 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_61, z_61);
      LocalPopChoice(b_12);
    }
  else
    {
      t = y_11;
      t = SSL_addr(y_61, z_61);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_130 (ATerm), ATerm o_130 (ATerm), ATerm t)
{
  ATerm q_51 = NULL,r_51 = NULL,s_51 = NULL;
  q_51 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_51;
      t = n_130(t);
    }
  else
    {
      ATerm v_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_51 = ATgetFirst((ATermList) t);
          s_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_51;
      t = foldr_2_0(n_130, o_130, t);
      v_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_51, v_51);
      t = o_130(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_l_10;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm b_64 = NULL,c_64 = NULL;
  if(match_cons(t, sym__2))
    {
      b_64 = ATgetArgument(t, 0);
      c_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_4(b_64, c_64, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_51 = NULL,x_63 = NULL,y_63 = NULL;
  t = times_0_0(t);
  y_63 = t;
  t = SSL_explode_term(y_63);
  if(match_cons(t, sym__2))
    {
      ATerm j_12 = ATgetArgument(t, 0);
      x_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_63;
  t = foldr_2_0(o_3, p_3, t);
  y_51 = t;
  t = SSL_TicksToSeconds(y_51);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_52 = NULL,k_52 = NULL,l_52 = NULL;
  j_52 = t;
  if(match_cons(t, sym__2))
    {
      k_52 = ATgetArgument(t, 0);
      l_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_12 = t;
    int m_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_52;
        if((k_52 != t))
          {
            _fail(t);
          }
        t = j_52;
        LocalPopChoice(m_12);
      }
    else
      {
        t = k_12;
        t = (ATerm) ATmakeAppl(sym__2, k_52, l_52);
        {
          ATerm n_12 = t;
          int o_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_52, l_52);
              LocalPopChoice(o_12);
            }
          else
            {
              t = n_12;
              t = SSL_gtr(k_52, l_52);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, k_52, l_52);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_140 (ATerm), ATerm t)
{
  ATerm p_52 = NULL;
  p_52 = t;
  {
    ATerm p_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_52 = NULL,s_52 = NULL,t_52 = NULL;
        t = term_n_7;
        s_52 = t;
        t = term_j_10;
        t_52 = t;
        t = term_r_12;
        t = f_4(s_52, t_52, t);
        r_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_52, term_w_11);
        t = geq_0_0(t);
        t = p_52;
        t = y_140(t);
        LocalPopChoice(q_12);
      }
    else
      {
        t = p_12;
        t = p_52;
      }
  }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm v_52 = NULL,w_52 = NULL,y_52 = NULL,z_52 = NULL;
  t = run_time_0_0(t);
  v_52 = t;
  t = term_i_9;
  t = whoami_0_0(t);
  w_52 = t;
  t = term_w_5;
  y_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_12), v_52), term_s_12), w_52);
  z_52 = t;
  t = SSL_printnl(y_52, z_52);
  t = (ATerm) ATmakeAppl(sym__2, term_w_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_12), v_52), term_s_12), w_52));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(q_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_53 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_10;
  a_53 = t;
  t = SSL_exit(a_53);
  return(t);
}
static ATerm j_4 (ATerm e_68, ATerm f_68, ATerm g_68, ATerm t)
{
  ATerm b_53 = NULL;
  t = SSL_hashtable_put(g_68, e_68, f_68);
  b_53 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_53);
  return(t);
}
ATerm lookup_table_0_1 (ATerm b_65, ATerm t)
{
  ATerm k_53 = NULL;
  t = table_hashtable_0_0(t);
  k_53 = t;
  {
    ATerm v_12 = t;
    int w_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_64 = NULL;
        t = k_53;
        if(match_cons(t, sym_Hashtable_1))
          {
            n_64 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = k_4(b_65, n_64, t);
        LocalPopChoice(w_12);
      }
    else
      {
        t = v_12;
        {
          ATerm s_64 = NULL;
          t = b_65;
          t = table_create_0_0(t);
          t = k_53;
          if(match_cons(t, sym_Hashtable_1))
            {
              s_64 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_4(b_65, s_64, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm m_68, ATerm n_68, ATerm t)
{
  ATerm n_53 = NULL;
  t = SSL_hashtable_create(m_68, n_68);
  n_53 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_53);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm o_53 = NULL,p_53 = NULL,q_53 = NULL,s_53 = NULL,t_53 = NULL;
  o_53 = t;
  t = term_x_12;
  s_53 = t;
  t = term_y_12;
  t_53 = t;
  t = o_53;
  t = new_hashtable_0_2(s_53, t_53, t);
  p_53 = t;
  t = o_53;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_4(o_53, p_53, q_53, t);
  t = o_53;
  return(t);
}
static ATerm c_4 (ATerm j_68, ATerm k_68, ATerm t)
{
  ATerm u_53 = NULL;
  t = SSL_hashtable_remove(k_68, j_68);
  u_53 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_53);
  return(t);
}
static ATerm d_4 (ATerm o_68, ATerm t)
{
  ATerm v_53 = NULL;
  t = SSL_hashtable_destroy(o_68);
  v_53 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_53);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm w_53 = NULL;
  t = SSL_table_hashtable();
  w_53 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_53);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL;
  x_53 = t;
  t = table_hashtable_0_0(t);
  y_53 = t;
  t = lookup_table_0_1(x_53, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_4(a_54, t);
  t = y_53;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_4(x_53, z_53, t);
  t = x_53;
  return(t);
}
ATerm fetch_1_0 (ATerm y_123 (ATerm), ATerm t)
{
  static ATerm x_54 (ATerm t);
  static ATerm x_54 (ATerm t)
  {
    ATerm u_54 = NULL,v_54 = NULL,w_54 = NULL;
    u_54 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_54 = ATgetFirst((ATermList) t);
        w_54 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm a_13 = t;
      int b_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_64 = NULL,a_65 = NULL,q_11 = NULL;
          t = SSLgetAnnotations(u_54);
          x_64 = t;
          t = v_54;
          t = y_123(t);
          a_65 = t;
          t = (ATerm) ATinsert(CheckATermList(w_54), a_65);
          q_11 = t;
          t = SSLsetAnnotations(q_11, x_64);
          LocalPopChoice(b_13);
        }
      else
        {
          t = a_13;
          {
            ATerm l_65 = NULL,o_65 = NULL,r_11 = NULL;
            t = SSLgetAnnotations(u_54);
            l_65 = t;
            t = w_54;
            t = x_54(t);
            o_65 = t;
            t = (ATerm) ATinsert(CheckATermList(o_65), v_54);
            r_11 = t;
            t = SSLsetAnnotations(r_11, l_65);
          }
        }
    }
    return(t);
  }
  t = x_54(t);
  return(t);
}
static ATerm k_4 (ATerm h_68, ATerm i_68, ATerm t)
{
  t = SSL_hashtable_get(i_68, h_68);
  return(t);
}
static ATerm f_4 (ATerm i_65, ATerm j_65, ATerm t)
{
  ATerm a_55 = NULL;
  t = lookup_table_0_1(i_65, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_4(j_65, a_55, t);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm c_55 = NULL,d_55 = NULL;
  t = term_c_13;
  c_55 = t;
  t = term_i_9;
  d_55 = t;
  t = term_d_13;
  t = i_4(c_55, d_55, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_e_13;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL;
  t = term_c_13;
  g_55 = t;
  t = term_i_9;
  h_55 = t;
  t = term_d_13;
  t = i_4(g_55, h_55, t);
  t = term_f_13;
  e_55 = t;
  t = term_i_9;
  f_55 = t;
  t = term_g_13;
  t = i_4(e_55, f_55, t);
  t = term_h_13;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_i_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_13 = t;
  int k_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_3, b_4, e_4, t);
      LocalPopChoice(k_13);
    }
  else
    {
      t = j_13;
      t = Option_3_0(h_4, l_4, m_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm d_88 (ATerm), ATerm e_88 (ATerm), ATerm t)
{
  ATerm i_55 = NULL,j_55 = NULL,k_55 = NULL,l_55 = NULL,m_55 = NULL,n_55 = NULL,v_11 = NULL;
  n_55 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_55 = ATgetFirst((ATermList) t);
      k_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_55);
  i_55 = t;
  t = j_55;
  t = d_88(t);
  l_55 = t;
  t = k_55;
  t = e_88(t);
  m_55 = t;
  t = (ATerm) ATinsert(CheckATermList(m_55), l_55);
  v_11 = t;
  t = SSLsetAnnotations(v_11, i_55);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_145 (ATerm), ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL,x_55 = NULL,y_55 = NULL,x_11 = NULL;
  s_55 = t;
  {
    ATerm l_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_13;
        t = w_145(t);
        LocalPopChoice(m_13);
      }
    else
      {
        t = l_13;
      }
  }
  t = s_55;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_55 = ATgetFirst((ATermList) t);
      v_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_55);
  t_55 = t;
  t = term_c_9;
  y_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_9, u_55);
  t = i_4(y_55, u_55, t);
  t = v_55;
  {
    static ATerm i_56 (ATerm t);
    static ATerm i_56 (ATerm t)
    {
      ATerm o_13 = t;
      int p_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_13 = t;
          int r_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_56 = NULL;
              b_56 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = b_56;
              LocalPopChoice(r_13);
            }
          else
            {
              t = q_13;
              t = w_145(t);
              t = Cons_2_0(_id, i_56, t);
            }
          LocalPopChoice(p_13);
        }
      else
        {
          t = o_13;
          {
            ATerm e_56 = NULL,f_56 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                e_56 = ATgetFirst((ATermList) t);
                f_56 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(f_56), (ATerm) ATmakeAppl(sym_Undefined_1, e_56));
          }
        }
      return(t);
    }
    t = i_56(t);
  }
  x_55 = t;
  t = (ATerm) ATinsert(CheckATermList(x_55), (ATerm) ATmakeAppl(sym_Program_1, u_55));
  x_11 = t;
  t = SSLsetAnnotations(x_11, t_55);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm x_56 = NULL;
  x_56 = t;
  if(match_string(t, "--help"))
    {
      t = x_56;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_56;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_56;
        }
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm y_56 = NULL,z_56 = NULL;
  t = term_s_13;
  y_56 = t;
  t = term_i_9;
  z_56 = t;
  t = term_t_13;
  t = i_4(y_56, z_56, t);
  t = term_u_13;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_v_13;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm t_145 (ATerm), ATerm u_145 (ATerm), ATerm v_145 (ATerm), ATerm t)
{
  ATerm p_56 = NULL,q_56 = NULL,r_56 = NULL,s_56 = NULL,t_56 = NULL,u_56 = NULL,v_56 = NULL,w_56 = NULL;
  r_56 = t;
  t = term_p_9;
  s_56 = t;
  t = term_w_13;
  t = lookup_table_0_1(s_56, t);
  w_56 = t;
  t = term_q_9;
  t_56 = t;
  t = (ATerm) ATempty;
  u_56 = t;
  t = w_56;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_4(t_56, u_56, v_56, t);
  t = r_56;
  {
    static ATerm o_4 (ATerm t);
    static ATerm o_4 (ATerm t)
    {
      ATerm x_13 = t;
      int y_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_145(t);
          LocalPopChoice(y_13);
        }
      else
        {
          t = x_13;
          {
            ATerm z_13 = t;
            int a_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_4, r_4, s_4, t);
                LocalPopChoice(a_14);
              }
            else
              {
                t = z_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_4, t);
  }
  {
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_57 = NULL;
        k_57 = t;
        {
          ATerm d_14 = t;
          int e_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_65 = NULL;
              t = k_57;
              {
                ATerm f_14 = t;
                int g_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm w_65 = NULL,x_65 = NULL;
                    t = term_n_7;
                    w_65 = t;
                    t = term_s_13;
                    x_65 = t;
                    t = term_h_14;
                    t = f_4(w_65, x_65, t);
                    LocalPopChoice(g_14);
                  }
                else
                  {
                    t = f_14;
                    t = fetch_1_0(a_5, t);
                  }
              }
              t = k_57;
              t = u_145(t);
              t = term_l_10;
              v_65 = t;
              t = SSL_exit(v_65);
              LocalPopChoice(e_14);
            }
          else
            {
              t = d_14;
              {
                ATerm b_66 = NULL,c_66 = NULL,d_66 = NULL;
                t = term_n_7;
                c_66 = t;
                t = term_c_13;
                d_66 = t;
                t = term_i_14;
                t = f_4(c_66, d_66, t);
                t = k_57;
                t = v_145(t);
                t = term_l_10;
                b_66 = t;
                t = SSL_exit(b_66);
              }
            }
        }
        LocalPopChoice(c_14);
      }
    else
      {
        t = b_14;
        {
          ATerm j_14 = t;
          int k_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_57 = NULL,m_57 = NULL,n_57 = NULL;
              static ATerm c_5 (ATerm t);
              static ATerm c_5 (ATerm t)
              {
                ATerm o_57 = NULL,p_57 = NULL,q_57 = NULL,z_11 = NULL;
                q_57 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    p_57 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(q_57);
                o_57 = t;
                t = p_57;
                if(((p_56 != NULL) && (p_56 != t)))
                  _fail(t);
                else
                  p_56 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, p_57);
                z_11 = t;
                t = SSLsetAnnotations(z_11, o_57);
                return(t);
              }
              t = fetch_1_0(c_5, t);
              t = term_w_5;
              m_57 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_56)), term_l_14);
              n_57 = t;
              t = SSL_printnl(m_57, n_57);
              t = (ATerm) ATmakeAppl(sym__2, term_w_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_56)), term_l_14));
              t = u_145(t);
              t = term_w_11;
              l_57 = t;
              t = SSL_exit(l_57);
              LocalPopChoice(k_14);
            }
          else
            {
              t = j_14;
            }
        }
      }
  }
  q_56 = t;
  t = term_p_9;
  t = table_destroy_0_0(t);
  t = q_56;
  return(t);
}
ATerm option_wrap_5_0 (ATerm w_143 (ATerm), ATerm x_143 (ATerm), ATerm y_143 (ATerm), ATerm z_143 (ATerm), ATerm a_144 (ATerm), ATerm t)
{
  ATerm v_57 = NULL,w_57 = NULL,x_57 = NULL,y_57 = NULL,z_57 = NULL;
  t = parse_options_3_0(w_143, x_143, y_143, t);
  v_57 = t;
  t = term_m_14;
  t = table_create_0_0(t);
  t = term_m_14;
  w_57 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_14, term_n_14, v_57);
  t = lookup_table_0_1(w_57, t);
  z_57 = t;
  t = term_n_14;
  x_57 = t;
  t = z_57;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_4(x_57, v_57, y_57, t);
  t = v_57;
  t = z_143(t);
  {
    ATerm o_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_144(t);
        t = report_success_0_0(t);
        LocalPopChoice(p_14);
      }
    else
      {
        t = o_14;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm q_14 = t;
  int r_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(r_14);
    }
  else
    {
      t = q_14;
      {
        ATerm s_14 = t;
        int t_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(t_14);
          }
        else
          {
            t = s_14;
            {
              ATerm v_14 = t;
              int x_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(g_5, j_5, p_5, t);
                  LocalPopChoice(x_14);
                }
              else
                {
                  t = v_14;
                  {
                    ATerm y_14 = t;
                    int z_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(z_14);
                      }
                    else
                      {
                        t = y_14;
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
static ATerm f_5 (ATerm t)
{
  t = input_1_0(s_5, t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm j_58 = NULL,k_58 = NULL;
  t = term_x_7;
  j_58 = t;
  t = term_i_9;
  k_58 = t;
  t = term_a_15;
  t = i_4(j_58, k_58, t);
  t = term_b_15;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_d_15;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = output_1_0(t_5, t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm f_15 = t;
  int g_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_59 = NULL,e_59 = NULL,h_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL,t_66 = NULL,u_66 = NULL,i_12 = NULL,h_12 = NULL,g_12 = NULL,f_12 = NULL;
      d_59 = t;
      if(match_cons(t, sym_Specification_1))
        {
          e_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_59);
      h_66 = t;
      t = e_59;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_66 = ATgetFirst((ATermList) t);
          l_66 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_59);
      j_66 = t;
      t = l_66;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_66 = ATgetFirst((ATermList) t);
          p_66 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_66);
      n_66 = t;
      t = o_66;
      if(match_cons(t, sym_Strategies_1))
        {
          s_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_66);
      r_66 = t;
      t = s_66;
      t = map_1_0(strategy_definition_0_0, t);
      t_66 = t;
      t = (ATerm) ATmakeAppl(sym_Strategies_1, t_66);
      f_12 = t;
      t = SSLsetAnnotations(f_12, r_66);
      u_66 = t;
      t = p_66;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(p_66), u_66);
      g_12 = t;
      t = SSLsetAnnotations(g_12, n_66);
      q_66 = t;
      t = (ATerm) ATinsert(CheckATermList(q_66), k_66);
      h_12 = t;
      t = SSLsetAnnotations(h_12, j_66);
      m_66 = t;
      t = (ATerm) ATmakeAppl(sym_Specification_1, m_66);
      i_12 = t;
      t = SSLsetAnnotations(i_12, h_66);
      LocalPopChoice(g_15);
    }
  else
    {
      t = f_15;
      t = debug_1_0(u_5, t);
    }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_h_15;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(d_5, default_system_usage_0_0, default_system_about_0_0, _id, f_5, t);
  return(t);
}

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
static ATerm term_f_15;
static ATerm term_a_15;
static ATerm term_z_14;
static ATerm term_y_14;
static ATerm term_l_14;
static ATerm term_k_14;
static ATerm term_j_14;
static ATerm term_g_14;
static ATerm term_f_14;
static ATerm term_u_13;
static ATerm term_t_13;
static ATerm term_s_13;
static ATerm term_r_13;
static ATerm term_q_13;
static ATerm term_l_13;
static ATerm term_g_13;
static ATerm term_f_13;
static ATerm term_e_13;
static ATerm term_d_13;
static ATerm term_c_13;
static ATerm term_b_13;
static ATerm term_a_13;
static ATerm term_v_12;
static ATerm term_u_12;
static ATerm term_q_12;
static ATerm term_p_12;
static ATerm term_o_12;
static ATerm term_s_11;
static ATerm term_p_11;
static ATerm term_n_11;
static ATerm term_e_11;
static ATerm term_w_10;
static ATerm term_v_10;
static ATerm term_u_10;
static ATerm term_t_10;
static ATerm term_s_10;
static ATerm term_r_10;
static ATerm term_l_10;
static ATerm term_k_10;
static ATerm term_h_10;
static ATerm term_g_10;
static ATerm term_z_9;
static ATerm term_y_9;
static ATerm term_u_9;
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
static ATerm term_y_7;
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
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym__2, term_n_7, term_y_7);
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
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym__2, term_g_10, term_h_10);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_10);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym__2, term_t_10, term_i_9);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym__2, term_n_7, term_g_10);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym__2, term_a_13, term_i_9);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym__2, term_d_13, term_i_9);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym__2, term_q_13, term_i_9);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym__3, term_p_9, term_q_9, (ATerm) ATempty);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym__2, term_n_7, term_q_13);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym__2, term_n_7, term_a_13);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym__2, term_y_7, term_i_9);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm debug_1_0 (ATerm q_122 (ATerm), ATerm t);
static ATerm c_0 (ATerm t);
ATerm term_expression_0_0 (ATerm t);
static ATerm i_0 (ATerm t);
ATerm match_term_exp_0_0 (ATerm t);
ATerm CallT_3_0 (ATerm t_94 (ATerm), ATerm u_94 (ATerm), ATerm v_94 (ATerm), ATerm t);
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
static ATerm r_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm strategy_definition_0_0 (ATerm t);
ATerm map_1_0 (ATerm a_123 (ATerm), ATerm t);
static ATerm r_3 (ATerm e_58, ATerm f_58, ATerm t);
static ATerm s_3 (ATerm h_42, ATerm i_42, ATerm t);
static ATerm u_3 (ATerm s_122 (ATerm), ATerm m_276, ATerm n_42, ATerm t);
static ATerm t_3 (ATerm d_42, ATerm e_42, ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm output_1_0 (ATerm l_143 (ATerm), ATerm t);
static ATerm i_45 (ATerm c_45, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm v_3 (ATerm j_42, ATerm t);
static ATerm w_3 (ATerm k_56, ATerm l_56, ATerm t);
static ATerm x_3 (ATerm g_58, ATerm h_58, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm t_46 (ATerm s_45, ATerm t);
static ATerm u_46 (ATerm w_45, ATerm x_45, ATerm y_45, ATerm t);
static ATerm v_46 (ATerm g_46, ATerm h_46, ATerm i_46, ATerm t);
static ATerm y_3 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm m_143 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm default_system_usage_2_0 (ATerm k_145 (ATerm), ATerm l_145 (ATerm), ATerm t);
static ATerm f_2 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm h_4 (ATerm k_78, ATerm l_78, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm f_4 (ATerm q_63, ATerm r_63, ATerm p_63, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm z_3 (ATerm z_61, ATerm a_62, ATerm t);
ATerm foldr_2_0 (ATerm x_129 (ATerm), ATerm y_129 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm h_140 (ATerm), ATerm t);
static ATerm q_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm i_4 (ATerm f_68, ATerm g_68, ATerm h_68, ATerm t);
ATerm lookup_table_0_1 (ATerm c_65, ATerm t);
ATerm new_hashtable_0_2 (ATerm n_68, ATerm o_68, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm b_4 (ATerm k_68, ATerm l_68, ATerm t);
static ATerm c_4 (ATerm p_68, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm i_123 (ATerm), ATerm t);
static ATerm j_4 (ATerm i_68, ATerm j_68, ATerm t);
static ATerm e_4 (ATerm j_65, ATerm k_65, ATerm t);
static ATerm a_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm n_87 (ATerm), ATerm o_87 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm f_145 (ATerm), ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm a_5 (ATerm t);
ATerm parse_options_3_0 (ATerm c_145 (ATerm), ATerm d_145 (ATerm), ATerm e_145 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm f_143 (ATerm), ATerm g_143 (ATerm), ATerm h_143 (ATerm), ATerm i_143 (ATerm), ATerm j_143 (ATerm), ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm v_5 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm debug_1_0 (ATerm q_122 (ATerm), ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,e_0 = NULL,h_0 = NULL;
  a_0 = t;
  t = q_122(t);
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
                    ATerm x_0 = NULL,z_0 = NULL,n_1 = NULL;
                    t = SSLgetAnnotations(a_6);
                    x_0 = t;
                    t = SSL_is_int(b_6);
                    z_0 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, z_0);
                    n_1 = t;
                    t = SSLsetAnnotations(n_1, x_0);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Real_1))
                    {
                      b_6 = ATgetArgument(t, 0);
                      {
                        ATerm f_1 = NULL,h_1 = NULL,p_1 = NULL;
                        t = SSLgetAnnotations(a_6);
                        f_1 = t;
                        t = SSL_is_real(b_6);
                        h_1 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, h_1);
                        p_1 = t;
                        t = SSLsetAnnotations(p_1, f_1);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Str_1))
                        {
                          b_6 = ATgetArgument(t, 0);
                          {
                            ATerm o_1 = NULL,v_1 = NULL,q_1 = NULL;
                            t = SSLgetAnnotations(a_6);
                            o_1 = t;
                            t = SSL_is_string(b_6);
                            v_1 = t;
                            t = (ATerm) ATmakeAppl(sym_Str_1, v_1);
                            q_1 = t;
                            t = SSLsetAnnotations(q_1, o_1);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_BuildDefault_1))
                            {
                              b_6 = ATgetArgument(t, 0);
                              {
                                ATerm n_2 = NULL,p_2 = NULL,s_1 = NULL;
                                t = SSLgetAnnotations(a_6);
                                n_2 = t;
                                t = b_6;
                                t = term_expression_0_0(t);
                                p_2 = t;
                                t = (ATerm) ATmakeAppl(sym_BuildDefault_1, p_2);
                                s_1 = t;
                                t = SSLsetAnnotations(s_1, n_2);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_As_2))
                                {
                                  b_6 = ATgetArgument(t, 0);
                                  c_6 = ATgetArgument(t, 1);
                                  {
                                    ATerm c_3 = NULL,f_3 = NULL,h_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,u_1 = NULL,t_1 = NULL;
                                    t = SSLgetAnnotations(a_6);
                                    c_3 = t;
                                    t = b_6;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        k_3 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(b_6);
                                    h_3 = t;
                                    t = SSL_is_string(k_3);
                                    l_3 = t;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, l_3);
                                    t_1 = t;
                                    t = SSLsetAnnotations(t_1, h_3);
                                    m_3 = t;
                                    t = c_6;
                                    t = term_expression_0_0(t);
                                    f_3 = t;
                                    t = (ATerm) ATmakeAppl(sym_As_2, m_3, f_3);
                                    u_1 = t;
                                    t = SSLsetAnnotations(u_1, c_3);
                                  }
                                }
                              else
                                {
                                  ATerm n_4 = NULL,x_4 = NULL,z_4 = NULL,w_1 = NULL;
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
                                  x_4 = t;
                                  t = c_6;
                                  t = map_1_0(term_expression_0_0, t);
                                  z_4 = t;
                                  t = (ATerm) ATmakeAppl(sym_Op_2, x_4, z_4);
                                  w_1 = t;
                                  t = SSLsetAnnotations(w_1, n_4);
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
      ATerm y_10 = NULL,b_11 = NULL,c_11 = NULL;
      y_10 = t;
      if(match_cons(t, sym_Wld_0))
        {
          t = y_10;
        }
      else
        {
          if(match_cons(t, sym_Var_1))
            {
              b_11 = ATgetArgument(t, 0);
              {
                ATerm m_5 = NULL,r_5 = NULL,h_2 = NULL;
                t = SSLgetAnnotations(y_10);
                m_5 = t;
                t = SSL_is_string(b_11);
                r_5 = t;
                t = (ATerm) ATmakeAppl(sym_Var_1, r_5);
                h_2 = t;
                t = SSLsetAnnotations(h_2, m_5);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  b_11 = ATgetArgument(t, 0);
                  {
                    ATerm m_6 = NULL,o_6 = NULL,i_2 = NULL;
                    t = SSLgetAnnotations(y_10);
                    m_6 = t;
                    t = SSL_is_int(b_11);
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
                      b_11 = ATgetArgument(t, 0);
                      {
                        ATerm u_6 = NULL,w_6 = NULL,m_2 = NULL;
                        t = SSLgetAnnotations(y_10);
                        u_6 = t;
                        t = SSL_is_real(b_11);
                        w_6 = t;
                        t = (ATerm) ATmakeAppl(sym_Real_1, w_6);
                        m_2 = t;
                        t = SSLsetAnnotations(m_2, u_6);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Str_1))
                        {
                          b_11 = ATgetArgument(t, 0);
                          {
                            ATerm f_7 = NULL,i_7 = NULL,r_2 = NULL;
                            t = SSLgetAnnotations(y_10);
                            f_7 = t;
                            t = SSL_is_string(b_11);
                            i_7 = t;
                            t = (ATerm) ATmakeAppl(sym_Str_1, i_7);
                            r_2 = t;
                            t = SSLsetAnnotations(r_2, f_7);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_BuildDefault_1))
                            {
                              b_11 = ATgetArgument(t, 0);
                              {
                                ATerm q_7 = NULL,s_7 = NULL,t_2 = NULL;
                                t = SSLgetAnnotations(y_10);
                                q_7 = t;
                                t = b_11;
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
                                  b_11 = ATgetArgument(t, 0);
                                  c_11 = ATgetArgument(t, 1);
                                  {
                                    ATerm c_8 = NULL,i_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,o_8 = NULL,v_2 = NULL,u_2 = NULL;
                                    t = SSLgetAnnotations(y_10);
                                    c_8 = t;
                                    t = b_11;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        l_8 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(b_11);
                                    k_8 = t;
                                    t = SSL_is_string(l_8);
                                    m_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, m_8);
                                    u_2 = t;
                                    t = SSLsetAnnotations(u_2, k_8);
                                    o_8 = t;
                                    t = c_11;
                                    t = match_term_exp_0_0(t);
                                    i_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_As_2, o_8, i_8);
                                    v_2 = t;
                                    t = SSLsetAnnotations(v_2, c_8);
                                  }
                                }
                              else
                                {
                                  ATerm v_9 = NULL,d_10 = NULL,e_10 = NULL,y_2 = NULL;
                                  if(match_cons(t, sym_Op_2))
                                    {
                                      b_11 = ATgetArgument(t, 0);
                                      c_11 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(y_10);
                                  v_9 = t;
                                  t = SSL_is_string(b_11);
                                  d_10 = t;
                                  t = c_11;
                                  t = map_1_0(match_term_exp_0_0, t);
                                  e_10 = t;
                                  t = (ATerm) ATmakeAppl(sym_Op_2, d_10, e_10);
                                  y_2 = t;
                                  t = SSLsetAnnotations(y_2, v_9);
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
ATerm CallT_3_0 (ATerm t_94 (ATerm), ATerm u_94 (ATerm), ATerm v_94 (ATerm), ATerm t)
{
  ATerm u_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,j_12 = NULL,s_12 = NULL,w_12 = NULL,x_12 = NULL,p_4 = NULL;
  x_12 = t;
  if(match_cons(t, sym_CallT_3))
    {
      z_11 = ATgetArgument(t, 0);
      a_12 = ATgetArgument(t, 1);
      b_12 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_12);
  u_11 = t;
  t = z_11;
  t = t_94(t);
  j_12 = t;
  t = a_12;
  t = u_94(t);
  s_12 = t;
  t = b_12;
  t = v_94(t);
  w_12 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, j_12, s_12, w_12);
  p_4 = t;
  t = SSLsetAnnotations(p_4, u_11);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = CallT_3_0(s_0, t_0, u_0, t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL,j_5 = NULL;
  j_21 = t;
  if(match_cons(t, sym_SVar_1))
    {
      h_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_21);
  g_21 = t;
  t = SSL_is_string(h_21);
  i_21 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, i_21);
  j_5 = t;
  t = SSLsetAnnotations(j_5, g_21);
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
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,l_5 = NULL;
  q_21 = t;
  if(match_cons(t, sym_Var_1))
    {
      o_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_21);
  n_21 = t;
  t = SSL_is_string(o_21);
  p_21 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, p_21);
  l_5 = t;
  t = SSLsetAnnotations(l_5, n_21);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm x_26 = NULL;
  x_26 = t;
  t = SSL_is_string(x_26);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL,w_30 = NULL,y_30 = NULL,k_6 = NULL,j_6 = NULL;
  y_30 = t;
  if(match_cons(t, sym_CallT_3))
    {
      o_30 = ATgetArgument(t, 0);
      p_30 = ATgetArgument(t, 1);
      r_30 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_30);
  n_30 = t;
  t = o_30;
  if(match_cons(t, sym_SVar_1))
    {
      t_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_30);
  s_30 = t;
  t = SSL_is_string(t_30);
  u_30 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, u_30);
  j_6 = t;
  t = SSLsetAnnotations(j_6, s_30);
  w_30 = t;
  t = p_30;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = r_30;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, w_30, p_30, r_30);
  k_6 = t;
  t = SSLsetAnnotations(k_6, n_30);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL,d_31 = NULL,b_7 = NULL;
  d_31 = t;
  if(match_cons(t, sym_Var_1))
    {
      a_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_31);
  z_30 = t;
  t = SSL_is_string(a_31);
  b_31 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, b_31);
  b_7 = t;
  t = SSLsetAnnotations(b_7, z_30);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL,w_34 = NULL,y_34 = NULL,z_34 = NULL;
  s_34 = t;
  if(match_cons(t, sym_SDef_3))
    {
      t_34 = ATgetArgument(t, 0);
      w_34 = ATgetArgument(t, 1);
      y_34 = ATgetArgument(t, 2);
      {
        ATerm g_37 = NULL,r_37 = NULL,t_37 = NULL,x_37 = NULL,h_7 = NULL;
        t = SSLgetAnnotations(s_34);
        g_37 = t;
        t = SSL_is_string(t_34);
        r_37 = t;
        t = w_34;
        t = map_1_0(c_1, t);
        t_37 = t;
        t = y_34;
        t = strategy_expression_0_0(t);
        x_37 = t;
        t = (ATerm) ATmakeAppl(sym_SDef_3, r_37, t_37, x_37);
        h_7 = t;
        t = SSLsetAnnotations(h_7, g_37);
      }
    }
  else
    {
      ATerm n_43 = NULL,x_44 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL,u_7 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          t_34 = ATgetArgument(t, 0);
          w_34 = ATgetArgument(t, 1);
          y_34 = ATgetArgument(t, 2);
          z_34 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_34);
      n_43 = t;
      t = SSL_is_string(t_34);
      x_44 = t;
      t = w_34;
      t = map_1_0(d_1, t);
      n_45 = t;
      t = y_34;
      t = map_1_0(e_1, t);
      o_45 = t;
      t = z_34;
      t = strategy_expression_0_0(t);
      p_45 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, x_44, n_45, o_45, p_45);
      u_7 = t;
      t = SSLsetAnnotations(u_7, n_43);
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL,t_38 = NULL,g_39 = NULL,h_39 = NULL,e_7 = NULL;
  h_39 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      r_38 = ATgetArgument(t, 0);
      t_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_39);
  q_38 = t;
  t = SSL_is_string(r_38);
  g_39 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, g_39, t_38);
  e_7 = t;
  t = SSLsetAnnotations(e_7, q_38);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm b_51 = NULL,l_51 = NULL,x_51 = NULL,y_51 = NULL,k_52 = NULL,j_7 = NULL;
  k_52 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      l_51 = ATgetArgument(t, 0);
      x_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_52);
  b_51 = t;
  t = SSL_is_string(l_51);
  y_51 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, y_51, x_51);
  j_7 = t;
  t = SSLsetAnnotations(j_7, b_51);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm z_52 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL,k_55 = NULL,o_7 = NULL;
  k_55 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      x_53 = ATgetArgument(t, 0);
      y_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_55);
  z_52 = t;
  t = SSL_is_string(x_53);
  z_53 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_53, y_53);
  o_7 = t;
  t = SSLsetAnnotations(o_7, z_52);
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
      ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL;
      m_37 = t;
      if(match_cons(t, sym_Id_0))
        {
          t = m_37;
        }
      else
        {
          if(match_cons(t, sym_Fail_0))
            {
              t = m_37;
            }
          else
            {
              if(match_cons(t, sym_Not_1))
                {
                  n_37 = ATgetArgument(t, 0);
                  {
                    ATerm u_14 = NULL,w_14 = NULL,s_4 = NULL;
                    t = SSLgetAnnotations(m_37);
                    u_14 = t;
                    t = n_37;
                    t = strategy_expression_0_0(t);
                    w_14 = t;
                    t = (ATerm) ATmakeAppl(sym_Not_1, w_14);
                    s_4 = t;
                    t = SSLsetAnnotations(s_4, u_14);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Test_1))
                    {
                      n_37 = ATgetArgument(t, 0);
                      {
                        ATerm c_15 = NULL,e_15 = NULL,u_4 = NULL;
                        t = SSLgetAnnotations(m_37);
                        c_15 = t;
                        t = n_37;
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
                          n_37 = ATgetArgument(t, 0);
                          o_37 = ATgetArgument(t, 1);
                          {
                            ATerm l_15 = NULL,o_15 = NULL,p_15 = NULL,v_4 = NULL;
                            t = SSLgetAnnotations(m_37);
                            l_15 = t;
                            t = n_37;
                            t = strategy_expression_0_0(t);
                            o_15 = t;
                            t = o_37;
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
                              n_37 = ATgetArgument(t, 0);
                              o_37 = ATgetArgument(t, 1);
                              {
                                ATerm d_16 = NULL,g_16 = NULL,h_16 = NULL,w_4 = NULL;
                                t = SSLgetAnnotations(m_37);
                                d_16 = t;
                                t = n_37;
                                t = strategy_expression_0_0(t);
                                g_16 = t;
                                t = o_37;
                                t = strategy_expression_0_0(t);
                                h_16 = t;
                                t = (ATerm) ATmakeAppl(sym_Choice_2, g_16, h_16);
                                w_4 = t;
                                t = SSLsetAnnotations(w_4, d_16);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_LChoice_2))
                                {
                                  n_37 = ATgetArgument(t, 0);
                                  o_37 = ATgetArgument(t, 1);
                                  {
                                    ATerm y_16 = NULL,d_17 = NULL,h_17 = NULL,y_4 = NULL;
                                    t = SSLgetAnnotations(m_37);
                                    y_16 = t;
                                    t = n_37;
                                    t = strategy_expression_0_0(t);
                                    d_17 = t;
                                    t = o_37;
                                    t = strategy_expression_0_0(t);
                                    h_17 = t;
                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, d_17, h_17);
                                    y_4 = t;
                                    t = SSLsetAnnotations(y_4, y_16);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GuardedLChoice_3))
                                    {
                                      n_37 = ATgetArgument(t, 0);
                                      o_37 = ATgetArgument(t, 1);
                                      l_37 = ATgetArgument(t, 2);
                                      {
                                        ATerm r_17 = NULL,y_17 = NULL,a_18 = NULL,b_18 = NULL,b_5 = NULL;
                                        t = SSLgetAnnotations(m_37);
                                        r_17 = t;
                                        t = n_37;
                                        t = strategy_expression_0_0(t);
                                        y_17 = t;
                                        t = o_37;
                                        t = strategy_expression_0_0(t);
                                        a_18 = t;
                                        t = l_37;
                                        t = strategy_expression_0_0(t);
                                        b_18 = t;
                                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_17, a_18, b_18);
                                        b_5 = t;
                                        t = SSLsetAnnotations(b_5, r_17);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_GChoice_2))
                                        {
                                          n_37 = ATgetArgument(t, 0);
                                          o_37 = ATgetArgument(t, 1);
                                          {
                                            ATerm k_18 = NULL,o_18 = NULL,w_18 = NULL,d_5 = NULL;
                                            t = SSLgetAnnotations(m_37);
                                            k_18 = t;
                                            t = n_37;
                                            t = strategy_expression_0_0(t);
                                            o_18 = t;
                                            t = o_37;
                                            t = strategy_expression_0_0(t);
                                            w_18 = t;
                                            t = (ATerm) ATmakeAppl(sym_GChoice_2, o_18, w_18);
                                            d_5 = t;
                                            t = SSLsetAnnotations(d_5, k_18);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LGChoice_2))
                                            {
                                              n_37 = ATgetArgument(t, 0);
                                              o_37 = ATgetArgument(t, 1);
                                              {
                                                ATerm h_19 = NULL,l_19 = NULL,n_19 = NULL,g_5 = NULL;
                                                t = SSLgetAnnotations(m_37);
                                                h_19 = t;
                                                t = n_37;
                                                t = strategy_expression_0_0(t);
                                                l_19 = t;
                                                t = o_37;
                                                t = strategy_expression_0_0(t);
                                                n_19 = t;
                                                t = (ATerm) ATmakeAppl(sym_LGChoice_2, l_19, n_19);
                                                g_5 = t;
                                                t = SSLsetAnnotations(g_5, h_19);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_CallT_3))
                                                {
                                                  n_37 = ATgetArgument(t, 0);
                                                  o_37 = ATgetArgument(t, 1);
                                                  l_37 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm h_20 = NULL,q_20 = NULL,v_20 = NULL,w_20 = NULL,z_20 = NULL,a_21 = NULL,c_21 = NULL,n_5 = NULL,i_5 = NULL;
                                                    t = SSLgetAnnotations(m_37);
                                                    h_20 = t;
                                                    t = n_37;
                                                    if(match_cons(t, sym_SVar_1))
                                                      {
                                                        z_20 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSLgetAnnotations(n_37);
                                                    w_20 = t;
                                                    t = SSL_is_string(z_20);
                                                    a_21 = t;
                                                    t = (ATerm) ATmakeAppl(sym_SVar_1, a_21);
                                                    i_5 = t;
                                                    t = SSLsetAnnotations(i_5, w_20);
                                                    c_21 = t;
                                                    t = o_37;
                                                    t = map_1_0(m_0, t);
                                                    q_20 = t;
                                                    t = l_37;
                                                    t = map_1_0(v_0, t);
                                                    v_20 = t;
                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, c_21, q_20, v_20);
                                                    n_5 = t;
                                                    t = SSLsetAnnotations(n_5, h_20);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Rec_2))
                                                    {
                                                      n_37 = ATgetArgument(t, 0);
                                                      o_37 = ATgetArgument(t, 1);
                                                      {
                                                        ATerm c_22 = NULL,h_22 = NULL,i_22 = NULL,o_5 = NULL;
                                                        t = SSLgetAnnotations(m_37);
                                                        c_22 = t;
                                                        t = SSL_is_string(n_37);
                                                        h_22 = t;
                                                        t = o_37;
                                                        t = strategy_expression_0_0(t);
                                                        i_22 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Rec_2, h_22, i_22);
                                                        o_5 = t;
                                                        t = SSLsetAnnotations(o_5, c_22);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_Path_2))
                                                        {
                                                          n_37 = ATgetArgument(t, 0);
                                                          o_37 = ATgetArgument(t, 1);
                                                          {
                                                            ATerm a_23 = NULL,e_23 = NULL,g_23 = NULL,p_5 = NULL;
                                                            t = SSLgetAnnotations(m_37);
                                                            a_23 = t;
                                                            t = SSL_is_int(n_37);
                                                            e_23 = t;
                                                            t = o_37;
                                                            t = strategy_expression_0_0(t);
                                                            g_23 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Path_2, e_23, g_23);
                                                            p_5 = t;
                                                            t = SSLsetAnnotations(p_5, a_23);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              n_37 = ATgetArgument(t, 0);
                                                              o_37 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm q_23 = NULL,t_23 = NULL,v_23 = NULL,u_5 = NULL;
                                                                t = SSLgetAnnotations(m_37);
                                                                q_23 = t;
                                                                t = SSL_is_string(n_37);
                                                                t_23 = t;
                                                                t = o_37;
                                                                t = map_1_0(strategy_expression_0_0, t);
                                                                v_23 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Cong_2, t_23, v_23);
                                                                u_5 = t;
                                                                t = SSLsetAnnotations(u_5, q_23);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_One_1))
                                                                {
                                                                  n_37 = ATgetArgument(t, 0);
                                                                  {
                                                                    ATerm d_24 = NULL,f_24 = NULL,x_5 = NULL;
                                                                    t = SSLgetAnnotations(m_37);
                                                                    d_24 = t;
                                                                    t = n_37;
                                                                    t = strategy_expression_0_0(t);
                                                                    f_24 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_One_1, f_24);
                                                                    x_5 = t;
                                                                    t = SSLsetAnnotations(x_5, d_24);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Some_1))
                                                                    {
                                                                      n_37 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm n_24 = NULL,q_24 = NULL,y_5 = NULL;
                                                                        t = SSLgetAnnotations(m_37);
                                                                        n_24 = t;
                                                                        t = n_37;
                                                                        t = strategy_expression_0_0(t);
                                                                        q_24 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Some_1, q_24);
                                                                        y_5 = t;
                                                                        t = SSLsetAnnotations(y_5, n_24);
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_All_1))
                                                                        {
                                                                          n_37 = ATgetArgument(t, 0);
                                                                          {
                                                                            ATerm x_24 = NULL,d_25 = NULL,z_5 = NULL;
                                                                            t = SSLgetAnnotations(m_37);
                                                                            x_24 = t;
                                                                            t = n_37;
                                                                            t = strategy_expression_0_0(t);
                                                                            d_25 = t;
                                                                            t = (ATerm) ATmakeAppl(sym_All_1, d_25);
                                                                            z_5 = t;
                                                                            t = SSLsetAnnotations(z_5, x_24);
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Thread_1))
                                                                            {
                                                                              n_37 = ATgetArgument(t, 0);
                                                                              {
                                                                                ATerm k_25 = NULL,m_25 = NULL,e_6 = NULL;
                                                                                t = SSLgetAnnotations(m_37);
                                                                                k_25 = t;
                                                                                t = n_37;
                                                                                t = strategy_expression_0_0(t);
                                                                                m_25 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Thread_1, m_25);
                                                                                e_6 = t;
                                                                                t = SSLsetAnnotations(e_6, k_25);
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Match_1))
                                                                                {
                                                                                  n_37 = ATgetArgument(t, 0);
                                                                                  {
                                                                                    ATerm t_25 = NULL,w_25 = NULL,f_6 = NULL;
                                                                                    t = SSLgetAnnotations(m_37);
                                                                                    t_25 = t;
                                                                                    t = n_37;
                                                                                    t = match_term_exp_0_0(t);
                                                                                    w_25 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, w_25);
                                                                                    f_6 = t;
                                                                                    t = SSLsetAnnotations(f_6, t_25);
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_Build_1))
                                                                                    {
                                                                                      n_37 = ATgetArgument(t, 0);
                                                                                      {
                                                                                        ATerm d_26 = NULL,f_26 = NULL,g_6 = NULL;
                                                                                        t = SSLgetAnnotations(m_37);
                                                                                        d_26 = t;
                                                                                        t = n_37;
                                                                                        t = term_expression_0_0(t);
                                                                                        f_26 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, f_26);
                                                                                        g_6 = t;
                                                                                        t = SSLsetAnnotations(g_6, d_26);
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_Scope_2))
                                                                                        {
                                                                                          n_37 = ATgetArgument(t, 0);
                                                                                          o_37 = ATgetArgument(t, 1);
                                                                                          {
                                                                                            ATerm p_26 = NULL,t_26 = NULL,v_26 = NULL,h_6 = NULL;
                                                                                            t = SSLgetAnnotations(m_37);
                                                                                            p_26 = t;
                                                                                            t = n_37;
                                                                                            t = map_1_0(w_0, t);
                                                                                            t_26 = t;
                                                                                            t = o_37;
                                                                                            t = strategy_expression_0_0(t);
                                                                                            v_26 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Scope_2, t_26, v_26);
                                                                                            h_6 = t;
                                                                                            t = SSLsetAnnotations(h_6, p_26);
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_Where_1))
                                                                                            {
                                                                                              n_37 = ATgetArgument(t, 0);
                                                                                              {
                                                                                                ATerm d_27 = NULL,g_27 = NULL,i_6 = NULL;
                                                                                                t = SSLgetAnnotations(m_37);
                                                                                                d_27 = t;
                                                                                                t = n_37;
                                                                                                t = strategy_expression_0_0(t);
                                                                                                g_27 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Where_1, g_27);
                                                                                                i_6 = t;
                                                                                                t = SSLsetAnnotations(i_6, d_27);
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_PrimT_3))
                                                                                                {
                                                                                                  n_37 = ATgetArgument(t, 0);
                                                                                                  o_37 = ATgetArgument(t, 1);
                                                                                                  l_37 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm d_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL,c_7 = NULL;
                                                                                                    t = SSLgetAnnotations(m_37);
                                                                                                    d_30 = t;
                                                                                                    t = SSL_is_string(n_37);
                                                                                                    j_30 = t;
                                                                                                    t = o_37;
                                                                                                    t = map_1_0(y_0, t);
                                                                                                    k_30 = t;
                                                                                                    t = l_37;
                                                                                                    t = map_1_0(a_1, t);
                                                                                                    l_30 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_PrimT_3, j_30, k_30, l_30);
                                                                                                    c_7 = t;
                                                                                                    t = SSLsetAnnotations(c_7, d_30);
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  ATerm m_31 = NULL,q_31 = NULL,r_31 = NULL,x_7 = NULL;
                                                                                                  if(match_cons(t, sym_Let_2))
                                                                                                    {
                                                                                                      n_37 = ATgetArgument(t, 0);
                                                                                                      o_37 = ATgetArgument(t, 1);
                                                                                                    }
                                                                                                  else
                                                                                                    _fail(t);
                                                                                                  t = SSLgetAnnotations(m_37);
                                                                                                  m_31 = t;
                                                                                                  t = n_37;
                                                                                                  t = map_1_0(b_1, t);
                                                                                                  q_31 = t;
                                                                                                  t = o_37;
                                                                                                  t = strategy_expression_0_0(t);
                                                                                                  r_31 = t;
                                                                                                  t = (ATerm) ATmakeAppl(sym_Let_2, q_31, r_31);
                                                                                                  x_7 = t;
                                                                                                  t = SSLsetAnnotations(x_7, m_31);
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
  ATerm c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,a_10 = NULL;
  g_59 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      d_59 = ATgetArgument(t, 0);
      e_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_59);
  c_59 = t;
  t = SSL_is_string(d_59);
  f_59 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, f_59, e_59);
  a_10 = t;
  t = SSLsetAnnotations(a_10, c_59);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm a_60 = NULL,b_60 = NULL,c_60 = NULL,d_60 = NULL,e_60 = NULL,c_10 = NULL;
  e_60 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      b_60 = ATgetArgument(t, 0);
      c_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_60);
  a_60 = t;
  t = SSL_is_string(b_60);
  d_60 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, d_60, c_60);
  c_10 = t;
  t = SSLsetAnnotations(c_10, a_60);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL,f_10 = NULL;
  j_60 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      g_60 = ATgetArgument(t, 0);
      h_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_60);
  f_60 = t;
  t = SSL_is_string(g_60);
  i_60 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, i_60, h_60);
  f_10 = t;
  t = SSLsetAnnotations(f_10, f_60);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm e_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL,i_61 = NULL,j_10 = NULL;
  i_61 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      f_61 = ATgetArgument(t, 0);
      g_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_61);
  e_61 = t;
  t = SSL_is_string(f_61);
  h_61 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, h_61, g_61);
  j_10 = t;
  t = SSLsetAnnotations(j_10, e_61);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm j_61 = NULL,k_61 = NULL,l_61 = NULL,m_61 = NULL,n_61 = NULL,m_10 = NULL;
  n_61 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      k_61 = ATgetArgument(t, 0);
      l_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_61);
  j_61 = t;
  t = SSL_is_string(k_61);
  m_61 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, m_61, l_61);
  m_10 = t;
  t = SSLsetAnnotations(m_10, j_61);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL,o_10 = NULL;
  l_62 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      i_62 = ATgetArgument(t, 0);
      j_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_62);
  h_62 = t;
  t = SSL_is_string(i_62);
  k_62 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, k_62, j_62);
  o_10 = t;
  t = SSLsetAnnotations(o_10, h_62);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL,p_10 = NULL;
  q_62 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      n_62 = ATgetArgument(t, 0);
      o_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_62);
  m_62 = t;
  t = SSL_is_string(n_62);
  p_62 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, p_62, o_62);
  p_10 = t;
  t = SSLsetAnnotations(p_10, m_62);
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
      ATerm d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL;
      e_43 = t;
      if(match_cons(t, sym_SDef_3))
        {
          f_43 = ATgetArgument(t, 0);
          g_43 = ATgetArgument(t, 1);
          h_43 = ATgetArgument(t, 2);
          {
            ATerm g_56 = NULL,x_57 = NULL,y_57 = NULL,i_58 = NULL,b_10 = NULL;
            t = SSLgetAnnotations(e_43);
            g_56 = t;
            t = SSL_is_string(f_43);
            x_57 = t;
            t = g_43;
            t = map_1_0(i_1, t);
            y_57 = t;
            t = h_43;
            t = strategy_expression_0_0(t);
            i_58 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, x_57, y_57, i_58);
            b_10 = t;
            t = SSLsetAnnotations(b_10, g_56);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              f_43 = ATgetArgument(t, 0);
              g_43 = ATgetArgument(t, 1);
              h_43 = ATgetArgument(t, 2);
              d_43 = ATgetArgument(t, 3);
              {
                ATerm q_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL,i_10 = NULL;
                t = SSLgetAnnotations(e_43);
                q_59 = t;
                t = SSL_is_string(f_43);
                v_59 = t;
                t = g_43;
                t = map_1_0(j_1, t);
                w_59 = t;
                t = h_43;
                t = map_1_0(k_1, t);
                x_59 = t;
                t = d_43;
                t = strategy_expression_0_0(t);
                y_59 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, v_59, w_59, x_59, y_59);
                i_10 = t;
                t = SSLsetAnnotations(i_10, q_59);
              }
            }
          else
            {
              if(match_cons(t, sym_ExtSDefInl_4))
                {
                  f_43 = ATgetArgument(t, 0);
                  g_43 = ATgetArgument(t, 1);
                  h_43 = ATgetArgument(t, 2);
                  d_43 = ATgetArgument(t, 3);
                  {
                    ATerm u_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL,n_10 = NULL;
                    t = SSLgetAnnotations(e_43);
                    u_60 = t;
                    t = SSL_is_string(f_43);
                    z_60 = t;
                    t = g_43;
                    t = map_1_0(l_1, t);
                    a_61 = t;
                    t = h_43;
                    t = map_1_0(m_1, t);
                    b_61 = t;
                    t = d_43;
                    t = strategy_expression_0_0(t);
                    c_61 = t;
                    t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, z_60, a_61, b_61, c_61);
                    n_10 = t;
                    t = SSLsetAnnotations(n_10, u_60);
                  }
                }
              else
                {
                  ATerm x_61 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL,q_10 = NULL;
                  if(match_cons(t, sym_ExtSDef_3))
                    {
                      f_43 = ATgetArgument(t, 0);
                      g_43 = ATgetArgument(t, 1);
                      h_43 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(e_43);
                  x_61 = t;
                  t = SSL_is_string(f_43);
                  d_62 = t;
                  t = g_43;
                  t = map_1_0(r_1, t);
                  e_62 = t;
                  t = h_43;
                  t = map_1_0(x_1, t);
                  f_62 = t;
                  t = (ATerm) ATmakeAppl(sym_ExtSDef_3, d_62, e_62, f_62);
                  q_10 = t;
                  t = SSLsetAnnotations(q_10, x_61);
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
ATerm map_1_0 (ATerm a_123 (ATerm), ATerm t)
{
  static ATerm c_44 (ATerm t);
  static ATerm c_44 (ATerm t)
  {
    ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL;
    z_43 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_43;
      }
    else
      {
        ATerm y_62 = NULL,b_63 = NULL,c_63 = NULL,g_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_44 = ATgetFirst((ATermList) t);
            b_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_43);
        y_62 = t;
        t = a_44;
        t = a_123(t);
        b_63 = t;
        t = b_44;
        t = c_44(t);
        c_63 = t;
        t = (ATerm) ATinsert(CheckATermList(c_63), b_63);
        g_11 = t;
        t = SSLsetAnnotations(g_11, y_62);
      }
    return(t);
  }
  t = c_44(t);
  return(t);
}
static ATerm r_3 (ATerm e_58, ATerm f_58, ATerm t)
{
  ATerm e_44 = NULL;
  t = SSL_fputc(e_58, f_58);
  e_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_44);
  return(t);
}
static ATerm s_3 (ATerm h_42, ATerm i_42, ATerm t)
{
  ATerm f_44 = NULL;
  t = SSL_write_term_to_stream_text(h_42, i_42);
  f_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_44);
  return(t);
}
static ATerm u_3 (ATerm s_122 (ATerm), ATerm m_276, ATerm n_42, ATerm t)
{
  ATerm g_44 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_276, term_a_7);
  t = y_3(t);
  g_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_44, n_42);
  t = s_122(t);
  t = fclose_0_0(t);
  t = n_42;
  return(t);
}
static ATerm t_3 (ATerm d_42, ATerm e_42, ATerm t)
{
  ATerm h_44 = NULL;
  t = SSL_write_term_to_stream_baf(d_42, e_42);
  h_44 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_44);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_7 = ATgetArgument(t, 0);
      if(match_cons(d_7, sym_Stream_1))
        {
          o_44 = ATgetArgument(d_7, 0);
        }
      else
        _fail(t);
      p_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_3(o_44, p_44, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_7 = ATgetArgument(t, 0);
      if(match_cons(g_7, sym_Stream_1))
        {
          t_44 = ATgetArgument(g_7, 0);
        }
      else
        _fail(t);
      u_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_3(t_44, u_44, t);
  q_44 = t;
  t = term_k_7;
  r_44 = t;
  t = q_44;
  if(match_cons(t, sym_Stream_1))
    {
      s_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_k_7, q_44);
  t = r_3(r_44, s_44, t);
  return(t);
}
ATerm output_1_0 (ATerm l_143 (ATerm), ATerm t)
{
  ATerm i_44 = NULL,j_44 = NULL;
  t = l_143(t);
  j_44 = t;
  {
    ATerm l_7 = t;
    int m_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_44 = NULL,l_44 = NULL;
        t = term_n_7;
        k_44 = t;
        t = term_p_7;
        l_44 = t;
        t = term_r_7;
        t = e_4(k_44, l_44, t);
        LocalPopChoice(m_7);
      }
    else
      {
        t = l_7;
        t = term_t_7;
      }
  }
  i_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_44, j_44);
  {
    ATerm v_7 = t;
    int w_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_44 = NULL,n_44 = NULL;
        t = term_n_7;
        m_44 = t;
        t = term_y_7;
        n_44 = t;
        t = term_z_7;
        t = e_4(m_44, n_44, t);
        t = (ATerm) ATmakeAppl(sym__2, i_44, j_44);
        LocalPopChoice(w_7);
        if(match_cons(t, sym__2))
          {
            ATerm a_8 = ATgetArgument(t, 0);
            ATerm b_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_3(z_1, i_44, j_44, t);
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
        t = u_3(a_2, i_44, j_44, t);
      }
  }
  return(t);
}
static ATerm i_45 (ATerm c_45, ATerm t)
{
  t = SSL_fclose(c_45);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_45 = NULL,g_45 = NULL;
  g_45 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_45 = ATgetArgument(t, 0);
      {
        ATerm f_8 = t;
        int g_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_45);
            LocalPopChoice(g_8);
          }
        else
          {
            t = f_8;
            t = i_45(g_45, t);
          }
      }
    }
  else
    {
      t = i_45(g_45, t);
    }
  return(t);
}
static ATerm v_3 (ATerm j_42, ATerm t)
{
  t = SSL_read_term_from_stream(j_42);
  return(t);
}
static ATerm w_3 (ATerm k_56, ATerm l_56, ATerm t)
{
  t = SSL_strcat(k_56, l_56);
  return(t);
}
static ATerm x_3 (ATerm g_58, ATerm h_58, ATerm t)
{
  ATerm j_45 = NULL;
  t = SSL_fopen(g_58, h_58);
  j_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_45);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm k_45 = NULL;
  t = SSL_stdin_stream();
  k_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_45);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm l_45 = NULL;
  t = SSL_stdout_stream();
  l_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_45);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_45 = NULL;
  t = SSL_stderr_stream();
  m_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_45);
  return(t);
}
static ATerm t_46 (ATerm s_45, ATerm t)
{
  ATerm t_45 = NULL;
  t = SSL_explode_term(s_45);
  if(match_cons(t, sym__2))
    {
      ATerm h_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_8 = ATgetArgument(t, 1);
        if(((ATgetType(j_8) == AT_LIST) && !(ATisEmpty(j_8))))
          {
            t_45 = ATgetFirst((ATermList) j_8);
            {
              ATerm n_8 = (ATerm) ATgetNext((ATermList) j_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_45;
  if(match_cons(t, sym_stderr_0))
    {
      t = t_45;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = t_45;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = t_45;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm u_46 (ATerm w_45, ATerm x_45, ATerm y_45, ATerm t)
{
  ATerm z_45 = NULL,a_46 = NULL,b_46 = NULL,e_46 = NULL,i_11 = NULL;
  t = SSLgetAnnotations(y_45);
  b_46 = t;
  t = w_45;
  if(match_cons(t, sym_Path_1))
    {
      e_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_46, x_45);
  i_11 = t;
  t = SSLsetAnnotations(i_11, b_46);
  if(match_cons(t, sym__2))
    {
      z_45 = ATgetArgument(t, 0);
      a_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_3(z_45, a_46, t);
  return(t);
}
static ATerm v_46 (ATerm g_46, ATerm h_46, ATerm i_46, ATerm t)
{
  ATerm j_46 = NULL,k_46 = NULL,l_46 = NULL,o_46 = NULL,j_11 = NULL;
  t = SSLgetAnnotations(i_46);
  l_46 = t;
  t = SSL_is_string(g_46);
  o_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_46, h_46);
  j_11 = t;
  t = SSLsetAnnotations(j_11, l_46);
  if(match_cons(t, sym__2))
    {
      j_46 = ATgetArgument(t, 0);
      k_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_3(j_46, k_46, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm q_46 = NULL,r_46 = NULL,s_46 = NULL;
  q_46 = t;
  if(match_cons(t, sym__2))
    {
      r_46 = ATgetArgument(t, 0);
      s_46 = ATgetArgument(t, 1);
      {
        ATerm p_8 = t;
        int q_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_46(q_46, t);
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
                  t = u_46(r_46, s_46, q_46, t);
                  LocalPopChoice(s_8);
                }
              else
                {
                  t = r_8;
                  t = v_46(r_46, s_46, q_46, t);
                }
            }
          }
      }
    }
  else
    {
      t = t_46(q_46, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL,e_47 = NULL;
  e_47 = t;
  {
    ATerm t_8 = t;
    int u_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, e_47, term_v_8);
        t = y_3(t);
        LocalPopChoice(u_8);
      }
    else
      {
        t = t_8;
        {
          ATerm s_63 = NULL,t_63 = NULL;
          t = term_w_8;
          t_63 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_w_8, e_47);
          t = w_3(t_63, e_47, t);
          s_63 = t;
          t = SSL_perror(s_63);
          _fail(t);
        }
      }
  }
  y_46 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_3(z_46, t);
  x_46 = t;
  t = y_46;
  t = fclose_0_0(t);
  t = x_46;
  return(t);
}
ATerm input_1_0 (ATerm m_143 (ATerm), ATerm t)
{
  ATerm x_8 = t;
  int y_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_47 = NULL,i_47 = NULL;
      t = term_n_7;
      h_47 = t;
      t = term_z_8;
      i_47 = t;
      t = term_a_9;
      t = e_4(h_47, i_47, t);
      LocalPopChoice(y_8);
    }
  else
    {
      t = x_8;
      t = term_b_9;
    }
  t = ReadFromFile_0_0(t);
  t = m_143(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL;
  t = term_n_7;
  j_47 = t;
  t = term_c_9;
  k_47 = t;
  t = term_d_9;
  t = e_4(j_47, k_47, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_47 = NULL,n_47 = NULL,o_47 = NULL;
  m_47 = t;
  {
    ATerm e_9 = t;
    int f_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_47;
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
            t = m_47;
          }
        LocalPopChoice(f_9);
      }
    else
      {
        t = e_9;
        t = (ATerm) ATinsert(ATempty, m_47);
      }
  }
  n_47 = t;
  t = term_t_7;
  o_47 = t;
  t = SSL_printnl(o_47, n_47);
  t = m_47;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_47 = ATgetFirst((ATermList) t);
      u_47 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_47 = NULL,z_47 = NULL;
        static ATerm b_2 (ATerm t);
        static ATerm b_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_47)), not_null(z_47));
          return(t);
        }
        t = u_47;
        t = r_0(t);
        if(((y_47 != NULL) && (y_47 != t)))
          _fail(t);
        else
          y_47 = t;
        t = t_47;
        t = p_0(t);
        if(((z_47 != NULL) && (z_47 != t)))
          _fail(t);
        else
          z_47 = t;
        t = u_47;
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
  ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL,m_11 = NULL;
  j_48 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_48);
  h_48 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, i_48);
  m_11 = t;
  t = SSLsetAnnotations(m_11, h_48);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm n_48 = NULL;
  n_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_48), term_j_9);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm k_145 (ATerm), ATerm l_145 (ATerm), ATerm t)
{
  ATerm d_48 = NULL,e_48 = NULL;
  ATerm k_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_48 = NULL,g_48 = NULL;
      t = term_n_7;
      f_48 = t;
      t = term_c_9;
      g_48 = t;
      t = term_d_9;
      t = e_4(f_48, g_48, t);
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
        t = k_145(t);
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
  d_48 = t;
  t = term_q_9;
  e_48 = t;
  t = term_r_9;
  t = e_4(d_48, e_48, t);
  t = reverse_acc_2_0(_id, d_2, t);
  t = map_1_0(e_2, t);
  {
    ATerm s_9 = t;
    int t_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_48 = NULL;
        t = l_145(t);
        o_48 = t;
        t = (ATerm) ATinsert(CheckATermList(o_48), term_u_9);
        t = echo_0_0(t);
        LocalPopChoice(t_9);
      }
    else
      {
        t = s_9;
      }
  }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm u_48 = NULL,v_48 = NULL,w_48 = NULL,o_11 = NULL;
  w_48 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_48);
  u_48 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, v_48);
  o_11 = t;
  t = SSLsetAnnotations(o_11, u_48);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_48 = NULL;
  r_48 = t;
  {
    ATerm w_9 = t;
    int x_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_48 = NULL,t_48 = NULL;
        t = term_n_7;
        s_48 = t;
        t = term_c_9;
        t_48 = t;
        t = term_d_9;
        t = e_4(s_48, t_48, t);
        LocalPopChoice(x_9);
      }
    else
      {
        t = w_9;
        t = fetch_1_0(f_2, t);
      }
  }
  t = r_48;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm y_48 = NULL;
  y_48 = t;
  if(match_string(t, "-k"))
    {
      t = y_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = y_48;
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm z_48 = NULL,a_49 = NULL,b_49 = NULL;
  z_48 = t;
  t = SSL_string_to_int(z_48);
  a_49 = t;
  t = term_y_9;
  b_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_9, a_49);
  t = h_4(b_49, a_49, t);
  t = z_48;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_z_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_2, j_2, k_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm d_49 = NULL;
  d_49 = t;
  if(match_string(t, "-S"))
    {
      t = d_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = d_49;
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm e_49 = NULL,f_49 = NULL;
  t = term_g_10;
  e_49 = t;
  t = term_h_10;
  f_49 = t;
  t = term_k_10;
  t = h_4(e_49, f_49, t);
  t = term_l_10;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_r_10;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm g_49 = NULL,h_49 = NULL,i_49 = NULL;
  g_49 = t;
  t = SSL_string_to_int(g_49);
  h_49 = t;
  t = term_g_10;
  i_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_10, h_49);
  t = h_4(i_49, h_49, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, g_49);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_s_10;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm j_49 = NULL,m_49 = NULL;
  t = term_t_10;
  j_49 = t;
  t = term_i_9;
  m_49 = t;
  t = term_u_10;
  t = h_4(j_49, m_49, t);
  t = term_v_10;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_w_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm x_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_2, o_2, q_2, t);
      LocalPopChoice(z_10);
    }
  else
    {
      t = x_10;
      {
        ATerm a_11 = t;
        int d_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_2, w_2, x_2, t);
            LocalPopChoice(d_11);
          }
        else
          {
            t = a_11;
            t = Option_3_0(z_2, a_3, b_3, t);
          }
      }
    }
  return(t);
}
static ATerm h_4 (ATerm k_78, ATerm l_78, ATerm t)
{
  ATerm n_49 = NULL,o_49 = NULL;
  t = term_n_7;
  n_49 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_7, k_78, l_78);
  t = lookup_table_0_1(n_49, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_4(k_78, l_78, o_49, t);
  t = (ATerm) ATmakeAppl(sym__3, term_n_7, k_78, l_78);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_49 = NULL,v_49 = NULL,w_49 = NULL;
      t = term_i_9;
      t = g_0(t);
      u_49 = t;
      t = term_p_9;
      v_49 = t;
      t = term_q_9;
      w_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_9, term_q_9, u_49);
      t = f_4(v_49, w_49, u_49, t);
      _fail(t);
    }
  else
    {
      ATerm z_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_49 = ATgetFirst((ATermList) t);
          t_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_49;
      t = d_0(t);
      t = term_i_9;
      t = f_0(t);
      z_49 = t;
      t = (ATerm) ATinsert(CheckATermList(t_49), z_49);
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm b_50 = NULL;
  b_50 = t;
  if(match_string(t, "-o"))
    {
      t = b_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = b_50;
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm c_50 = NULL,d_50 = NULL;
  c_50 = t;
  t = term_p_7;
  d_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_7, c_50);
  t = h_4(d_50, c_50, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, c_50);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_e_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_3, e_3, g_3, t);
  return(t);
}
static ATerm f_4 (ATerm q_63, ATerm r_63, ATerm p_63, ATerm t)
{
  ATerm f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL,j_50 = NULL;
  f_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_63, r_63);
  {
    ATerm f_11 = t;
    int h_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_11 = ATgetArgument(t, 0);
            ATerm l_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_63, r_63);
        t = e_4(q_63, r_63, t);
        LocalPopChoice(h_11);
      }
    else
      {
        t = f_11;
        t = (ATerm) ATempty;
      }
  }
  g_50 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_63, r_63, (ATerm) ATinsert(CheckATermList(g_50), p_63));
  t = lookup_table_0_1(q_63, t);
  j_50 = t;
  t = (ATerm) ATinsert(CheckATermList(g_50), p_63);
  h_50 = t;
  t = j_50;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_4(r_63, h_50, i_50, t);
  t = f_50;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL;
      t = term_i_9;
      t = o_0(t);
      u_50 = t;
      t = term_p_9;
      v_50 = t;
      t = term_q_9;
      w_50 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_9, term_q_9, u_50);
      t = f_4(v_50, w_50, u_50, t);
      _fail(t);
    }
  else
    {
      ATerm a_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_50 = ATgetFirst((ATermList) t);
          r_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_50;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_50 = ATgetFirst((ATermList) t);
          t_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_50;
      t = j_0(t);
      t = s_50;
      t = l_0(t);
      a_51 = t;
      t = (ATerm) ATinsert(CheckATermList(t_50), a_51);
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm c_51 = NULL;
  c_51 = t;
  if(match_string(t, "-i"))
    {
      t = c_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = c_51;
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm d_51 = NULL,e_51 = NULL;
  d_51 = t;
  t = term_z_8;
  e_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_8, d_51);
  t = h_4(e_51, d_51, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, d_51);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_n_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_3, j_3, n_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_9;
  t = whoami_0_0(t);
  f_51 = t;
  t = term_w_5;
  h_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_p_11), f_51);
  i_51 = t;
  t = SSL_printnl(h_51, i_51);
  t = term_s_11;
  g_51 = t;
  t = SSL_exit(g_51);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL;
  t = term_n_7;
  j_51 = t;
  t = term_c_9;
  k_51 = t;
  t = term_d_9;
  t = e_4(j_51, k_51, t);
  return(t);
}
static ATerm z_3 (ATerm z_61, ATerm a_62, ATerm t)
{
  ATerm t_11 = t;
  int w_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(z_61, a_62);
      LocalPopChoice(w_11);
    }
  else
    {
      t = t_11;
      t = SSL_addr(z_61, a_62);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm x_129 (ATerm), ATerm y_129 (ATerm), ATerm t)
{
  ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL;
  m_51 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_51;
      t = x_129(t);
    }
  else
    {
      ATerm r_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_51 = ATgetFirst((ATermList) t);
          o_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_51;
      t = foldr_2_0(x_129, y_129, t);
      r_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_51, r_51);
      t = y_129(t);
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
  t = term_h_10;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm z_63 = NULL,a_64 = NULL;
  if(match_cons(t, sym__2))
    {
      z_63 = ATgetArgument(t, 0);
      a_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_3(z_63, a_64, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_51 = NULL,v_63 = NULL,w_63 = NULL;
  t = times_0_0(t);
  w_63 = t;
  t = SSL_explode_term(w_63);
  if(match_cons(t, sym__2))
    {
      ATerm y_11 = ATgetArgument(t, 0);
      v_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_63;
  t = foldr_2_0(o_3, p_3, t);
  u_51 = t;
  t = SSL_TicksToSeconds(u_51);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_52 = NULL,g_52 = NULL,h_52 = NULL;
  f_52 = t;
  if(match_cons(t, sym__2))
    {
      g_52 = ATgetArgument(t, 0);
      h_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_12 = t;
    int i_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_52;
        if((g_52 != t))
          {
            _fail(t);
          }
        t = f_52;
        LocalPopChoice(i_12);
      }
    else
      {
        t = d_12;
        t = (ATerm) ATmakeAppl(sym__2, g_52, h_52);
        {
          ATerm k_12 = t;
          int l_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_52, h_52);
              LocalPopChoice(l_12);
            }
          else
            {
              t = k_12;
              t = SSL_gtr(g_52, h_52);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, g_52, h_52);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm h_140 (ATerm), ATerm t)
{
  ATerm l_52 = NULL;
  l_52 = t;
  {
    ATerm m_12 = t;
    int n_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL;
        t = term_n_7;
        o_52 = t;
        t = term_g_10;
        p_52 = t;
        t = term_o_12;
        t = e_4(o_52, p_52, t);
        n_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_52, term_s_11);
        t = geq_0_0(t);
        t = l_52;
        t = h_140(t);
        LocalPopChoice(n_12);
      }
    else
      {
        t = m_12;
        t = l_52;
      }
  }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm r_52 = NULL,s_52 = NULL,u_52 = NULL,v_52 = NULL;
  t = run_time_0_0(t);
  r_52 = t;
  t = term_i_9;
  t = whoami_0_0(t);
  s_52 = t;
  t = term_w_5;
  u_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_12), r_52), term_p_12), s_52);
  v_52 = t;
  t = SSL_printnl(u_52, v_52);
  t = (ATerm) ATmakeAppl(sym__2, term_w_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_12), r_52), term_p_12), s_52));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(q_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm w_52 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_10;
  w_52 = t;
  t = SSL_exit(w_52);
  return(t);
}
static ATerm i_4 (ATerm f_68, ATerm g_68, ATerm h_68, ATerm t)
{
  ATerm x_52 = NULL;
  t = SSL_hashtable_put(h_68, f_68, g_68);
  x_52 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_52);
  return(t);
}
ATerm lookup_table_0_1 (ATerm c_65, ATerm t)
{
  ATerm g_53 = NULL;
  t = table_hashtable_0_0(t);
  g_53 = t;
  {
    ATerm r_12 = t;
    int t_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_64 = NULL;
        t = g_53;
        if(match_cons(t, sym_Hashtable_1))
          {
            l_64 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = j_4(c_65, l_64, t);
        LocalPopChoice(t_12);
      }
    else
      {
        t = r_12;
        {
          ATerm q_64 = NULL;
          t = c_65;
          t = table_create_0_0(t);
          t = g_53;
          if(match_cons(t, sym_Hashtable_1))
            {
              q_64 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_4(c_65, q_64, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm n_68, ATerm o_68, ATerm t)
{
  ATerm j_53 = NULL;
  t = SSL_hashtable_create(n_68, o_68);
  j_53 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_53);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm k_53 = NULL,l_53 = NULL,m_53 = NULL,o_53 = NULL,p_53 = NULL;
  k_53 = t;
  t = term_u_12;
  o_53 = t;
  t = term_v_12;
  p_53 = t;
  t = k_53;
  t = new_hashtable_0_2(o_53, p_53, t);
  l_53 = t;
  t = k_53;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_4(k_53, l_53, m_53, t);
  t = k_53;
  return(t);
}
static ATerm b_4 (ATerm k_68, ATerm l_68, ATerm t)
{
  ATerm q_53 = NULL;
  t = SSL_hashtable_remove(l_68, k_68);
  q_53 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_53);
  return(t);
}
static ATerm c_4 (ATerm p_68, ATerm t)
{
  ATerm r_53 = NULL;
  t = SSL_hashtable_destroy(p_68);
  r_53 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_53);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm s_53 = NULL;
  t = SSL_table_hashtable();
  s_53 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_53);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm t_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL;
  t_53 = t;
  t = table_hashtable_0_0(t);
  u_53 = t;
  t = lookup_table_0_1(t_53, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_4(w_53, t);
  t = u_53;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_4(t_53, v_53, t);
  t = t_53;
  return(t);
}
ATerm fetch_1_0 (ATerm i_123 (ATerm), ATerm t)
{
  static ATerm t_54 (ATerm t);
  static ATerm t_54 (ATerm t)
  {
    ATerm q_54 = NULL,r_54 = NULL,s_54 = NULL;
    q_54 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_54 = ATgetFirst((ATermList) t);
        s_54 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_12 = t;
      int z_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_64 = NULL,y_64 = NULL,q_11 = NULL;
          t = SSLgetAnnotations(q_54);
          v_64 = t;
          t = r_54;
          t = i_123(t);
          y_64 = t;
          t = (ATerm) ATinsert(CheckATermList(s_54), y_64);
          q_11 = t;
          t = SSLsetAnnotations(q_11, v_64);
          LocalPopChoice(z_12);
        }
      else
        {
          t = y_12;
          {
            ATerm h_65 = NULL,m_65 = NULL,r_11 = NULL;
            t = SSLgetAnnotations(q_54);
            h_65 = t;
            t = s_54;
            t = t_54(t);
            m_65 = t;
            t = (ATerm) ATinsert(CheckATermList(m_65), r_54);
            r_11 = t;
            t = SSLsetAnnotations(r_11, h_65);
          }
        }
    }
    return(t);
  }
  t = t_54(t);
  return(t);
}
static ATerm j_4 (ATerm i_68, ATerm j_68, ATerm t)
{
  t = SSL_hashtable_get(j_68, i_68);
  return(t);
}
static ATerm e_4 (ATerm j_65, ATerm k_65, ATerm t)
{
  ATerm w_54 = NULL;
  t = lookup_table_0_1(j_65, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_4(k_65, w_54, t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm y_54 = NULL,z_54 = NULL;
  t = term_a_13;
  y_54 = t;
  t = term_i_9;
  z_54 = t;
  t = term_b_13;
  t = h_4(y_54, z_54, t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_c_13;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm a_55 = NULL,b_55 = NULL,c_55 = NULL,d_55 = NULL;
  t = term_a_13;
  c_55 = t;
  t = term_i_9;
  d_55 = t;
  t = term_b_13;
  t = h_4(c_55, d_55, t);
  t = term_d_13;
  a_55 = t;
  t = term_i_9;
  b_55 = t;
  t = term_e_13;
  t = h_4(a_55, b_55, t);
  t = term_f_13;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_g_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm h_13 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_4, d_4, g_4, t);
      LocalPopChoice(i_13);
    }
  else
    {
      t = h_13;
      t = Option_3_0(k_4, l_4, m_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_87 (ATerm), ATerm o_87 (ATerm), ATerm t)
{
  ATerm e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL,i_55 = NULL,j_55 = NULL,v_11 = NULL;
  j_55 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_55 = ATgetFirst((ATermList) t);
      g_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_55);
  e_55 = t;
  t = f_55;
  t = n_87(t);
  h_55 = t;
  t = g_55;
  t = o_87(t);
  i_55 = t;
  t = (ATerm) ATinsert(CheckATermList(i_55), h_55);
  v_11 = t;
  t = SSLsetAnnotations(v_11, e_55);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_145 (ATerm), ATerm t)
{
  ATerm o_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL,t_55 = NULL,u_55 = NULL,x_11 = NULL;
  o_55 = t;
  {
    ATerm j_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_13;
        t = f_145(t);
        LocalPopChoice(k_13);
      }
    else
      {
        t = j_13;
      }
  }
  t = o_55;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_55 = ATgetFirst((ATermList) t);
      r_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_55);
  p_55 = t;
  t = term_c_9;
  u_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_9, q_55);
  t = h_4(u_55, q_55, t);
  t = r_55;
  {
    static ATerm e_56 (ATerm t);
    static ATerm e_56 (ATerm t)
    {
      ATerm m_13 = t;
      int n_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_13 = t;
          int p_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_55 = NULL;
              x_55 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = x_55;
              LocalPopChoice(p_13);
            }
          else
            {
              t = o_13;
              t = f_145(t);
              t = Cons_2_0(_id, e_56, t);
            }
          LocalPopChoice(n_13);
        }
      else
        {
          t = m_13;
          {
            ATerm a_56 = NULL,b_56 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                a_56 = ATgetFirst((ATermList) t);
                b_56 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(b_56), (ATerm) ATmakeAppl(sym_Undefined_1, a_56));
          }
        }
      return(t);
    }
    t = e_56(t);
  }
  t_55 = t;
  t = (ATerm) ATinsert(CheckATermList(t_55), (ATerm) ATmakeAppl(sym_Program_1, q_55));
  x_11 = t;
  t = SSLsetAnnotations(x_11, p_55);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm t_56 = NULL;
  t_56 = t;
  if(match_string(t, "--help"))
    {
      t = t_56;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_56;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_56;
        }
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm u_56 = NULL,v_56 = NULL;
  t = term_q_13;
  u_56 = t;
  t = term_i_9;
  v_56 = t;
  t = term_r_13;
  t = h_4(u_56, v_56, t);
  t = term_s_13;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_t_13;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm c_145 (ATerm), ATerm d_145 (ATerm), ATerm e_145 (ATerm), ATerm t)
{
  ATerm j_56 = NULL,m_56 = NULL,n_56 = NULL,o_56 = NULL,p_56 = NULL,q_56 = NULL,r_56 = NULL,s_56 = NULL;
  n_56 = t;
  t = term_p_9;
  o_56 = t;
  t = term_u_13;
  t = lookup_table_0_1(o_56, t);
  s_56 = t;
  t = term_q_9;
  p_56 = t;
  t = (ATerm) ATempty;
  q_56 = t;
  t = s_56;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_4(p_56, q_56, r_56, t);
  t = n_56;
  {
    static ATerm o_4 (ATerm t);
    static ATerm o_4 (ATerm t)
    {
      ATerm v_13 = t;
      int w_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_145(t);
          LocalPopChoice(w_13);
        }
      else
        {
          t = v_13;
          {
            ATerm x_13 = t;
            int y_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(q_4, r_4, t_4, t);
                LocalPopChoice(y_13);
              }
            else
              {
                t = x_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_4, t);
  }
  {
    ATerm z_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_57 = NULL;
        g_57 = t;
        {
          ATerm b_14 = t;
          int c_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_65 = NULL;
              t = g_57;
              {
                ATerm d_14 = t;
                int e_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm u_65 = NULL,v_65 = NULL;
                    t = term_n_7;
                    u_65 = t;
                    t = term_q_13;
                    v_65 = t;
                    t = term_f_14;
                    t = e_4(u_65, v_65, t);
                    LocalPopChoice(e_14);
                  }
                else
                  {
                    t = d_14;
                    t = fetch_1_0(a_5, t);
                  }
              }
              t = g_57;
              t = d_145(t);
              t = term_h_10;
              t_65 = t;
              t = SSL_exit(t_65);
              LocalPopChoice(c_14);
            }
          else
            {
              t = b_14;
              {
                ATerm z_65 = NULL,a_66 = NULL,b_66 = NULL;
                t = term_n_7;
                a_66 = t;
                t = term_a_13;
                b_66 = t;
                t = term_g_14;
                t = e_4(a_66, b_66, t);
                t = g_57;
                t = e_145(t);
                t = term_h_10;
                z_65 = t;
                t = SSL_exit(z_65);
              }
            }
        }
        LocalPopChoice(a_14);
      }
    else
      {
        t = z_13;
        {
          ATerm h_14 = t;
          int i_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_57 = NULL,i_57 = NULL,j_57 = NULL;
              static ATerm c_5 (ATerm t);
              static ATerm c_5 (ATerm t)
              {
                ATerm k_57 = NULL,l_57 = NULL,m_57 = NULL,c_12 = NULL;
                m_57 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    l_57 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(m_57);
                k_57 = t;
                t = l_57;
                if(((j_56 != NULL) && (j_56 != t)))
                  _fail(t);
                else
                  j_56 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, l_57);
                c_12 = t;
                t = SSLsetAnnotations(c_12, k_57);
                return(t);
              }
              t = fetch_1_0(c_5, t);
              t = term_w_5;
              i_57 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_56)), term_j_14);
              j_57 = t;
              t = SSL_printnl(i_57, j_57);
              t = (ATerm) ATmakeAppl(sym__2, term_w_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_56)), term_j_14));
              t = d_145(t);
              t = term_s_11;
              h_57 = t;
              t = SSL_exit(h_57);
              LocalPopChoice(i_14);
            }
          else
            {
              t = h_14;
            }
        }
      }
  }
  m_56 = t;
  t = term_p_9;
  t = table_destroy_0_0(t);
  t = m_56;
  return(t);
}
ATerm option_wrap_5_0 (ATerm f_143 (ATerm), ATerm g_143 (ATerm), ATerm h_143 (ATerm), ATerm i_143 (ATerm), ATerm j_143 (ATerm), ATerm t)
{
  ATerm r_57 = NULL,s_57 = NULL,t_57 = NULL,u_57 = NULL,v_57 = NULL;
  t = parse_options_3_0(f_143, g_143, h_143, t);
  r_57 = t;
  t = term_k_14;
  t = table_create_0_0(t);
  t = term_k_14;
  s_57 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_14, term_l_14, r_57);
  t = lookup_table_0_1(s_57, t);
  v_57 = t;
  t = term_l_14;
  t_57 = t;
  t = v_57;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_4(t_57, r_57, u_57, t);
  t = r_57;
  t = i_143(t);
  {
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_143(t);
        t = report_success_0_0(t);
        LocalPopChoice(n_14);
      }
    else
      {
        t = m_14;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm o_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(p_14);
    }
  else
    {
      t = o_14;
      {
        ATerm q_14 = t;
        int r_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
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
                  t = Option_3_0(h_5, k_5, q_5, t);
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
                        t = verbose_option_0_0(t);
                        LocalPopChoice(x_14);
                      }
                    else
                      {
                        t = v_14;
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
static ATerm h_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm z_57 = NULL,a_58 = NULL;
  t = term_y_7;
  z_57 = t;
  t = term_i_9;
  a_58 = t;
  t = term_y_14;
  t = h_4(z_57, a_58, t);
  t = term_z_14;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = term_a_15;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = output_1_0(t_5, t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm b_15 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_58 = NULL,a_59 = NULL,f_66 = NULL,h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL,h_12 = NULL,g_12 = NULL,f_12 = NULL,e_12 = NULL;
      z_58 = t;
      if(match_cons(t, sym_Specification_1))
        {
          a_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_58);
      f_66 = t;
      t = a_59;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_66 = ATgetFirst((ATermList) t);
          j_66 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_59);
      h_66 = t;
      t = j_66;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_66 = ATgetFirst((ATermList) t);
          n_66 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_66);
      l_66 = t;
      t = m_66;
      if(match_cons(t, sym_Strategies_1))
        {
          q_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_66);
      p_66 = t;
      t = q_66;
      t = map_1_0(strategy_definition_0_0, t);
      r_66 = t;
      t = (ATerm) ATmakeAppl(sym_Strategies_1, r_66);
      e_12 = t;
      t = SSLsetAnnotations(e_12, p_66);
      s_66 = t;
      t = n_66;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(n_66), s_66);
      f_12 = t;
      t = SSLsetAnnotations(f_12, l_66);
      o_66 = t;
      t = (ATerm) ATinsert(CheckATermList(o_66), i_66);
      g_12 = t;
      t = SSLsetAnnotations(g_12, h_66);
      k_66 = t;
      t = (ATerm) ATmakeAppl(sym_Specification_1, k_66);
      h_12 = t;
      t = SSLsetAnnotations(h_12, f_66);
      LocalPopChoice(d_15);
    }
  else
    {
      t = b_15;
      t = debug_1_0(v_5, t);
    }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_f_15;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(e_5, default_system_usage_0_0, default_system_about_0_0, _id, f_5, t);
  return(t);
}
